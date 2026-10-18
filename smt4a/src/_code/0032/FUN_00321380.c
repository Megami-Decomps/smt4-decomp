/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00321380` (_code @ 0x321380, 0x180 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184b80. */
extern int FUN_00291e14(void);


void FUN_00321380(int param_1,short param_2,short param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v2 = 0;
  param_2 = *(short *)(param_1 + 0x2448) + param_2;
  *(short *)(param_1 + 0x2448) = param_2;
  *(short *)(param_1 + 0x244a) = *(short *)(param_1 + 0x244a) + param_3;
  if (0 < param_2) {
    do {
      temp_v3 = param_1 + temp_v2 * 0x8c;
      FUN_001846d0(temp_v3 + 0xb10,6);
      FUN_001846d0(temp_v3 + 0x1088,4);
      FUN_001846d0(temp_v3 + 0x598,0);
      FUN_001846d0(temp_v3 + 0x20,2);
      if (temp_v2 < 4) {
        if (temp_v2 == 0) {
          FUN_001846d0(param_1 + 0x217c,0xc);
        }
        FUN_001846d0(temp_v3 + 0x2208,0xc);
      }
      if (*(int *)(param_1 + 0x2440) != 0) {
        FUN_00184b80(temp_v3 + 0x20,1);
      }
      else {
        temp_v0 = FUN_00291e14();
        if (temp_v0 == 0) {
          temp_v1 = 0;
        }
        else {
          temp_v1 = 0xfb0;
        }
        FUN_00184b80(temp_v3 + 0x20,temp_v1);
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(short *)(param_1 + 0x2448));
  }
  if (0 < *(short *)(param_1 + 0x244a)) {
    temp_v2 = 0;
    do {
      temp_v3 = param_1 + ((*(short *)(param_1 + 0x2448) - temp_v2) - 1) * 0x8c;
      FUN_00184b80(temp_v3 + 0x598,6);
      FUN_001846d0(temp_v3 + 0x598,1);
      FUN_001846d0(temp_v3 + 0xb10,6);
      FUN_001846d0(temp_v3 + 0x1088,4);
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(short *)(param_1 + 0x244a));
  }
  return;
}
