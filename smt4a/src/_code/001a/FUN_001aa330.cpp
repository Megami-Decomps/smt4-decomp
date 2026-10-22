/* NON_MATCHING: found outside every function: its address is in FUN_001a007c's literal pool; not written yet. */
/* romwright 0.5.0 decompilation of FUN_001aa330 for reference (not compiled; its own view of the boundaries):

unsigned int * FUN_001aa330(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  *param_1 = &DAT_0055839c;
  if (param_1[9] != 0) {
    param_1[9] = 0;
  }
  *param_1 = &DAT_0055845c;
  if (param_1[3] != 0) {
    FUN_00195fc8();
  }
  if (param_1[4] != 0) {
    FUN_00195fc8();
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
