/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003657f0` (_code @ 0x3657f0, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0018719c(void);
extern int *FUN_003796d4(int);
extern int FUN_003b5620(void);


int FUN_003657f0(int param_1)

{
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_003b5620();
  temp_v2 = 0;
  if (temp_v2 < temp_v0) {
    do {
      piVar2 = (int *)FUN_003796d4(temp_v2);
      if (*piVar2 == -1) {
        return -1;
      }
      if (*piVar2 == param_1) {
        if ((((short)piVar2[1] == 0) || (temp_v1 = FUN_0018719c(), temp_v1 != 0)) &&
           ((*(short *)((int)piVar2 + 6) == 0 || (temp_v1 = FUN_0018719c(), temp_v1 == 0)))) {
          temp_v0 = (int)*(short *)((int)piVar2 + 10);
          if (*(short *)((int)piVar2 + 10) != -1) {
            temp_v0 = temp_v2;
          }
          return temp_v0;
        }
        if (*(short *)((int)piVar2 + 10) == -1) {
          return -2;
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < temp_v0);
  }
  return -1;
}

} /* extern "C" */
