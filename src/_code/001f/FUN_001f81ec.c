/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f81ec` (_code @ 0x1f81ec, 0xc0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_001e4ae4; /* 0x1e4ae4 */
extern unsigned char LAB_001f8298; /* 0x1f8298 */
extern int FUN_002c45a0(); /* 0x2c45a0 */
extern int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_0021446c. */
/* Supplied declaration required: FUN_00223268. */
/* Supplied declaration required: FUN_00267f68. */
/* Supplied declaration required: FUN_002983dc. */
/* Supplied declaration required: FUN_0029bc30. */
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002ce234. */


/* WARNING: Removing unreachable block (ram,0x002bdaf4) */

void FUN_001f81ec(unsigned int *param_1)

{
/* irregular: 9 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  int temp_v1;
  
  puVar1 = &LAB_001f8298;
  FUN_002c4c00(&LAB_001f8298,2,0,0,&LAB_001e4ae4,FUN_002c45a0,param_1,*param_1);
  param_1[1] = (unsigned int)puVar1;
  FUN_0029bc30();
  FUN_0021446c(param_1 + 0x5d);
  FUN_00223268(param_1 + 0x6d);
  temp_v0 = 0;
  if (temp_v0 < (int)param_1[0xfc]) {
    do {
      FUN_002ce234(param_1 + temp_v0 * 2 + 0x7c);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < (int)param_1[0xfc]);
  }
  param_1[0xfc] = 0;
  FUN_00267f68(DAT_00439ca8);
  temp_v0 = DAT_00439ca8;
  *(unsigned int *)(DAT_00439ca8 + 0x7e38) = 0x10;
  if (*(int *)(temp_v0 + 0x54a8) == 0) {
    return;
  }
  FUN_002983dc(temp_v0 + 0x2460,0x27,1);
  temp_v1 = *(int *)(temp_v0 + 0x3764);
  if (temp_v1 == 0) {
    return;
  }
  *(unsigned short *)(temp_v0 + 0x3768) = 9;
  *(unsigned short *)(temp_v0 + 0x376a) = 0;
  *(unsigned char *)(temp_v0 + 0x379e) = 0;
  *(unsigned char *)(temp_v0 + 0x37a2) = 0;
  *(unsigned char *)(temp_v0 + 0x376c) = 0;
  *(int *)(temp_v0 + 0x3724) = (int)*(short *)(temp_v1 + 0x6c) << 0xc;
  *(int *)(temp_v0 + 0x3728) = (int)*(short *)(temp_v1 + 0x6e) << 0xc;
  return;
}
