/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046722c` (_code @ 0x46722c, 0x144 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0046722c_arg0 fn_0046722c_arg0;
struct fn_0046722c_arg0 {
    float field_0x0; /* +0x0 */
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    unsigned char field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x3];
    uint field_0xc; /* +0xc */
    int field_0x10; /* +0x10 */
    int field_0x14; /* +0x14 */
};

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_005c1c4c; /* 0x5c1c4c */

/* Supplied declaration required: FUN_00467840. */


void FUN_0046722c(fn_0046722c_arg0 *param_1)

{
/* irregular: 1 goto(s); irregular input(s): in_s0; 3 native warning(s); review required */
  unsigned int temp_v0;
  fn_0046722c_arg0 *pfVar2;
  int *piVar3;
  int temp_v1;
  int temp_v2;
  int *piVar6;
  fn_0046722c_arg0 *pfVar7;
  float in_s0;
  
  FUN_00467840();
  temp_v0 = param_1->field_0xc;
  pfVar7 = (fn_0046722c_arg0 *)0x0;
  if ((temp_v0 & 1) != 0) {
    temp_v1 = param_1->field_0x10;
    pfVar2 = (fn_0046722c_arg0 *)&param_1->field_0x10;
    if (temp_v1 != 0) {
      pfVar2 = (fn_0046722c_arg0 *)((int)pfVar2 + temp_v1);
    }
    temp_v2 = param_1->field_0x14;
    if (temp_v1 == 0) {
      pfVar2 = (fn_0046722c_arg0 *)0x0;
    }
    if (temp_v2 != 0) {
      pfVar7 = (fn_0046722c_arg0 *)(temp_v2 + (int)&param_1->field_0x14);
    }
    FUN_0046722c(pfVar2);
    FUN_0046722c(pfVar7);
  }
  else if ((temp_v0 & 2) == 0) {
    if ((temp_v0 & 4) != 0) {
      temp_v1 = param_1->field_0x14;
      pfVar2 = pfVar7;
      if (temp_v1 != 0) {
        pfVar2 = (fn_0046722c_arg0 *)(temp_v1 + (int)&param_1->field_0x14);
      }
    }
    else {
      temp_v1 = param_1->field_0x10;
      piVar6 = &param_1->field_0x14;
      if (piVar6 < piVar6 + temp_v1) {
        piVar3 = piVar6;
        do {
          if (*piVar3 != 0) {
            pfVar2 = (fn_0046722c_arg0 *)(*piVar3 + (int)piVar3);
          }
          else {
            pfVar2 = (fn_0046722c_arg0 *)0x0;
          }
          if (in_s0 < *(float *)&pfVar2->field_0x4) goto LAB_00467320;
          piVar3 = piVar3 + 1;
        } while (piVar3 < piVar6 + temp_v1);
      }
      temp_v2 = piVar6[temp_v1 - 1];
      pfVar2 = pfVar7;
      if (temp_v2 != 0) {
        pfVar2 = (fn_0046722c_arg0 *)(temp_v2 + (int)(piVar6 + (temp_v1 - 1)));
      }
    }
LAB_00467320:
    temp_v0 = *(unsigned int *)&pfVar2->field_0x8;
    if ((temp_v0 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0046736c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(romwright_code **)(&DAT_005c1c4c + ((temp_v0 & 0xe0) >> 5) * 4 + ((temp_v0 & 0x1c) >> 2) * 0x20))
                (&pfVar2->field_0xc);
      return;
    }
  }
  return;
}
