#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00640534; /* 0x640534 */


unsigned int FUN_00340fa0(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_00640534 + 0x18));
}

} /* extern "C" */
