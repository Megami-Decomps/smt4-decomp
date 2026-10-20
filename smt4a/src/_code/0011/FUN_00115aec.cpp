#include "romwright_types.h"

extern "C" {


unsigned int FUN_00115aec(int param_1)

{
  if ((param_1 == 4) || (param_1 == 8)) {
    return 8;
  }
  if ((param_1 != 0x10) && (param_1 != 0x20)) {
    return 0x100;
  }
  return 0x20;
}

} /* extern "C" */
