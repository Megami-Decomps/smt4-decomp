#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e360; /* 0x44e360 */


int FUN_002bb638(void)

{
  return (int)(*(signed char *)((unsigned char *)&DAT_0044e360 + 0x2));
}

} /* extern "C" */
