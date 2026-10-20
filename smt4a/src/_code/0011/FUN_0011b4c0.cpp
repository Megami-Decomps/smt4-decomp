#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055a580; /* 0x55a580 */

extern unsigned int *FUN_0030723c(void);


void FUN_0011b4c0(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_0030723c();
  *puVar1 = (unsigned int)&DAT_0055a580;
  return;
}

} /* extern "C" */
