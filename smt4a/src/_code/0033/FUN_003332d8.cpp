#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f6c8; /* 0x57f6c8 */


unsigned char FUN_003332d8(void)

{
  return (*(signed char *)((unsigned char *)&DAT_0057f6c8 + 0x1)) == '\0';
}

} /* extern "C" */
