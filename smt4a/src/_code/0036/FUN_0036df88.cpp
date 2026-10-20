#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f208; /* 0x57f208 */


unsigned char FUN_0036df88(void)

{
  return *(int *)((*(int *)((unsigned char *)&DAT_0057f208 + 0x8)) + 4) == 7;
}

} /* extern "C" */
