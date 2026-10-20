#include "romwright_types.h"

extern "C" {

extern int DAT_0043db10; /* 0x43db10 */


unsigned char FUN_00211784(void)

{
  return *(char *)(DAT_0043db10 + 0x15c) != '\0';
}

} /* extern "C" */
