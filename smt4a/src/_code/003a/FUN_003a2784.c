/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a2784` (_code @ 0x3a2784, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0018719c(void);
extern int *FUN_003a338c(int);
/* Supplied declaration required: FUN_003c4d34. */


int FUN_003a2784(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  temp_v0 = param_1;
  FUN_003c4d34();
  if (0 < temp_v0) {
    do {
      piVar1 = (int *)FUN_003a338c(temp_v2);
      temp_v0 = *piVar1;
      if (temp_v0 == -1) {
        return -1;
      }
      if (temp_v0 == param_1) {
        if ((short)piVar1[1] != 0) {
          temp_v1 = FUN_0018719c();
          temp_v0 = 0;
          if (temp_v1 != 0) {
            if ((*(short *)((int)piVar1 + 6) == 0) || (temp_v0 = FUN_0018719c(), temp_v0 == 0)) {
              return temp_v2;
            }
          }
        }
        else if ((*(short *)((int)piVar1 + 6) == 0) || (temp_v0 = FUN_0018719c(), temp_v0 == 0)) {
          return temp_v2;
        }
      }
      temp_v2 = temp_v2 + 1;
      FUN_003c4d34();
    } while (temp_v2 < temp_v0);
  }
  return -1;
}
