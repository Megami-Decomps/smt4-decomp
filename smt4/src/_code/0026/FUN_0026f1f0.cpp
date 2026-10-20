#include "romwright_types.h"

extern "C" {

extern int DAT_0043daa8; /* 0x43daa8 */


unsigned int FUN_0026f1f0(void)

{
  return *(unsigned int *)(DAT_0043daa8 + 0xcf8);
}

} /* extern "C" */
