/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00421858` (_code @ 0x421858, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0040619c(int, unsigned int);

/* Supplied declaration required: FUN_0040619c. */


void FUN_00421858(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = *(int *)(param_1 + 0x2c);
  temp_v4 = (unsigned int)(temp_v0 == 4);
  if ((temp_v0 != 4) && (temp_v0 == 5)) {
    temp_v4 = 2;
  }
  if (*(int *)(param_1 + 8) != 0) {
    temp_v3 = 0;
    temp_v0 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x10);
    if (0 < temp_v0) {
      do {
        temp_v1 = *(int *)(*(int *)(param_1 + 8) + 8);
        FUN_0040619c(temp_v1,temp_v3);
        if (temp_v1 != 0) {
          if (temp_v4 == temp_v3) {
            temp_v2 = *(unsigned int *)(temp_v1 + 4) & 0xfffffffc;
          }
          else {
            temp_v2 = *(unsigned int *)(temp_v1 + 4) | 3;
          }
          *(unsigned int *)(temp_v1 + 4) = temp_v2;
        }
        temp_v3 = temp_v3 + 1;
      } while ((int)temp_v3 < temp_v0);
    }
  }
  return;
}

} /* extern "C" */
