/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001723f0` (_code @ 0x1723f0, 0x100 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_0055b968; /* 0x55b968 */
extern unsigned int DAT_005c1cbc; /* 0x5c1cbc */
extern unsigned int DAT_005c1cc0; /* 0x5c1cc0 */


void FUN_001723f0(int *param_1)

{
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int temp_v1;
  unsigned int *puVar5;
  
  puVar2 = (unsigned int *)(**(romwright_code **)(*param_1 + 8))(param_1,0x20,4);
  puVar3 = (unsigned int *)(**(romwright_code **)(*param_1 + 8))(param_1,0x1c,4);
  temp_v1 = 0x1c;
  puVar5 = puVar3;
  do {
    temp_v1 = temp_v1 - 1;
    *(unsigned char *)puVar5 = 0;
    puVar5 = (unsigned int *)((int)puVar5 + 1);
  } while (temp_v1 != 0);
  if (puVar3 != (unsigned int *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
  }
  *puVar3 = 0x40000000;
  puVar3[1] = 0x3f800000;
  puVar3[2] = 0x3f800000;
  puVar3[3] = 0x3f800000;
  temp_v0 = DAT_005c1cc0;
  puVar3[5] = DAT_005c1cbc;
  puVar3[6] = temp_v0;
  puVar3[4] = 0x3f800000;
  if (puVar2 != (unsigned int *)0x0) {
    puVar2[1] = (unsigned int)param_1;
    *(unsigned char *)(puVar2 + 2) = 0;
    *(unsigned char *)((int)puVar2 + 9) = 1;
    puVar2[3] = 0x3f000000;
    puVar2[4] = 0x3f000000;
    puVar2[5] = 0x3f000000;
    puVar2[6] = 0x3f000000;
    puVar2[7] = (unsigned int)puVar3;
    *puVar2 = (unsigned int)&DAT_0055b968;
  }
  return;
}
