#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005c0aa0; /* 0x5c0aa0 */


unsigned int FUN_001a2a4c(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_005c0aa0 + 0x1c));
}

} /* extern "C" */
