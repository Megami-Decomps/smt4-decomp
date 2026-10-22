/* NON_MATCHING: vptr constant is restored; recovered destructor member traversal and load scheduling differ. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

extern unsigned int DAT_00421004[];
int * FUN_00362164(int *param_1)

{
  int param_2;
  int *piVar1;
  
  *param_1 = (unsigned int)DAT_00421004;
  param_1[6] = param_1[5];
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    param_2 = param_1[5];
  }
  if (piVar1 != (int *)0x0 && param_2 != 0) {
    (**(romwright_code **)(*piVar1 + 0xc))();
  }
  return param_1;
}

} /* extern "C" */
