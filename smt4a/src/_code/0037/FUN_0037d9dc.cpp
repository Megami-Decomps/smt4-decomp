#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f254; /* 0x57f254 */


unsigned char FUN_0037d9dc(void)

{
  return *(int *)((*(int *)((unsigned char *)&DAT_0057f254 + 0x4)) + 0x14) == 0;
}

} /* extern "C" */
