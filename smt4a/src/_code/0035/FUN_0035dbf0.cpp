#include "romwright_types.h"

extern "C" {

extern int DAT_0057f28c; /* 0x57f28c */


unsigned char FUN_0035dbf0(void)

{
  return *(int *)(DAT_0057f28c + 4) == 0xd;
}

} /* extern "C" */
