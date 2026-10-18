/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00196ee0` (_code @ 0x196ee0, 0x168 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp88; /* 0x88: local_88 */
} param_5_stack;

extern unsigned char DAT_0040293c; /* 0x40293c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b7118. */
/* Supplied declaration required: FUN_002be77c. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002bf558. */
/* Supplied declaration required: FUN_002bf6d0. */


void FUN_00196ee0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  int temp_v2;
  int temp_v3;
  unsigned int in_fpscr;
  unsigned char temp_v4 [64];
  unsigned int temp_v5;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int temp_v6;
  
  temp_v3 = 0x42;
  if (param_1 >= 3) {
    temp_v3 = 0x44;
  }
  temp_v2 = 0;
  iStack_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  temp_v6 = param_4;
  if (0 < param_1) {
    do {
      temp_v0 = FUN_002bf6d0(0x2f,temp_v3 + temp_v2);
      temp_v1 = *(short *)(temp_v0 + 10) + param_3;
      if (temp_v6 == temp_v2) {
        temp_v5 = 0xff;
        FUN_002bf558(2,0x2f,9,*(short *)(temp_v0 + 8) + param_2,temp_v1,0x1f);
      }
      else {
        temp_v5 = 0xffffffff;
        FUN_002bf558(2,0x2f,8,*(short *)(temp_v0 + 8) + param_2,temp_v1,0x1f);
      }
      FUN_002be7fc(temp_v4,&DAT_0040293c,param_5 + temp_v2 * 10 + 0x1e);
      temp_v1 = FUN_002bf6d0(0x2f,0x41);
      puVar3 = temp_v4;
      FUN_002b7118(puVar3,2);
      VectorSignedToFloat((int)*(short *)(temp_v0 + 10) + (int)*(short *)(temp_v1 + 10) + param_3,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v0 + 8) +
                          param_2 + (int)*(short *)(temp_v1 + 8) +
                                    ((int)**(short **)(temp_v1 + 0xc) - (int)puVar3) / 2,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be77c(2,temp_v5,temp_v4,(int)*(short *)(temp_v0 + 8));
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < param_1);
  }
  return;
}
