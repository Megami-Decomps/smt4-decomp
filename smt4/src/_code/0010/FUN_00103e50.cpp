#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e2a8; /* 0x43e2a8 */


int FUN_00103e50(void)

{
  return (int)(*(signed char *)((unsigned char *)&DAT_0043e2a8 + 0x2));
}

} /* extern "C" */
