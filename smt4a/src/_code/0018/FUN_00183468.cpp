#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005b3bf4; /* 0x5b3bf4 */


unsigned int FUN_00183468(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_005b3bf4 + 0x44));
}

} /* extern "C" */
