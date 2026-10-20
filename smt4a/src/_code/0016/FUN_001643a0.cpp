#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f248; /* 0x57f248 */


unsigned char FUN_001643a0(void)

{
  return *(unsigned char *)((*(int *)((unsigned char *)&DAT_0057f248 + 0x4)) + 8);
}

} /* extern "C" */
