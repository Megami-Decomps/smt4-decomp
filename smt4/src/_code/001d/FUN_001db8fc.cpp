#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004651e8; /* 0x4651e8 */


unsigned int FUN_001db8fc(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_004651e8 + 0x10));
}

} /* extern "C" */
