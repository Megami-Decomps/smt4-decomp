/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037c6ac` (_code @ 0x37c6ac, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002613f0(int);

/* Supplied declaration required: FUN_002613f0. */


void FUN_0037c6ac(int param_1,unsigned short param_2,unsigned short param_3)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  short temp_v0;
  short *psVar2;
  unsigned short *puVar3;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = *(short *)(param_1 + 0x62);
  temp_v2 = 0;
  do {
    psVar2 = (short *)FUN_002613f0(temp_v2);
    if (*psVar2 == temp_v0) goto LAB_0037c728;
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x18);
  temp_v2 = 0;
  while (psVar2 = (short *)FUN_002613f0(temp_v2), *psVar2 != 0) {
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x18) {
      return;
    }
  }
  puVar3 = (unsigned short *)FUN_002613f0(temp_v2);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
LAB_0037c728:
  if (temp_v2 < 0) {
    return;
  }
  puVar3 = (unsigned short *)FUN_002613f0(temp_v2);
  *puVar3 = *(unsigned short *)(param_1 + 0x62);
  temp_v1 = FUN_002613f0(temp_v2);
  *(unsigned short *)(temp_v1 + 2) = param_2;
  temp_v2 = FUN_002613f0(temp_v2);
  *(unsigned short *)(temp_v2 + 4) = param_3;
  return;
}

} /* extern "C" */
