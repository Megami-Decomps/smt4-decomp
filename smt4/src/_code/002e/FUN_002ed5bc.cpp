#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043dc20; /* 0x43dc20 */


unsigned char FUN_002ed5bc(void)

{
  return *(int *)((*(int *)((unsigned char *)&DAT_0043dc20 + 0x8)) + 4) == 7;
}

} /* extern "C" */
