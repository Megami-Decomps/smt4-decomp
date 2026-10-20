#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005b40b4; /* 0x5b40b4 */


unsigned int FUN_00144534(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_005b40b4 + 0x8));
}

} /* extern "C" */
