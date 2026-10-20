#include "romwright_types.h"

extern "C" {

extern int DAT_0043ded0; /* 0x43ded0 */


unsigned int FUN_0031bc6c(void)

{
  return *(unsigned int *)(DAT_0043ded0 + 0x30);
}

} /* extern "C" */
