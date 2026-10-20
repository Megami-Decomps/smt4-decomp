#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f110; /* 0x57f110 */


int FUN_003192e0(void)

{
  return (*(int *)((unsigned char *)&DAT_0057f110 + 0x4)) + 0xb0;
}

} /* extern "C" */
