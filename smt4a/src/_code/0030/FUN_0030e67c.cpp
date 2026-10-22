#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055aeb0; /* 0x55aeb0 */

extern unsigned int *_ZN9Obj5590e4C1Eh(unsigned int, unsigned int);


void FUN_0030e67c(unsigned int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)_ZN9Obj5590e4C1Eh(param_1,1);
  *puVar1 = (unsigned int)&DAT_0055aeb0;
  return;
}

} /* extern "C" */
