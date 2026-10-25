/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ab550` (_code @ 0x3ab550, 0x1b0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "classes/Obj42242c.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

extern "C" {

void entryTableClear(void *table);
int rectangleInitializeSelection(...);
int FUN_00233240(...);
int uiInitializeEightTimerSet(...);
int FUN_00233670(...);
int FUN_0029ee6c(...);
int asdMemAlloc(int, int, int, int, int);
int taskCreateDraw(...);
int _ZN9Obj4224489buildListEv(...);
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
extern int *DAT_0043d9f8; /* 0x43d9f8 */

/* Supplied declaration required: entryTableClear. */
/* Supplied declaration required: rectangleInitializeSelection. */
/* Supplied declaration required: FUN_00233240. */
/* Supplied declaration required: uiInitializeEightTimerSet. */
/* Supplied declaration required: FUN_00233670. */
/* Supplied declaration required: FUN_0029ee6c. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: _ZN9Obj4224489buildListEv. */
/* Supplied declaration required: spriteTable22Acquire. */
/* Supplied declaration required: FUN_003ad0e0. */


void FUN_003ab550(int *param_1)

{
/* irregular: 13 native warning(s); review required */
  int *piVar1;
  unsigned char *puVar2;
  unsigned char *puVar3;
  
  param_1[5] = 0;
  param_1[6] = 0;
  *(unsigned char *)(param_1 + 0x25) = 0;
  *(unsigned char *)(param_1 + 0x296c) = 0;
  entryTableClear(param_1 + 0x16a);
  (**(romwright_code **)(*param_1 + 0x20))(param_1);
  spriteTable22Acquire();
  piVar1 = (int *)0x100;
  asdMemAlloc(0x100,0x100,0,4,1);
  DAT_0043d9f8 = piVar1;
  *piVar1 = (int)param_1;
  puVar2 = &LAB_003ab744;
  asdProcessCreateSimple(reinterpret_cast<const s8 *>(&LAB_003ab744), 2, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(&LAB_003ace14), reinterpret_cast<AsdProcFunc>(&LAB_003ace3c), reinterpret_cast<u32>(piVar1));
  param_1[1] = (int)puVar2;
  puVar3 = &LAB_003ab760;
  taskCreateDraw(&LAB_003ab760,0x6f,1,0,&LAB_003ad068,0,DAT_0043d9f8,puVar2);
  param_1[2] = (int)puVar3;
  puVar2 = &LAB_003ab77c;
  taskCreateDraw(&LAB_003ab77c,0xe6,1,0,&LAB_003ad368,0,DAT_0043d9f8,param_1[1]);
  param_1[3] = (int)puVar2;
  rectangleInitializeSelection(param_1 + 0x32,0x140,0,0x1d);
  uiInitializeEightTimerSet(param_1 + 0x37);
  FUN_00233240(param_1 + 0x37,0);
  FUN_00233240(param_1 + 0x37,1);
  // The allocation owner is not initialized in the retail code.
  void *allocationOwner;
  Obj42242c *controller = new (allocationOwner) Obj42242c;
  param_1[0x164] = (int)controller;
  controller->rectangle = param_1 + 0x32;
  _ZN9Obj4224489buildListEv(param_1);
  FUN_00233670(param_1 + 0x157,0x1d,0x40e,10);
  *(unsigned char *)(param_1 + 0x15b) = 1;
  FUN_0029ee6c(0,0x323232ff);
  FUN_003ad0e0();
  param_1[5] = 1;
  param_1[6] = 0;
  return;
}

} /* extern "C" */
