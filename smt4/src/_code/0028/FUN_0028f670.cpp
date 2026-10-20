#include "romwright_types.h"

extern "C" {

extern int DAT_0043dd68; /* 0x43dd68 */


unsigned char FUN_0028f670(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0043dd68 != 0) {
    temp_v0 = *(int *)(DAT_0043dd68 + 0x400);
  }
  return DAT_0043dd68 == 0 || temp_v0 == 0x24;
}

} /* extern "C" */
