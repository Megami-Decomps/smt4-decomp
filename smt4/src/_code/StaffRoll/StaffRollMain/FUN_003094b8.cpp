/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003094b8` (_code @ 0x3094b8, 0xf4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00432cc8; /* 0x432cc8 */

extern int FUN_002c09d0(unsigned int);
extern int FUN_002c15fc(unsigned int);


void FUN_003094b8(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = DAT_00432cc8;
  if (*(float *)(DAT_00432cc8 + 100) < *(float *)(DAT_00432cc8 + 0x148)) {
    *(unsigned char *)(DAT_00432cc8 + 0x128) = 1;
    *(unsigned char *)(temp_v0 + 0x75c) = 1;
  }
  else {
    temp_v1 = 0;
    temp_v3 = 0xc;
    *(int *)(DAT_00432cc8 + 0x758) = *(int *)(DAT_00432cc8 + 0x758) + 1;
    do {
      temp_v2 = temp_v0 + temp_v1 * 8;
      temp_v3 = temp_v3 - 1;
      temp_v1 = temp_v1 + 1;
      *(float *)(temp_v2 + 0xc) = *(float *)(temp_v2 + 0xc) - *(float *)(temp_v0 + 0x150);
      *(float *)(temp_v2 + 0x6c) = *(float *)(temp_v2 + 0x6c) - *(float *)(temp_v0 + 0x150);
    } while (temp_v3 != 0);
  }
  temp_v1 = FUN_002c15fc(9);
  if ((((temp_v1 != 0) || (temp_v1 = FUN_002c15fc(6), temp_v1 != 0)) && (*(char *)(temp_v0 + 0x128) == '\0')
      ) && (temp_v1 = FUN_002c09d0(0x565), temp_v1 != 0)) {
    *(unsigned char *)(temp_v0 + 0x128) = 1;
  }
  if (*(char *)(temp_v0 + 0x75c) != '\0') {
    if (*(char *)(temp_v0 + 0x128) != '\0') {
      *(unsigned int *)(DAT_00432cc8 + 0x14c) = 6;
    }
  }
  else if (*(char *)(temp_v0 + 0x128) != '\0') {
    *(unsigned int *)(DAT_00432cc8 + 0x14c) = 3;
    return;
  }
  return;
}

} /* extern "C" */
