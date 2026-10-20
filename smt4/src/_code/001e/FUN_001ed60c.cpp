#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e2a8; /* 0x43e2a8 */


unsigned int FUN_001ed60c(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_0043e2a8 + 0x8));
}

} /* extern "C" */
