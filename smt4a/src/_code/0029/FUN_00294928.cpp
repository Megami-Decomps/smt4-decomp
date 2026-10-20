#include "romwright_types.h"

extern "C" {

extern int DAT_00580ca0; /* 0x580ca0 */


void FUN_00294928(void)

{
  *(unsigned int *)(DAT_00580ca0 + 0x84) = 1;
  return;
}

} /* extern "C" */
