/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015a514` (_code @ 0x15a514, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

extern unsigned char DAT_004e6f64; /* 0x4e6f64 */

extern unsigned char nn_snd_CTR_Dspsnd_InitializeChannelParameters(unsigned int, unsigned char);
extern unsigned char nn_snd_CTR_Dspsnd_SetChannelPlayStop(unsigned int, unsigned char);


unsigned int * FUN_0015a514(unsigned int *param_1,int param_2)

{
  unsigned char temp_v0;
  
  *(char *)((int)param_1 + 0xd) = (char)param_2;
  if (param_2 != 0) {
    if (param_2 == 1) {
      nn_snd_CTR_Dspsnd_SetChannelPlayStop((unsigned int)&DAT_004e6f64,(unsigned char)*param_1);
      *(unsigned char *)(param_1 + 3) = 0;
      temp_v0 = nn_snd_CTR_Dspsnd_InitializeChannelParameters((unsigned int)&DAT_004e6f64,(unsigned char)*param_1);
      return (unsigned int *)(unsigned int)temp_v0;
    }
    if (param_2 == 2) {
      temp_v0 = nn_snd_CTR_Dspsnd_SetChannelPlayStop((unsigned int)&DAT_004e6f64,(unsigned char)*param_1);
      return (unsigned int *)(unsigned int)temp_v0;
    }
  }
  return param_1;
}
