/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047c36c` (_code @ 0x47c36c, 0x228 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int FUN_00163aa4(unsigned int *);
int FUN_001641c4(void);
int FUN_0016ccb4(int);
int FUN_001760cc(unsigned int);
int FUN_001b57a8(unsigned int [5], int);
int aocClearDisplayFlag(unsigned int);
int FUN_0047314c(unsigned int *);
int FUN_00477d10(unsigned int *, unsigned int, int);
int FUN_0047b1e4(unsigned int *);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_1_stack;

extern int g_aocMain; /* 0x570260 */
extern unsigned int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: jobStop. */
/* Supplied declaration required: FUN_00163aa4. */
extern int jobIsValid(unsigned int);
/* Supplied declaration required: FUN_001641c4. */
/* Supplied declaration required: FUN_0016ccb4. */
/* Supplied declaration required: FUN_001760cc. */
extern int FUN_001af210(int);
/* Supplied declaration required: FUN_001b57a8. */
/* Supplied declaration required: aocClearDisplayFlag. */
/* Supplied declaration required: FUN_0047314c. */
/* Supplied declaration required: FUN_00477d10. */
/* Supplied declaration required: FUN_0047b1e4. */


void FUN_0047c36c(unsigned int *param_1)

{
/* irregular: 12 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  romwright_code *UNRECOVERED_JUMPTABLE;
  unsigned int temp_v2 [5];
  
  puVar2 = temp_v2;
  if ((param_1[1] - 4 >= 11) || (temp_v0 = FUN_001af210(g_aocMain + 0x98), temp_v0 == 0)) {
    temp_v0 = 0;
    do {
      FUN_00163aa4(param_1 + temp_v0 * 0x23 + 0xdf);
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
                    /* WARNING: Could not recover jumptable at 0x0047c590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xfffeffff;
  FUN_00477d10(param_1,0xffffffff,0);
  FUN_0047314c(param_1 + 0x46c);
  FUN_0047b1e4(param_1);
  temp_v0 = jobIsValid(param_1[0x5e8]);
  if (temp_v0 != 0) {
    if (param_1[0x5eb] != 0xffffffff) {
      param_1[0x5eb] = 0xffffffff;
      FUN_001641c4();
    }
    *param_1 = *param_1 & 0xffffcfff;
    jobStop(param_1[0x5e8],0);
  }
  *(unsigned char *)(param_1 + 0x84) = 1;
  param_1[0x87] = 0;
  FUN_001b57a8(temp_v2,0);
  temp_v1 = puVar2[1];
  param_1[0x85] = *puVar2;
  param_1[0x86] = temp_v1;
  FUN_0016ccb4(g_aocMain + 0x80);
  *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xfffeffff;
  if (param_1[1] == 10) {
    aocClearDisplayFlag(g_aocSystem);
    FUN_001760cc(g_aocSystem);
  }
  param_1[1] = 0x11;
  param_1[2] = 0;
  if ((int *)param_1[0x82] == (int *)0x0) {
    return;
  }
  (**(romwright_code **)(*(int *)param_1[0x82] + 4))();
  param_1[0x82] = 0;
  return;
}

} /* extern "C" */
