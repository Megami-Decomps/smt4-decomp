#include "romwright_types.h"

extern "C" {


unsigned int FUN_001e19dc(int *param_1,int param_2)

{
  return *(unsigned int *)(*(int *)(*param_1 + 0x14) + param_2 * 4);
}

} /* extern "C" */
