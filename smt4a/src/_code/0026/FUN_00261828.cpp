#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f698; /* 0x57f698 */


int FUN_00261828(void)

{
  return (*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + 0x22220;
}

} /* extern "C" */
