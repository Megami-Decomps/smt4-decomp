#include "romwright_types.h"

extern "C" {

extern int DAT_00447a78; /* 0x447a78 */


void FUN_0027d890(void)

{
  int temp_v0;
  
  temp_v0 = DAT_00447a78;
  *(unsigned int *)(DAT_00447a78 + 0x30) = 2;
  *(unsigned int *)(temp_v0 + 0x34) = 0xff;
  *(unsigned int *)(temp_v0 + 0x38) = 2;
  return;
}

} /* extern "C" */
