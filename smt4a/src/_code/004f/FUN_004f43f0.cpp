/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f43f0` (_code @ 0x4f43f0, 0x138 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003e9888(int, int);
int FUN_004f452c(int, int);

extern int padButtonRepeat(unsigned int);
/* Supplied declaration required: FUN_003e9888. */
/* Supplied declaration required: FUN_004f452c. */


void FUN_004f43f0(int param_1,int param_2)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = padButtonRepeat(5);
  if (temp_v1 != 0) {
    temp_v0 = *(char *)(param_1 + 0x12) + '\x01';
    *(char *)(param_1 + 0x12) = temp_v0;
    if ((int)(unsigned int)*(unsigned char *)(param_2 + 0x1ed8) <= (int)temp_v0) {
      *(unsigned char *)(param_1 + 0x12) = 0;
    }
  }
  else {
    temp_v1 = padButtonRepeat(6);
    if (temp_v1 != 0) {
      temp_v0 = *(char *)(param_1 + 0x12) - '\x01';
      *(char *)(param_1 + 0x12) = temp_v0;
      if (temp_v0 < '\0') {
        *(unsigned char *)(param_1 + 0x12) = *(unsigned char *)(param_2 + 0x1ed8) - 1;
      }
    }
    else {
      temp_v1 = padButtonRepeat(4);
      if (temp_v1 != 0) {
        temp_v0 = *(char *)(param_1 + 0x13) - '\x01';
      }
      else {
        temp_v1 = padButtonRepeat(3);
        if (temp_v1 == 0) goto LAB_004f44c8;
        temp_v0 = *(char *)(param_1 + 0x13) + '\x01';
      }
      *(char *)(param_1 + 0x13) = temp_v0;
    }
  }
  temp_v1 = param_2;
  FUN_003e9888(param_2,(int)*(char *)(param_1 + 0x12));
  if (*(char *)(param_1 + 0x13) < '\0') {
    *(char *)(param_1 + 0x13) = (char)temp_v1 - '\x01';
  }
  else if ((char)temp_v1 <= *(char *)(param_1 + 0x13)) {
    *(unsigned char *)(param_1 + 0x13) = 0;
  }
  FUN_004f452c(param_1,param_2);
LAB_004f44c8:
  temp_v1 = 0;
  do {
    temp_v2 = temp_v1 + 1;
    temp_v1 = *(int *)(param_2 + 0x1ed4) + temp_v1 * 0x1d0;
    if ((*(unsigned int *)(temp_v1 + 0x50) & 8) == 0) {
      *(unsigned int *)(temp_v1 + 0x6c) = *(unsigned int *)(temp_v1 + 0x70);
    }
    else {
      *(unsigned int *)(temp_v1 + 0x6c) = 0xffff;
    }
    temp_v1 = temp_v2;
  } while (temp_v2 < 0x6d);
  return;
}

} /* extern "C" */
