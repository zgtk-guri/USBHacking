/*
  Copyright (c) 2015 雑学追究室ぐり
  Released under the MIT license
  https://github.com/YukinobuKurata/YouTubeMagicBuyButton/blob/master/MIT-LICENSE.txt
*/
#include "UsbKeyboard.h"

int step_count = 0;

void setup() {

  pinMode(13, OUTPUT);

void loop() {

  UsbKeyboard.update();


  if (millis() > 2000 && step_count == 0) {
    UsbKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    step_count++;
    digitalWrite(13, HIGH);
  }

  if(millis() > 3000 && step_count == 1){
    //コマンド入力
    UsbKeyboard.sendKeyStroke(KEY_R);
    UsbKeyboard.sendKeyStroke(KEY_E);
    UsbKeyboard.sendKeyStroke(KEY_G);
    UsbKeyboard.sendKeyStroke(KEY_SPACE);
    UsbKeyboard.sendKeyStroke(KEY_A);
    UsbKeyboard.sendKeyStroke(KEY_D);
    UsbKeyboard.sendKeyStroke(KEY_D);
    UsbKeyboard.sendKeyStroke(KEY_SPACE);
    UsbKeyboard.sendKeyStroke(KEY_2,MOD_SHIFT_LEFT);
    UsbKeyboard.sendKeyStroke(KEY_H,MOD_SHIFT_LEFT);
    UsbKeyboard.sendKeyStroke(KEY_K,MOD_SHIFT_LEFT);
    UsbKeyboard.sendKeyStroke(KEY_C,MOD_SHIFT_LEFT);
    UsbKeyboard.sendKeyStroke(KEY_U,MOD_SHIFT_LEFT);
    UsbKeyboard.sendKeyStroke(0x89);
    UsbKeyboard.sendKeyStroke(KEY_S,MOD_SHIFT_LEFT);
    UsbKeyboard.sendKeyStroke(KEY_O,MOD_SHIFT_LEFT);
    UsbKeyboard.sendKeyStroke(KEY_F,MOD_SHIFT_LEFT);
    UsbKeyboard.sendKeyStroke(KEY_T,MOD_SHIFT_LEFT);
    UsbKeyboard.sendKeyStroke(KEY_W,MOD_SHIFT_LEFT);
    UsbKeyboard.sendKeyStroke(KEY_A,MOD_SHIFT_LEFT);
    UsbKeyboard.sendKeyStroke(KEY_R,MOD_SHIFT_LEFT);
    UsbKeyboard.sendKeyStroke(KEY_E,MOD_SHIFT_LEFT);
    UsbKeyboard.sendKeyStroke(0x87);
    UsbKeyboard.sendKeyStroke(KEY_M,MOD_SHIFT_LEFT);
    UsbKeyboard.sendKeyStroke(KEY_I);
    UsbKeyboard.sendKeyStroke(KEY_C);
    UsbKeyboard.sendKeyStroke(KEY_R);
    UsbKeyboard.sendKeyStroke(KEY_O);
    UsbKeyboard.sendKeyStroke(KEY_S);
    UsbKeyboard.sendKeyStroke(KEY_O);
    UsbKeyboard.sendKeyStroke(KEY_F);
    UsbKeyboard.sendKeyStroke(KEY_T);
    UsbKeyboard.sendKeyStroke(0x87);
    UsbKeyboard.sendKeyStroke(KEY_I,MOD_SHIFT_LEFT);
    UsbKeyboard.sendKeyStroke(KEY_N);
    UsbKeyboard.sendKeyStroke(KEY_T);
    UsbKeyboard.sendKeyStroke(KEY_E);
    UsbKeyboard.sendKeyStroke(KEY_R);
    UsbKeyboard.sendKeyStroke(KEY_N);
    UsbKeyboard.sendKeyStroke(KEY_E);
    UsbKeyboard.sendKeyStroke(KEY_T);
    UsbKeyboard.sendKeyStroke(KEY_SPACE);
    UsbKeyboard.sendKeyStroke(KEY_E,MOD_SHIFT_LEFT);
    UsbKeyboard.sendKeyStroke(KEY_X);
    UsbKeyboard.sendKeyStroke(KEY_P);
    UsbKeyboard.sendKeyStroke(KEY_L);
    UsbKeyboard.sendKeyStroke(KEY_O);
    UsbKeyboard.sendKeyStroke(KEY_R);
    UsbKeyboard.sendKeyStroke(KEY_E);
    UsbKeyboard.sendKeyStroke(KEY_R);
    UsbKeyboard.sendKeyStroke(0x87);
    UsbKeyboard.sendKeyStroke(KEY_M,MOD_SHIFT_LEFT);
    UsbKeyboard.sendKeyStroke(KEY_A);
    UsbKeyboard.sendKeyStroke(KEY_I);
    UsbKeyboard.sendKeyStroke(KEY_N);
    UsbKeyboard.sendKeyStroke(KEY_2,MOD_SHIFT_LEFT);
    UsbKeyboard.sendKeyStroke(KEY_SPACE);
    UsbKeyboard.sendKeyStroke(56);
    UsbKeyboard.sendKeyStroke(KEY_V);
    UsbKeyboard.sendKeyStroke(KEY_SPACE);
    UsbKeyboard.sendKeyStroke(KEY_2,MOD_SHIFT_LEFT);
    UsbKeyboard.sendKeyStroke(KEY_S,MOD_SHIFT_LEFT);
    UsbKeyboard.sendKeyStroke(KEY_T);
    UsbKeyboard.sendKeyStroke(KEY_A);
    UsbKeyboard.sendKeyStroke(KEY_R);
    UsbKeyboard.sendKeyStroke(KEY_T);
    UsbKeyboard.sendKeyStroke(KEY_SPACE);
    UsbKeyboard.sendKeyStroke(KEY_P,MOD_SHIFT_LEFT);
    UsbKeyboard.sendKeyStroke(KEY_A);
    UsbKeyboard.sendKeyStroke(KEY_G);
    UsbKeyboard.sendKeyStroke(KEY_E);
    UsbKeyboard.sendKeyStroke(KEY_2,MOD_SHIFT_LEFT);
    UsbKeyboard.sendKeyStroke(KEY_SPACE);
    UsbKeyboard.sendKeyStroke(56);
    UsbKeyboard.sendKeyStroke(KEY_T);
    UsbKeyboard.sendKeyStroke(KEY_SPACE);
    UsbKeyboard.sendKeyStroke(KEY_R,MOD_SHIFT_LEFT);
    UsbKeyboard.sendKeyStroke(KEY_E,MOD_SHIFT_LEFT);
    UsbKeyboard.sendKeyStroke(KEY_G,MOD_SHIFT_LEFT);
    UsbKeyboard.sendKeyStroke(0x87,MOD_SHIFT_LEFT);
    UsbKeyboard.sendKeyStroke(KEY_S,MOD_SHIFT_LEFT);
    UsbKeyboard.sendKeyStroke(KEY_Z,MOD_SHIFT_LEFT);
    UsbKeyboard.sendKeyStroke(KEY_SPACE);
    UsbKeyboard.sendKeyStroke(56);
    UsbKeyboard.sendKeyStroke(KEY_D);
    UsbKeyboard.sendKeyStroke(KEY_SPACE);
    UsbKeyboard.sendKeyStroke(KEY_2,MOD_SHIFT_LEFT);
    UsbKeyboard.sendKeyStroke(KEY_H);
    UsbKeyboard.sendKeyStroke(KEY_T);
    UsbKeyboard.sendKeyStroke(KEY_T);
    UsbKeyboard.sendKeyStroke(KEY_P);
    UsbKeyboard.sendKeyStroke(52);
    UsbKeyboard.sendKeyStroke(56);
    UsbKeyboard.sendKeyStroke(56);
    UsbKeyboard.sendKeyStroke(KEY_Z);
    UsbKeyboard.sendKeyStroke(KEY_G);
    UsbKeyboard.sendKeyStroke(KEY_T);
    UsbKeyboard.sendKeyStroke(KEY_K);
    UsbKeyboard.sendKeyStroke(55);
    UsbKeyboard.sendKeyStroke(KEY_I);
    UsbKeyboard.sendKeyStroke(KEY_N);
    UsbKeyboard.sendKeyStroke(KEY_F);
    UsbKeyboard.sendKeyStroke(KEY_O);
    UsbKeyboard.sendKeyStroke(56);
    UsbKeyboard.sendKeyStroke(KEY_2,MOD_SHIFT_LEFT);
    UsbKeyboard.sendKeyStroke(KEY_SPACE);
    UsbKeyboard.sendKeyStroke(56);
    UsbKeyboard.sendKeyStroke(KEY_F);
    UsbKeyboard.sendKeyStroke(KEY_ENTER);

    step_count++;
    digitalWrite(13, LOW);
  }



}

