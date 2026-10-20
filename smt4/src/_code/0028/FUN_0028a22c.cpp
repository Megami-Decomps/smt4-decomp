/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028a22c` (_code @ 0x28a22c, 0xe8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00292c0c(void);
int scrScriptProcessDestroy(void);
int FUN_002b2368(...);
int asdMemFree(...);
int jobStop(unsigned int, int);
int bufferArrayFree(void);

extern unsigned int *DAT_0043dcf0; /* 0x43dcf0 */

/* Supplied declaration required: FUN_00292c0c. */
extern int FUN_002a0d0c(void);
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: FUN_002b2368. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: jobStop. */
/* Supplied declaration required: bufferArrayFree. */


void FUN_0028a22c(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_0043dcf0;
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
      FUN_002b2368(puVar1[temp_v0 + 0x1b2]);
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 4);
  temp_v0 = 0;
  do {
    if (puVar1[temp_v0 + 0x1b6] != 0) {
      FUN_002b2368(puVar1[temp_v0 + 0x1b6]);
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x18);
  if (puVar1[0x457] != 0) {
    bufferArrayFree();
    FUN_002b2368();
  }
  puVar1[0x457] = 0;
  FUN_00292c0c();
  jobStop(*puVar1,0);
  asdMemFree(puVar1);
  DAT_0043dcf0 = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
