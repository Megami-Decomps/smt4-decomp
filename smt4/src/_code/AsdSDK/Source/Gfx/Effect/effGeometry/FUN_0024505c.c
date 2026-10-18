/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024505c` (_code @ 0x24505c, 0x144 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

/* Supplied declaration required: FUN_002693b4. */
extern int FUN_002693e4(void);
/* Supplied declaration required: FUN_002c222c. */
extern unsigned short *FUN_002c32a0(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


unsigned short * FUN_0024505c(int param_1,short *param_2,int param_3,unsigned short param_4)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned short *puVar5;
  int temp_v4;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  int temp_v5;
  
  temp_v3 = param_3 * 2 - 2;
  temp_v5 = (param_1 + 1) * param_3;
  puVar5 = (unsigned short *)FUN_002c32a0(0x10000,0x100,0,0x58,0x10,1);
  temp_v4 = 0x7e8;
  FUN_002c222c(0x7e8,param_3);
  if (temp_v4 == 0) {
    temp_v4 = 0;
  }
  else {
    temp_v4 = FUN_002693e4();
  }
  FUN_002693b4(temp_v4,0x25,param_1 * temp_v3 * 3,temp_v5);
  *puVar5 = param_4;
  *(int *)(puVar5 + 4) = temp_v4;
  puVar5[1] = (short)temp_v5;
  *(unsigned int *)(puVar5 + 0x2a) = 0xa5;
  temp_v5 = *(int *)(temp_v4 + 0x48);
  temp_v4 = 0;
  if (0 < param_1) {
    temp_v2 = (temp_v3 * 3 + 2) / 3;
    do {
      if (0 < (int)(temp_v2 * 3)) {
        psVar8 = (short *)(temp_v5 + temp_v2 * temp_v4 * 6);
        temp_v0 = (short)param_3;
        temp_v1 = (short)temp_v4;
        psVar7 = param_2 + -1;
        psVar9 = psVar8 + -1;
        if ((temp_v2 & 1) != 0) {
          *psVar8 = temp_v0 * temp_v1 + *param_2;
          psVar7 = param_2;
          psVar9 = psVar8;
        }
        for (temp_v3 = (int)(temp_v2 * 3) >> 1; temp_v3 != 0; temp_v3 = temp_v3 - 1) {
          psVar9[1] = temp_v0 * temp_v1 + psVar7[1];
          psVar7 = psVar7 + 2;
          psVar9 = psVar9 + 2;
          *psVar9 = temp_v0 * temp_v1 + *psVar7;
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < param_1);
  }
  return puVar5;
}
