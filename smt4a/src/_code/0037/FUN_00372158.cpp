/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00372158` (_code @ 0x372158, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_uiQuest; /* 0x57f28c */


int FUN_00372158(void)

{
  return (int)*(char *)(g_uiQuest + 0x941);
}

} /* extern "C" */
