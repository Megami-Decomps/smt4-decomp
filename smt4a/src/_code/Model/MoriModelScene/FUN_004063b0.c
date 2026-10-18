/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004063b0` (_code @ 0x4063b0, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned char LAB_0040633c; /* 0x40633c */

/* Supplied declaration required: FUN_001630d4. */
/* Supplied declaration required: FUN_002f5020. */
/* Supplied declaration required: FUN_0045a6a4. */
/* Supplied declaration required: FUN_0045ab0c. */
/* Supplied declaration required: FUN_0050d6a4. */


void FUN_004063b0(int param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v2;
  
  if (param_2 == 0) {
    *(unsigned short *)(param_1 + 0xf0) = 2;
    *(unsigned short *)(param_1 + 0xf2) = 2;
    *(unsigned short *)(param_1 + 0xf4) = 1;
    *(unsigned char *)(param_1 + 0xf6) = 0;
    *(unsigned char *)(param_1 + 0xf7) = 0;
    *(unsigned char *)(param_1 + 0xf8) = 1;
    *(unsigned int *)(param_1 + 0xec) = 0xffff;
    param_2 = param_1 + 0xec;
    *(unsigned char *)(param_1 + 0xf9) = 0;
  }
  *(unsigned int *)(param_1 + 0x104) = (unsigned int)*(unsigned short *)(param_2 + 6);
  temp_v0 = param_2;
  FUN_0045ab0c(param_2);
  temp_v1 = 0x10000;
  FUN_001630d4(0x10000,0x100,0,temp_v0,1);
  *(unsigned int *)(param_1 + 0xc) = temp_v1;
  FUN_0045a6a4(param_1 + 0x10,temp_v1,param_2);
  temp_v2 = (unsigned int)*(unsigned short *)(param_1 + 0xf2);
  puVar3 = (unsigned int *)(temp_v2 * 0x704 + 8);
  FUN_0050d6a4(puVar3,"c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelScene.cpp",0x58);
  puVar4 = (unsigned int *)0x0;
  if (puVar3 != (unsigned int *)0x0) {
    puVar4 = puVar3 + 2;
    *puVar3 = 0x704;
    puVar3[1] = temp_v2;
    FUN_002f5020(puVar4,&LAB_0040633c,0x704,temp_v2);
  }
  *(unsigned int **)(param_1 + 0xfc) = puVar4;
  *(unsigned int *)(param_1 + 0x100) = (unsigned int)*(unsigned short *)(param_1 + 0xf2);
  *(int *)(param_1 + 0xe8) = param_1 + 0xfc;
  return;
}
