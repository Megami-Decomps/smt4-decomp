/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00392e74` (_code @ 0x392e74, 0x218 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00126fb8(int);
int FUN_0023392c(unsigned int *, unsigned int, int);
int jobStopAndClearFlags(unsigned int *);
int aocClearDisplayFlag(unsigned int);
int FUN_0027eb30(unsigned int *);
int ifTouchRegionRemove(void);
int FUN_002ba9ac(unsigned int);
int FUN_002baa40(unsigned int [3], int);
int FUN_002bf818(unsigned int *);
int jobStop(unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_1_stack;

extern int g_aocMain; /* 0x432fc8 */
extern unsigned int g_aocSystem; /* 0x433158 */

/* Supplied declaration required: FUN_00126fb8. */
/* Supplied declaration required: FUN_0023392c. */
/* Supplied declaration required: jobStopAndClearFlags. */
/* Supplied declaration required: aocClearDisplayFlag. */
/* Supplied declaration required: FUN_0027eb30. */
extern int FUN_002ad1e0(int);
/* Supplied declaration required: ifTouchRegionRemove. */
/* Supplied declaration required: FUN_002ba9ac. */
/* Supplied declaration required: FUN_002baa40. */
extern int jobIsValid(unsigned int);
/* Supplied declaration required: FUN_002bf818. */
/* Supplied declaration required: jobStop. */


void FUN_00392e74(unsigned int *param_1)

{
/* irregular: 12 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  romwright_code *UNRECOVERED_JUMPTABLE;
  int *piVar4;
  unsigned int temp_v2 [3];
  
  puVar2 = temp_v2;
  if ((param_1[1] - 4 >= 11) || (temp_v0 = FUN_002ad1e0(g_aocMain + 0x98), temp_v0 == 0)) {
    temp_v0 = 0;
    do {
      FUN_002bf818(param_1 + temp_v0 * 0x23 + 0xdf);
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
           *(romwright_code **)((unsigned char *)UNRECOVERED_JUMPTABLE +
                     *(int *)((int)param_1 + ((int)param_1[temp_v1 * 2 + 5] >> 1)));
    }
                    /* WARNING: Could not recover jumptable at 0x00393088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xfffeffff;
  FUN_0023392c(param_1,0xffffffff,0);
  FUN_0027eb30(param_1 + 0x46c);
  jobStopAndClearFlags(param_1);
  temp_v0 = jobIsValid(param_1[0x5e8]);
  if (temp_v0 != 0) {
    if (param_1[0x5eb] != 0xffffffff) {
      param_1[0x5eb] = 0xffffffff;
      ifTouchRegionRemove();
    }
    *param_1 = *param_1 & 0xffffcfff;
    jobStop(param_1[0x5e8],0);
  }
  *(unsigned char *)(param_1 + 0x84) = 1;
  param_1[0x87] = 0;
  FUN_002baa40(temp_v2,0);
  temp_v1 = puVar2[1];
  param_1[0x85] = *puVar2;
  param_1[0x86] = temp_v1;
  FUN_00126fb8(g_aocMain + 0x80);
  *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xfffeffff;
  if (param_1[1] == 10) {
    aocClearDisplayFlag(g_aocSystem);
    FUN_002ba9ac(g_aocSystem);
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

} /* extern "C" */
