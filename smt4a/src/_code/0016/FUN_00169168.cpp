#include "romwright_types.h"

extern "C" {


unsigned char FUN_00169168(int param_1)

{
  return *(char *)(param_1 + 0x44) == '\x02';
}

} /* extern "C" */
