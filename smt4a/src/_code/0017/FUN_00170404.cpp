#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005891b0; /* 0x5891b0 */


int FUN_00170404(void)

{
  return (int)(*(signed char *)((unsigned char *)&DAT_005891b0 + 0x2));
}

} /* extern "C" */
