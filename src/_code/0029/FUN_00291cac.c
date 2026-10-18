/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00291cac` (_code @ 0x291cac, 0x168 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned char LAB_001a959c; /* 0x1a959c */
extern int FUN_001a95b8(); /* 0x1a95b8 */
extern unsigned char LAB_001fc454; /* 0x1fc454 */
extern int FUN_001fc480(); /* 0x1fc480 */
extern unsigned int *DAT_0044cdf0; /* 0x44cdf0 */

/* Supplied declaration required: FUN_00240e1c. */
/* Supplied declaration required: FUN_00289ae8. */
/* Supplied declaration required: FUN_00289b4c. */
/* Supplied declaration required: FUN_0028d974. */
extern int FUN_002c0ba8(unsigned int);
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */
/* Supplied declaration required: FUN_00399594. */
/* Supplied declaration required: FUN_003c2c58. */


void FUN_00291cac(unsigned int param_1,unsigned int param_2)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  char *pcVar3;
  char *pcVar4;
  unsigned char *pbVar5;
  
  puVar1 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x12344,1);
  DAT_0044cdf0 = puVar1;
  *(unsigned char *)((int)puVar1 + 10) = 0;
  *(unsigned char *)((int)puVar1 + 9) = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 1;
  puVar1[0xd] = 0x3f800000;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  *(unsigned char *)(puVar1 + 2) = 0;
  FUN_00399594(puVar1 + 0x10);
  FUN_00289b4c();
  temp_v0 = FUN_002c0ba8(0x16);
  if (temp_v0 == 0) {
    FUN_00289ae8();
  }
  FUN_0028d974();
  FUN_00240e1c(param_2);
  pcVar3 = "NAVI PROC";
  FUN_002c5978("NAVI PROC",2,0,0,FUN_001a95b8,&LAB_001a959c,puVar1);
  *puVar1 = (unsigned int)pcVar3;
  pcVar4 = "NAVI DOWN";
  FUN_002c4c00("NAVI DOWN",0xe5,1,0,FUN_001fc480,0,puVar1,pcVar3);
  puVar1[1] = (unsigned int)pcVar4;
  pcVar3 = "NAVI FADE DRAW";
  FUN_002c4c00("NAVI FADE DRAW",0xe6,0,0,&LAB_001fc454,0,0,*puVar1);
  puVar1[0x48cc] = (unsigned int)pcVar3;
  FUN_003c2c58(puVar1 + 0x48cd,1);
  puVar1 = DAT_0044cdf0;
  if (DAT_0044cdf0 != (unsigned int *)0x0) {
    pbVar5 = (unsigned char *)(DAT_0044cdf0 + 0x48cd);
    if (DAT_0044cdf0[0x48ce] != 2) {
      *(unsigned char *)(DAT_0044cdf0 + 0x48cf) = 0;
      *(unsigned char *)((int)puVar1 + 0x1233e) = 0;
      *(unsigned char *)((int)puVar1 + 0x1233f) = 0;
      puVar1[0x48ce] = 2;
      *(unsigned char *)((int)puVar1 + 0x1233d) = 0;
      *pbVar5 = *pbVar5 | 1;
    }
    return;
  }
  return;
}
