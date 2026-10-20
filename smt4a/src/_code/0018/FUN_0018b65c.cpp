#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005891d8; /* 0x5891d8 */


unsigned char FUN_0018b65c(void)

{
  return ((*(unsigned int *)((unsigned char *)&DAT_005891d8 + 0x18)) & 7) == 2;
}

} /* extern "C" */
