#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005891d8; /* 0x5891d8 */


unsigned int FUN_0018b67c(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_005891d8 + 0x10));
}

} /* extern "C" */
