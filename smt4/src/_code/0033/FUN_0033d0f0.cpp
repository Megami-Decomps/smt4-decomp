/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033d0f0` (_code @ 0x33d0f0, 0x1a0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int aeabi_idivmod(int, unsigned int);

/* Supplied declaration required: aeabi_idivmod. */


void FUN_0033d0f0(int param_1)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  
  temp_v8 = 1.0f;
  switch(*(unsigned int *)(param_1 + 0x390)) {
  case 0:
    temp_v8 = *(float *)(param_1 + 0x398) + 1.0f;
    *(float *)(param_1 + 0x398) = temp_v8;
    if ((int)temp_v8 >= 0x40000000) {
      *(unsigned int *)(param_1 + 0x390) = 1;
    }
    break;
  case 1:
    temp_v7 = *(float *)(param_1 + 0x3a0) + 1.0f;
    temp_v8 = *(float *)(param_1 + 0x398) + 1.0f;
    temp_v6 = *(float *)(param_1 + 0x39c) + 1.0f;
    *(float *)(param_1 + 0x3a0) = temp_v7;
    temp_v0 = (int)temp_v8 >= 0x40800000;
    *(float *)(param_1 + 0x398) = temp_v8;
    *(float *)(param_1 + 0x39c) = temp_v6;
    if ((int)temp_v8 >= 0x40800000) {
      *(unsigned int *)(param_1 + 0x398) = 0x40800000;
    }
    if ((int)temp_v6 >= 0x40800000) {
      temp_v0 = temp_v0 + '\x01';
      *(unsigned int *)(param_1 + 0x39c) = 0x40800000;
    }
    if ((int)temp_v7 >= 0x41000000) {
      temp_v0 = temp_v0 + '\x01';
      *(unsigned int *)(param_1 + 0x3a0) = 0x41000000;
    }
    if (temp_v0 != '\x03') {
      return;
    }
    temp_v2 = 2;
    *(unsigned int *)(param_1 + 0x390) = temp_v2;
    return;
  case 2:
    temp_v4 = 0;
    if (0 < *(int *)(param_1 + 0x2f4)) {
      temp_v2 = 0;
      do {
        temp_v5 = param_1 + temp_v4 * 0x54;
        if (*(unsigned int *)(temp_v5 + 0x2c) >= 2) {
          temp_v6 = *(float *)(temp_v5 + 0x34) + temp_v8;
          *(float *)(temp_v5 + 0x34) = temp_v6;
          if (*(char *)(temp_v5 + 0x38) != '\0') {
            if ((int)temp_v6 >= 0x41a00000) {
              *(unsigned int *)(temp_v5 + 0x34) = temp_v2;
              *(unsigned char *)(temp_v5 + 0x38) = 0;
            }
          }
          else if ((int)temp_v6 >= 0x40800000) {
            temp_v1 = *(int *)(temp_v5 + 0x30) + 1;
            *(int *)(temp_v5 + 0x30) = temp_v1;
            aeabi_idivmod(temp_v1,*(unsigned int *)(temp_v5 + 0x2c));
            *(unsigned int *)(temp_v5 + 0x30) = temp_v3;
            *(unsigned int *)(temp_v5 + 0x34) = temp_v2;
            *(unsigned char *)(temp_v5 + 0x38) = 1;
          }
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < *(int *)(param_1 + 0x2f4));
      return;
    }
    break;
  case 3:
    temp_v8 = *(float *)(param_1 + 0x394) + 1.0f;
    *(float *)(param_1 + 0x394) = temp_v8;
    if ((int)temp_v8 >= 0x40800000) {
      temp_v2 = 4;
      *(unsigned int *)(param_1 + 0x394) = 0x40800000;
      *(unsigned int *)(param_1 + 0x390) = temp_v2;
      return;
    }
  }
  return;
}

} /* extern "C" */
