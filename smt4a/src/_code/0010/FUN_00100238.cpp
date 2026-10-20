/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100238` (_code @ 0x100238, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


char * FUN_00100238(int param_1,char param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 - 1);
  do {
    pcVar1 = pcVar1 + 1;
    if (param_2 == *pcVar1) {
      return pcVar1;
    }
  } while (*pcVar1 != '\0');
  return (char *)0x0;
}

} /* extern "C" */
