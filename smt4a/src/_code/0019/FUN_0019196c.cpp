#include "romwright_types.h"

extern "C" {


unsigned int FUN_0019196c(int param_1,int param_2)
{
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (param_2 != 1) {
      return 0;
    }
  }
  else if (param_2 != 2) {
    return 0;
  }
  return *(int *)(param_1 + 4) == 6;
}
} /* extern "C" */
