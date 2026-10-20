#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_006306f8; /* 0x6306f8 */


unsigned char FUN_0032cdb8(void)

{
  return (*(unsigned char *)((unsigned char *)&DAT_006306f8 + 0x6c));
}

} /* extern "C" */
