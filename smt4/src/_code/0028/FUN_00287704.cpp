#include "romwright_types.h"

extern "C" {


unsigned int FUN_00287704(int param_1)

{
  unsigned int temp_v0;
  
  if (param_1 == 0) {
    temp_v0 = 0x4c4404;
  }
  else if (param_1 == 1) {
    temp_v0 = 0x4c45a4;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
