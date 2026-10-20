#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f698; /* 0x57f698 */


unsigned int FUN_00348cd8(void)

{
  return *(unsigned int *)((*(int *)((unsigned char *)&DAT_0057f698 + 0x8)) + 4);
}

} /* extern "C" */
