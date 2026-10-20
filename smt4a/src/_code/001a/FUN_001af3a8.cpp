#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005c1bec; /* 0x5c1bec */


unsigned int FUN_001af3a8(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_005c1bec + 0x4));
}

} /* extern "C" */
