#include "romwright_types.h"

extern "C" {

extern int DAT_0044e190; /* 0x44e190 */


void FUN_0030aacc(void)

{
  int *piVar1;
  int temp_v1;
  
  piVar1 = (int *)DAT_0044e190;
  if (piVar1 != 0) {
    piVar1[0x101] = piVar1[0x100];
    piVar1[0x100] = 6;
  }
  return;
}

} /* extern "C" */
