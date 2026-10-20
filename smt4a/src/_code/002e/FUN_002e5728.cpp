/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e5728` (_code @ 0x2e5728, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00164ce0(unsigned int, int);
int FUN_00167f24(int);

extern int FUN_00163e40(unsigned int);
/* Supplied declaration required: FUN_00164ce0. */
/* Supplied declaration required: FUN_00167f24. */


unsigned int FUN_002e5728(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v3 = *param_1;
  if (temp_v3 != 0) {
    temp_v1 = 1;
    do {
      temp_v2 = temp_v3 + temp_v1 * 4;
      temp_v0 = FUN_00163e40(*(unsigned int *)(temp_v2 + 0x634));
      if (temp_v0 != 0) {
        FUN_00164ce0(*(unsigned int *)(temp_v2 + 0x634),1);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 4);
  }
  FUN_00167f24(2);
  return 1;
}

} /* extern "C" */
