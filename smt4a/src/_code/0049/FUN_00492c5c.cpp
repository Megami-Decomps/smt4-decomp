#include "romwright_types.h"

extern "C" {

extern int DAT_00587f28; /* 0x587f28 */


unsigned int FUN_00492c5c(void)

{
  return *(unsigned int *)(DAT_00587f28 + 0x30);
}

} /* extern "C" */
