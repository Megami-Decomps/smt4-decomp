#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f698; /* 0x57f698 */


unsigned short FUN_00203b08(void)

{
  return *(*(unsigned short * *)((unsigned char *)&DAT_0057f698 + 0xc));
}

} /* extern "C" */
