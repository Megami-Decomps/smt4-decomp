/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c8058` (_code @ 0x3c8058, 0x158 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bcc60(...);
int FUN_002bcd44(...);
int asdOperatorNew(...);
int memAlloc(...);
int FUN_002c38fc(...);
int FUN_002c40f8(...);
int FUN_002c526c(...);

/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern int FUN_003c7ffc(...); /* 0x3c7ffc */
extern unsigned char LAB_003f6ec4; /* 0x3f6ec4 */
extern unsigned char LAB_003f6f80; /* 0x3f6f80 */
extern unsigned char LAB_003f6ff4; /* 0x3f6ff4 */

/* Supplied declaration required: FUN_002bcc60. */
/* Supplied declaration required: FUN_002bcd44. */
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: FUN_002c38fc. */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c526c. */


/* WARNING: Type propagation algorithm not settling */

void FUN_003c8058(int param_1)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int *piVar3;
  int temp_v1;
  int aiStack_30 [3];
  unsigned char *temp_v2;
  unsigned char *temp_v3;
  unsigned char *temp_v4;
  int temp_v5 [2];
  
  FUN_002c38fc(param_1 + 0xb8);
  if (*(int *)(param_1 + 0xac) == 0) {
    temp_v0 = 0x100;
    memAlloc(0x100,0x100,0,0x1000,0x1000,1);
    *(unsigned int *)(param_1 + 0xac) = temp_v0;
  }
  if (*(int *)(param_1 + 0xb0) == 0) {
    puVar2 = (unsigned int *)0x18;
    asdOperatorNew();
    if (puVar2 != (unsigned int *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(unsigned char *)(puVar2 + 4) = 0;
    }
    *(unsigned int **)(param_1 + 0xb0) = puVar2;
    FUN_002bcd44();
  }
  aiStack_30[0] = *(int *)(param_1 + 0xa4);
  if (aiStack_30[0] != 0) {
    piVar3 = aiStack_30 + 1;
    FUN_002c40f8(piVar3,aiStack_30,1,0,0,0);
    if ((int)piVar3 < 0) {
      FUN_002c526c();
    }
    if (((unsigned int)piVar3 & 0x3ff) == 0x3fe) {
      return;
    }
  }
  aiStack_30[2] = 4;
  temp_v2 = &LAB_003f6ec4;
  temp_v1 = param_1 + 0xa4;
  temp_v3 = &LAB_003f6ff4;
  temp_v4 = &LAB_003f6f80;
  aiStack_30[0] = 0;
  aiStack_30[1] = 0;
  temp_v5[0] = param_1;
  FUN_002bcc60(temp_v1,aiStack_30 + 2,FUN_003c7ffc,temp_v5,
               *(int *)(*(int *)(param_1 + 0xb0) + 0xc) + *(int *)(*(int *)(param_1 + 0xb0) + 8),
               0x11);
  if (temp_v1 < 0) {
    FUN_002c526c();
  }
  return;
}

} /* extern "C" */
