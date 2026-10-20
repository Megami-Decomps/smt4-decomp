#include "romwright_types.h"

extern "C" {


unsigned char FUN_00160064(int param_1)

{
  return *(char *)(param_1 + 0xa1) == '\x01' || *(char *)(param_1 + 0xa1) == '\x02';
}

} /* extern "C" */
