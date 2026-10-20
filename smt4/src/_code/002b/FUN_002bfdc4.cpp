#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004c5634; /* 0x4c5634 */


unsigned char FUN_002bfdc4(void)

{
  return (*(unsigned char *)((unsigned char *)&DAT_004c5634 + 0x1e5));
}

} /* extern "C" */
