#include "romwright_types.h"

extern "C" {

extern int DAT_00588fe8; /* 0x588fe8 */


unsigned short FUN_0039c3b0(void)

{
  return *(unsigned short *)(DAT_00588fe8 + *(int *)(DAT_00588fe8 + 0x654) * 2 + 0x59c);
}

} /* extern "C" */
