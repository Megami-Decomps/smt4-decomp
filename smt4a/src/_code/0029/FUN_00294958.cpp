#include "romwright_types.h"

extern "C" {

extern int DAT_00580ca0; /* 0x580ca0 */


void FUN_00294958(void)

{
  *(unsigned int *)(DAT_00580ca0 + 0x8c) = 1;
  return;
}

} /* extern "C" */
