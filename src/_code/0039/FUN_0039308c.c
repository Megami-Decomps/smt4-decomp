/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039308c` (_code @ 0x39308c, 0x218 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_1_stack;

extern int DAT_00432fc8; /* 0x432fc8 */
extern unsigned int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_00126edc. */
/* Supplied declaration required: FUN_00233ac0. */
/* Supplied declaration required: FUN_00233f0c. */
/* Supplied declaration required: FUN_0027ec00. */
/* Supplied declaration required: FUN_0027eda0. */
extern int FUN_002ad46c(int);
/* Supplied declaration required: FUN_002b9008. */
/* Supplied declaration required: FUN_002bacec. */
extern unsigned int *FUN_002bad80(unsigned char *, unsigned int);
extern int FUN_002bf41c(unsigned int);
/* Supplied declaration required: FUN_002bf9f0. */
/* Supplied declaration required: FUN_002c45b8. */


void FUN_0039308c(unsigned int *param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  romwright_code *UNRECOVERED_JUMPTABLE;
  int *piVar4;
  unsigned char temp_v2 [12];
  
  if ((param_1[1] - 4 >= 11) || (temp_v0 = FUN_002ad46c(DAT_00432fc8 + 0x98), temp_v0 == 0)) {
    temp_v0 = 0;
    do {
      FUN_002bf9f0(param_1 + temp_v0 * 0x23 + 0xdf);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x19);
    param_1[0x44a] = (int)(param_1[0x44a] + 1) % 0x14;
    temp_v1 = param_1[1099] + 1;
    temp_v0 = (int)(((long long)(int)temp_v1 * -0x77777777 + ((unsigned long long)temp_v1 << 0x20)) >> 0x20);
    param_1[1099] = temp_v1 + ((temp_v0 >> 4) - (temp_v0 >> 0x1f)) * -0x1e;
    temp_v1 = param_1[1];
    UNRECOVERED_JUMPTABLE = (romwright_code *)param_1[temp_v1 * 2 + 4];
    if ((UNRECOVERED_JUMPTABLE == (romwright_code *)0x0) &&
       (((param_1[temp_v1 * 2 + 5] & 1) == 0 || (param_1[temp_v1 * 2 + 5] == 0)))) {
      return;
    }
    if ((param_1[temp_v1 * 2 + 5] & 1) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(romwright_code **)(UNRECOVERED_JUMPTABLE +
                     *(int *)((int)param_1 + ((int)param_1[temp_v1 * 2 + 5] >> 1)));
    }
                    /* WARNING: Could not recover jumptable at 0x003932a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  *(unsigned int *)(DAT_00432fc8 + 0x754) = *(unsigned int *)(DAT_00432fc8 + 0x754) & 0xfffeffff;
  FUN_00233ac0(param_1,0xffffffff,0);
  FUN_0027eda0(param_1 + 0x46c);
  FUN_00233f0c(param_1);
  temp_v0 = FUN_002bf41c(param_1[0x5e8]);
  if (temp_v0 != 0) {
    if (param_1[0x5eb] != 0xffffffff) {
      param_1[0x5eb] = 0xffffffff;
      FUN_002b9008();
    }
    *param_1 = *param_1 & 0xffffcfff;
    FUN_002c45b8(param_1[0x5e8],0);
  }
  *(unsigned char *)(param_1 + 0x84) = 1;
  param_1[0x87] = 0;
  puVar2 = (unsigned int *)FUN_002bad80(temp_v2,0);
  temp_v1 = puVar2[1];
  param_1[0x85] = *puVar2;
  param_1[0x86] = temp_v1;
  FUN_00126edc(DAT_00432fc8 + 0x80);
  *(unsigned int *)(DAT_00432fc8 + 0x754) = *(unsigned int *)(DAT_00432fc8 + 0x754) & 0xfffeffff;
  if (param_1[1] == 10) {
    FUN_0027ec00(DAT_00433158);
    FUN_002bacec(DAT_00433158);
  }
  piVar4 = (int *)param_1[0x82];
  param_1[1] = 0x11;
  param_1[2] = 0;
  if (piVar4 == (int *)0x0) {
    return;
  }
  (**(romwright_code **)(*piVar4 + 4))(piVar4);
  param_1[0x82] = 0;
  return;
}
