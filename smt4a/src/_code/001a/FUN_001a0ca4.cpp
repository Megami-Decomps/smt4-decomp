#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005c1bec; /* 0x5c1bec */


unsigned char FUN_001a0ca4(void)

{
  return (*(int *)((unsigned char *)&DAT_005c1bec + 0x4)) != 0;
}

} /* extern "C" */
