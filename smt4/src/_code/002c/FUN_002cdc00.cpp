#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e188; /* 0x43e188 */


unsigned char FUN_002cdc00(void)

{
  return *(char *)((*(int *)((unsigned char *)&DAT_0043e188 + 0x8)) + 0x7e) != '\0';
}

} /* extern "C" */
