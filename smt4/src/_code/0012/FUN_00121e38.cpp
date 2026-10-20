#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00422110; /* 0x422110 */

extern unsigned int *FUN_001314fc(void);


void FUN_00121e38(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_001314fc();
  *puVar1 = (unsigned int)&DAT_00422110;
  return;
}

} /* extern "C" */
