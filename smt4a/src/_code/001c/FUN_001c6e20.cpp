#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00589284; /* 0x589284 */


int FUN_001c6e20(void)

{
  return (int)(*(signed char *)((unsigned char *)&DAT_00589284 + 0x1));
}

} /* extern "C" */
