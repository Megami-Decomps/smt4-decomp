/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00290484` (_code @ 0x290484, 0x148 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014afd0(...);
int asdProcessCreateSimple(...);
int taskCreateDraw(...);
int asdMemoryAlloc(...);
int asdLoadFileSyncDefault(...);
int FUN_0022677c(...);
int FUN_00275bc8(...);
int sysMemClear(...);
int campCommonBgAcquire(...);
int campButtonHelpAcquire(...);
int FUN_003b61ec(...);
int loadSlotEnsureLoaded(...);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int FUN_00241058(...); /* 0x241058 */
extern unsigned char LAB_0029060c; /* 0x29060c */
extern unsigned char LAB_00290624; /* 0x290624 */
extern unsigned char LAB_00290648; /* 0x290648 */
extern unsigned char LAB_00290658; /* 0x290658 */
extern unsigned char LAB_00290664; /* 0x290664 */
extern int FUN_00290688(...); /* 0x290688 */
extern int clearSaveDestroy(...); /* 0x2cdfe0 */
extern unsigned int *g_clearSave; /* 0x57f394 */

/* Supplied declaration required: FUN_0014afd0. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdMemoryAlloc. */
/* Supplied declaration required: asdLoadFileSyncDefault. */
/* Supplied declaration required: FUN_0022677c. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: campCommonBgAcquire. */
/* Supplied declaration required: campButtonHelpAcquire. */
/* Supplied declaration required: FUN_003b61ec. */
/* Supplied declaration required: loadSlotEnsureLoaded. */


void FUN_00290484(int param_1)

{
/* irregular: 15 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  int temp_v0;
  
  puVar1 = (unsigned int *)0x100;
  asdMemoryAlloc(0x100,0x100,0,0x98,1);
  g_clearSave = puVar1;
  sysMemClear();
  if (param_1 == 0) {
    *(unsigned char *)(g_clearSave + 2) = 1;
  }
  puVar1 = g_clearSave;
  loadSlotEnsureLoaded(0x3c);
  campCommonBgAcquire();
  campButtonHelpAcquire();
  FUN_003b61ec();
  puVar2 = &LAB_0029060c;
  asdLoadFileSyncDefault();
  puVar1[0x23] = (unsigned int)puVar2;
  puVar2 = &LAB_00290624;
  asdLoadFileSyncDefault();
  puVar1[0x25] = (unsigned int)puVar2;
  temp_v0 = puVar1[0x23];
  FUN_00275bc8(temp_v0,puVar2);
  puVar1[0x24] = temp_v0;
  *(unsigned int *)(temp_v0 + 0x108) = 2;
  FUN_0014afd0(0,0x83);
  if (*(char *)(puVar1 + 2) != '\0') {
    FUN_0022677c(0,0xff);
    FUN_0022677c(1,0xff);
  }
  puVar2 = &LAB_00290648;
  asdProcessCreateSimple(&LAB_00290648,4,0,0,FUN_00241058,clearSaveDestroy,g_clearSave);
  puVar1 = g_clearSave;
  *g_clearSave = (unsigned int)puVar2;
  taskCreateDraw(&LAB_00290658,0x65,0,0,FUN_00290688,0,puVar1,puVar2);
  taskCreateDraw(&LAB_00290664,0xcc,0,0,FUN_00290688,0,g_clearSave,*g_clearSave);
  return;
}

} /* extern "C" */
