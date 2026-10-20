#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00446db0; /* 0x446db0 */


unsigned int FUN_00256540(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_00446db0 + 0x18));
}

} /* extern "C" */
