#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00471a70; /* 0x471a70 */


int FUN_00147dd0(void)

{
  return (int)(*(signed char *)((unsigned char *)&DAT_00471a70 + 0x2));
}

} /* extern "C" */
