#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00558630; /* 0x558630 */

extern unsigned int *FUN_002ea6e8(void);


void FUN_002ea658(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002ea6e8();
  *puVar1 = (unsigned int)&DAT_00558630;
  return;
}

} /* extern "C" */
