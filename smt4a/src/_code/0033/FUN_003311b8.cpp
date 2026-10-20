#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f588; /* 0x57f588 */


unsigned char FUN_003311b8(void)

{
  return *(char *)((*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) + 0x8f) != '\0';
}

} /* extern "C" */
