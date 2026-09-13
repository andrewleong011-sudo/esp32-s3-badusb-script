/*
  ESP32-S3 BadUSB - Auto-type Fake Ransomware Message
  Types the entire ransomware prank message automatically
*/

#include "USB.h"
#include "USBHIDKeyboard.h"

USBHIDKeyboard Keyboard;

void setup() {
  Serial.begin(115200);
  delay(1000);
  
  Serial.println("\nESP32-S3 BadUSB - Fake Ransomware");
  Serial.println("Starting in 3 seconds...\n");
  
  Keyboard.begin();
  USB.begin();
  
  delay(3000);
  
  typeRansomwareMessage();
}

void loop() {
  delay(1000);
}

void typeChar(char c) {
  uint8_t modifier = 0;
  uint8_t keycode = 0;
  
  // Lowercase letters a-z
  if (c >= 'a' && c <= 'z') {
    keycode = 0x04 + (c - 'a');
  }
  // Uppercase letters A-Z
  else if (c >= 'A' && c <= 'Z') {
    keycode = 0x04 + (c - 'A');
    modifier = 0x02; // Shift
  }
  // Numbers
  else if (c >= '0' && c <= '9') {
    keycode = 0x27 + (c - '0');
  }
  // Special characters
  else if (c == ' ') keycode = 0x2C;
  else if (c == '!') { keycode = 0x1E; modifier = 0x02; }
  else if (c == '@') { keycode = 0x1F; modifier = 0x02; }
  else if (c == '#') { keycode = 0x20; modifier = 0x02; }
  else if (c == '$') { keycode = 0x21; modifier = 0x02; }
  else if (c == '%') { keycode = 0x22; modifier = 0x02; }
  else if (c == '^') { keycode = 0x23; modifier = 0x02; }
  else if (c == '&') { keycode = 0x24; modifier = 0x02; }
  else if (c == '*') { keycode = 0x25; modifier = 0x02; }
  else if (c == '(') { keycode = 0x26; modifier = 0x02; }
  else if (c == ')') { keycode = 0x27; modifier = 0x02; }
  else if (c == '-') keycode = 0x2D;
  else if (c == '_') { keycode = 0x2D; modifier = 0x02; }
  else if (c == '=') keycode = 0x2E;
  else if (c == '+') { keycode = 0x2E; modifier = 0x02; }
  else if (c == '[') keycode = 0x2F;
  else if (c == '{') { keycode = 0x2F; modifier = 0x02; }
  else if (c == ']') keycode = 0x30;
  else if (c == '}') { keycode = 0x30; modifier = 0x02; }
  else if (c == '\\') keycode = 0x31;
  else if (c == '|') { keycode = 0x31; modifier = 0x02; }
  else if (c == ';') keycode = 0x33;
  else if (c == ':') { keycode = 0x33; modifier = 0x02; }
  else if (c == '\'') keycode = 0x34;
  else if (c == '"') { keycode = 0x34; modifier = 0x02; }
  else if (c == '`') keycode = 0x35;
  else if (c == '~') { keycode = 0x35; modifier = 0x02; }
  else if (c == ',') keycode = 0x36;
  else if (c == '<') { keycode = 0x36; modifier = 0x02; }
  else if (c == '.') keycode = 0x37;
  else if (c == '>') { keycode = 0x37; modifier = 0x02; }
  else if (c == '/') keycode = 0x38;
  else if (c == '?') { keycode = 0x38; modifier = 0x02; }
  else if (c == '\n') keycode = 0x28; // Enter
  else if (c == '\t') keycode = 0x2B; // Tab
  
  if (keycode) {
    Keyboard.press(modifier, keycode);
    delay(30);
    Keyboard.releaseAll();
    delay(30);
  }
}

void typeString(const char* str) {
  while (*str) {
    typeChar(*str++);
  }
}

void typeRansomwareMessage() {
  Serial.println("Typing ransomware message...\n");
  
  const char* message = 
    "\n\n\n"
    "====================================================\n"
    "               OOPS! YOUR FILES ARE ENCRYPTED\n"
    "====================================================\n\n"
    "All your files have been encrypted with military-grade\n"
    "encryption (RSA-2048).\n\n"
    "Do NOT try to recover your files yourself.\n\n"
    "The only way to decrypt your files is to purchase\n"
    "the decryption tool.\n\n"
    "PAYMENT REQUIRED: $500 USD\n"
    "Cryptocurrency only (Bitcoin preferred)\n\n"
    "Bitcoin Address:\n"
    "1A1z7agoat3wLeEKZLMQtqtmpS7356U\n\n"
    "Contact: hacker@fakeemail.com\n\n"
    "====================================================\n\n"
    "JUST KIDDING! This is a FAKE PRANK!\n"
    "Your files are SAFE!\n"
    "You have been pranked! LOL!\n\n"
    "====================================================\n";
  
  typeString(message);
  
  Serial.println("Message typed!");
  Serial.println("Prank activated!");
}
