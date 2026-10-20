#include "romwright_types.h"

extern "C" {

extern int DAT_0057f28c; /* 0x57f28c */


unsigned char FUN_003a7c1c(void)

{
  return *(int *)(DAT_0057f28c + 4) == 0;
}

} /* extern "C" */
