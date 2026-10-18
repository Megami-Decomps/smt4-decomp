/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00199a54` (_code @ 0x199a54, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002b2530(unsigned int);


unsigned int FUN_00199a54(int param_1)

{
  int temp_v0;
  unsigned int *puVar2;
  
  puVar2 = *(unsigned int **)(param_1 + 4);
  if ((puVar2 != (unsigned int *)0x0) &&
     ((temp_v0 = FUN_002b2530(*puVar2), temp_v0 != 0 || (*(char *)(puVar2 + 1) == '\0')))) {
    return 1;
  }
  return 0;
}
