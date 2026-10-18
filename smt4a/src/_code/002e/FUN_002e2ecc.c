/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e2ecc` (_code @ 0x2e2ecc, 0x9e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_002e3064; /* 0x2e3064 */

/* Supplied declaration required: FUN_002e2ec0. */


unsigned char * FUN_002e2ecc(unsigned char *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  char temp_v4;
  char *pcVar7;
  int temp_v5;
  
  if ((param_2 & ~-param_2) != 0) {
    pcVar7 = (char *)(param_1 + 1);
    temp_v5 = 0;
    *param_1 = 0x2a;
    temp_v1 = FUN_002e2ec0();
    do {
      temp_v2 = 0;
      temp_v3 = *(unsigned int *)(temp_v1 + temp_v5 * 4);
      do {
        temp_v0 = (unsigned char)(temp_v3 >> 0x18);
        if (temp_v3 >> 0x1c >= 10) {
          temp_v4 = (temp_v0 >> 4) + 0x57;
        }
        else {
          temp_v4 = (temp_v0 >> 4) + 0x30;
        }
        *pcVar7 = temp_v4;
        pcVar7 = pcVar7 + 1;
        temp_v2 = temp_v2 + 1;
        temp_v3 = temp_v3 << 4;
      } while (temp_v2 < 8);
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 5);
    *pcVar7 = '\0';
    return param_1;
  }
  if (param_2 != 4) {
    if ((int)param_2 < 5) {
      if (param_2 != 1) {
        if (param_2 != 2) {
          return (unsigned char *)0x0;
        }
        temp_v1 = FUN_002e2ec0();
        temp_v3 = *(unsigned int *)(temp_v1 + 4);
      }
      else {
        puVar4 = (unsigned int *)FUN_002e2ec0();
        temp_v3 = *puVar4;
      }
    }
    else if (param_2 != 8) {
      if (param_2 != 0x10) {
        return (unsigned char *)0x0;
      }
      temp_v1 = FUN_002e2ec0();
      temp_v3 = *(unsigned int *)(temp_v1 + 0x10);
    }
    else {
      temp_v1 = FUN_002e2ec0();
      temp_v3 = *(unsigned int *)(temp_v1 + 0xc);
    }
  }
  else {
    temp_v1 = FUN_002e2ec0();
    temp_v3 = *(unsigned int *)(temp_v1 + 8);
  }
  if (temp_v3 == 0) {
    return &LAB_002e3064;
  }
  return (unsigned char *)(*(int *)((temp_v3 & 0xfffffffc) - 4) + (temp_v3 & 0xfffffffc));
}
