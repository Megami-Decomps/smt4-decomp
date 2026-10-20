#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00471b48; /* 0x471b48 */


unsigned int FUN_002c3984(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_00471b48 + 0x4));
}

} /* extern "C" */
