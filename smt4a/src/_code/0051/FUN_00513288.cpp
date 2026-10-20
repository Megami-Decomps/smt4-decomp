/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00513288` (_code @ 0x513288, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_00589510; /* 0x589510 */


void FUN_00513288(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  if ((*(romwright_code * *)((unsigned char *)&DAT_00589510 + 0x4)) != (romwright_code *)0x0 && param_1 != (unsigned int *)0x0) {
    if (param_1[1] != 0) {
      (*(*(romwright_code * *)((unsigned char *)&DAT_00589510 + 0x4)))();
    }
    (*(*(romwright_code * *)((unsigned char *)&DAT_00589510 + 0x4)))(*param_1);
                    /* WARNING: Could not recover jumptable at 0x005132c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(*(romwright_code * *)((unsigned char *)&DAT_00589510 + 0x4)))(param_1);
    return;
  }
  return;
}

} /* extern "C" */
