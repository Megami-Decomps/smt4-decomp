#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005c0ac8; /* 0x5c0ac8 */


unsigned int FUN_00188c94(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_005c0ac8 + 0x4));
}

} /* extern "C" */
