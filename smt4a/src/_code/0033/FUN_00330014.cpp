#include "romwright_types.h"

extern "C" {

extern int DAT_0057f390; /* 0x57f390 */


int FUN_00330014(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = 0;
  if ((param_1 < 0x20) && (DAT_0057f390 != 0)) {
    temp_v0 = DAT_0057f390 + param_1 * 100 + 0x98;
  }
  return temp_v0;
}

} /* extern "C" */
