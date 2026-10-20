/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001011e8` (_code @ 0x1011e8, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int FUN_001011e8(char *param_1,char *param_2)

{
  char temp_v0;
  char *pcVar2;
  char *pcVar3;
  
  for (pcVar3 = param_1; pcVar2 = param_2, *pcVar3 != '\0'; pcVar3 = pcVar3 + 1) {
    do {
      temp_v0 = *pcVar2;
      if (temp_v0 == '\0') {
        return (int)pcVar3 - (int)param_1;
      }
      pcVar2 = pcVar2 + 1;
    } while (temp_v0 != *pcVar3);
  }
  return (int)pcVar3 - (int)param_1;
}

} /* extern "C" */
