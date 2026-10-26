/* NON_MATCHING: found outside every function: its address is in FUN_001392fc's literal pool; not written yet. */
/* romwright 0.5.0 decompilation of _ZN9Obj420f4cD1Ev for reference (not compiled; its own view of the boundaries):

unsigned int * _ZN9Obj420f4cD1Ev(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  *param_1 = &DAT_00420eb8;
  if (param_1[9] != 0) {
    param_1[9] = 0;
  }
  *param_1 = &DAT_00420f78;
  if (param_1[3] != 0) {
    FUN_002c52f8();
  }
  if (param_1[4] != 0) {
    FUN_002c52f8();
  }
  puVar1 = (unsigned int *)param_1[4];
  if (puVar1 != (unsigned int *)0x0) {
    do {
      puVar2 = (unsigned int *)puVar1[1];
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1 = puVar2;
    } while (puVar2 != (unsigned int *)0x0);
    param_1[4] = 0;
  }
  return param_1;
}
*/
#include "common.h"
