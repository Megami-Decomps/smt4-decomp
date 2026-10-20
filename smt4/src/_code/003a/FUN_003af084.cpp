#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00439c88; /* 0x439c88 */


unsigned char FUN_003af084(void)

{
  return *(int *)((*(int *)((unsigned char *)&DAT_00439c88 + 0x20)) + 0x7e38) != 0xc && *(int *)((*(int *)((unsigned char *)&DAT_00439c88 + 0x20)) + 0x7e38) != 8;
}

} /* extern "C" */
