#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f6c8; /* 0x57f6c8 */


int FUN_00213cfc(void)

{
  return (int)(*(signed char *)((unsigned char *)&DAT_0057f6c8 + 0x4));
}

} /* extern "C" */
