#include "romwright_types.h"

extern "C" {

extern int DAT_00580238; /* 0x580238 */


unsigned int FUN_00324b00(void)

{
  return *(unsigned int *)(DAT_00580238 + 0xcc);
}

} /* extern "C" */
