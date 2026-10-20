/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011356c` (_code @ 0x11356c, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_0059935c; /* 0x59935c */
extern unsigned int DAT_00630424; /* 0x630424 */


void FUN_0011356c(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  if ((*(int * *)((unsigned char *)&DAT_0059935c + 0x8)) == (int *)0x0) {
    (*(int * *)((unsigned char *)&DAT_0059935c + 0x8)) = (int *)&DAT_00630424;
  }
                    /* WARNING: Could not recover jumptable at 0x0011358c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(*(*(int * *)((unsigned char *)&DAT_0059935c + 0x8)) + 0x18))((*(int * *)((unsigned char *)&DAT_0059935c + 0x8)),param_1,param_2,param_3);
  return;
}

} /* extern "C" */
