/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035cdac` (_code @ 0x35cdac, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184964(...);
int FUN_004ff364(int, int);
int aeabi_idivmod(int, double);

/* Supplied declaration required: FUN_00184964. */
/* Supplied declaration required: FUN_004ff364. */
/* Supplied declaration required: aeabi_idivmod. */


void FUN_0035cdac(int param_1,int param_2,int param_3,int param_4)

{
/* irregular: irregular input(s): in_s0; 4 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  float in_s0;
  float temp_v4;
  
  temp_v2 = 0;
  if (temp_v2 < param_2) {
    do {
      temp_v3 = param_1 + temp_v2 * 0x20;
      if (-1 < *(char *)(temp_v3 + 6)) {
        FUN_004ff364(param_4 + *(char *)(temp_v3 + 6) * 0x48,0);
        temp_v4 = (float)(int)in_s0;
        in_s0 = temp_v4;
        if (param_3 == 0) {
          *(unsigned short *)(temp_v3 + 4) = 0;
        }
        else if (param_3 != 1) {
          if (param_3 == 2) {
            temp_v0 = FUN_00184964(0,temp_v4);
            *(short *)(temp_v3 + 4) = temp_v0;
          }
        }
        else {
          temp_v0 = FUN_00184964(0,4);
          temp_v0 = temp_v0 << 2;
          *(short *)(temp_v3 + 4) = temp_v0;
        }
        if ((int)temp_v4 <= (int)*(short *)(temp_v3 + 4)) {
          aeabi_idivmod((int)*(short *)(temp_v3 + 4),temp_v4);
          *(unsigned short *)(temp_v3 + 4) = temp_v1;
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < param_2);
  }
  return;
}

} /* extern "C" */
