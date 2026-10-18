/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a611c` (_code @ 0x1a611c, 0x21c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int FUN_001afa34(void);
/* Supplied declaration required: FUN_001c2484. */
extern float ll_sto_f(int, int);
extern unsigned char nw_snd_internal_driver_VoiceManager_GetVoiceCount(void);


void FUN_001a611c(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  long long temp_v0;
  unsigned long long temp_v1;
  long long temp_v2;
  unsigned char temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  float *pfVar12;
  unsigned int temp_v11;
  float temp_v12;
  
  if (*(char *)((int)param_1 + 0x1f6) == '\x01') {
    temp_v4 = *param_2;
    temp_v7 = param_2[1];
    temp_v8 = *param_1;
    *param_1 = temp_v4 + temp_v8;
    param_1[1] = temp_v7 + param_1[1] + (unsigned int)romwright_carry_4(temp_v4,temp_v8);
    param_1[2] = param_1[2] + 1;
    temp_v5 = FUN_001afa34();
    param_1[3] = temp_v5 + param_1[3];
    if ((char)param_1[0x6d] == '\x01') {
      temp_v4 = param_2[1];
      temp_v1 = (unsigned long long)*param_2 * 3 +
              (((unsigned long long)
                (unsigned int)(((int)temp_v4 >> 0x1f) * -0x452cb512 +
                      (int)((unsigned long long)temp_v4 * 0xbad34aee >> 0x20)) << 0x20) |
              (((unsigned long long)temp_v4 * 0xbad34aee) & 0xffffffff)) +
              romwright_piece_4_4(temp_v4 * 3,(int)((unsigned long long)*param_2 * 0xbad34aee >> 0x20));
      temp_v8 = (unsigned int)(temp_v1 >> 0x20);
      temp_v5 = (int)temp_v8 >> 0x1f;
      temp_v2 = (unsigned long long)temp_v8 * 0xe353f7cf +
              romwright_piece_4_4(temp_v5 * -0x1cac0831,(int)((temp_v1 & 0xffffffff) * 0xe353f7cf >> 0x20));
      temp_v0 = (temp_v1 & 0xffffffff) * 0x20c49ba5;
      temp_v11 = (unsigned int)((unsigned long long)temp_v2 >> 0x20);
      temp_v10 = (unsigned int)((unsigned long long)temp_v8 * 0x20c49ba5);
      temp_v4 = (int)((unsigned long long)temp_v0 >> 0x20) + (unsigned int)romwright_carry_4((unsigned int)temp_v2,(unsigned int)temp_v0);
      temp_v7 = temp_v4 + temp_v11;
      temp_v9 = ((int)temp_v11 >> 0x1f) + (unsigned int)romwright_carry_4(temp_v4,temp_v11) +
               temp_v5 * 0x20c49ba5 + (int)((unsigned long long)temp_v8 * 0x20c49ba5 >> 0x20) +
               (unsigned int)romwright_carry_4(temp_v7,temp_v10);
      temp_v4 = ((temp_v7 + temp_v10) >> 7) | (temp_v9 * 0x2000000);
      temp_v6 = (float)ll_sto_f(temp_v4 + -temp_v5,(temp_v9 >> 7) + (unsigned int)romwright_carry_4(temp_v4,-temp_v5));
      pfVar12 = (float *)(param_1 + 4);
      temp_v6 = temp_v6 * 0.02045408f;
      if ((temp_v6 < 0.0f) || ((int)temp_v6 >= 0x42c80001)) {
        param_1[0x6c] = param_1[0x6c] + 1;
      }
      temp_v12 = *pfVar12;
      if (*pfVar12 < temp_v6) {
        temp_v12 = temp_v6;
      }
      temp_v5 = (int)temp_v6;
      *pfVar12 = temp_v12;
      if (temp_v5 < 0x65) {
        pfVar12[temp_v5 + 2] = (float)((int)pfVar12[temp_v5 + 2] + 1);
      }
      param_1[0x6b] = param_1[0x6b] + 1;
      param_1[5] = (unsigned int)((float)param_1[5] + temp_v6);
      if (param_1[0x7e] != 0) {
        if ((int)param_1[0x81] < (int)param_1[0x80]) {
          pfVar12 = (float *)(param_1[0x7e] + param_1[0x81] * 8);
          FUN_001c2484();
          temp_v3 = nw_snd_internal_driver_VoiceManager_GetVoiceCount();
          *(unsigned char *)(pfVar12 + 1) = temp_v3;
          *(char *)((int)pfVar12 + 5) = (char)param_1[0x7f];
          *pfVar12 = temp_v6;
          param_1[0x81] = param_1[0x81] + 1;
        }
      }
      param_1[0x7f] = 0;
    }
  }
  return;
}
