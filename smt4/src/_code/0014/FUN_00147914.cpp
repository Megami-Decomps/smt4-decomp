/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00147914` (_code @ 0x147914, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int FUN_002ad264(void);
extern unsigned int nn_gxlow_CTR_Gpu_FlushDataCache(unsigned int, unsigned int, unsigned int, unsigned int);


void FUN_00147914(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  
  temp_v0 = FUN_002ad264();
  nn_gxlow_CTR_Gpu_FlushDataCache(temp_v0,0xffff8001,param_1,param_2);
  return;
}

} /* extern "C" */
