#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

extern unsigned char g_dspsndState; /* 0x4e6f64 */

extern unsigned char nn_snd_CTR_Dspsnd_InitializeChannelParameters(unsigned int, unsigned char);
extern unsigned char nn_snd_CTR_Dspsnd_SetChannelPlayStop(unsigned int, unsigned char);


unsigned int * FUN_0015a514(unsigned int *param_1,int param_2)

{
  unsigned char temp_v0;
  
  *(char *)((int)param_1 + 0xd) = (char)param_2;
  if (param_2 != 0) {
    if (param_2 == 1) {
      nn_snd_CTR_Dspsnd_SetChannelPlayStop((unsigned int)&g_dspsndState,(unsigned char)*param_1);
      *(unsigned char *)(param_1 + 3) = 0;
      temp_v0 = nn_snd_CTR_Dspsnd_InitializeChannelParameters((unsigned int)&g_dspsndState,(unsigned char)*param_1);
      return (unsigned int *)(unsigned int)temp_v0;
    }
    if (param_2 == 2) {
      temp_v0 = nn_snd_CTR_Dspsnd_SetChannelPlayStop((unsigned int)&g_dspsndState,(unsigned char)*param_1);
      return (unsigned int *)(unsigned int)temp_v0;
    }
  }
  return param_1;
}

} /* extern "C" */
