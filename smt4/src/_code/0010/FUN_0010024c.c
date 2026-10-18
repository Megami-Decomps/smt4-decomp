/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010024c` (_code @ 0x10024c, 0x16 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


char * FUN_0010024c(int param_1,char param_2)

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
