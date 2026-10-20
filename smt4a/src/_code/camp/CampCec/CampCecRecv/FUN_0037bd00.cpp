/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037bd00` (_code @ 0x37bd00, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int asdMemFree(...);
int scrScriptProcessDestroy(void);
int dataTableFree(int);
int btlTalkBustUpDestroy(void);
int runWinDestroy(void);
int FUN_0036c8e8(unsigned int);

extern unsigned int *g_campCecRecv; /* 0x57f128 */

/* Supplied declaration required: jobStop. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: dataTableFree. */
/* Supplied declaration required: btlTalkBustUpDestroy. */
/* Supplied declaration required: runWinDestroy. */
/* Supplied declaration required: FUN_0036c8e8. */


void FUN_0037bd00(void)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = g_campCecRecv;
  if (g_campCecRecv[0xf8] != 0) {
    if (g_campCecRecv[0xd4] != 0) {
      asdMemFree();
    }
    if (puVar1[0xd5] != 0) {
      asdMemFree();
    }
    if (puVar1[0xd8] != 0) {
      scrScriptProcessDestroy();
    }
  }
  else {
    dataTableFree(0x25);
    btlTalkBustUpDestroy();
    if (puVar1[0xd2] != 0) {
      asdMemFree();
    }
    if (puVar1[0xd3] != 0) {
      asdMemFree();
    }
    if (puVar1[0xd4] != 0) {
      asdMemFree();
    }
    if (puVar1[0xd5] != 0) {
      asdMemFree();
    }
    if (puVar1[0xd6] != 0) {
      asdMemFree();
    }
    if (puVar1[0xd7] != 0) {
      asdMemFree();
    }
    if (puVar1[0xd8] != 0) {
      scrScriptProcessDestroy();
    }
    if (puVar1[0xd9] != 0) {
      scrScriptProcessDestroy();
    }
    FUN_0036c8e8(puVar1[0x1f6]);
    runWinDestroy();
  }
  jobStop(*puVar1,0);
  asdMemFree(puVar1);
  g_campCecRecv = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
