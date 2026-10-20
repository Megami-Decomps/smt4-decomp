#include "romwright_types.h"

extern "C" {

extern int DAT_00447a78; /* 0x447a78 */


unsigned char FUN_00273808(void)

{
  return *(int *)(DAT_00447a78 + 0x34) != 0xff;
}

} /* extern "C" */
