/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027ee6c` (_code @ 0x27ee6c, 0x1b4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int FUN_001e5448(); /* 0x1e5448 */
extern unsigned char LAB_0027f060; /* 0x27f060 */
extern unsigned char LAB_0027f074; /* 0x27f074 */
extern unsigned char LAB_0027f088; /* 0x27f088 */
extern unsigned char LAB_002ca030; /* 0x2ca030 */
extern int FUN_002ca048(); /* 0x2ca048 */
extern unsigned char LAB_002ca650; /* 0x2ca650 */
extern unsigned char LAB_002f4ae4; /* 0x2f4ae4 */
extern unsigned char LAB_002f4ae8; /* 0x2f4ae8 */
extern unsigned int *DAT_004475b8; /* 0x4475b8 */
extern int DAT_0049f91c; /* 0x49f91c */

/* Supplied declaration required: FUN_0025c374. */
extern int FUN_002c2b1c(void);
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */


void FUN_0027ee6c(int *param_1)

{
/* irregular: 1 goto(s); 5 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned char *puVar4;
  
  puVar1 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x80,1);
  DAT_004475b8 = puVar1;
  temp_v0 = FUN_002c2b1c();
  if (param_1 != (int *)0x0) {
    temp_v1 = *param_1;
    if (temp_v1 != 0) {
      if (temp_v1 != 1) {
        if (temp_v1 != 2) goto LAB_0027ef94;
        FUN_0025c374(puVar1,0);
        puVar1[3] = 2;
        puVar1[5] = param_1[2];
      }
      else {
        FUN_0025c374(puVar1,0);
        puVar1[3] = 1;
        puVar1[5] = param_1[2];
      }
    }
    else {
      FUN_0025c374(puVar1,1);
      puVar1[3] = 0;
      puVar1[4] = param_1[1];
      *(int *)(temp_v0 + 0x24) = param_1[1];
    }
    if (DAT_0049f91c >= 100) {
      puVar1[0x12] = param_1[4];
      puVar1[0x13] = param_1[5];
      puVar1[0x14] = param_1[6];
      puVar1[0x15] = param_1[7];
    }
  }
  else {
    FUN_0025c374(puVar1,1);
  }
LAB_0027ef94:
  *(unsigned char *)(puVar1 + 2) = 0;
  puVar4 = &LAB_0027f060;
  FUN_002c5978(&LAB_0027f060,2,0,0,FUN_001e5448,&LAB_002ca030,0);
  *puVar1 = (unsigned int)puVar4;
  FUN_002c4c00(&LAB_0027f074,0x6f,0,0,&LAB_002ca650,&LAB_002f4ae8,0,puVar4);
  FUN_002c4c00(&LAB_0027f088,0x73,0,0,FUN_002ca048,&LAB_002f4ae4,0,*puVar1);
  return;
}
