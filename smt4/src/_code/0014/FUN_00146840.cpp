/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00146840` (_code @ 0x146840, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int DAT_0044e460; /* 0x44e460 */

extern unsigned int nn_dsp_CTR_DSP_ReadPipeIfPossible(unsigned int, int, int, unsigned char *, unsigned short, unsigned short *);


unsigned int FUN_00146840(int param_1,unsigned char *param_2,unsigned short param_3,unsigned short *param_4)

{
  unsigned int temp_v0;
  
  temp_v0 = 0xc8a0a7f8;
  if (DAT_0044e460 == 0) {
    *param_4 = 0;
  }
  else {
    temp_v0 = nn_dsp_CTR_DSP_ReadPipeIfPossible(DAT_0044e460,param_1,0,param_2,param_3,param_4);
  }
  return temp_v0;
}

} /* extern "C" */
