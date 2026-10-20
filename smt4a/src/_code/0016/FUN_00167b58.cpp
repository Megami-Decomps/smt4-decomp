#include "romwright_types.h"

extern "C" {

extern int DAT_00581274; /* 0x581274 */


unsigned int FUN_00167b58(void)

{
  if (DAT_00581274 == 0) {
    return 1;
  }
  if (*(int *)(DAT_00581274 + 0x28) == 0x17) {
    if (*(int *)(DAT_00581274 + 0x2c) >= 0xc) {
      return 1;
    }
  }
  else if (*(int *)(DAT_00581274 + 0x28) == 0x18) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
