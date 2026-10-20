/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00137ed0` (_code @ 0x137ed0, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int g_asdSequence; /* 0x640370 */
extern int DAT_00640378; /* 0x640378 */
extern unsigned int DAT_0064037c; /* 0x64037c */
extern unsigned int DAT_00640380; /* 0x640380 */
extern unsigned int DAT_00640384; /* 0x640384 */


/* WARNING: Removing unreachable block (ram,0x00137f10) */

void FUN_00137ed0(void)

{
/* irregular: 3 native warning(s); review required */
  if (*(int *)(g_asdSequence + 0xc) != 0) {
    DAT_0064037c = 1;
    DAT_00640380 = 0;
    DAT_00640384 = 0;
    if (-1 < DAT_00640378) {
                    /* WARNING: Could not recover jumptable at 0x00137f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(romwright_code **)(g_asdSequence + DAT_00640378 * 0xc + 4))();
      return;
    }
  }
  return;
}

} /* extern "C" */
