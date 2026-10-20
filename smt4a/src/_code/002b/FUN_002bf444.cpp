#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f0c4; /* 0x57f0c4 */


unsigned char FUN_002bf444(void)

{
  return *(int *)((*(int *)((unsigned char *)&DAT_0057f0c4 + 0x4)) + 0x10) != 1;
}

} /* extern "C" */
