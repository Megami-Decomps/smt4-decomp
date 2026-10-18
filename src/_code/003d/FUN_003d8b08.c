/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d8b08` (_code @ 0x3d8b08, 0x138 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002b902c(unsigned int);
/* Supplied declaration required: FUN_00337020. */
/* Supplied declaration required: FUN_003d8c44. */


void FUN_003d8b08(int param_1,int param_2)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = FUN_002b902c(5);
  if (temp_v1 != 0) {
    temp_v0 = *(char *)(param_1 + 0x12) + '\x01';
    *(char *)(param_1 + 0x12) = temp_v0;
    if ((int)(unsigned int)*(unsigned char *)(param_2 + 0x1e9c) <= (int)temp_v0) {
      *(unsigned char *)(param_1 + 0x12) = 0;
    }
  }
  else {
    temp_v1 = FUN_002b902c(6);
    if (temp_v1 != 0) {
      temp_v0 = *(char *)(param_1 + 0x12) - '\x01';
      *(char *)(param_1 + 0x12) = temp_v0;
      if (temp_v0 < '\0') {
        *(unsigned char *)(param_1 + 0x12) = *(unsigned char *)(param_2 + 0x1e9c) - 1;
      }
    }
    else {
      temp_v1 = FUN_002b902c(4);
      if (temp_v1 != 0) {
        temp_v0 = *(char *)(param_1 + 0x13) - '\x01';
      }
      else {
        temp_v1 = FUN_002b902c(3);
        if (temp_v1 == 0) goto LAB_003d8be0;
        temp_v0 = *(char *)(param_1 + 0x13) + '\x01';
      }
      *(char *)(param_1 + 0x13) = temp_v0;
    }
  }
  temp_v1 = param_2;
  FUN_00337020(param_2,(int)*(char *)(param_1 + 0x12));
  if (*(char *)(param_1 + 0x13) < '\0') {
    *(char *)(param_1 + 0x13) = (char)temp_v1 - '\x01';
  }
  else if ((char)temp_v1 <= *(char *)(param_1 + 0x13)) {
    *(unsigned char *)(param_1 + 0x13) = 0;
  }
  FUN_003d8c44(param_1,param_2);
LAB_003d8be0:
  temp_v1 = 0;
  do {
    temp_v2 = temp_v1 + 1;
    temp_v1 = *(int *)(param_2 + 0x1e98) + temp_v1 * 0x114;
    if ((*(unsigned int *)(temp_v1 + 0x50) & 8) == 0) {
      *(unsigned int *)(temp_v1 + 100) = *(unsigned int *)(temp_v1 + 0x68);
    }
    else {
      *(unsigned int *)(temp_v1 + 100) = 0xffff;
    }
    temp_v1 = temp_v2;
  } while (temp_v2 < 0x6d);
  return;
}
