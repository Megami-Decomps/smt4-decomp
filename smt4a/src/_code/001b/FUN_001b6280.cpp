/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b6280` (_code @ 0x1b6280, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern unsigned char DAT_006433d0; /* 0x6433d0 */

extern unsigned char nn_snd_CTR_Dspsnd_SetChannelMix(unsigned int, unsigned char, unsigned int);


unsigned char FUN_001b6280(unsigned int *param_1)

{
  unsigned char temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  
  temp_v12 = (float)param_1[0x1a];
  temp_v5 = (float)param_1[0x12] * temp_v12;
  temp_v1 = (float)param_1[0xe] * temp_v12;
  temp_v9 = (float)param_1[0x16] * temp_v12;
  temp_v2 = (float)param_1[0xf] * temp_v12;
  temp_v6 = (float)param_1[0x13] * temp_v12;
  temp_v10 = (float)param_1[0x17] * temp_v12;
  temp_v3 = (float)param_1[0x10] * temp_v12;
  temp_v7 = (float)param_1[0x14] * temp_v12;
  temp_v11 = (float)param_1[0x18] * temp_v12;
  temp_v4 = (float)param_1[0x11] * temp_v12;
  temp_v8 = (float)param_1[0x15] * temp_v12;
  temp_v12 = (float)param_1[0x19] * temp_v12;
  temp_v0 = nn_snd_CTR_Dspsnd_SetChannelMix((unsigned int)&DAT_006433d0,(unsigned char)*param_1,(unsigned int)&temp_v1);
  return temp_v0;
}

} /* extern "C" */
