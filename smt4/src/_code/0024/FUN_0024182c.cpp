#include "romwright_types.h"

extern "C" {

int FUN_001aa030(void);
int FUN_00220f5c(unsigned int *);
int FUN_002523f0(void);
int FUN_00290f48(int);
int FUN_0029c3b0(int);
int FUN_002a46d8(int);
int scrScriptProcessDestroy(void);
int asdTMTexTableFreeEntry(int);
int FUN_002ae898(int, int);
int asdMemFree(...);
int jobStop(unsigned int, int);
int runWinDestroy(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int *DAT_0043daa8; /* 0x43daa8 */

/* Supplied declaration required: FUN_001aa030. */
/* Supplied declaration required: FUN_00220f5c. */
/* Supplied declaration required: FUN_002523f0. */
extern int FUN_0026efec(int);
/* Supplied declaration required: FUN_00290f48. */
/* Supplied declaration required: FUN_0029c3b0. */
/* Supplied declaration required: FUN_002a46d8. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: asdTMTexTableFreeEntry. */
/* Supplied declaration required: FUN_002ae898. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: jobStop. */
/* Supplied declaration required: runWinDestroy. */


void FUN_0024182c(void)

{
/* irregular: 12 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  puVar1 = DAT_0043daa8;
  if (DAT_0043daa8[0x357] != 0) {
    if (DAT_0043daa8[0x33d] != 0) {
      asdMemFree();
    }
    if (puVar1[0x33e] != 0) {
      asdMemFree();
    }
    if (puVar1[0x341] != 0) {
      scrScriptProcessDestroy();
    }
    jobStop(*puVar1,0);
    asdMemFree(puVar1);
    DAT_0043daa8 = (unsigned int *)0x0;
    return;
  }
  temp_v1 = 0;
  do {
    temp_v0 = FUN_0026efec(temp_v1);
    temp_v1 = temp_v1 + 1;
    if ((*(unsigned char *)(temp_v0 + 0x20) & 0x10) != 0) {
      *(unsigned char *)(temp_v0 + 0x20) = *(unsigned char *)(temp_v0 + 0x20) & ~0x10U;
    }
  } while (temp_v1 < 0xc);
  FUN_001aa030();
  FUN_002a46d8(0x25);
  FUN_002523f0();
  if (puVar1[0x33b] != 0) {
    asdMemFree();
  }
  if (puVar1[0x33c] != 0) {
    asdMemFree();
  }
  if (puVar1[0x33d] != 0) {
    asdMemFree();
  }
  if (puVar1[0x33e] != 0) {
    asdMemFree();
  }
  if (puVar1[0x33f] != 0) {
    asdMemFree();
  }
  if (puVar1[0x340] != 0) {
    asdMemFree();
  }
  if (puVar1[0x341] != 0) {
    scrScriptProcessDestroy();
  }
  if (puVar1[0x342] != 0) {
    scrScriptProcessDestroy();
  }
  FUN_002ae898(0x39,0);
  asdTMTexTableFreeEntry(0x39);
  runWinDestroy();
  FUN_00220f5c(DAT_0043daa8 + 0x28);
  jobStop(*puVar1,0);
  asdMemFree(puVar1);
  DAT_0043daa8 = (unsigned int *)0x0;
  FUN_0029c3b0(0xf);
  FUN_00290f48(0x2d);
  return;
}

} /* extern "C" */
