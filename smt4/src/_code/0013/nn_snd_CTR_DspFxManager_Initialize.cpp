/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_DspFxManager_Initialize` (_code @ 0x13a6b4, 0x1ac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_snd_CTR_Dspsnd_SetDspDelayEffect(unsigned char *, int, unsigned short *);
int nn_snd_CTR_Dspsnd_SetDspReverbEffect(unsigned char *, int, unsigned short *);

/* stack frame of param_1: 21 slot(s), 54 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned short sp1E; /* 0x1e: local_1e */
    unsigned short sp20; /* 0x20: local_20 */
    unsigned short sp22; /* 0x22: local_22 */
    unsigned short sp24; /* 0x24: local_24 */
    unsigned short sp26; /* 0x26: local_26 */
    unsigned short sp28; /* 0x28: local_28 */
    unsigned short sp2A; /* 0x2a: local_2a */
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned short sp2E; /* 0x2e: local_2e */
    unsigned short sp30; /* 0x30: local_30 */
    unsigned short sp32; /* 0x32: local_32 */
    unsigned short sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned short sp4A; /* 0x4a: local_4a */
    unsigned short sp4E; /* 0x4e: local_4e */
    unsigned short sp50; /* 0x50: local_50 */
} param_1_stack;

extern unsigned char DAT_004e6f64; /* 0x4e6f64 */

extern int FUN_002b5954(void);
/* Supplied declaration required: nn_snd_CTR_Dspsnd_SetDspDelayEffect. */
/* Supplied declaration required: nn_snd_CTR_Dspsnd_SetDspReverbEffect. */


/* WARNING: Removing unreachable block (ram,0x0013a7a8) */
/* WARNING: Removing unreachable block (ram,0x0013a73c) */
/* WARNING: Removing unreachable block (ram,0x0013a76c) */
/* WARNING: Removing unreachable block (ram,0x0013a81c) */

void nn_snd_CTR_DspFxManager_Initialize(unsigned char *param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned short temp_v3;
  unsigned short temp_v4;
  
  *param_1 = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[9] = 0;
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[0xb] = 0;
  temp_v0 = FUN_002b5954();
  temp_v2 = 0;
  do {
    temp_v1 = (int)(char)temp_v2;
    temp_v4 = 0;
    temp_v3 = 1;
    *(unsigned short *)(temp_v0 + temp_v1 * 0x14 + 2) = 0;
    nn_snd_CTR_Dspsnd_SetDspDelayEffect(&DAT_004e6f64,temp_v1,&temp_v3);
    temp_v4 = 0;
    temp_v3 = 1;
    *(unsigned short *)(temp_v0 + temp_v1 * 0x34 + 0x2a) = 0;
    nn_snd_CTR_Dspsnd_SetDspReverbEffect(&DAT_004e6f64,temp_v1,&temp_v3);
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 2);
  return;
}

} /* extern "C" */
