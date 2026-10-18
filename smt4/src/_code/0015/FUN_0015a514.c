/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015a514` (_code @ 0x15a514, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

extern unsigned char DAT_004e6f64; /* 0x4e6f64 */

/* Supplied declaration required: nn_snd_CTR_Dspsnd_InitializeChannelParameters. */
/* Supplied declaration required: nn_snd_CTR_Dspsnd_SetChannelPlayStop. */


void FUN_0015a514(unsigned int *param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  *(char *)((int)param_1 + 0xd) = (char)param_2;
  if (param_2 != 0) {
    if (param_2 == 1) {
      nn_snd_CTR_Dspsnd_SetChannelPlayStop(&DAT_004e6f64,*param_1 & 0xff);
      *(unsigned char *)(param_1 + 3) = 0;
      nn_snd_CTR_Dspsnd_InitializeChannelParameters(&DAT_004e6f64,*param_1 & 0xff);
      return;
    }
    if (param_2 == 2) {
      nn_snd_CTR_Dspsnd_SetChannelPlayStop(&DAT_004e6f64,*param_1 & 0xff);
      return;
    }
  }
  return;
}
