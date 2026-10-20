#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f588; /* 0x57f588 */


unsigned char FUN_0037d6c4(void)

{
  return *(char *)((*(int *)((unsigned char *)&DAT_0057f588 + 0x4)) + 8) == '\x04';
}

} /* extern "C" */
