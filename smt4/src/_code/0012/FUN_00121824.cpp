/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121824` (_code @ 0x121824, 0x14c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012f5ac(int, int);
int FUN_00130e50(int, unsigned char [96]);
int FUN_002b4e00(int, unsigned char [96], int, int [34]);
int nw_snd_SoundArchive_SetExternalFileRoot(int, char *);

/* Supplied declaration required: FUN_0012f5ac. */
extern int FUN_00130320(int, char *, int);
/* Supplied declaration required: FUN_00130e50. */
/* Supplied declaration required: FUN_002b4e00. */
extern unsigned int FUN_002c30c4(char *);
/* Supplied declaration required: nw_snd_SoundArchive_SetExternalFileRoot. */


unsigned int FUN_00121824(int param_1,char *param_2)

{
/* irregular: 4 native warning(s); review required */
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
  
  temp_v1 = FUN_00130320(param_1 + 0x10c,param_2,(int)*(char *)(param_1 + 0x181));
  if (temp_v1 == 0) {
    *(unsigned int *)(param_1 + 0x170) = *(unsigned int *)(param_1 + 0x124);
    return 0;
  }
  *(unsigned char *)(param_1 + 0x180) = 1;
  temp_v1 = param_1 + 0x10c;
  aiStack_a0[0] = 0;
  FUN_002b4e00(temp_v1,temp_v5,0x40,aiStack_a0);
  if (temp_v1 == 0) {
    *(unsigned int *)(param_1 + 0x170) = *(unsigned int *)(param_1 + 0x124);
  }
  else if (aiStack_a0[0] == 0x40) {
    FUN_00130e50(param_1 + 300,temp_v5);
    FUN_0012f5ac(param_1,param_1 + 300);
    temp_v2 = FUN_002c30c4(param_2);
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
      nw_snd_SoundArchive_SetExternalFileRoot(param_1,acStack_119 + 1);
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
