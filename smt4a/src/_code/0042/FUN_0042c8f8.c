/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042c8f8` (_code @ 0x42c8f8, 0x270 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_5_stack;

/* Supplied declaration required: FUN_0018b19c. */
extern unsigned int FUN_001bc2ec(unsigned int);
/* Supplied declaration required: FUN_004ff4e0. */
/* Supplied declaration required: nn_gr_CTR_Vertex_DisableAttr. */


void FUN_0042c8f8(int param_1,unsigned char *param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5
                 )

{
/* irregular: irregular input(s): in_lr; 3 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  short temp_v2;
  short *psVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar7;
  unsigned int temp_v5;
  short temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int unaff_r4;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int unaff_r5;
  short *psVar15;
  unsigned int *puVar16;
  unsigned int unaff_r6;
  short *psVar17;
  unsigned int unaff_r7;
  short *psVar18;
  unsigned int unaff_r8;
  short *psVar19;
  unsigned int unaff_r9;
  unsigned int unaff_r10;
  unsigned int unaff_r11;
  short *psVar20;
  unsigned int in_lr;
  
  FUN_004ff4e0(param_3,*(unsigned int *)(param_1 + 8),param_4,param_5,0xffffffff,param_1,param_2,
               param_3,param_4);
  temp_v8 = *(int *)(param_1 + 4);
  if (temp_v8 != 0) {
    psVar4 = *(short **)(param_1 + 0xc);
    temp_v6 = 0;
    psVar15 = psVar4 + 2;
    psVar17 = psVar4 + 3;
    psVar18 = psVar4 + 4;
    psVar19 = psVar4 + 5;
    psVar20 = psVar4 + 1;
    do {
      temp_v0 = temp_v6 * 4 + 2;
      temp_v1 = temp_v6 * 4 + 1;
      *psVar4 = temp_v6 << 2;
      *psVar20 = temp_v0;
      *psVar15 = temp_v1;
      temp_v2 = temp_v6 * 4;
      *psVar17 = temp_v0;
      *psVar18 = temp_v1;
      temp_v8 = temp_v8 - 1;
      temp_v6 = temp_v6 + 1;
      *psVar19 = temp_v2 + 3;
      psVar4 = psVar4 + 6;
      psVar15 = psVar15 + 6;
      psVar17 = psVar17 + 6;
      psVar18 = psVar18 + 6;
      psVar19 = psVar19 + 6;
      psVar20 = psVar20 + 6;
    } while (temp_v8 != 0);
  }
  FUN_0018b19c(*(unsigned int *)(param_1 + 8),*(int *)(param_1 + 4) * 0x90);
  FUN_0018b19c(*(unsigned int *)(param_1 + 0xc),*(int *)(param_1 + 4) * 0xc);
  temp_v3 = FUN_001bc2ec(*(unsigned int *)(param_1 + 0xc));
  *(unsigned int *)(param_1 + 0x7a0) = temp_v3;
  *(unsigned char *)(param_1 + 0x7a8) = 0;
  *(int *)(param_1 + 0x7a4) = *(int *)(param_1 + 4) * 6;
  temp_v4 = FUN_001bc2ec(*(unsigned int *)(param_1 + 8));
  puVar7 = (unsigned int *)(param_1 + 0x10);
  puVar16 = (unsigned int *)0x0;
  temp_v9 = 0;
  do {
    if (puVar7[temp_v9 * 0x1c + 0x58] == 0) {
      puVar16 = puVar7 + temp_v9 * 0x1c + 0x58;
      break;
    }
    temp_v9 = temp_v9 + 1;
  } while ((int)temp_v9 < 0xc);
  temp_v7 = temp_v4;
  temp_v10 = 0;
  do {
    if (*(int *)(param_2 + temp_v10 * 4 + 0x10) == 0) {
      puVar16[temp_v10 + 0x10] = 0xffffffff;
    }
    else {
      nn_gr_CTR_Vertex_DisableAttr
                (puVar7,*(unsigned char *)(*(int *)(param_2 + temp_v10 * 4 + 0x10) + 2),temp_v7,temp_v9,
                 unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r8,unaff_r9,unaff_r10,unaff_r11,in_lr);
      temp_v7 = (unsigned int)*(unsigned char *)(*(int *)(param_2 + temp_v10 * 4 + 0x10) + 2);
      *(unsigned char *)(temp_v7 + param_1 + 0x164) = 1;
      puVar16[temp_v10 + 0x10] = (unsigned int)*(unsigned char *)(*(int *)(param_2 + temp_v10 * 4 + 0x10) + 2);
      *puVar16 = temp_v4;
    }
    temp_v9 = (unsigned int)param_2[temp_v10 + 4];
    *(unsigned char *)((int)puVar16 + temp_v10 + 4) = param_2[temp_v10 + 4];
    if ((int)temp_v10 < (int)(unsigned int)*param_2) {
      switch(temp_v9) {
      case 0:
      case 1:
        temp_v5 = 1;
        break;
      case 2:
      case 4:
      case 5:
        temp_v5 = 2;
        break;
      case 3:
      case 6:
      case 0xc:
      case 0xd:
        temp_v5 = 4;
        break;
      case 7:
      case 0xe:
        temp_v5 = 8;
        break;
      case 8:
      case 9:
        temp_v5 = 3;
        break;
      case 10:
        temp_v5 = 6;
        break;
      case 0xb:
        temp_v5 = 0xc;
        break;
      case 0xf:
        temp_v5 = 0x10;
        break;
      default:
        temp_v5 = 0;
      }
    }
    else {
      temp_v5 = 0;
    }
    temp_v11 = temp_v10 + 1;
    puVar16[temp_v10 + 4] = temp_v5;
    temp_v10 = temp_v11;
    if (temp_v11 >= 0xc) {
      *puVar7 = 0;
      return;
    }
  } while( 1 );
}
