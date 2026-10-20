#include "romwright_types.h"

extern "C" {

extern void nn_os_SimpleLock_Initialize(unsigned int);


void FUN_002c38fc(int param_1)

{
  nn_os_SimpleLock_Initialize(param_1);
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 8) = 0;
  return;
}

} /* extern "C" */
