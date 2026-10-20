#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004e6ef0; /* 0x4e6ef0 */

extern void nn_os_AddressSpaceManager_Free(unsigned int, unsigned int);


void FUN_00357488(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    nn_os_AddressSpaceManager_Free((unsigned int)&DAT_004e6ef0,param_1);
    return;
  }
  return;
}

} /* extern "C" */
