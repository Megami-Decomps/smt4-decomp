#include "romwright_types.h"

extern "C" {

extern int DAT_0043dd50; /* 0x43dd50 */


unsigned short FUN_002eff34(void)

{
  return *(unsigned short *)(DAT_0043dd50 + 0x980);
}

} /* extern "C" */
