#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005b40b4; /* 0x5b40b4 */


unsigned int FUN_00280bc0(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_005b40b4 + 0x10));
}

} /* extern "C" */
