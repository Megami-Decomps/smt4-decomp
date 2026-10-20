/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b7534` (_code @ 0x2b7534, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int resourceListDestroy(int);
int asdMemFree(int);

extern int g_eplSlots; /* 0x580c8c */

/* Supplied declaration required: resourceListDestroy. */
/* Supplied declaration required: asdMemFree. */


void FUN_002b7534(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = temp_v1 * 100 + g_eplSlots + 0xc;
    if (*(int *)(temp_v0 + 0x5c) != 0) {
      resourceListDestroy(*(int *)(temp_v0 + 0x5c));
      *(unsigned int *)(temp_v0 + 0x5c) = 0;
      *(unsigned char *)(temp_v0 + 0x60) = 0;
    }
    if (*(int *)(temp_v0 + 0x58) != 0) {
      asdMemFree(*(int *)(temp_v0 + 0x58));
      *(unsigned int *)(temp_v0 + 0x58) = 0;
      *(unsigned char *)(temp_v0 + 0x60) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x10);
  if (g_eplSlots != 0) {
    asdMemFree(g_eplSlots);
    g_eplSlots = 0;
  }
  return;
}

} /* extern "C" */
