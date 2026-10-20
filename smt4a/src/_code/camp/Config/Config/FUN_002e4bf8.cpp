#include "romwright_types.h"

extern "C" {

extern int DAT_0057f230; /* 0x57f230 */


unsigned int FUN_002e4bf8(void)

{
  return *(unsigned int *)(DAT_0057f230 + 0xbc);
}

} /* extern "C" */
