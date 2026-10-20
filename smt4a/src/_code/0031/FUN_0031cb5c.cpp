#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f3b4; /* 0x57f3b4 */


unsigned char FUN_0031cb5c(void)

{
  return (*(int *)((unsigned char *)&DAT_0057f3b4 + 0x8)) != 0;
}

} /* extern "C" */
