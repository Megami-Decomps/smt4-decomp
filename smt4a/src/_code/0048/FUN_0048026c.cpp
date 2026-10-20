/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048026c` (_code @ 0x48026c, 0x174 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192608(void);

/* Supplied declaration required: FUN_00192608. */
extern int FUN_0019c06c(void);
extern int FUN_00239200(void);


void FUN_0048026c(int param_1,short *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  char temp_v3;
  
  temp_v0 = FUN_0019c06c();
  if (temp_v0 != 0) {
    temp_v3 = *(char *)(temp_v0 + 8);
  }
  else {
    temp_v3 = '\0';
  }
  temp_v0 = FUN_00239200();
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  if (temp_v3 != '\x04') {
    if (temp_v3 != '\x05') {
      if (temp_v3 == '\x06') {
        temp_v2 = param_1 - 0x21d;
        if ((int)temp_v2 < 0) {
          return;
        }
        if (temp_v2 >= 0x78) {
          return;
        }
        temp_v0 = temp_v0 + temp_v2 * 0xc;
        *param_2 = *(short *)(temp_v0 + 0xb48);
        param_2[5] = *(short *)(temp_v0 + 0xb4a);
      }
    }
    else {
      temp_v2 = param_1 - 0x1a5;
      if ((int)temp_v2 < 0) {
        return;
      }
      if (temp_v2 >= 0x78) {
        return;
      }
      *param_2 = *(short *)(temp_v0 + temp_v2 * 0xc + 0x5a8);
    }
  }
  else {
    temp_v2 = param_1 - 0x12d;
    if ((int)temp_v2 < 0) {
      return;
    }
    if (temp_v2 >= 0x78) {
      return;
    }
    temp_v0 = temp_v0 + temp_v2 * 0xc;
    *param_2 = *(short *)(temp_v0 + 8);
    param_2[4] = *(short *)(temp_v0 + 10);
    param_2[6] = *(short *)(temp_v0 + 10);
  }
  FUN_00192608();
  if (param_1 != 0) {
    temp_v1 = *param_2;
    temp_v0 = 999 - *(short *)(param_1 + 0x36);
    if (temp_v0 < temp_v1) {
      temp_v1 = (short)temp_v0;
    }
    *param_2 = temp_v1;
    temp_v1 = param_2[4];
    temp_v0 = 99 - *(char *)(param_1 + 0x33);
    if (temp_v0 < temp_v1) {
      temp_v1 = (short)temp_v0;
    }
    param_2[4] = temp_v1;
    temp_v1 = param_2[5];
    temp_v0 = 99 - *(char *)(param_1 + 0x34);
    if (temp_v0 < temp_v1) {
      temp_v1 = (short)temp_v0;
    }
    param_2[5] = temp_v1;
    temp_v1 = param_2[6];
    temp_v0 = 99 - *(char *)(param_1 + 0x35);
    if (temp_v0 < temp_v1) {
      temp_v1 = (short)temp_v0;
    }
    param_2[6] = temp_v1;
  }
  return;
}

} /* extern "C" */
