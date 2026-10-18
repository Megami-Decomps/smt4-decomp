/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001897bc` (_code @ 0x1897bc, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern int DAT_0058928c; /* 0x58928c */

extern unsigned int nn_dsp_CTR_DSP_WriteProcessPipe(int, unsigned int, unsigned int, unsigned int);


unsigned int FUN_001897bc(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int temp_v0;
  
  if (DAT_0058928c != 0) {
    temp_v0 = nn_dsp_CTR_DSP_WriteProcessPipe(DAT_0058928c,param_1,param_2,param_3);
    return temp_v0;
  }
  return 0xc8a0a7f8;
}
