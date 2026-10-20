#include "romwright_types.h"

extern "C" {

extern int DAT_00580ca0; /* 0x580ca0 */


void FUN_003127b4(void)

{
  *(unsigned int *)(DAT_00580ca0 + 0x78) = 1;
  return;
}

} /* extern "C" */
