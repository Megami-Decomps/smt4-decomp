/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045fb3c` (_code @ 0x45fb3c, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0045f9b4(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

/* Supplied declaration required: FUN_0045f9b4. */


unsigned int FUN_0045fb3c(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_0045f9b4();
                    /* WARNING: Treating indirect jump as return */
  return param_1;
}

} /* extern "C" */
