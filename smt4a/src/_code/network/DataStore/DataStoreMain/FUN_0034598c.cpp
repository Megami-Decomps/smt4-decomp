#include "romwright_types.h"

extern "C" {

extern unsigned int *DAT_00588120; /* 0x588120 */

extern int FUN_00184e20(unsigned int);


unsigned char FUN_0034598c(void)

{
  int temp_v0;
  
  if ((DAT_00588120 != (unsigned int *)0x0) && (temp_v0 = FUN_00184e20(*DAT_00588120), temp_v0 != 0)) {
    return *(char *)(DAT_00588120[3] + 0x14) != '\0';
  }
  return 0;
}

} /* extern "C" */
