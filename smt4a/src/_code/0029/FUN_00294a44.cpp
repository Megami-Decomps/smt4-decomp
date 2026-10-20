/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00294a44` (_code @ 0x294a44, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int g_mapIf; /* 0x58103c */


void FUN_00294a44(void)

{
  int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = g_mapIf;
  puVar2 = (unsigned char *)(g_mapIf + 0xcc5c);
  if (*(int **)(g_mapIf + 0xcc78) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(g_mapIf + 0xcc78) + 4))();
    *(unsigned int *)(temp_v0 + 0xcc78) = 0;
  }
  *puVar2 = 0;
  return;
}

} /* extern "C" */
