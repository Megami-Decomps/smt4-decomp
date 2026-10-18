/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033a648` (_code @ 0x33a648, 0x170 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern int FUN_00339d98(); /* 0x339d98 */
extern unsigned char LAB_003f70a0; /* 0x3f70a0 */
extern unsigned char LAB_003f7170; /* 0x3f7170 */
extern unsigned char LAB_003f720c; /* 0x3f720c */

/* Supplied declaration required: FUN_002bce50. */
/* Supplied declaration required: FUN_002bcf34. */
/* Supplied declaration required: FUN_002c23f8. */
extern int FUN_002c34a4(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c3b00. */
/* Supplied declaration required: FUN_002c42fc. */
/* Supplied declaration required: FUN_002c5468. */


/* WARNING: Type propagation algorithm not settling */

void FUN_0033a648(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int aiStack_38 [3];
  unsigned char *temp_v1;
  unsigned char *temp_v2;
  unsigned char *temp_v3;
  int temp_v4 [2];
  
  FUN_002c3b00(param_1 + 0x4a00);
  if (*(int *)(param_1 + 0x49f4) == 0) {
    temp_v0 = FUN_002c34a4(0x100,0x100,0,0x1000,0x1000,1);
    *(int *)(param_1 + 0x49f4) = temp_v0;
  }
  piVar5 = (int *)(param_1 + 0x49f8);
  if (*piVar5 == 0) {
    puVar2 = (unsigned int *)0x18;
    FUN_002c23f8();
    if (puVar2 != (unsigned int *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(unsigned char *)(puVar2 + 4) = 0;
    }
    *piVar5 = (int)puVar2;
    FUN_002bcf34();
  }
  piVar4 = (int *)(param_1 + 0x49ec);
  aiStack_38[0] = *piVar4;
  if (aiStack_38[0] != 0) {
    piVar3 = aiStack_38 + 1;
    FUN_002c42fc(piVar3,aiStack_38,1,0,0,0);
    if ((int)piVar3 < 0) {
      FUN_002c5468();
    }
    if (((unsigned int)piVar3 & 0x3ff) == 0x3fe) {
      return;
    }
  }
  aiStack_38[2] = 4;
  temp_v1 = &LAB_003f70a0;
  temp_v2 = &LAB_003f720c;
  temp_v3 = &LAB_003f7170;
  aiStack_38[0] = 0;
  aiStack_38[1] = 0;
  temp_v4[0] = param_1;
  FUN_002bce50(piVar4,aiStack_38 + 2,FUN_00339d98,temp_v4,
               *(int *)(*piVar5 + 0xc) + *(int *)(*piVar5 + 8),0x11);
  if ((int)piVar4 < 0) {
    FUN_002c5468();
  }
  return;
}
