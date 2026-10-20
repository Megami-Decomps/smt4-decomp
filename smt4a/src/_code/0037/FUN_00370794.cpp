#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f588; /* 0x57f588 */


unsigned int FUN_00370794(void)

{
  return *(unsigned int *)((*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) + 0x20);
}

} /* extern "C" */
