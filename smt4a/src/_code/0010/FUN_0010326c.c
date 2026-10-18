/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010326c` (_code @ 0x10326c, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001032bc(char *, unsigned int);
extern int FUN_001032de(int);


char * FUN_0010326c(int param_1,unsigned int param_2,int *param_3)

{
  int temp_v0;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  if ((param_1 == 0) && (param_1 = *param_3, param_1 == 0)) {
    param_1 = 0x1032b0;
  }
  temp_v0 = FUN_001032de(param_1);
  pcVar2 = (char *)(temp_v0 + param_1);
  if (*pcVar2 != '\0') {
    temp_v0 = FUN_001032bc(pcVar2,param_2);
    pcVar3 = pcVar2 + temp_v0;
    pcVar4 = pcVar2;
    if (*pcVar3 != '\0') {
      *pcVar3 = '\0';
      pcVar3 = pcVar3 + 1;
    }
  }
  else {
    pcVar4 = (char *)0x0;
    pcVar3 = pcVar2;
  }
  *param_3 = (int)pcVar3;
  return pcVar4;
}
