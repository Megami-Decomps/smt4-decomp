#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00464af0; /* 0x464af0 */


unsigned int FUN_002c5be8(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_00464af0 + 0x44));
}

} /* extern "C" */
