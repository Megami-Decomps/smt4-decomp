/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f5c14` (_code @ 0x3f5c14, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern romwright_code *DAT_0044e934; /* 0x44e934 */


void FUN_003f5c14(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_0044e934 != (romwright_code *)0x0 && param_1 != (unsigned int *)0x0) {
    if (param_1[1] != 0) {
      (*DAT_0044e934)();
    }
    (*DAT_0044e934)(*param_1);
                    /* WARNING: Could not recover jumptable at 0x003f5c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0044e934)(param_1);
    return;
  }
  return;
}
