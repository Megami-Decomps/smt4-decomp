#include "romwright_types.h"

extern "C" {

extern int DAT_00587f28; /* 0x587f28 */


unsigned int FUN_00492c84(void)

{
  return *(unsigned int *)(DAT_00587f28 + 0x38);
}

} /* extern "C" */
