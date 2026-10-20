/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033e094` (_code @ 0x33e094, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int DAT_0058103c; /* 0x58103c */


void FUN_0033e094(void)

{
  int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = DAT_0058103c;
  puVar2 = (unsigned char *)(DAT_0058103c + 0xcbfc);
  if (*(int **)(DAT_0058103c + 0xcc18) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(DAT_0058103c + 0xcc18) + 4))();
    *(unsigned int *)(temp_v0 + 0xcc18) = 0;
  }
  *puVar2 = 0;
  return;
}

} /* extern "C" */
