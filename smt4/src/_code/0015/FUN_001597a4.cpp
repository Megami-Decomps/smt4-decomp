#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004eac5c; /* 0x4eac5c */

extern void nn_os_AddressSpaceManager_Free(unsigned int, unsigned int);


void FUN_001597a4(unsigned int param_1)

{
  nn_os_AddressSpaceManager_Free((unsigned int)&DAT_004eac5c,param_1);
  return;
}

} /* extern "C" */
