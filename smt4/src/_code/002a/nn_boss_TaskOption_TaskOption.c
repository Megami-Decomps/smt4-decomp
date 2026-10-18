/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_boss_TaskOption_TaskOption` (_code @ 0x2a2138, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void nn_boss_TaskOption_TaskOption(int param_1,char *param_2,int param_3)

{
  char temp_v0;
  char *pcVar2;
  unsigned char temp_v1;
  
  pcVar2 = (char *)(param_1 - 1);
  do {
    pcVar2 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  do {
    temp_v1 = param_3 == 0;
    param_3 = param_3 - 1;
    if (temp_v1) {
      *pcVar2 = '\0';
      return;
    }
    temp_v0 = *param_2;
    param_2 = param_2 + 1;
    *pcVar2 = temp_v0;
    pcVar2 = pcVar2 + 1;
  } while (temp_v0 != '\0');
  return;
}
