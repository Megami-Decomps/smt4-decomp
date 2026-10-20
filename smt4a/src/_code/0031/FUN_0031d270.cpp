#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f560; /* 0x57f560 */


int FUN_0031d270(void)

{
  return (int)(*(signed char *)((unsigned char *)&DAT_0057f560 + 0x2));
}

} /* extern "C" */
