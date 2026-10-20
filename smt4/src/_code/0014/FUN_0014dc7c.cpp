/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014dc7c` (_code @ 0x14dc80, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b4e74(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_0014dcac(unsigned int);
/* Supplied declaration required: FUN_002b4e74. */


void FUN_0014dc7c(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_002b4e74();
  temp_v0 = FUN_0014dcac(param_1);
  FUN_002b4e74();
  *(unsigned int *)(temp_v0 - 0x98) = 0xffffffff;
  return;
}

} /* extern "C" */
