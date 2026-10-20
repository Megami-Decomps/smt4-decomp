#include "romwright_types.h"

extern "C" {

extern int DAT_00447060; /* 0x447060 */


unsigned char FUN_002f35b8(void)

{
  if (*(int *)(DAT_00447060 + 200) < 0x3f000000) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
