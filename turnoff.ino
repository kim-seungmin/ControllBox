void turnoff(){
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(100);

  Keyboard.println("cmd");
  delay(100);
  Keyboard.println("shutdown -f -s -t 0");
  delay(100);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();
}
