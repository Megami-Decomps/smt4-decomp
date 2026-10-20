#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005b3268; /* 0x5b3268 */


unsigned int FUN_001acf08(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_005b3268 + 0x4));
}

} /* extern "C" */
