/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00389cf8` (_code @ 0x389cf8, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001630d4(int, int, int, int, int);
int rt_memcpy_w(void);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

/* Supplied declaration required: FUN_001630d4. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_00389cf8(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  if (0 < param_3) {
    temp_v0 = 0x100;
    FUN_001630d4(0x100,0x100,0,param_3 * 0x348,1);
    *(unsigned int *)(param_1 * 0x148 + 0x5c6024) = temp_v0;
    rt_memcpy_w();
  }
  *(int *)(param_1 * 0x148 + 0x5c6020) = param_3;
  return;
}

} /* extern "C" */
