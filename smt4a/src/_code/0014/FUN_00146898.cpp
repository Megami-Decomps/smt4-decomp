#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005c0ac8; /* 0x5c0ac8 */


unsigned int FUN_00146898(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_005c0ac8 + 0x8));
}

} /* extern "C" */
