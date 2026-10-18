/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00150ed8` (_code @ 0x150ed8, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Unsupported intrinsic, declaration required: coproc_moveto_Data_Memory_Barrier (CALLOTHER). */
extern int FUN_0014da48(int, unsigned int *);
/* Supplied declaration required: FUN_0014dbb0. */
/* Supplied declaration required: FUN_001546c0. */


void FUN_00150ed8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = param_4;
  while (temp_v0 = FUN_0014da48(param_1,(unsigned int *)&temp_v1), temp_v0 != 0) {
    FUN_001546c0(temp_v1);
    coproc_moveto_Data_Memory_Barrier(0);
    FUN_0014dbb0(param_1 + 0xb4,temp_v1);
  }
  return;
}
