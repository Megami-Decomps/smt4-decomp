#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0060fc08; /* 0x60fc08 */


unsigned int FUN_00371058(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_0060fc08 + 0x380));
}

} /* extern "C" */
