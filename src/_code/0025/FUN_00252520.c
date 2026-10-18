/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00252520` (_code @ 0x252520, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


char * FUN_00252520(char *param_1,char param_2)

{
  char temp_v0;
  char *pcVar2;
  
  pcVar2 = (char *)0x0;
  do {
    temp_v0 = *param_1;
    if (temp_v0 == param_2) {
      pcVar2 = param_1;
    }
    param_1 = param_1 + 1;
  } while (temp_v0 != '\0');
  return pcVar2;
}
