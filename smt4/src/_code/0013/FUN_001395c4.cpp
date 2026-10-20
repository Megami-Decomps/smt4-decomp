#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00473888; /* 0x473888 */


unsigned char FUN_001395c4(void)

{
  return (*(unsigned char *)((unsigned char *)&DAT_00473888 + 0x3));
}

} /* extern "C" */
