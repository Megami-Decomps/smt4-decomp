/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00455748` (_code @ 0x455748, 0x10c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_00455748(int, unsigned int);


int FUN_00455748(int param_1,unsigned int param_2)

{
/* irregular: 1 goto(s) */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)(**(romwright_code **)(*param_2 + 8))(param_2);
    do {
      if (piVar1 == (int *)0x5c0e00) {
        if (param_2 != (int *)0x0) {
          temp_v2 = 0;
          temp_v1 = (param_2[6] - param_2[5]) >> 2;
          if (temp_v1 < 1) {
            return 1;
          }
          do {
            temp_v0 = FUN_00455748(param_1,*(unsigned int *)(param_2[5] + temp_v2 * 4));
            if (temp_v0 == 0) {
              return 0;
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < temp_v1);
          return 1;
        }
        break;
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)0x0);
    if (param_2 != (int *)0x0) {
      piVar1 = (int *)(**(romwright_code **)(*param_2 + 8))(param_2);
      do {
        if (piVar1 == (int *)0x5c0e04) goto LAB_00455808;
        piVar1 = (int *)*piVar1;
      } while (piVar1 != (int *)0x0);
    }
    param_2 = (unsigned int)0x0;
LAB_00455808:
    temp_v2 = param_2[0x15];
    temp_v1 = (**(romwright_code **)(**(int **)(param_1 + 0x260) + 0x18))();
    if ((temp_v1 != *(int *)(temp_v2 + 0x28)) ||
       (temp_v1 = (**(romwright_code **)(**(int **)(param_1 + 600) + 0x18))(), temp_v1 != *(int *)(temp_v2 + 0x2c)))
    {
      return 0;
    }
  }
  return 1;
}
