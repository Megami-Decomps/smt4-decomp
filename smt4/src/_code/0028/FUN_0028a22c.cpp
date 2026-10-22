/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028a22c` (_code @ 0x28a22c, 0xe8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameReleaseDataReference(void);
int scrScriptProcessDestroy(void);
int asdMemFreeNonNull(...);
int asdMemFree(...);
int jobStop(unsigned int, int);
int bufferArrayFree(void);

extern unsigned int *g_partyPanel; /* 0x43dcf0 */

/* Supplied declaration required: gameReleaseDataReference. */
extern int FUN_002a0d0c(void);
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: asdMemFreeNonNull. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: jobStop. */
/* Supplied declaration required: bufferArrayFree. */


void FUN_0028a22c(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = g_partyPanel;
  temp_v0 = FUN_002a0d0c();
  *(unsigned char *)(temp_v0 + 0x40) = *(unsigned char *)((int)puVar1 + 0x42);
  if (puVar1[5] != 0) {
    scrScriptProcessDestroy();
  }
  if (puVar1[4] != 0) {
    asdMemFree();
  }
  if (puVar1[3] != 0) {
    asdMemFree();
  }
  temp_v0 = 0;
  do {
    if (puVar1[temp_v0 + 0x1b2] != 0) {
      asdMemFreeNonNull(puVar1[temp_v0 + 0x1b2]);
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 4);
  temp_v0 = 0;
  do {
    if (puVar1[temp_v0 + 0x1b6] != 0) {
      asdMemFreeNonNull(puVar1[temp_v0 + 0x1b6]);
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x18);
  if (puVar1[0x457] != 0) {
    bufferArrayFree();
    asdMemFreeNonNull();
  }
  puVar1[0x457] = 0;
  gameReleaseDataReference();
  jobStop(*puVar1,0);
  asdMemFree(puVar1);
  g_partyPanel = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
