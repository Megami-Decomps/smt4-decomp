#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00464af0; /* 0x464af0 */


unsigned char FUN_00104e0c(void)

{
  return (*(signed char *)((unsigned char *)&DAT_00464af0 + 0x4)) == '\x02';
}

} /* extern "C" */
