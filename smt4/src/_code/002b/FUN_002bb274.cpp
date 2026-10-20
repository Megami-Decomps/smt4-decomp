#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e458; /* 0x44e458 */


int FUN_002bb274(void)

{
  return (int)(*(signed char *)((unsigned char *)&DAT_0044e458 + 0x1));
}

} /* extern "C" */
