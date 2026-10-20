#include "romwright_types.h"

extern "C" {

extern int DAT_0057f290; /* 0x57f290 */


unsigned char FUN_0020a2fc(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0057f290 != 0) {
    temp_v0 = *(int *)(DAT_0057f290 + 0x400);
  }
  return DAT_0057f290 == 0 || temp_v0 == 0x28;
}

} /* extern "C" */
