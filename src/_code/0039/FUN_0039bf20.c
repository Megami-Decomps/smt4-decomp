/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039bf20` (_code @ 0x39bf20, 0x314 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
} param_1_stack;

extern unsigned char LAB_0039c24c; /* 0x39c24c */
extern unsigned int DAT_0044cdcc; /* 0x44cdcc */
extern unsigned int DAT_0044cdd0; /* 0x44cdd0 */
extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002bcf58. */
/* Supplied declaration required: FUN_002be77c. */
/* Supplied declaration required: FUN_002bef14. */
/* Supplied declaration required: FUN_002bef7c. */
/* Supplied declaration required: FUN_002bef88. */
/* Supplied declaration required: FUN_002befdc. */
/* Supplied declaration required: FUN_002bf460. */
/* Supplied declaration required: FUN_002bf558. */
/* Supplied declaration required: FUN_002bf6d0. */
/* Supplied declaration required: FUN_002bf710. */
/* Supplied declaration required: FUN_002bf9f0. */
extern unsigned int FUN_002c5f7c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c615c. */


void FUN_0039bf20(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 14 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int *puVar6;
  unsigned int temp_v6;
  unsigned int in_fpscr;
  float temp_v7;
  float afStack_98 [18];
  unsigned char temp_v8 [32];
  int temp_v9;
  
  temp_v0 = FUN_002c5f7c(1,0);
  FUN_002befdc(DAT_0044ea00,3,temp_v0);
  FUN_002bf710();
  FUN_002bef14();
  temp_v9 = param_1 + 0x9f8;
  temp_v0 = FUN_002bef7c();
  FUN_002bf558(2,0x1c,0x1d,temp_v0,0,0xd3);
  FUN_002c615c(*(int *)(param_1 + 0x9f0) + 1,DAT_0044cdcc);
  puVar6 = (unsigned int *)(param_1 + 0x9f4);
  *(int *)(param_1 + 0x9f0) = temp_v3;
  if (temp_v3 < 1) {
    *puVar6 = *(int *)(param_1 + 0x9f4) + 1;
  }
  temp_v5 = 0;
  temp_v4 = *(unsigned int *)(param_1 + 0x9f4) & 7;
  temp_v6 = (temp_v4 + 1) & 7;
  *puVar6 = temp_v4;
  do {
    temp_v1 = FUN_002bf6d0(0x1c,temp_v5 + 0x1124);
    temp_v7 = (float)VectorSignedToFloat((int)*(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    afStack_98[temp_v5 * 2] = temp_v7;
    temp_v7 = (float)VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    afStack_98[temp_v5 * 2 + 1] = temp_v7;
    temp_v2 = FUN_002bef7c(temp_v9);
    FUN_002bf460(1,0x1c,0x1121,temp_v2 + *(short *)(temp_v1 + 8),(int)*(short *)(temp_v1 + 10),6);
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 9);
  temp_v0 = FUN_002bef7c(temp_v9);
  temp_v7 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002bf460(1,0x1c,0x1123,(int)(temp_v7 + afStack_98[*(int *)(param_1 + 0x9f4) * 2]),
               (int)afStack_98[*(int *)(param_1 + 0x9f4) * 2 + 1],6);
  temp_v0 = FUN_002bef7c(temp_v9);
  temp_v7 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002bf460(1,0x1c,0x1122,(int)(temp_v7 + afStack_98[temp_v6 * 2]),(int)afStack_98[temp_v6 * 2 + 1],6);
  temp_v4 = (*puVar6 + 4) & 7;
  temp_v6 = (temp_v4 + 1) & 7;
  temp_v0 = FUN_002bef7c(temp_v9);
  temp_v7 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002bf460(1,0x1c,0x1123,(int)(temp_v7 + afStack_98[temp_v4 * 2]),(int)afStack_98[temp_v4 * 2 + 1],6);
  temp_v0 = FUN_002bef7c(temp_v9);
  temp_v7 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002bf460(1,0x1c,0x1122,(int)(temp_v7 + afStack_98[temp_v6 * 2]),(int)afStack_98[temp_v6 * 2 + 1],6);
  temp_v5 = FUN_002bf6d0(0x1c,0x1120);
  FUN_002bcf58(temp_v8,&LAB_0039c24c,0x1b);
  temp_v1 = FUN_002bef7c(temp_v9);
  VectorSignedToFloat((temp_v1 - 0xe) + (int)*(short *)(temp_v5 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)*(short *)(temp_v5 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002be77c(4,DAT_0044cdd0,temp_v8);
  FUN_002bef88(DAT_0044ea00,3);
  FUN_002bf710();
  FUN_002bf9f0(temp_v9);
  if ((*(char *)(param_1 + 0x9ed) != '\0') && (*(char *)(temp_v9 + 0x8a) != '\0')) {
    *(unsigned char *)(param_1 + 0x9ee) = 1;
  }
  return;
}
