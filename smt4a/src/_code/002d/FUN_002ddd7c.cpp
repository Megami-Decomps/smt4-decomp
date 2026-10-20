#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005821c4; /* 0x5821c4 */


unsigned int FUN_002ddd7c(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_005821c4 + 0x28));
}

} /* extern "C" */
