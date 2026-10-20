#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004d4680; /* 0x4d4680 */


unsigned char FUN_002cc22c(void)

{
  return (*(unsigned char *)((unsigned char *)&DAT_004d4680 + 0x6c));
}

} /* extern "C" */
