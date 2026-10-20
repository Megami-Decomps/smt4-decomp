#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f110; /* 0x57f110 */


unsigned char FUN_00237608(void)

{
  return (*(int *)((unsigned char *)&DAT_0057f110 + 0x4)) != 0;
}

} /* extern "C" */
