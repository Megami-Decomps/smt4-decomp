#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f698; /* 0x57f698 */


int FUN_00162e8c(void)

{
  return (*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + 0x3e74;
}

} /* extern "C" */
