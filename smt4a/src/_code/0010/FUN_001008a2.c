/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001008a2` (_code @ 0x1008a2, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_001008a2(int param_1,char *param_2)

{
  char temp_v0;
  char *pcVar2;
  
  pcVar2 = (char *)(param_1 - 1);
  do {
    pcVar2 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  do {
    temp_v0 = *param_2;
    param_2 = param_2 + 1;
    *pcVar2 = temp_v0;
    pcVar2 = pcVar2 + 1;
  } while (temp_v0 != '\0');
  return;
}
