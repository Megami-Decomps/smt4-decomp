/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046722c` (_code @ 0x46722c, 0x144 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_005c1c4c; /* 0x5c1c4c */

/* Supplied declaration required: FUN_0046722c. */
/* Supplied declaration required: FUN_00467840. */


void FUN_0046722c(int param_1)

{
/* irregular: 1 goto(s); irregular input(s): in_s0; 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  int temp_v3;
  int *piVar6;
  int temp_v4;
  float in_s0;
  
  FUN_00467840();
  temp_v0 = *(unsigned int *)(param_1 + 0xc);
  temp_v4 = 0;
  if ((temp_v0 & 1) != 0) {
    temp_v2 = *(int *)(param_1 + 0x10);
    temp_v1 = param_1 + 0x10;
    if (temp_v2 != 0) {
      temp_v1 = temp_v1 + temp_v2;
    }
    temp_v3 = *(int *)(param_1 + 0x14);
    if (temp_v2 == 0) {
      temp_v1 = 0;
    }
    if (temp_v3 != 0) {
      temp_v4 = temp_v3 + param_1 + 0x14;
    }
    FUN_0046722c(temp_v1);
    FUN_0046722c(temp_v4);
  }
  else if ((temp_v0 & 2) == 0) {
    if ((temp_v0 & 4) != 0) {
      temp_v1 = *(int *)(param_1 + 0x14);
      temp_v2 = temp_v4;
      if (temp_v1 != 0) {
        temp_v2 = temp_v1 + param_1 + 0x14;
      }
    }
    else {
      temp_v1 = *(int *)(param_1 + 0x10);
      piVar6 = (int *)(param_1 + 0x14);
      if (piVar6 < piVar6 + temp_v1) {
        piVar3 = piVar6;
        do {
          if (*piVar3 != 0) {
            temp_v2 = *piVar3 + (int)piVar3;
          }
          else {
            temp_v2 = 0;
          }
          if (in_s0 < *(float *)(temp_v2 + 4)) goto LAB_00467320;
          piVar3 = piVar3 + 1;
        } while (piVar3 < piVar6 + temp_v1);
      }
      temp_v3 = piVar6[temp_v1 - 1];
      temp_v2 = temp_v4;
      if (temp_v3 != 0) {
        temp_v2 = temp_v3 + (int)(piVar6 + (temp_v1 - 1));
      }
    }
LAB_00467320:
    temp_v0 = *(unsigned int *)(temp_v2 + 8);
    if ((temp_v0 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0046736c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(romwright_code **)(&DAT_005c1c4c + ((temp_v0 & 0xe0) >> 5) * 4 + ((temp_v0 & 0x1c) >> 2) * 0x20))
                (temp_v2 + 0xc);
      return;
    }
  }
  return;
}
