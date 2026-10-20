/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f97a4` (_code @ 0x3f97a4, 0x1a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int aeabi_idivmod(int, unsigned int);

/* Supplied declaration required: aeabi_idivmod. */


void FUN_003f97a4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  char temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  unsigned int temp_v8;
  
  temp_v7 = 1.0f;
  switch(*(unsigned int *)(param_1 + 0x40c)) {
  case 0:
    temp_v7 = *(float *)(param_1 + 0x414) + 1.0f;
    *(float *)(param_1 + 0x414) = temp_v7;
    if ((int)temp_v7 >= 0x40000000) {
      *(unsigned int *)(param_1 + 0x40c) = 1;
    }
    break;
  case 1:
    temp_v6 = *(float *)(param_1 + 0x414) + 1.0f;
    temp_v5 = *(float *)(param_1 + 0x41c) + 1.0f;
    temp_v7 = *(float *)(param_1 + 0x418) + 1.0f;
    *(float *)(param_1 + 0x414) = temp_v6;
    temp_v1 = (int)temp_v6 >= 0x40800000;
    *(float *)(param_1 + 0x418) = temp_v7;
    *(float *)(param_1 + 0x41c) = temp_v5;
    if ((int)temp_v6 >= 0x40800000) {
      *(unsigned int *)(param_1 + 0x414) = 0x40800000;
    }
    if ((int)temp_v7 >= 0x40800000) {
      temp_v1 = temp_v1 + '\x01';
      *(unsigned int *)(param_1 + 0x418) = 0x40800000;
    }
    if ((int)temp_v5 >= 0x41000000) {
      temp_v1 = temp_v1 + '\x01';
      *(unsigned int *)(param_1 + 0x41c) = 0x41000000;
    }
    if (temp_v1 == '\x03') {
      *(unsigned int *)(param_1 + 0x40c) = 2;
    }
    return;
  case 2:
    temp_v3 = 0;
    if (0 < *(int *)(param_1 + 0x360)) {
      temp_v8 = 0;
      do {
        temp_v4 = param_1 + temp_v3 * 0x60;
        if (*(unsigned int *)(temp_v4 + 0x38) >= 2) {
          temp_v5 = *(float *)(temp_v4 + 0x40) + temp_v7;
          *(float *)(temp_v4 + 0x40) = temp_v5;
          if (*(char *)(temp_v4 + 0x44) != '\0') {
            if ((int)temp_v5 >= 0x41a00000) {
              *(unsigned int *)(temp_v4 + 0x40) = temp_v8;
              *(unsigned char *)(temp_v4 + 0x44) = 0;
            }
          }
          else if ((int)temp_v5 >= 0x40800000) {
            temp_v0 = *(int *)(temp_v4 + 0x3c) + 1;
            *(int *)(temp_v4 + 0x3c) = temp_v0;
            aeabi_idivmod(temp_v0,*(unsigned int *)(temp_v4 + 0x38));
            *(unsigned int *)(temp_v4 + 0x3c) = temp_v2;
            *(unsigned int *)(temp_v4 + 0x40) = temp_v8;
            *(unsigned char *)(temp_v4 + 0x44) = 1;
          }
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < *(int *)(param_1 + 0x360));
      return;
    }
    break;
  case 3:
    temp_v7 = *(float *)(param_1 + 0x410) + 1.0f;
    *(float *)(param_1 + 0x410) = temp_v7;
    if ((int)temp_v7 >= 0x40800000) {
      *(unsigned int *)(param_1 + 0x410) = 0x40800000;
      *(unsigned int *)(param_1 + 0x40c) = 4;
      return;
    }
  }
  return;
}

} /* extern "C" */
