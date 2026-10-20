/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00427bf0` (_code @ 0x427bf0, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004268ec(unsigned int [2], int, unsigned int, unsigned int);

/* stack frame of param_4: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp8; /* 0x8: local_8 */
} param_4_stack;

/* Supplied declaration required: FUN_004268ec. */


void FUN_00427bf0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0 [2];
  
  temp_v0[0] = param_4;
  FUN_004268ec(temp_v0,1,param_1,param_2);
  return;
}

} /* extern "C" */
