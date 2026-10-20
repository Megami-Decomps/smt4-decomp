#include "romwright_types.h"

extern "C" {

extern int DAT_00573808; /* 0x573808 */


void FUN_004d7fe4(unsigned int *param_1)

{
  *param_1 = 9;
  *(unsigned char *)(param_1 + 0xb) = 0;
  *(unsigned int *)(DAT_00573808 + 0x3050) = 0;
  return;
}

} /* extern "C" */
