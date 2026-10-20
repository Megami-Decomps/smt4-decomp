/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c571c` (_code @ 0x4c571c, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003f0e20(int, unsigned int);
int FUN_004c52ec(...);
int FUN_004c53fc(...);

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_004c52ec. */
/* Supplied declaration required: FUN_004c53fc. */


void FUN_004c571c(unsigned int param_1,int param_2,int param_3,int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_0014aa78();
  FUN_003f0e20(temp_v0,param_1);
  if (temp_v0 != 0) {
    temp_v0 = temp_v0 + param_2 * 4;
    param_3 = *(int *)(temp_v0 + 0x74) + param_3;
    temp_v1 = FUN_004c53fc(param_2);
    if (param_3 < temp_v1) {
      param_3 = FUN_004c53fc();
    }
    else {
      temp_v1 = FUN_004c52ec(param_2);
      if (temp_v1 < param_3) {
        param_3 = FUN_004c52ec();
      }
    }
    if (param_4 == 0) {
      *(int *)(temp_v0 + 0x74) = param_3;
    }
  }
  return;
}

} /* extern "C" */
