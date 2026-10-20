/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012a24c` (_code @ 0x12a24c, 0x36 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030cb44(unsigned int);

extern unsigned int DAT_00594a00; /* 0x594a00 */

extern unsigned int FUN_002e6dac(int);
/* Supplied declaration required: FUN_0030cb44. */


void FUN_0012a24c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short *puVar2;
  unsigned int temp_v1;
  
  if (DAT_00594a00 == 0xffffffff) {
    FUN_0030cb44(0xfffffffe);
  }
  temp_v0 = FUN_002e6dac(DAT_00594a00 << 1);
  *(unsigned int *)(param_1 + 8) = temp_v0;
  for (temp_v1 = 0; temp_v1 < DAT_00594a00; temp_v1 = temp_v1 + 1) {
    puVar2 = (unsigned short *)(*(int *)(param_1 + 8) + temp_v1 * 2);
    if (puVar2 != (unsigned short *)0x0) {
      *puVar2 = *(unsigned short *)(param_1 + 0xe);
    }
  }
  return;
}

} /* extern "C" */
