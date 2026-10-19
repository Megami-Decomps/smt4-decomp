/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00137780` (_code @ 0x137780, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_7: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_7_stack;

extern void nn_gxlow_CTR_SetBufferSwap(int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


void FUN_00137780(int param_1,int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5,
                 unsigned int param_6,unsigned int param_7)

{
  nn_gxlow_CTR_SetBufferSwap(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}
