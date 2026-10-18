/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042125c` (_code @ 0x42125c, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0040619c. */
extern int FUN_004ff9b4(int);
extern int FUN_004ffa14(void);


unsigned char FUN_0042125c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  if (*(int *)(param_1 + 0x2c) != 5) {
    temp_v2 = 0;
  }
  else {
    temp_v2 = 1;
    if (*(int *)(param_1 + 8) != 0) {
      temp_v0 = *(int *)(*(int *)(param_1 + 8) + 8);
      FUN_0040619c(temp_v0,2);
      if (temp_v0 != 0) {
        temp_v1 = FUN_004ffa14();
        temp_v2 = temp_v1 != 0;
        temp_v0 = FUN_004ff9b4(temp_v0);
        if (temp_v0 == 0) {
          temp_v2 = 0;
        }
      }
    }
  }
  return temp_v2;
}
