/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a3e10` (_code @ 0x2a3e10, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int commonBgStopAndResetFade(void);
int FUN_00342334(int);
int mobiclipProcessCreate(int, unsigned int);
int gameFlagSetValue(int, int);

extern unsigned char g_eventCommand; /* 0x57f554 */

extern int querySlotHasHandle(void);
extern int jobIsValid(int);
extern unsigned int gameFlagIsSet(void);
extern int scrGetArg(unsigned int);
/* Supplied declaration required: commonBgStopAndResetFade. */
/* Supplied declaration required: FUN_00342334. */
/* Supplied declaration required: mobiclipProcessCreate. */
/* Supplied declaration required: gameFlagSetValue. */


unsigned int FUN_002a3e10(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = scrGetArg(0);
  if ((*(int *)((unsigned char *)&g_eventCommand + 0x8)) == 0) {
    temp_v1 = querySlotHasHandle();
    if (temp_v1 != 0) {
      return 0;
    }
    FUN_00342334(0);
    commonBgStopAndResetFade();
    temp_v1 = temp_v0 + 0x800;
    temp_v2 = gameFlagIsSet();
    mobiclipProcessCreate(temp_v0,temp_v2);
    (*(int *)((unsigned char *)&g_eventCommand + 0x8)) = temp_v0;
    gameFlagSetValue(temp_v1,1);
  }
  temp_v0 = jobIsValid((*(int *)((unsigned char *)&g_eventCommand + 0x8)));
  if (temp_v0 != 0) {
    return 0;
  }
  (*(int *)((unsigned char *)&g_eventCommand + 0x8)) = 0;
  FUN_00342334(1);
  return 1;
}

} /* extern "C" */
