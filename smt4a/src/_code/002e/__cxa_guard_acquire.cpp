#include "romwright_types.h"

extern "C" {


unsigned int __cxa_guard_acquire(int *param_1)

{
  if (*param_1 != 0) {
    return 0;
  }
  *param_1 = 1;
  return 1;
}

} /* extern "C" */
