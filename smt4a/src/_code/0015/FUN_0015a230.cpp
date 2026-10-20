#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005c0aa0; /* 0x5c0aa0 */


void FUN_0015a230(void)

{
  (*(unsigned char *)((unsigned char *)&DAT_005c0aa0 + 0x1)) = 1;
  return;
}

} /* extern "C" */
