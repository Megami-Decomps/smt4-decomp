#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f698; /* 0x57f698 */


unsigned char FUN_001b4aa0(void)

{
  return *(unsigned char *)((*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + 0x21610);
}

} /* extern "C" */
