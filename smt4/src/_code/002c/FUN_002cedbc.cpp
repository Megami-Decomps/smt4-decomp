#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e310; /* 0x43e310 */


unsigned char FUN_002cedbc(void)

{
  return (*(signed char *)((unsigned char *)&DAT_0043e310 + 0x1)) == '\0';
}

} /* extern "C" */
