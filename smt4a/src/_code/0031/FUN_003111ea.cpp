#include "romwright_types.h"

extern "C" {


unsigned int FUN_003111ea(int param_1)

{
  if (*(char *)(param_1 + 0x34) != '\x02') {
    return 0;
  }
  return 1;
}

} /* extern "C" */
