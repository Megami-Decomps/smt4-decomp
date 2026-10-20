#include "romwright_types.h"

extern "C" {

extern int DAT_0043dd50; /* 0x43dd50 */


unsigned char FUN_00311594(void)

{
  return *(int *)(DAT_0043dd50 + 4) == 0;
}

} /* extern "C" */
