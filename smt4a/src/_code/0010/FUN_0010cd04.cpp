/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010cd04` (_code @ 0x10cd04, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7908(unsigned int, unsigned int [2]);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

/* Supplied declaration required: FUN_002e7908. */


void FUN_0010cd04(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0 [2];
  
  *(unsigned int *)(param_2 + 0x6c) = param_3;
  temp_v0[0] = 0x10001;
  FUN_002e7908(param_1,temp_v0);
  return;
}

} /* extern "C" */
