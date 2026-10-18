/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015ea28` (_code @ 0x15ea28, 0x14c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001739d4. */
/* Supplied declaration required: FUN_001739f8. */
/* Supplied declaration required: FUN_001748a0. */
/* Supplied declaration required: FUN_00174a00. */
/* Supplied declaration required: FUN_00175750. */
extern unsigned int FUN_002e3390(char *);


unsigned int FUN_0015ea28(int param_1,char *param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  char *pcVar4;
  char *pcVar5;
  unsigned int temp_v3;
  unsigned int temp_v4;
  char acStack_119 [25];
  unsigned char temp_v5 [96];
  int aiStack_a0 [34];
  
  temp_v1 = param_1 + 0x11c;
  FUN_001748a0(temp_v1,param_2,(int)*(char *)(param_1 + 0x191));
  if (temp_v1 == 0) {
    *(unsigned int *)(param_1 + 0x180) = *(unsigned int *)(param_1 + 0x134);
    return 0;
  }
  *(unsigned char *)(param_1 + 400) = 1;
  temp_v1 = param_1 + 0x11c;
  aiStack_a0[0] = 0;
  FUN_00174a00(temp_v1,temp_v5,0x40,aiStack_a0);
  if (temp_v1 == 0) {
    *(unsigned int *)(param_1 + 0x180) = *(unsigned int *)(param_1 + 0x134);
  }
  else if (aiStack_a0[0] == 0x40) {
    FUN_00175750(param_1 + 0x13c,temp_v5);
    FUN_001739d4(param_1,param_1 + 0x13c);
    temp_v2 = FUN_002e3390(param_2);
    do {
      temp_v0 = temp_v2;
      temp_v2 = temp_v0 - 1;
      if ((int)temp_v2 < 0) {
        return 1;
      }
    } while (param_2[temp_v2] != '/' && param_2[temp_v2] != '\\');
    if ((int)temp_v2 < 0x100) {
      temp_v3 = 0;
      pcVar4 = acStack_119 + 1;
      do {
        temp_v4 = temp_v2;
        if (temp_v2 >= 0xff) {
          temp_v4 = 0xff;
        }
        pcVar5 = pcVar4;
        if (temp_v4 <= temp_v3) break;
        temp_v3 = temp_v3 + 1;
        pcVar5 = pcVar4 + 1;
        *pcVar4 = *param_2;
        param_2 = param_2 + 1;
        pcVar4 = pcVar5;
      } while (*param_2 != '\0');
      *pcVar5 = '\0';
      acStack_119[temp_v0] = '\0';
      FUN_001739f8(param_1,acStack_119 + 1);
      return 1;
    }
  }
  return 0;
}
