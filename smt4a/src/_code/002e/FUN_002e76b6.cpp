#include "romwright_types.h"

extern "C" {


int FUN_002e76b6(int param_1)

{
  return *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x18);
}

} /* extern "C" */
