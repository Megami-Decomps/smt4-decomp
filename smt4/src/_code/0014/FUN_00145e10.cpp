#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044ea58; /* 0x44ea58 */


unsigned int FUN_00145e10(void)

{
  return *(unsigned int *)((*(int *)((unsigned char *)&DAT_0044ea58 + 0x4)) + 0x84);
}

} /* extern "C" */
