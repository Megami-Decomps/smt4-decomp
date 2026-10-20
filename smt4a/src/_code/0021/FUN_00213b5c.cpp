#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f698; /* 0x57f698 */


unsigned char FUN_00213b5c(void)

{
  return *(unsigned char *)((*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + 0x27ec4);
}

} /* extern "C" */
