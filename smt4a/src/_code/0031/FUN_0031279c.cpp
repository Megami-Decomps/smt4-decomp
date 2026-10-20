#include "romwright_types.h"

extern "C" {

extern int DAT_00580ca0; /* 0x580ca0 */


void FUN_0031279c(void)

{
  *(unsigned int *)(DAT_00580ca0 + 0x74) = 1;
  return;
}

} /* extern "C" */
