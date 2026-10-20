#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055c270; /* 0x55c270 */

extern unsigned int *FUN_004625c0(void);


void FUN_00463298(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_004625c0();
  *puVar1 = (unsigned int)&DAT_0055c270;
  return;
}

} /* extern "C" */
