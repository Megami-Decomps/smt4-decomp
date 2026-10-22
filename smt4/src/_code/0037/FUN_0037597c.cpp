/* NON_MATCHING: vptr constant is restored; recovered destructor member traversal and load scheduling differ. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

extern unsigned int DAT_004218b8[];
int * FUN_0037597c(int *param_1)

{
  int param_2;
  int *piVar1;
  int temp_v0;
  
  *param_1 = (unsigned int)DAT_004218b8;
  param_1[0x16] = param_1[0x15];
  piVar1 = (int *)param_1[0x14];
  if (piVar1 != (int *)0x0) {
    param_2 = param_1[0x15];
  }
  if (piVar1 != (int *)0x0 && param_2 != 0) {
    (**(romwright_code **)(*piVar1 + 0xc))();
  }
  piVar1 = (int *)param_1[0x10];
  temp_v0 = param_1[0x11];
  param_1[0x12] = temp_v0;
  if (piVar1 != (int *)0x0) {
    temp_v0 = param_1[0x11];
  }
  if (piVar1 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*piVar1 + 0xc))();
  }
  piVar1 = (int *)param_1[0xc];
  temp_v0 = param_1[0xd];
  param_1[0xe] = temp_v0;
  if (piVar1 != (int *)0x0) {
    temp_v0 = param_1[0xd];
  }
  if (piVar1 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*piVar1 + 0xc))();
  }
  piVar1 = (int *)param_1[8];
  temp_v0 = param_1[9];
  param_1[10] = temp_v0;
  if (piVar1 != (int *)0x0) {
    temp_v0 = param_1[9];
  }
  if (piVar1 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*piVar1 + 0xc))();
  }
  piVar1 = (int *)param_1[3];
  temp_v0 = param_1[4];
  param_1[5] = temp_v0;
  if (piVar1 != (int *)0x0) {
    temp_v0 = param_1[4];
  }
  if (piVar1 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*piVar1 + 0xc))();
  }
  return param_1;
}

} /* extern "C" */
