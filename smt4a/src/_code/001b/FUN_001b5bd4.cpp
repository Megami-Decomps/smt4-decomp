#include "romwright_types.h"

extern "C" {


unsigned int FUN_001b5bd4(int param_1,int param_2,int param_3)

{
  *(unsigned char *)(param_1 + param_2 * 2 + param_3) = 0;
  return 1;
}

} /* extern "C" */
