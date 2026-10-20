#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f0c4; /* 0x57f0c4 */


unsigned char FUN_0037b564(void)

{
  return *(unsigned char *)((*(int *)((unsigned char *)&DAT_0057f0c4 + 0x4)) + 0x5e4);
}

} /* extern "C" */
