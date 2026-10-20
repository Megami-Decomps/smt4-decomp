#include "romwright_types.h"

extern "C" {

extern int DAT_0043daf8; /* 0x43daf8 */


unsigned char FUN_002d7460(void)

{
  return *(char *)(DAT_0043daf8 + 0x40) != '\0';
}

} /* extern "C" */
