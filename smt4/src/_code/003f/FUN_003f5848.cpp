/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f5848` (_code @ 0x3f5848, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_0044e918; /* 0x44e918 */


void FUN_003f5848(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  if ((*(romwright_code * *)((unsigned char *)&DAT_0044e918 + 0x4)) == (romwright_code *)0x0 || param_1 == (int *)0x0) {
    return;
  }
  if (param_1[3] != 0) {
    (*(*(romwright_code * *)((unsigned char *)&DAT_0044e918 + 0x4)))();
  }
  if (*param_1 != 0) {
    (*(*(romwright_code * *)((unsigned char *)&DAT_0044e918 + 0x4)))();
  }
                    /* WARNING: Could not recover jumptable at 0x003f588c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(*(romwright_code * *)((unsigned char *)&DAT_0044e918 + 0x4)))(param_1);
  return;
}

} /* extern "C" */
