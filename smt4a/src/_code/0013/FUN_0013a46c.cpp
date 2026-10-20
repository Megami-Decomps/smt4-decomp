#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00640130; /* 0x640130 */


void FUN_0013a46c(int param_1,int param_2)

{
  if (param_1 < 0x200) {
    (&DAT_00640130)[param_1] = param_2 != 0;
  }
  return;
}

} /* extern "C" */
