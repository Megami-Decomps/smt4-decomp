/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001739f8` (_code @ 0x1739f8, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002e3390(char *);


void FUN_001739f8(int param_1,char *param_2)

{
  unsigned int temp_v0;
  char *pcVar2;
  int temp_v1;
  char *pcVar4;
  char *pcVar5;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_002e3390(param_2);
  pcVar4 = (char *)(param_1 + 0xc);
  temp_v2 = 0;
  if ((temp_v0 >= 0xff) || (temp_v0 != 0)) {
    pcVar2 = param_2;
    pcVar5 = pcVar4;
    do {
      temp_v2 = temp_v2 + 1;
      pcVar4 = pcVar5 + 1;
      *pcVar5 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      if (*pcVar2 == '\0') break;
      temp_v3 = temp_v0;
      if (temp_v0 >= 0xff) {
        temp_v3 = 0xff;
      }
      pcVar5 = pcVar4;
    } while (temp_v2 < temp_v3);
  }
  *pcVar4 = '\0';
  if (param_2[temp_v0 - 1] != '/') {
    temp_v1 = param_1 + temp_v0;
    temp_v0 = temp_v0 + 1;
    *(unsigned char *)(temp_v1 + 0xc) = 0x2f;
  }
  *(unsigned char *)(param_1 + temp_v0 + 0xc) = 0;
  return;
}
