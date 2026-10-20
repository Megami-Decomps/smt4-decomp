#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005f19fc; /* 0x5f19fc */


int FUN_003c4ce8(void)

{
  return (int)(*(signed char *)((unsigned char *)&DAT_005f19fc + 0x50));
}

} /* extern "C" */
