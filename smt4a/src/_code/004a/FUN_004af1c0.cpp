/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004af1c0` (_code @ 0x4af1c0, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004ac9d0(void);

/* Supplied declaration required: FUN_004ac9d0. */


unsigned int FUN_004af1c0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = 1;
  temp_v1 = *(int *)(*(int *)(param_1 + 0x1430) + 8);
  if (temp_v1 != *(int *)(param_1 + 0x1430)) {
    do {
      temp_v0 = *(int *)(*(int *)(temp_v1 + 0x18) + 0x10);
      FUN_004ac9d0();
      if (temp_v0 == 0) {
        temp_v2 = 0;
      }
      temp_v0 = *(int *)(temp_v1 + 0xc);
      if (*(int *)(temp_v1 + 0xc) != 0) {
        do {
          temp_v1 = temp_v0;
          temp_v0 = *(int *)(temp_v1 + 8);
        } while (*(int *)(temp_v1 + 8) != 0);
      }
      else {
        temp_v0 = *(int *)(temp_v1 + 4);
        if (temp_v1 == *(int *)(temp_v0 + 0xc)) {
          do {
            temp_v1 = temp_v0;
            temp_v0 = *(int *)(temp_v1 + 4);
          } while (temp_v1 == *(int *)(temp_v0 + 0xc));
        }
        if (*(int *)(temp_v1 + 0xc) != temp_v0) {
          temp_v1 = temp_v0;
        }
      }
    } while (temp_v1 != *(int *)(param_1 + 0x1430));
  }
  return temp_v2;
}

} /* extern "C" */
