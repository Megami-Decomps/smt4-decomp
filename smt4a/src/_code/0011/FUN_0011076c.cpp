#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005593b0; /* 0x5593b0 */

extern unsigned int *FUN_00116934(void);


void FUN_0011076c(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_00116934();
  *puVar1 = (unsigned int)&DAT_005593b0;
  return;
}

} /* extern "C" */
