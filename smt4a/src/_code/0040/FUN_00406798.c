/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00406798` (_code @ 0x406798, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0030ea58. */


unsigned int FUN_00406798(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  
  temp_v0 = *(int *)(param_1 + 8);
  temp_v5 = temp_v0 == 0;
  if (!temp_v5) {
    temp_v0 = temp_v0 + 0xc;
    temp_v5 = temp_v0 == 0;
  }
  if (!temp_v5) {
    temp_v4 = 0;
    temp_v0 = **(int **)(*(int *)(temp_v0 + 0x30) + 0xa8);
    if (*(int *)(temp_v0 + 0x10) != 0) {
      do {
        temp_v2 = 0;
        temp_v3 = *(int *)(temp_v0 + 0xc) + temp_v4 * 0xc;
        if (*(int *)(temp_v3 + 8) != 0) {
          do {
            temp_v1 = *(int *)(*(int *)(temp_v3 + 4) + temp_v2 * 4);
            FUN_0030ea58(temp_v1,param_2);
            if (temp_v1 == 0) {
              return temp_v4;
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < *(unsigned int *)(temp_v3 + 8));
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < *(unsigned int *)(temp_v0 + 0x10));
    }
  }
  return 0xffffffff;
}
