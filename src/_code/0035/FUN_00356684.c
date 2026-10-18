/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00356684` (_code @ 0x356684, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_002bbd10. */
/* Supplied declaration required: FUN_00356dfc. */


void FUN_00356684(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(param_1 + 4) == 0) {
    temp_v0 = param_4;
    FUN_002bbd10(0xe0a046da,0x3566ac);
  }
  temp_v0 = *(unsigned int *)(param_1 + 4);
  FUN_00356dfc(&temp_v0,param_2,param_3,param_4);
  return;
}
