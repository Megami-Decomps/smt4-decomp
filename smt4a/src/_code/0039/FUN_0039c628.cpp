/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039c628` (_code @ 0x39c628, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004186e0(int);

extern int DAT_0057f28c; /* 0x57f28c */

/* Supplied declaration required: FUN_004186e0. */


void FUN_0039c628(void)

{
/* irregular: 1 native warning(s); review required */
  if (*(char *)(DAT_0057f28c + 0x90c) == '\0') {
    FUN_004186e0(0);
    return;
  }
  return;
}

} /* extern "C" */
