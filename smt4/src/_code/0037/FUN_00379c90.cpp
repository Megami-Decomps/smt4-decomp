#include "romwright_types.h"

extern "C" {


void FUN_00379c90(int param_1,int param_2)

{
  *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_2 * 4 + 0x414b54);
  return;
}

} /* extern "C" */
