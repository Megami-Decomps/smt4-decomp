/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b646c` (_code @ 0x2b646c, 0x7c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00127ecc; /* 0x127ecc */

/* Supplied declaration required: FUN_002c5f58. */


/* WARNING: Removing unreachable block (ram,0x002b64dc) */

void FUN_002b646c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  char *pcVar2;
  char *pcVar3;
  unsigned char temp_v1;
  
  FUN_002c5f58(param_1,&LAB_00127ecc,0x18,6);
  *(unsigned char *)(param_1 + 0x90) = 0;
  *(unsigned char *)(param_1 + 0x91) = 0;
  *(unsigned char *)(param_1 + 0x92) = 0;
  pcVar3 = (char *)0x0;
  *(unsigned char *)(param_1 + 0x93) = 0;
  pcVar2 = (unsigned int)(uint)*(unsigned int)(param_1 * 2);
  temp_v1 = 1;
  while (!temp_v1) {
    temp_v0 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    *pcVar3 = temp_v0;
    pcVar3 = pcVar3 + 1;
    temp_v1 = temp_v0 == '\0';
  }
  return;
}
