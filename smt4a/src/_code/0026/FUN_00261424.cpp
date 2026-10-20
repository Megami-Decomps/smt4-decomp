#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f698; /* 0x57f698 */


unsigned int FUN_00261424(void)

{
  return *(unsigned int *)((*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + 0x5448);
}

} /* extern "C" */
