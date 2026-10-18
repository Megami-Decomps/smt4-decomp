/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Dspsnd_AppendChannelNextBuffer` (_code @ 0x15f3fc, 0x160 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002bb274(void);
/* Supplied declaration required: FUN_002bd808. */


unsigned int
nn_snd_CTR_Dspsnd_AppendChannelNextBuffer(int param_1,int param_2,unsigned int *param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar6;
  unsigned int temp_v5;
  unsigned char temp_v6;
  
  temp_v0 = FUN_002bb274();
  if (temp_v0 != 0) {
    temp_v3 = *param_3;
    temp_v4 = param_3[1];
    if (temp_v3 + 0xec000000 < 0x8000000) {
      puVar6 = *(unsigned int **)(param_1 + (*(unsigned short *)(param_1 + 0x131a) & 1) * 0x60 + param_2 * 4 +
                         0x10b0);
      temp_v1 = puVar6[0x2d];
      temp_v2 = temp_v1 & 0xffff;
      temp_v5 = temp_v3;
      if ((temp_v1 & 0xc) == 0) {
        if ((temp_v1 & 3) == 1) {
          temp_v5 = temp_v3 + temp_v4;
        }
        if ((temp_v1 & 3) == 2) {
          temp_v5 = temp_v5 + temp_v4 * 2;
        }
      }
      if ((temp_v1 & 0xf) >> 2 == 1) {
        if ((temp_v1 & 3) == 1) {
          temp_v5 = temp_v5 + temp_v4 * 2;
        }
        if ((temp_v1 & 3) == 2) {
          temp_v5 = temp_v5 + temp_v4 * 4;
        }
      }
      temp_v6 = (temp_v1 & 0xf) >> 2 == 2;
      if (temp_v6) {
        temp_v2 = temp_v1 & 3;
      }
      if (temp_v6 && temp_v2 == 1) {
        temp_v0 = (int)(((long long)(int)(temp_v4 + 0xd) * -0x6db6db6d +
                      ((unsigned long long)(temp_v4 + 0xd) << 0x20)) >> 0x20);
        temp_v5 = temp_v5 + ((temp_v0 >> 3) - (temp_v0 >> 0x1f)) * 8;
      }
      if ((temp_v5 >= 0x14000001) && (temp_v5 < 0x1c000001)) {
        temp_v0 = param_4 * 0x14;
        *(unsigned short *)(puVar6 + param_4 * 5 + 0x17) = *(unsigned short *)((int)param_3 + 0x12);
        puVar6[param_4 * 5 + 0x13] = ((temp_v3 + 0xc000000) >> 0x10) | (temp_v3 << 0x10);
        puVar6[param_4 * 5 + 0x14] = (temp_v4 >> 0x10) | (temp_v4 << 0x10);
        if (param_3[2] != 0) {
          FUN_002bd808(puVar6 + param_4 * 5 + 0x15);
          *(unsigned char *)((int)puVar6 + temp_v0 + 0x5a) = 1;
        }
        else {
          *(unsigned short *)((int)puVar6 + temp_v0 + 0x5a) = *(unsigned short *)((int)puVar6 + temp_v0 + 0x5a) & 0xff00
          ;
        }
        *(unsigned short *)((int)puVar6 + 0x4a) =
             *(unsigned short *)((int)puVar6 + 0x4a) | (unsigned short)(1 << (param_4 & 0xff));
        *(char *)((int)puVar6 + temp_v0 + 0x5b) = (char)param_3[4];
        *puVar6 = *puVar6 | 0x80000;
        return 1;
      }
    }
  }
  return 0;
}
