#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f698; /* 0x57f698 */


unsigned int FUN_002a46f8(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_0057f698 + 0xc));
}

} /* extern "C" */
