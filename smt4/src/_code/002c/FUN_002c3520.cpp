#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004651e8; /* 0x4651e8 */


unsigned int FUN_002c3520(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_004651e8 + 0x4));
}

} /* extern "C" */
