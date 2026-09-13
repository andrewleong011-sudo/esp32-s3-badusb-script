/*
  ESP32-S3 BadUSB - Auto-type Fake Ransomware in Terminal
  Opens terminal and types the ransomware message for realism
*/

#include "USB.h"
#include "USBHIDKeyboard.h"

USBHIDKeyboard Keyboard;

void setup() {
  Serial.begin(115200);
  delay(1000);
  
  Serial.println("\nESP32-S3 BadUSB - Fake Ransomware Terminal");
  Serial.println("Starting in 3 seconds...\n");
  
  Keyboard.begin();
  USB.begin();
  
  delay(3000);
  
  openTerminalAndType();
}

void loop() {
  delay(1000);
}

void typeChar(char c) {
  if (c == '\n') {
    Keyboard.press(KEY_RETURN);
    delay(15);
    Keyboard.releaseAll();
    delay(15);
  }
  else if (c == '\t') {
    Keyboard.press(KEY_TAB);
    delay(15);
    Keyboard.releaseAll();
    delay(15);
  }
  else {
    Keyboard.press(c);
    delay(15);
    Keyboard.releaseAll();
    delay(15);
  }
}

void typeString(const char* str) {
  while (*str) {
    typeChar(*str++);
  }
}

void openTerminalAndType() {
  Serial.println("Opening terminal...\n");
  
  // Win + R to open Run dialog
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(50);
  Keyboard.releaseAll();
  delay(800);
  
  // Type cmd to open command prompt
  Serial.println("Opening CMD...");
  Keyboard.print("cmd");
  delay(300);
  
  // Press Enter
  Keyboard.press(KEY_RETURN);
  delay(50);
  Keyboard.releaseAll();
  delay(1500);
  
  // Clear screen
  Serial.println("Clearing terminal...");
  Keyboard.print("cls");
  Keyboard.press(KEY_RETURN);
  delay(50);
  Keyboard.releaseAll();
  delay(800);
  
  // Now type the ransomware message
  Serial.println("Typing ransomware message in terminal...\n");
  
  const char* message = 
    "echo ===============================================\n"
    "echo           WARNING! YOUR SYSTEM IS LOCKED\n"
    "echo ===============================================\n"
    "echo.\n"
    "echo All your files have been encrypted!\n"
    "echo.\n"
    "echo Encryption Type: AES-256 + RSA-4096\n"
    "echo Encrypted Files: 2,847\n"
    "echo Total Size: 285.4 GB\n"
    "echo.\n"
    "echo DO NOT TURN OFF YOUR COMPUTER!\n"
    "echo.\n"
    "echo ===============================================\n"
    "echo PAYMENT REQUIRED TO DECRYPT FILES\n"
    "echo ===============================================\n"
    "echo.\n"
    "echo Payment Amount: $500 USD\n"
    "echo Payment Method: Bitcoin Only\n"
    "echo.\n"
    "echo Bitcoin Wallet Address:\n"
    "echo 1A1z7agoat3wLeEKZLMQtqtmpS7356U\n"
    "echo.\n"
    "echo Contact: darkweb.hacker@protonmail.com\n"
    "echo Time Remaining: 23:45:32\n"
    "echo.\n"
    "echo ===============================================\n"
    "echo.\n"
    "echo WARNING: Do NOT attempt to decrypt files!\n"
    "echo Unauthorized decryption attempts will result in\n"
    "echo permanent file deletion!\n"
    "echo.\n"
    "echo Your computer ID: 8D4F2E9C7A1B6F3E\n"
    "echo.\n"
    "pause\n";
  
  typeString(message);
  
  delay(1000);
  
  // Type the reveal
  Keyboard.print("echo.\n");
  Keyboard.print("echo ===============================================\n");
  Keyboard.press(KEY_RETURN);
  delay(50);
  Keyboard.releaseAll();
  delay(300);
  
  Keyboard.print("echo JUST KIDDING! THIS IS A FAKE PRANK!\n");
  Keyboard.press(KEY_RETURN);
  delay(50);
  Keyboard.releaseAll();
  delay(300);
  
  Keyboard.print("echo Your files are completely SAFE!\n");
  Keyboard.press(KEY_RETURN);
  delay(50);
  Keyboard.releaseAll();
  delay(300);
  
  Keyboard.print("echo You have been pranked by BadUSB!\n");
  Keyboard.press(KEY_RETURN);
  delay(50);
  Keyboard.releaseAll();
  delay(300);
  
  Keyboard.print("echo ===============================================\n");
  Keyboard.press(KEY_RETURN);
  delay(50);
  Keyboard.releaseAll();
  delay(300);
  
  Keyboard.print("pause\n");
  Keyboard.press(KEY_RETURN);
  delay(50);
  Keyboard.releaseAll();
  
  Serial.println("Prank activated in terminal!");
}
