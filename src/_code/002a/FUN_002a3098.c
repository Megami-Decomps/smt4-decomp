/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a3098` (_code @ 0x2a3098, 0x10 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_002a3098(int param_1)

{
  return (*(unsigned char *)(param_1 + 0x10) & 2) >> 1;
}
