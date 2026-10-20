#include "romwright_types.h"

extern "C" {


unsigned char FUN_003bf570(int param_1)

{
  if (param_1 - 4U < 0x32) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
