/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00512f1c` (_code @ 0x512f1c, 0x1d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern romwright_code *DAT_00589508; /* 0x589508 */
extern romwright_code *DAT_0058950c; /* 0x58950c */

/* Supplied declaration required: FUN_001d1438. */
extern unsigned int FUN_00439e0c(int, unsigned int, unsigned int);
extern int aeabi_uidivmod(unsigned int, unsigned int);
/* Supplied declaration required: nn_snd_CTR_DecodeAdpcmData. */


unsigned int FUN_00512f1c(int *param_1,int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned short *puVar4;
  unsigned short *puVar5;
  unsigned short *puVar6;
  unsigned int temp_v3;
  unsigned int unaff_r7;
  unsigned int temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7 [8];
  
  temp_v3 = param_1[6];
  param_1[2] = 0;
  temp_v0 = aeabi_uidivmod(param_3,temp_v3);
  temp_v1 = FUN_00439e0c(temp_v0 - 0x26,2,1);
  if (temp_v1 != 0) {
    temp_v6 = temp_v3 != 0;
    temp_v5 = temp_v3 == 1;
    if (temp_v3 >= 2) {
      temp_v6 = (unsigned int)param_1[4] <= temp_v1;
      temp_v5 = temp_v1 == param_1[4];
    }
    if (temp_v6 && !temp_v5) {
      if (param_1[3] != 0) {
        (*DAT_0058950c)();
      }
      param_1[4] = 0;
      temp_v2 = (*DAT_00589508)(temp_v1 << 1);
      param_1[3] = temp_v2;
      if (temp_v2 == 0) {
        return 0;
      }
      param_1[4] = temp_v1;
    }
    if (temp_v3 == 1) {
      unaff_r7 = temp_v1 << 1;
    }
    temp_v4 = (temp_v1 - 0x20) * temp_v3 * 2;
    if (temp_v3 != 1) {
      unaff_r7 = temp_v4;
    }
    if ((unsigned int)param_1[1] < unaff_r7) {
      if (*param_1 != 0) {
        (*DAT_0058950c)();
      }
      param_1[1] = 0;
      temp_v2 = (*DAT_00589508)(unaff_r7);
      *param_1 = temp_v2;
      if (temp_v2 == 0) {
        return 0;
      }
      param_1[1] = unaff_r7;
    }
    param_1[2] = temp_v4;
    if (temp_v3 != 1) {
      temp_v4 = 0;
      if (temp_v4 < temp_v3) {
        do {
          FUN_001d1438(temp_v7,param_2 + 0x20);
          nn_snd_CTR_DecodeAdpcmData(param_2 + 0x26,param_1[3],param_2,temp_v7,temp_v1);
          puVar4 = (unsigned short *)(param_1[3] + 0x20);
          if (0 < (int)(temp_v1 - 0x20)) {
            puVar6 = (unsigned short *)(*param_1 + temp_v4 * 2 + temp_v3 * -2);
            puVar5 = (unsigned short *)(param_1[3] + 0x1e);
            if (((temp_v1 - 0x21) & 1) == 0) {
              puVar6 = puVar6 + temp_v3;
              *puVar6 = *puVar4;
              puVar5 = puVar4;
            }
            for (temp_v2 = (int)(temp_v1 - 0x20) >> 1; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
              puVar4 = puVar6 + temp_v3;
              puVar6 = puVar6 + temp_v3 * 2;
              *puVar4 = puVar5[1];
              puVar5 = puVar5 + 2;
              *puVar6 = *puVar5;
            }
          }
          temp_v4 = temp_v4 + 1;
          param_2 = param_2 + temp_v0;
        } while (temp_v4 < temp_v3);
      }
    }
    else {
      FUN_001d1438(temp_v7,param_2 + 0x20);
      nn_snd_CTR_DecodeAdpcmData(param_2 + 0x26,*param_1,param_2,temp_v7,temp_v1);
    }
  }
  return 1;
}
