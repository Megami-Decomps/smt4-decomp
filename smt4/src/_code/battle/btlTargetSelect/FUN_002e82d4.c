/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e82d4` (_code @ 0x2e82d4, 0x1b0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern int FUN_002e0730(); /* 0x2e0730 */
extern unsigned char LAB_002e84dc; /* 0x2e84dc */
extern unsigned char LAB_002e84f8; /* 0x2e84f8 */
extern unsigned char LAB_002e8510; /* 0x2e8510 */
extern int FUN_002f4aec(); /* 0x2f4aec */
extern int FUN_00309424(); /* 0x309424 */
extern unsigned char LAB_00349210; /* 0x349210 */
extern unsigned char DAT_004017f4; /* 0x4017f4 */
extern unsigned char DAT_004208bc; /* 0x4208bc */
extern int *DAT_00439c60; /* 0x439c60 */

/* Supplied declaration required: FUN_002bd954. */
/* Supplied declaration required: FUN_002c222c. */
/* Supplied declaration required: FUN_002c312c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c5300. */
/* Supplied declaration required: FUN_002c5d5c. */
/* Supplied declaration required: FUN_002eb76c. */
/* Supplied declaration required: FUN_00342fbc. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_002e82d4(unsigned int *param_1)

{
/* irregular: 12 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned char *puVar6;
  
  piVar1 = (int *)0x100;
  FUN_002c5300(0x100,0x100,0,0xb8,1);
  temp_v0 = 300;
  DAT_00439c60 = piVar1;
  FUN_002c222c(300,param_1);
  if (temp_v0 != 0) {
    FUN_00342fbc();
  }
  *piVar1 = temp_v0;
  puVar3 = (unsigned int *)0x60;
  FUN_002c222c(0x60,param_1);
  puVar5 = (unsigned int *)0x0;
  if (puVar3 != (unsigned int *)0x0) {
    puVar4 = puVar3 + 1;
    *puVar3 = (unsigned int)&DAT_004208bc;
    FUN_002c5d5c(puVar4,&LAB_00349210,0x10,5);
    puVar5 = puVar4 + -1;
    *(unsigned char *)((int)puVar4 + 0xf) = 0;
    *(unsigned char *)((int)puVar4 + 0x1f) = 0;
    *(unsigned char *)((int)puVar4 + 0x2f) = 0;
    *(unsigned char *)((int)puVar4 + 0x3f) = 0;
    *(unsigned char *)((int)puVar4 + 0x4f) = 0;
    puVar4[0x15] = 0;
    puVar4[0x16] = 0x42200000;
  }
  piVar1[1] = (int)puVar5;
  *(unsigned char *)(piVar1 + 2) = 0;
  puVar6 = &LAB_002e84dc;
  FUN_002c4a08(&LAB_002e84dc,2,0,0,FUN_002e0730,FUN_00309424,piVar1,*param_1);
  param_1[7] = (unsigned int)puVar6;
  FUN_002c4a08(&LAB_002e84f8,0x7a,0,0,FUN_002f4aec,0,piVar1,puVar6);
  FUN_002c4a08(&LAB_002e8510,0xd8,0,0,FUN_002f4aec,0,piVar1,param_1[7]);
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(piVar1 + 3);
  FUN_002c312c(piVar1 + 3,0,0,0,0,0,0,&DAT_004017f4,0x10,0,0);
  FUN_002bd954(piVar1 + 0xb,0x14,0x71,piVar1 + 3,1);
  FUN_002eb76c(piVar1 + 0xb,0);
  return;
}
