#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0062e688; /* 0x62e688 */


unsigned char FUN_002ee9e4(void)

{
  return (*(int *)((unsigned char *)&DAT_0062e688 + 0x10)) == 1;
}

} /* extern "C" */
