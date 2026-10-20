#include "romwright_types.h"

extern "C" {

extern int DAT_0043e128; /* 0x43e128 */


unsigned int FUN_001ab9dc(void)

{
  return *(unsigned int *)(DAT_0043e128 + 0xc);
}

} /* extern "C" */
