/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b3b58` (_code @ 0x2b3b58, 0x13c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_5_stack;

extern unsigned char DAT_0054baf8; /* 0x54baf8 */

/* Supplied declaration required: FUN_00167ab4. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_00412648. */
extern int FUN_00412fd8(void);


unsigned short * FUN_002b3b58(int param_1,int param_2,int param_3,short *param_4,unsigned short param_5)

{
/* irregular: 3 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  unsigned short *puVar4;
  int temp_v3;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  int temp_v4;
  int temp_v5;
  
  puVar4 = (unsigned short *)0x10000;
  FUN_00167ab4(0x10000,0x100,0,0x58,0x10,1);
  temp_v3 = 0x4c;
  FUN_00178b04(0x4c,&DAT_0054baf8,0x73);
  if (temp_v3 == 0) {
    temp_v3 = 0;
  }
  else {
    temp_v3 = FUN_00412fd8();
  }
  FUN_00412648(temp_v3,0x25,param_1 * param_2 * 3,param_1 * param_3);
  *puVar4 = param_5;
  *(int *)(puVar4 + 4) = temp_v3;
  puVar4[1] = (short)(param_1 * param_3);
  *(unsigned int *)(puVar4 + 0x2a) = 0xa5;
  temp_v5 = *(int *)(temp_v3 + 0x48);
  temp_v3 = 0;
  if (0 < param_1) {
    temp_v2 = (param_2 * 3 + 2) / 3;
    do {
      if (0 < (int)(temp_v2 * 3)) {
        psVar7 = (short *)(temp_v5 + temp_v2 * temp_v3 * 6);
        temp_v0 = (short)param_3;
        temp_v1 = (short)temp_v3;
        psVar6 = param_4 + -1;
        psVar8 = psVar7 + -1;
        if ((temp_v2 & 1) != 0) {
          *psVar7 = temp_v0 * temp_v1 + *param_4;
          psVar6 = param_4;
          psVar8 = psVar7;
        }
        for (temp_v4 = (int)(temp_v2 * 3) >> 1; temp_v4 != 0; temp_v4 = temp_v4 - 1) {
          psVar8[1] = temp_v0 * temp_v1 + psVar6[1];
          psVar6 = psVar6 + 2;
          psVar8 = psVar8 + 2;
          *psVar8 = temp_v0 * temp_v1 + *psVar6;
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < param_1);
  }
  return puVar4;
}
