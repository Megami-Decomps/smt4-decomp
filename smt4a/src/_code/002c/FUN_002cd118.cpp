/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cd118` (_code @ 0x2cd118, 0x2e8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001846d0(...);
int FUN_00184b80(...);

/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184b80. */
extern int FUN_00291e14(void);


void FUN_002cd118(int param_1,int param_2,unsigned short param_3,unsigned short param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  *(unsigned short *)(param_1 + 0x2448) = param_3;
  *(unsigned short *)(param_1 + 0x244a) = param_4;
  *(int *)(param_1 + 0x2440) = param_2;
  temp_v1 = 0;
  temp_v0 = 0;
  do {
    temp_v2 = temp_v1 + 1;
    temp_v0 = temp_v0 + 2;
    *(unsigned short *)(param_1 + temp_v1 * 2 + 0x24a0) = 0xffff;
    temp_v1 = temp_v1 + 2;
    *(unsigned short *)(param_1 + temp_v2 * 2 + 0x24a0) = 0xffff;
  } while (temp_v0 < 10);
  *(unsigned int *)(param_1 + 0x243c) = 2;
  temp_v0 = 0;
  *(unsigned int *)(param_1 + 0x2438) = 0;
  do {
    *(unsigned char *)(param_1 + temp_v0 * 0x8c + 0xa5) = 0;
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x42);
  temp_v0 = 0;
  if (0 < *(short *)(param_1 + 0x2448)) {
    temp_v1 = param_1 + 0x217c;
    do {
      if (*(int *)(param_1 + 0x2440) != 0) {
        temp_v2 = param_1 + temp_v0 * 0x8c;
        FUN_00184b80(temp_v2 + 0x20,1);
        FUN_00184b80(temp_v2 + 0xb10,8);
        FUN_00184b80(temp_v2 + 0x1088,3);
        FUN_00184b80(temp_v2 + 0x1b78,0xfa7);
        FUN_00184b80(temp_v2 + 0x1600,0xfa1);
        if (temp_v0 < 4) {
          if (temp_v0 == 0) {
            FUN_00184b80(temp_v1,0xbd);
          }
          FUN_00184b80(temp_v2 + 0x2208,0xbc - temp_v0);
        }
      }
      else {
        temp_v2 = FUN_00291e14();
        temp_v3 = param_1 + temp_v0 * 0x8c;
        if (temp_v2 != 0) {
          FUN_00184b80(temp_v3 + 0x20,0xa3);
          FUN_00184b80(temp_v3 + 0xb10,0xa5);
          FUN_00184b80(temp_v3 + 0x1088,0xa4);
          FUN_00184b80(temp_v3 + 0x1b78,0xfa8);
          FUN_00184b80(temp_v3 + 0x1600,0xfb0);
          if (temp_v0 < 4) {
            if (temp_v0 == 0) {
              FUN_00184b80(temp_v1,0xc2);
            }
            FUN_00184b80(temp_v3 + 0x2208,0xc1 - temp_v0);
          }
        }
        else {
          FUN_00184b80(temp_v3 + 0x20,0);
          FUN_00184b80(temp_v3 + 0xb10,7);
          FUN_00184b80(temp_v3 + 0x1088,2);
          FUN_00184b80(temp_v3 + 0x1b78,0xfa6);
          FUN_00184b80(temp_v3 + 0x1600,4000);
          if (temp_v0 < 4) {
            if (temp_v0 == 0) {
              FUN_00184b80(temp_v1,0xb8);
            }
            FUN_00184b80(temp_v3 + 0x2208,0xb7 - temp_v0);
          }
        }
      }
      temp_v2 = param_1 + temp_v0 * 0x8c;
      FUN_001846d0(temp_v2 + 0x20,2);
      FUN_001846d0(temp_v2 + 0xb10,5);
      FUN_001846d0(temp_v2 + 0x1088,3);
      FUN_001846d0(temp_v2 + 0x1b78,10);
      if (temp_v0 < 4) {
        if (temp_v0 == 0) {
          FUN_001846d0(temp_v1,0xc);
        }
        FUN_001846d0(temp_v2 + 0x2208,0xc);
      }
      FUN_00184b80(temp_v2 + 0x598,6);
      FUN_001846d0(temp_v2 + 0x598,1);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(short *)(param_1 + 0x2448));
  }
  return;
}

} /* extern "C" */
