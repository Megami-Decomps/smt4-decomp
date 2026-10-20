#include "romwright_types.h"

extern "C" {


void FUN_003dcaac(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 0x302c) = param_2;
  *(unsigned int *)(param_1 + 0x3030) = 0;
  *(unsigned int *)(param_1 + 0x3028) = (*(unsigned int *)(param_1 + 0x3028) & 0xffffff1f) | 0x10;
  return;
}

} /* extern "C" */
