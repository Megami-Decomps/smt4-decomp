#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00471b48; /* 0x471b48 */


unsigned int FUN_0010f820(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_00471b48 + 0x8));
}

} /* extern "C" */
