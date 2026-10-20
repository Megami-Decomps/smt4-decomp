/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b8244` (_code @ 0x2b8244, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ae028(int);

extern unsigned char DAT_0043da28; /* 0x43da28 */

/* Supplied declaration required: FUN_002ae028. */


void FUN_002b8244(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0043da28 + 0x4));
  *(char *)((*(int *)((unsigned char *)&DAT_0043da28 + 0x4)) + 0x4c7) = (char)param_1;
  if (param_1 != 0) {
    *(unsigned int *)(temp_v0 + 0x4b8) = 0;
    *(unsigned short *)(temp_v0 + 0x4bc) = 0;
    FUN_002ae028(temp_v0 + 0x4be);
    return;
  }
  return;
}

} /* extern "C" */
