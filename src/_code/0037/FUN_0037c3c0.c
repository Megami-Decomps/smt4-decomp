/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037c3c0` (_code @ 0x37c3c0, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_003603d4. */


void FUN_0037c3c0(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v1 = 0;
  if (temp_v1 < *(int *)(param_1 + 8)) {
    do {
      temp_v0 = *(int *)(param_1 + temp_v1 * 4);
      if (temp_v0 != 0) {
        temp_v2 = 0;
        if (((param_2 != 0) && (temp_v2 = param_2 == 1, !temp_v2)) && (param_2 == 2)) {
          temp_v2 = 2;
        }
        FUN_003603d4(temp_v0,temp_v2);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(int *)(param_1 + 8));
  }
  return;
}
