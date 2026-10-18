/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030f558` (_code @ 0x30f558, 0x94 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0024f6e4. */
extern int *FUN_0027636c(int);
extern int FUN_002c0ba8(void);


int FUN_0030f558(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  temp_v0 = param_1;
  FUN_0024f6e4();
  if (0 < temp_v0) {
    do {
      piVar1 = (int *)FUN_0027636c(temp_v2);
      temp_v0 = *piVar1;
      if (temp_v0 == -1) {
        return -1;
      }
      if (temp_v0 == param_1) {
        if ((short)piVar1[1] != 0) {
          temp_v1 = FUN_002c0ba8();
          temp_v0 = 0;
          if (temp_v1 != 0) {
            if ((*(short *)((int)piVar1 + 6) == 0) || (temp_v0 = FUN_002c0ba8(), temp_v0 == 0)) {
              return temp_v2;
            }
          }
        }
        else if ((*(short *)((int)piVar1 + 6) == 0) || (temp_v0 = FUN_002c0ba8(), temp_v0 == 0)) {
          return temp_v2;
        }
      }
      temp_v2 = temp_v2 + 1;
      FUN_0024f6e4();
    } while (temp_v2 < temp_v0);
  }
  return -1;
}
