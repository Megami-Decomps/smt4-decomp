/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00129d00` (_code @ 0x129d00, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned int FUN_002ad264(void);
extern unsigned int nn_gxlow_CTR_Gpu_WriteHWRegsWithMask(unsigned int, unsigned int, unsigned char *, unsigned char *, unsigned int);


void FUN_00129d00(unsigned int param_1,unsigned char *param_2,unsigned char *param_3,unsigned int param_4)

{
  unsigned int temp_v0;
  
  temp_v0 = FUN_002ad264();
  nn_gxlow_CTR_Gpu_WriteHWRegsWithMask(temp_v0,param_1,param_2,param_3,param_4);
  return;
}
