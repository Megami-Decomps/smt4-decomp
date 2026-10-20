#include "romwright_types.h"

extern "C" {

extern int FUN_00162e8c(void);


int FUN_00398048(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_00162e8c();
  if ((temp_v0 != 0) && (param_1 < 8)) {
    temp_v0 = temp_v0 + param_1 * 4 + 0x1590;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
