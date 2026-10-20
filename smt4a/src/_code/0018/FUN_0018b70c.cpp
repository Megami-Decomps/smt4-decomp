#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005891d8; /* 0x5891d8 */


unsigned int FUN_0018b70c(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_005891d8 + 0x14));
}

} /* extern "C" */
