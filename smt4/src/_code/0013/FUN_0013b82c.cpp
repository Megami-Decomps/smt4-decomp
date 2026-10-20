#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e380; /* 0x44e380 */


unsigned char FUN_0013b82c(void)

{
  return (*(unsigned char *)((unsigned char *)&DAT_0044e380 + 0x3));
}

} /* extern "C" */
