/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a3638` (_code @ 0x3a3638, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00587f28; /* 0x587f28 */


void FUN_003a3638(void)

{
/* irregular: irregular input(s): in_s0, in_s1; 2 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  float in_s0;
  float in_s1;
  
  if (DAT_00587f28 != 0) {
    piVar2 = (int *)(DAT_00587f28 + 0x206b0);
    piVar1 = (int *)(DAT_00587f28 + 0x206b4);
    *(unsigned char *)(DAT_00587f28 + 0x2069c) = 1;
    *piVar2 = (int)in_s0;
    *piVar1 = (int)in_s1;
    return;
  }
  return;
}
