/* NON_MATCHING: romwright 0.5.0 decompilation of `mwmofilterDeblockerRelease` (_code @ 0x513670, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char g_mwmofilterDeblocker; /* 0x589518 */


void mwmofilterDeblockerRelease(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if ((*(romwright_code * *)((unsigned char *)&g_mwmofilterDeblocker + 0x4)) != (romwright_code *)0x0 && param_1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      (*(*(romwright_code * *)((unsigned char *)&g_mwmofilterDeblocker + 0x4)))();
    }
                    /* WARNING: Could not recover jumptable at 0x005136a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(*(romwright_code * *)((unsigned char *)&g_mwmofilterDeblocker + 0x4)))(param_1);
    return;
  }
  return;
}

} /* extern "C" */
