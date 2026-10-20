/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00199b5c` (_code @ 0x199b5c, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002b2378(unsigned int);


unsigned int FUN_00199b5c(int param_1)

{
  int temp_v0;
  unsigned int *puVar2;
  
  puVar2 = *(unsigned int **)(param_1 + 4);
  if ((puVar2 != (unsigned int *)0x0) &&
     ((temp_v0 = FUN_002b2378(*puVar2), temp_v0 != 0 || (*(char *)(puVar2 + 1) == '\0')))) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
