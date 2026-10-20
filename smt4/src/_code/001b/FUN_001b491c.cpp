/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b491c` (_code @ 0x1b491c, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00294450(unsigned int, unsigned int);
int playerModelListCreate(unsigned int, int);
int FUN_00343c58(unsigned int, unsigned int, unsigned int);

extern int g_lmapScene; /* 0x447e88 */

/* Supplied declaration required: FUN_00294450. */
/* Supplied declaration required: playerModelListCreate. */
/* Supplied declaration required: FUN_00343c58. */


void FUN_001b491c(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  playerModelListCreate(*(unsigned int *)(g_lmapScene + 0x194),0x1c0);
  temp_v0 = 0;
  if (*(char *)(g_lmapScene + 0x198) == '\0') {
    do {
      FUN_00294450(*(unsigned int *)(g_lmapScene + 0x194),temp_v0 & 0xff);
      temp_v0 = temp_v0 + 1;
    } while ((int)temp_v0 < 3);
    return;
  }
  do {
    FUN_00343c58(*(unsigned int *)(g_lmapScene + 0x194),temp_v0 & 0xff,
                 *(unsigned int *)(g_lmapScene + temp_v0 * 4 + 0x19c));
    temp_v0 = temp_v0 + 1;
  } while ((int)temp_v0 < 3);
  return;
}

} /* extern "C" */
