/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00232634` (_code @ 0x232634, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int DAT_0058069c; /* 0x58069c */


void FUN_00232634(void)

{
  if (*(int **)(DAT_0058069c + 0xc) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(DAT_0058069c + 0xc) + 4))();
    *(unsigned int *)(DAT_0058069c + 0xc) = 0;
  }
  if (*(int **)(DAT_0058069c + 0x10) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(DAT_0058069c + 0x10) + 4))();
    *(unsigned int *)(DAT_0058069c + 0x10) = 0;
  }
  if (*(int **)(DAT_0058069c + 0x14) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(DAT_0058069c + 0x14) + 4))();
    *(unsigned int *)(DAT_0058069c + 0x14) = 0;
  }
  return;
}

} /* extern "C" */
