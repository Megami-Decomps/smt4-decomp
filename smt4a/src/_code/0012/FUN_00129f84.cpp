/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00129f84` (_code @ 0x129f84, 0x36 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030cb44(unsigned int);

extern unsigned int DAT_00594a00; /* 0x594a00 */

extern unsigned int FUN_002e6dac(int);
/* Supplied declaration required: FUN_0030cb44. */


void FUN_00129f84(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  if (DAT_00594a00 == 0xffffffff) {
    FUN_0030cb44(0xfffffffc);
  }
  temp_v0 = FUN_002e6dac(DAT_00594a00 << 2);
  *(unsigned int *)(param_1 + 8) = temp_v0;
  for (temp_v1 = 0; temp_v1 < DAT_00594a00; temp_v1 = temp_v1 + 1) {
    puVar2 = (unsigned int *)(*(int *)(param_1 + 8) + temp_v1 * 4);
    if (puVar2 != (unsigned int *)0x0) {
      *puVar2 = *(unsigned int *)(param_1 + 0x10);
    }
  }
  return;
}

} /* extern "C" */
