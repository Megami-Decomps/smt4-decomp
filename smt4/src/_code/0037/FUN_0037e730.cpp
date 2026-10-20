#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00421e00; /* 0x421e00 */

extern unsigned int *FUN_0037df5c(void);


void FUN_0037e730(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_0037df5c();
  *puVar1 = (unsigned int)&DAT_00421e00;
  return;
}

} /* extern "C" */
