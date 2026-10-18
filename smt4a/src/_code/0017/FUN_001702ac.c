/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001702ac` (_code @ 0x1702ac, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned int FUN_001a2a5c(void);
/* Supplied declaration required: nn_gxlow_CTR_Gpu_WriteHWRegsWithMask. */


void FUN_001702ac(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_001a2a5c();
  nn_gxlow_CTR_Gpu_WriteHWRegsWithMask(temp_v0,param_1,param_2,param_3,param_4);
  return;
}
