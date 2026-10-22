/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002758fc` (_code @ 0x2758fc, 0x10c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(...);
int asdMemoryAlloc(...);
int sysPlaySe(...);
int asdLoadFileSyncDefault(...);
int FUN_0022677c(...);
int FUN_00275bc8(...);
int scrScriptProcessStartEntry(...);
int campCommonBgAcquire(...);
int campButtonHelpAcquire(...);
int FUN_003b61ec(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int onesRoomTeardown(...); /* 0x235d1c */
extern unsigned char LAB_00275a40; /* 0x275a40 */
extern unsigned char LAB_00275a58; /* 0x275a58 */
extern unsigned char LAB_00275a78; /* 0x275a78 */
extern unsigned char LAB_002ba790; /* 0x2ba790 */
extern unsigned int *g_onesRoom; /* 0x588134 */

/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: asdMemoryAlloc. */
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: asdLoadFileSyncDefault. */
/* Supplied declaration required: FUN_0022677c. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: campCommonBgAcquire. */
/* Supplied declaration required: campButtonHelpAcquire. */
/* Supplied declaration required: FUN_003b61ec. */


void FUN_002758fc(int param_1)

{
/* irregular: 11 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  int temp_v0;
  
  puVar1 = (unsigned int *)0x100;
  asdMemoryAlloc(0x100,0x100,0,0x14,1);
  g_onesRoom = puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  if (param_1 == 0) {
    *(unsigned char *)(puVar1 + 4) = 1;
  }
  campCommonBgAcquire();
  campButtonHelpAcquire();
  FUN_003b61ec();
  sysPlaySe(0xa4);
  puVar2 = &LAB_00275a40;
  asdLoadFileSyncDefault();
  puVar1[1] = (unsigned int)puVar2;
  puVar2 = &LAB_00275a58;
  asdLoadFileSyncDefault();
  puVar1[3] = (unsigned int)puVar2;
  temp_v0 = puVar1[1];
  FUN_00275bc8(temp_v0,puVar2);
  puVar1[2] = temp_v0;
  *(unsigned int *)(temp_v0 + 0x108) = 2;
  scrScriptProcessStartEntry(puVar1[2],0);
  *(unsigned char *)((int)puVar1 + 0x11) = 0;
  if (*(char *)(puVar1 + 4) != '\0') {
    FUN_0022677c(0,0xff);
    FUN_0022677c(1,0xff);
  }
  puVar2 = &LAB_00275a78;
  asdProcessCreateSimple(&LAB_00275a78,4,0,0,onesRoomTeardown,&LAB_002ba790,g_onesRoom);
  *g_onesRoom = (unsigned int)puVar2;
  return;
}

} /* extern "C" */
