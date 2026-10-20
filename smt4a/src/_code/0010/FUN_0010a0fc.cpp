#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005949d8; /* 0x5949d8 */


unsigned int FUN_0010a0fc(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_005949d8 + 0x3c));
}

} /* extern "C" */
