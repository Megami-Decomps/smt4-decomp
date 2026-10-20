/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f72b4` (_code @ 0x3f72b4, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003f718c(unsigned int, unsigned int *, unsigned int [2], unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

/* Supplied declaration required: FUN_003f718c. */


void FUN_003f72b4(unsigned int param_1,unsigned int *param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0 [2];
  
  temp_v0[0] = *param_2;
  FUN_003f718c(param_1,param_2,temp_v0,param_3);
  return;
}

} /* extern "C" */
