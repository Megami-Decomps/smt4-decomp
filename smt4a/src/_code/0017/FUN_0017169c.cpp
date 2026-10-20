#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005891d8; /* 0x5891d8 */


int FUN_0017169c(void)

{
  return (int)(*(signed char *)((unsigned char *)&DAT_005891d8 + 0x1));
}

} /* extern "C" */
