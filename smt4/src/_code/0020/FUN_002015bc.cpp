#include "romwright_types.h"

extern "C" {

extern int DAT_0043e128; /* 0x43e128 */


unsigned int FUN_002015bc(void)

{
  return *(unsigned int *)(DAT_0043e128 + 0x10);
}

} /* extern "C" */
