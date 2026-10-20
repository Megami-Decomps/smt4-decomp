#include "romwright_types.h"

extern "C" {


unsigned int FUN_0027e3b8(int *param_1)

{
  if (*param_1 == 0) {
    return 0;
  }
  if (*param_1 == 10 && param_1[10] < 1) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
