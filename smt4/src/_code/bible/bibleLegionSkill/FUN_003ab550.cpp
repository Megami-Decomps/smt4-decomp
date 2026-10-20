/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ab550` (_code @ 0x3ab550, 0x1b0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022e2fc(int *);
int FUN_0023266c(...);
int FUN_00233240(...);
int FUN_0023346c(...);
int FUN_00233670(...);
int FUN_0029ee6c(...);
int asdOperatorNew(void);
int asdMemAlloc(int, int, int, int, int);
int taskCreateDraw(...);
int asdProcessCreateSimple(unsigned char *, int, int, int, unsigned char *, unsigned char *, int *);
int FUN_003aaeb0(...);
int spriteTable22Acquire(void);
int FUN_003ad0e0(void);

typedef int romwright_code(...);
/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char LAB_003ab744; /* 0x3ab744 */
extern unsigned char LAB_003ab760; /* 0x3ab760 */
extern unsigned char LAB_003ab77c; /* 0x3ab77c */
extern unsigned char LAB_003ace14; /* 0x3ace14 */
extern unsigned char LAB_003ace3c; /* 0x3ace3c */
extern unsigned char LAB_003ad068; /* 0x3ad068 */
extern unsigned char LAB_003ad368; /* 0x3ad368 */
extern unsigned char DAT_00422434; /* 0x422434 */
extern int *DAT_0043d9f8; /* 0x43d9f8 */

/* Supplied declaration required: FUN_0022e2fc. */
/* Supplied declaration required: FUN_0023266c. */
extern unsigned int *FUN_00233228(void);
/* Supplied declaration required: FUN_00233240. */
/* Supplied declaration required: FUN_0023346c. */
/* Supplied declaration required: FUN_00233670. */
/* Supplied declaration required: FUN_0029ee6c. */
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: FUN_003aaeb0. */
/* Supplied declaration required: spriteTable22Acquire. */
/* Supplied declaration required: FUN_003ad0e0. */


void FUN_003ab550(int *param_1)

{
/* irregular: 13 native warning(s); review required */
  int *piVar1;
  unsigned char *puVar2;
  unsigned char *puVar3;
  int temp_v0;
  unsigned int *puVar5;
  
  param_1[5] = 0;
  param_1[6] = 0;
  *(unsigned char *)(param_1 + 0x25) = 0;
  *(unsigned char *)(param_1 + 0x296c) = 0;
  FUN_0022e2fc(param_1 + 0x16a);
  (**(romwright_code **)(*param_1 + 0x20))(param_1);
  spriteTable22Acquire();
  piVar1 = (int *)0x100;
  asdMemAlloc(0x100,0x100,0,4,1);
  DAT_0043d9f8 = piVar1;
  *piVar1 = (int)param_1;
  puVar2 = &LAB_003ab744;
  asdProcessCreateSimple(&LAB_003ab744,2,0,0,&LAB_003ace14,&LAB_003ace3c,piVar1);
  param_1[1] = (int)puVar2;
  puVar3 = &LAB_003ab760;
  taskCreateDraw(&LAB_003ab760,0x6f,1,0,&LAB_003ad068,0,DAT_0043d9f8,puVar2);
  param_1[2] = (int)puVar3;
  puVar2 = &LAB_003ab77c;
  taskCreateDraw(&LAB_003ab77c,0xe6,1,0,&LAB_003ad368,0,DAT_0043d9f8,param_1[1]);
  param_1[3] = (int)puVar2;
  FUN_0023266c(param_1 + 0x32,0x140,0,0x1d);
  FUN_0023346c(param_1 + 0x37);
  FUN_00233240(param_1 + 0x37,0);
  FUN_00233240(param_1 + 0x37,1);
  temp_v0 = 0x68;
  asdOperatorNew();
  puVar5 = (unsigned int *)0x0;
  if (temp_v0 != 0) {
    puVar5 = (unsigned int *)FUN_00233228();
    *puVar5 = (unsigned int)&DAT_00422434;
  }
  param_1[0x164] = (int)puVar5;
  puVar5[0x19] = (unsigned int)(param_1 + 0x32);
  FUN_003aaeb0(param_1);
  FUN_00233670(param_1 + 0x157,0x1d,0x40e,10);
  *(unsigned char *)(param_1 + 0x15b) = 1;
  FUN_0029ee6c(0,0x323232ff);
  FUN_003ad0e0();
  param_1[5] = 1;
  param_1[6] = 0;
  return;
}

} /* extern "C" */
