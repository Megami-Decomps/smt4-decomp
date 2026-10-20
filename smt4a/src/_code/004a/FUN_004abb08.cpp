#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */


unsigned char FUN_004abb08(void)

{
  return *(int *)((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 0x74a0) == 4;
}

} /* extern "C" */
