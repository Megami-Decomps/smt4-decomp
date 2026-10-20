#include "romwright_types.h"

extern "C" {

extern int DAT_00447a78; /* 0x447a78 */


void FUN_00276934(void)

{
  int temp_v0;
  
  temp_v0 = DAT_00447a78;
  *(unsigned int *)(DAT_00447a78 + 0x30) = 1;
  *(unsigned int *)(temp_v0 + 0x38) = 1;
  return;
}

} /* extern "C" */
