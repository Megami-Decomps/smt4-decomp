/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a6fb8` (_code @ 0x2a6fb8, 0x244 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014ca50(int);
int FUN_0014ca58(int);
int asdMdlManagerMarkDestroy(...);
int FUN_002a46d0(int);
int FUN_002a4bac(void);
int scrScriptProcessDestroy(void);
int asdModelSlotRelease(int);
int asdMdlManagerDestroy(unsigned int);
int asdMemFreeSlot(void);
int FUN_002a7890(void);
int asdTMTexTableFreeEntry(int);
int asdTMTexTableReleaseNode(int, int);
int asdMemFreeNonNull(int);
int FUN_002bff50(void);
int asdMemFree(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int DAT_0043e18c; /* 0x43e18c */
extern int DAT_0043e190; /* 0x43e190 */

/* Supplied declaration required: FUN_0014ca50. */
/* Supplied declaration required: FUN_0014ca58. */
/* Supplied declaration required: asdMdlManagerMarkDestroy. */
/* Supplied declaration required: FUN_002a46d0. */
/* Supplied declaration required: FUN_002a4bac. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: asdModelSlotRelease. */
/* Supplied declaration required: asdMdlManagerDestroy. */
/* Supplied declaration required: asdMemFreeSlot. */
/* Supplied declaration required: FUN_002a7890. */
/* Supplied declaration required: asdTMTexTableFreeEntry. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: asdMemFreeNonNull. */
/* Supplied declaration required: FUN_002bff50. */
/* Supplied declaration required: asdMemFree. */


void FUN_002a6fb8(int param_1)

{
/* irregular: 15 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  
  FUN_002a7890();
  temp_v0 = 0;
  do {
    temp_v1 = param_1 + temp_v0 * 4;
    if (*(int *)(temp_v1 + 0x28c) != 0) {
      asdMemFreeSlot();
      *(unsigned int *)(temp_v1 + 0x28c) = 0;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 4);
  asdTMTexTableReleaseNode(0x31,0);
  asdTMTexTableFreeEntry(0x31);
  FUN_002a46d0(param_1 + 0x20);
  FUN_0014ca50(param_1 + 0x20);
  FUN_0014ca58(param_1 + 0x20);
  if (*(int *)(param_1 + 0xfac) != 0) {
    FUN_002a4bac();
    if (*(int *)(param_1 + 0xfac) != 0) {
      asdMemFreeNonNull(*(int *)(param_1 + 0xfac));
    }
    *(unsigned int *)(param_1 + 0xfac) = 0;
  }
  if (*(int *)(param_1 + 0xfb8) != 0) {
    asdMdlManagerMarkDestroy();
    asdMdlManagerDestroy(*(unsigned int *)(param_1 + 0xfb8));
    *(unsigned int *)(param_1 + 0xfb8) = 0;
    asdModelSlotRelease(0);
  }
  temp_v0 = 0;
  do {
    temp_v1 = param_1 + temp_v0 * 4;
    puVar3 = (unsigned int *)(temp_v1 + 0xd10);
    asdMdlManagerMarkDestroy(*puVar3);
    asdMdlManagerDestroy(*puVar3);
    *puVar3 = 0;
    asdMdlManagerMarkDestroy(*(unsigned int *)(temp_v1 + 0xd28));
    asdMdlManagerDestroy(*(unsigned int *)(temp_v1 + 0xd28));
    temp_v0 = temp_v0 + 1;
    *(unsigned int *)(temp_v1 + 0xd28) = 0;
  } while (temp_v0 < 6);
  if (*(int *)(param_1 + 0x5a8) != 0) {
    scrScriptProcessDestroy();
    *(unsigned int *)(param_1 + 0x5a8) = 0;
  }
  if (*(int *)(param_1 + 0x5a0) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0x5a0) = 0;
  }
  if (*(int *)(param_1 + 0x5a4) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0x5a4) = 0;
  }
  if (*(int *)(param_1 + 0x5b4) != 0) {
    scrScriptProcessDestroy();
    *(unsigned int *)(param_1 + 0x5b4) = 0;
  }
  if (*(int *)(param_1 + 0x5ac) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0x5ac) = 0;
  }
  if (*(int *)(param_1 + 0x5b0) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0x5b0) = 0;
  }
  if (*(int *)(param_1 + 0x5c0) != 0) {
    scrScriptProcessDestroy();
    *(unsigned int *)(param_1 + 0x5c0) = 0;
  }
  if (*(int *)(param_1 + 0x5b8) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0x5b8) = 0;
  }
  if (*(int *)(param_1 + 0x5bc) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0x5bc) = 0;
  }
  FUN_002bff50();
  *(unsigned char *)(DAT_0043e190 + 0xa26) = 1;
  *(unsigned char *)(DAT_0043e18c + 0xa26) = 1;
  return;
}

} /* extern "C" */
