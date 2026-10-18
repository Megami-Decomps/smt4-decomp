/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_WaveSoundFile_WaveSoundInfo_GetSendValue` (_code @ 0x507dfc, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: nw_snd_internal_Util_BitFlag_GetValue. */


void nw_snd_internal_WaveSoundFile_WaveSoundInfo_GetSendValue
               (int param_1,unsigned char *param_2,unsigned char *param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned char *puVar3;
  unsigned char *puVar4;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char *puVar7;
  unsigned int temp_v4;
  
  temp_v2 = param_1;
  temp_v4 = param_4;
  nw_snd_internal_Util_BitFlag_GetValue(param_1,&temp_v4,8);
  if (temp_v2 == 0) {
    *param_2 = 0x7f;
    if (param_4 == 0) {
      return;
    }
    puVar7 = param_3 + -1;
    if ((param_4 & 1) != 0) {
      *param_3 = 0;
      puVar7 = param_3;
    }
    for (param_4 = param_4 >> 1; param_4 != 0; param_4 = param_4 - 1) {
      puVar7[1] = 0;
      puVar7 = puVar7 + 2;
      *puVar7 = 0;
    }
    return;
  }
  puVar7 = (unsigned char *)(param_1 + temp_v4);
  *param_2 = *puVar7;
  temp_v3 = (unsigned int)(unsigned char)puVar7[1];
  if (temp_v3 >= 3) {
    temp_v3 = 2;
  }
  else if ((int)(temp_v3 - 1) < 1) {
    if ((int)(temp_v3 - 1) < 0) {
      return;
    }
    param_3[temp_v3 - 1] = puVar7[temp_v3 + 1];
    return;
  }
  puVar3 = puVar7 + 1;
  puVar4 = param_3 + -1;
  if ((temp_v3 & 1) == 0) {
    puVar3 = puVar7 + 2;
    *param_3 = *puVar3;
    puVar4 = param_3;
  }
  temp_v0 = puVar3[1];
  for (temp_v2 = (int)(temp_v3 - 1) >> 1; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
    temp_v1 = puVar3[2];
    puVar4[1] = temp_v0;
    temp_v0 = puVar3[3];
    puVar4 = puVar4 + 2;
    *puVar4 = temp_v1;
    puVar3 = puVar3 + 2;
  }
  if ((int)(temp_v3 - 1) < 0) {
    return;
  }
  param_3[temp_v3 - 1] = puVar7[temp_v3 + 1];
  return;
}
