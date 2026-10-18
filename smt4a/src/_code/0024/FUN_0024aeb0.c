/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024aeb0` (_code @ 0x24aeb0, 0x1b8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00587f0c; /* 0x587f0c */
extern signed char DAT_005f161f; /* 0x5f161f */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001f3f34. */
/* Supplied declaration required: FUN_003fd76c. */
/* Supplied declaration required: FUN_003fd784. */
/* Supplied declaration required: FUN_003fdb18. */
/* Supplied declaration required: FUN_003fe86c. */


void FUN_0024aeb0(void)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  unsigned int temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  
  temp_v0 = DAT_00587f0c;
  if ((char *)(DAT_00587f0c + 0x10) != (char *)0x0) {
    if (*(char *)(DAT_00587f0c + 0x61) == '\0') {
      temp_v2 = *(int *)(DAT_00587f0c + 0x2c);
    }
    else {
      temp_v2 = *(int *)(DAT_00587f0c + 0x30);
    }
    if (temp_v2 != 0) {
      temp_v2 = *(int *)(temp_v2 + 4);
      if (DAT_005f161f != '\0') {
        *(unsigned int *)(temp_v2 + 4) = *(unsigned int *)(temp_v2 + 4) | 3;
      }
      else {
        temp_v7 = 0;
        if (*(char *)(DAT_00587f0c + 0x10) != '\0') {
          temp_v3 = *(unsigned int *)(temp_v2 + 4) & 0xfffffffc;
        }
        else {
          temp_v3 = *(unsigned int *)(temp_v2 + 4) | 3;
        }
        *(unsigned int *)(temp_v2 + 4) = temp_v3;
        if ((*(char *)(temp_v0 + 0x40) != '\0') && (*(int *)(temp_v0 + 0x24) == 1)) {
          temp_v4 = *(float *)(temp_v0 + 0x50);
          if (*(char *)(temp_v0 + 0x60) != '\0') {
            temp_v5 = *(unsigned int *)(temp_v0 + 0x48);
          }
          else {
            temp_v5 = *(unsigned int *)(temp_v0 + 0x4c);
          }
          VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x44),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_001f3f34();
          temp_v1 = DAT_00587f0c;
          if (*(char *)(DAT_00587f0c + 0x60) != '\0') {
            piVar1 = (int *)(DAT_00587f0c + 0x48);
            *(unsigned char *)(DAT_00587f0c + 0x60) = 0;
            *(int *)(temp_v1 + 0x48) = *piVar1 + 1;
          }
          else {
            piVar1 = (int *)(DAT_00587f0c + 0x4c);
            temp_v4 = -temp_v4;
            *(unsigned char *)(DAT_00587f0c + 0x60) = 1;
            *(int *)(temp_v1 + 0x4c) = *piVar1 + 1;
          }
          temp_v6 = (float)VectorSignedToFloat((int)temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v5 = VectorSignedToFloat((int)temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
          *(float *)(temp_v1 + 0x58) = temp_v6;
          *(unsigned int *)(temp_v1 + 0x5c) = temp_v5;
          *(float *)(temp_v0 + 0x14) = *(float *)(temp_v0 + 0x14) + temp_v6;
          *(float *)(temp_v0 + 0x1c) = *(float *)(temp_v0 + 0x1c) + *(float *)(temp_v1 + 0x5c);
          FUN_003fd76c(temp_v2,temp_v0 + 0x14);
          temp_v1 = DAT_00587f0c;
          if (*(int *)(DAT_00587f0c + 0x44) <= *(int *)(DAT_00587f0c + 0x48)) {
            *(unsigned int *)(DAT_00587f0c + 0x44) = 0;
            *(unsigned char *)(temp_v1 + 0x40) = 0;
            *(unsigned int *)(temp_v1 + 0x58) = temp_v7;
            *(unsigned int *)(temp_v1 + 0x5c) = temp_v7;
          }
        }
        if (*(char *)(temp_v0 + 0x28) != '\0') {
          FUN_003fd76c(temp_v2,temp_v0 + 0x14);
          FUN_003fdb18(temp_v2);
          FUN_003fd784(temp_v2);
          FUN_003fe86c(temp_v2,*(unsigned int *)(temp_v0 + 0x24),2);
          *(unsigned char *)(temp_v0 + 0x28) = 0;
          return;
        }
      }
    }
  }
  return;
}
