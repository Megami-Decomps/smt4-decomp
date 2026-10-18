/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035708c` (_code @ 0x35708c, 0x244 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_5_stack;

extern unsigned int FUN_002bc11c(unsigned int);
/* Supplied declaration required: FUN_002c2424. */
/* Supplied declaration required: FUN_003deae0. */


void FUN_0035708c(int param_1,unsigned char *param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5
                 )

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  short temp_v1;
  short temp_v2;
  short temp_v3;
  short *psVar5;
  unsigned int temp_v4;
  unsigned int *puVar7;
  short temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  short *psVar16;
  short *psVar17;
  unsigned int *puVar18;
  
  FUN_003deae0(param_3,*(unsigned int *)(param_1 + 8),param_4,param_5,0xffffffff,param_1,param_2,
               param_3,param_4);
  temp_v6 = *(int *)(param_1 + 4);
  if (temp_v6 != 0) {
    psVar5 = *(short **)(param_1 + 0xc);
    temp_v5 = 0;
    psVar13 = psVar5 + 2;
    psVar14 = psVar5 + 3;
    psVar15 = psVar5 + 4;
    psVar16 = psVar5 + 5;
    psVar17 = psVar5 + 1;
    do {
      temp_v1 = temp_v5 * 4 + 2;
      temp_v2 = temp_v5 * 4 + 1;
      *psVar5 = temp_v5 << 2;
      *psVar17 = temp_v1;
      *psVar13 = temp_v2;
      temp_v3 = temp_v5 * 4;
      *psVar14 = temp_v1;
      *psVar15 = temp_v2;
      temp_v6 = temp_v6 - 1;
      temp_v5 = temp_v5 + 1;
      *psVar16 = temp_v3 + 3;
      psVar5 = psVar5 + 6;
      psVar13 = psVar13 + 6;
      psVar14 = psVar14 + 6;
      psVar15 = psVar15 + 6;
      psVar16 = psVar16 + 6;
      psVar17 = psVar17 + 6;
    } while (temp_v6 != 0);
  }
  FUN_002c2424(*(unsigned int *)(param_1 + 8),*(int *)(param_1 + 4) * 0x90);
  FUN_002c2424(*(unsigned int *)(param_1 + 0xc),*(int *)(param_1 + 4) * 0xc);
  temp_v4 = FUN_002bc11c(*(unsigned int *)(param_1 + 0xc));
  *(unsigned int *)(param_1 + 0x7a0) = temp_v4;
  *(unsigned char *)(param_1 + 0x7a8) = 0;
  *(int *)(param_1 + 0x7a4) = *(int *)(param_1 + 4) * 6;
  temp_v4 = FUN_002bc11c(*(unsigned int *)(param_1 + 8));
  puVar7 = (unsigned int *)(param_1 + 0x10);
  puVar18 = (unsigned int *)0x0;
  temp_v6 = 0;
  do {
    if (puVar7[temp_v6 * 0x1c + 0x58] == 0) {
      puVar18 = puVar7 + temp_v6 * 0x1c + 0x58;
      break;
    }
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 0xc);
  temp_v7 = 0;
  do {
    if (*(int *)(param_2 + temp_v7 * 4 + 0x10) == 0) {
      puVar18[temp_v7 + 0x10] = 0xffffffff;
    }
    else {
      puVar18[temp_v7 + 0x10] = (unsigned int)*(unsigned char *)(*(int *)(param_2 + temp_v7 * 4 + 0x10) + 2);
      *puVar18 = temp_v4;
    }
    temp_v0 = param_2[temp_v7 + 4];
    *(unsigned char *)((int)puVar18 + temp_v7 + 4) = temp_v0;
    if ((int)temp_v7 < (int)(unsigned int)*param_2) {
      switch(temp_v0) {
      case 0:
      case 1:
        temp_v9 = 1;
        break;
      case 2:
      case 4:
      case 5:
        temp_v9 = 2;
        break;
      case 3:
      case 6:
      case 0xc:
      case 0xd:
        temp_v9 = 4;
        break;
      case 7:
      case 0xe:
        temp_v9 = 8;
        break;
      case 8:
      case 9:
        temp_v9 = 3;
        break;
      case 10:
        temp_v9 = 6;
        break;
      case 0xb:
        temp_v9 = 0xc;
        break;
      case 0xf:
        temp_v9 = 0x10;
        break;
      default:
        temp_v9 = 0;
      }
    }
    else {
      temp_v9 = 0;
    }
    temp_v8 = temp_v7 + 1;
    puVar18[temp_v7 + 4] = temp_v9;
    temp_v7 = temp_v8;
    if (temp_v8 >= 0xc) {
      *puVar7 = 0;
      return;
    }
  } while( 1 );
}
