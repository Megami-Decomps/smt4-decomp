/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035ab40` (_code @ 0x35ab40, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002613f0(int);

/* Supplied declaration required: FUN_002613f0. */


void FUN_0035ab40(int param_1)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  short *psVar2;
  unsigned short *puVar3;
  int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = *(short *)(param_1 + 0x62);
  do {
    psVar2 = (short *)FUN_002613f0(temp_v1);
    if (*psVar2 == temp_v0) {
      puVar3 = (unsigned short *)FUN_002613f0(temp_v1);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      return;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x18);
  return;
}

} /* extern "C" */
