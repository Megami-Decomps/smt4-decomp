/* NON_MATCHING: vptr constant is restored; recovered destructor member traversal and load scheduling differ. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

extern unsigned int DAT_00420ff4[];
int * FUN_0036203c(int *param_1)

{
  int param_2;
  int *piVar1;
  int temp_v0;
  
  *param_1 = (unsigned int)DAT_00420ff4;
  param_1[8] = param_1[7];
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    param_2 = param_1[7];
  }
  if (piVar1 != (int *)0x0 && param_2 != 0) {
    (**(romwright_code **)(*piVar1 + 0xc))();
  }
  piVar1 = (int *)param_1[2];
  temp_v0 = param_1[3];
  param_1[4] = temp_v0;
  if (piVar1 != (int *)0x0) {
    temp_v0 = param_1[3];
  }
  if (piVar1 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*piVar1 + 0xc))();
  }
  return param_1;
}

} /* extern "C" */
