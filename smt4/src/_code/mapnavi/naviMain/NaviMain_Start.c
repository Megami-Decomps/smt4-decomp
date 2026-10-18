/* NON_MATCHING: romwright 0.5.0 decompilation of `NaviMain_Start` (_code @ 0x291a08, 0x168 bytes) from smt4_v1.2.0.cxi.
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

extern unsigned char LAB_001a96a4; /* 0x1a96a4 */
extern int NAVI_PROC(); /* 0x1a96c0 */
extern unsigned char LAB_001fc4f8; /* 0x1fc4f8 */
extern int NAVI_DOWN(); /* 0x1fc524 */
extern unsigned int *DAT_0044cdf0; /* 0x44cdf0 */

/* Supplied declaration required: FUN_00240cec. */
/* Supplied declaration required: FUN_00289880. */
/* Supplied declaration required: FUN_002898e4. */
/* Supplied declaration required: FUN_0028d6d0. */
extern int FUN_002c09d0(unsigned int);
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c5788. */
/* Supplied declaration required: NaviMain_InitInstance. */
/* Supplied declaration required: NaviMain_ResetFlags. */


void NaviMain_Start(unsigned int param_1,unsigned int param_2)

{
/* irregular: 11 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  char *pcVar3;
  char *pcVar4;
  unsigned char *pbVar5;
  
  puVar1 = (unsigned int *)0x100;
  FUN_002c498c(0x100,0x100,0,0x12344,1);
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
  NaviMain_InitInstance(puVar1 + 0x10);
  FUN_002898e4();
  temp_v0 = FUN_002c09d0(0x16);
  if (temp_v0 == 0) {
    FUN_00289880();
  }
  FUN_0028d6d0();
  FUN_00240cec(param_2);
  pcVar3 = "NAVI PROC";
  FUN_002c5788("NAVI PROC",2,0,0,NAVI_PROC,&LAB_001a96a4,puVar1);
  *puVar1 = (unsigned int)pcVar3;
  pcVar4 = "NAVI DOWN";
  FUN_002c4a08("NAVI DOWN",0xe5,1,0,NAVI_DOWN,0,puVar1,pcVar3);
  puVar1[1] = (unsigned int)pcVar4;
  pcVar3 = "NAVI FADE DRAW";
  FUN_002c4a08("NAVI FADE DRAW",0xe6,0,0,&LAB_001fc4f8,0,0,*puVar1);
  puVar1[0x48cc] = (unsigned int)pcVar3;
  NaviMain_ResetFlags(puVar1 + 0x48cd,1);
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
