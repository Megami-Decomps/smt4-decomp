/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e1d20` (_code @ 0x1e1d20, 0x188 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern int FUN_0019f2d8(); /* 0x19f2d8 */
extern unsigned char LAB_001e1eb8; /* 0x1e1eb8 */
extern unsigned char LAB_001e1ec8; /* 0x1e1ec8 */
extern unsigned char LAB_001e1ee0; /* 0x1e1ee0 */
extern unsigned char LAB_001e1efc; /* 0x1e1efc */
extern int FUN_001e4c7c(); /* 0x1e4c7c */
extern unsigned char LAB_0020f55c; /* 0x20f55c */
extern unsigned char LAB_002ca010; /* 0x2ca010 */
extern unsigned char LAB_002ca028; /* 0x2ca028 */
extern unsigned char LAB_002e07a8; /* 0x2e07a8 */
extern unsigned char LAB_002f4ae0; /* 0x2f4ae0 */
extern unsigned int DAT_004937c4; /* 0x4937c4 */
extern int DAT_004937c8; /* 0x4937c8 */
extern unsigned char DAT_004937cc; /* 0x4937cc */

/* Supplied declaration required: FUN_0020118c. */
/* Supplied declaration required: FUN_0025c7d8. */
/* Supplied declaration required: FUN_002bf86c. */
/* Supplied declaration required: FUN_002c4c00. */
extern int FUN_002c583c(unsigned int);
/* Supplied declaration required: FUN_002c5978. */


void FUN_001e1d20(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 7 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  
  param_2 = (unsigned int *)*param_2;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  *(unsigned char *)(param_2 + 8) = 0;
  *(unsigned char *)((int)param_2 + 0x21) = 0;
  *(unsigned char *)((int)param_2 + 0x22) = 0;
  *(unsigned char *)((int)param_2 + 0x23) = 0;
  *(unsigned char *)(param_2 + 9) = 0;
  *(unsigned char *)(param_2 + 1) = 0;
  if (param_1 == (unsigned int *)0x0) {
    temp_v0 = FUN_002c583c(2);
    if (temp_v0 == 0) {
      FUN_0025c7d8(0x19);
      FUN_0025c7d8(0x1b);
      FUN_0025c7d8(0x1c);
      FUN_0020118c();
    }
    puVar1 = &LAB_001e1ec8;
    FUN_002c5978(&LAB_001e1ec8,2,0,0,FUN_001e4c7c,&LAB_002ca010,0);
    *param_2 = (unsigned int)puVar1;
    FUN_002c4c00(&LAB_001e1ee0,0x73,0,0,&LAB_0020f55c,&LAB_002e07a8,0,puVar1);
    FUN_002c4c00(&LAB_001e1efc,0xe6,0,0,&LAB_002ca028,&LAB_002f4ae0,0,*param_2);
    return;
  }
  DAT_004937c4 = *param_1;
  DAT_004937c8 = param_1[1];
  if (DAT_004937c8 != -1) {
    DAT_004937cc = 0;
  }
  else {
    FUN_002bf86c(&DAT_004937cc,param_1 + 2);
  }
  puVar1 = &LAB_001e1eb8;
  FUN_002c5978(&LAB_001e1eb8,2,0,0,FUN_0019f2d8,&LAB_002ca010,0);
  *param_2 = (unsigned int)puVar1;
  return;
}
