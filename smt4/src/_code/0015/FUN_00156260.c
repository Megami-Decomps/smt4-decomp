/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00156260` (_code @ 0x156260, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern unsigned char DAT_004e6f64; /* 0x4e6f64 */

extern int FUN_002b5954(void);
/* Supplied declaration required: nn_snd_CTR_Dspsnd_SetDspDelayEffect. */


void FUN_00156260(int param_1,int param_2,unsigned short *param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  unsigned char temp_v2;
  
  *(unsigned char *)(param_1 + param_2 + 4) = param_3[1] != 0;
  temp_v0 = FUN_002b5954();
  temp_v1 = *param_3;
  temp_v2 = (temp_v1 & 1) != 0;
  if (temp_v2) {
    temp_v1 = param_3[1];
  }
  temp_v0 = temp_v0 + param_2 * 0x14;
  if (temp_v2) {
    *(unsigned short *)(temp_v0 + 2) = temp_v1;
  }
  if ((*param_3 & 4) != 0) {
    *(unsigned short *)(temp_v0 + 6) = param_3[3];
    *(unsigned short *)(temp_v0 + 0xc) = param_3[6];
    *(unsigned short *)(temp_v0 + 0xe) = param_3[7];
    *(unsigned short *)(temp_v0 + 0x10) = param_3[8];
    *(unsigned short *)(temp_v0 + 0x12) = param_3[9];
  }
  if ((*param_3 & 2) != 0) {
    *(unsigned int *)(temp_v0 + 8) = *(unsigned int *)(param_3 + 4);
  }
  nn_snd_CTR_Dspsnd_SetDspDelayEffect(&DAT_004e6f64);
  return;
}
