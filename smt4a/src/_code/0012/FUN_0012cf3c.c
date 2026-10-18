/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012cf3c` (_code @ 0x12cf3c, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

/* Supplied declaration required: FUN_0030f90c. */


void FUN_0012cf3c(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = *(int *)(param_1 + 0xc);
  temp_v2 = *(int *)(param_1 + 4);
  temp_v1 = param_3;
  while (temp_v2 != temp_v0) {
    FUN_0030f90c(&temp_v1,param_1,&temp_v2);
    temp_v2 = temp_v1;
  }
  return;
}
