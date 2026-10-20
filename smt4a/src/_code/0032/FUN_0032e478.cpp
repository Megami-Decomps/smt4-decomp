#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f110; /* 0x57f110 */


unsigned int FUN_0032e478(void)

{
  return *(unsigned int *)((*(int *)((unsigned char *)&DAT_0057f110 + 0x4)) + 0xe8);
}

} /* extern "C" */
