#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00570264; /* 0x570264 */


unsigned char FUN_00240a6c(void)

{
  return (*(int *)((unsigned char *)&DAT_00570264 + 0x4)) != 0;
}

} /* extern "C" */
