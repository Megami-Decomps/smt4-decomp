#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055a4a0; /* 0x55a4a0 */

extern unsigned int *FUN_0030723c(void);


void FUN_0011b164(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_0030723c();
  *puVar1 = (unsigned int)&DAT_0055a4a0;
  return;
}

} /* extern "C" */
