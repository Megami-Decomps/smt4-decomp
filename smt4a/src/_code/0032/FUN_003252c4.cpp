#include "romwright_types.h"

extern "C" {

extern int DAT_00580ca0; /* 0x580ca0 */


void FUN_003252c4(void)

{
  *(unsigned int *)(DAT_00580ca0 + 0x84) = 3;
  return;
}

} /* extern "C" */
