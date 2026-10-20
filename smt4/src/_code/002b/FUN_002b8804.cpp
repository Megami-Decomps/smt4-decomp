#include "romwright_types.h"

extern "C" {

extern unsigned int *DAT_0043e0d0; /* 0x43e0d0 */

extern int FUN_002bf244(unsigned int);


unsigned char FUN_002b8804(void)

{
  int temp_v0;
  
  if (DAT_0043e0d0 == (unsigned int *)0x0) {
    return 0;
  }
  temp_v0 = FUN_002bf244(*DAT_0043e0d0);
  return temp_v0 != 0;
}

} /* extern "C" */
