#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004d4880; /* 0x4d4880 */


int FUN_002ebe58(void)

{
  return (int)(*(signed char *)((unsigned char *)&DAT_004d4880 + 0x91));
}

} /* extern "C" */
