#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055bde0; /* 0x55bde0 */

extern unsigned int *FUN_00460e9c(unsigned int, unsigned int);


void FUN_0045c11c(unsigned int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_00460e9c(param_1,0);
  *puVar1 = (unsigned int)&DAT_0055bde0;
  return;
}

} /* extern "C" */
