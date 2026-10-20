/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4cac` (_code @ 0x2f4cac, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030fe6c(int *, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_0030fe6c. */


void FUN_002f4cac(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    temp_v0 = param_4;
    FUN_0030fe6c(&temp_v0,param_1 + 0xc);
    *(unsigned int *)(param_1 + 0x14) = temp_v0;
    *(unsigned int *)(param_1 + 0x10) = temp_v0;
    return;
  }
  *(unsigned int *)(param_1 + 0x14) = *(unsigned int *)(param_1 + 0xc);
  *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0xc);
  return;
}

} /* extern "C" */
