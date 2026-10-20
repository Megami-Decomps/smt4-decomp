#include "romwright_types.h"

extern "C" {

extern int DAT_0057f57c; /* 0x57f57c */


unsigned char FUN_00208b68(void)

{
  return *(int *)(DAT_0057f57c + 8) != 0;
}

} /* extern "C" */
