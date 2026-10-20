#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f698; /* 0x57f698 */


int FUN_001388c8(void)

{
  return (int)(*(signed char *)((unsigned char *)&DAT_0057f698 + 0x2));
}

} /* extern "C" */
