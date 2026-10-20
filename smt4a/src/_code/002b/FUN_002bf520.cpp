#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f110; /* 0x57f110 */


int FUN_002bf520(void)

{
  return (*(int *)((unsigned char *)&DAT_0057f110 + 0x4)) + 0x40;
}

} /* extern "C" */
