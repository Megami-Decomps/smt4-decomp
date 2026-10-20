/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d88a0` (_code @ 0x2d88a0, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int g_mapIf; /* 0x58103c */


void FUN_002d88a0(void)

{
  int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = g_mapIf;
  puVar2 = (unsigned char *)(g_mapIf + 0xcc1c);
  if (*(int **)(g_mapIf + 0xcc38) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(g_mapIf + 0xcc38) + 4))();
    *(unsigned int *)(temp_v0 + 0xcc38) = 0;
  }
  *puVar2 = 0;
  return;
}

} /* extern "C" */
