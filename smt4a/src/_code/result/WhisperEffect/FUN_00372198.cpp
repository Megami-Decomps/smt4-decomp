#include "romwright_types.h"

extern "C" {

extern int DAT_00588c54; /* 0x588c54 */


void FUN_00372198(void)

{
  *(unsigned char *)(DAT_00588c54 + 8) = 1;
  return;
}

} /* extern "C" */
