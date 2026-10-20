#include "romwright_types.h"

extern "C" {

extern int DAT_0043dcf0; /* 0x43dcf0 */


void FUN_0024aa74(void)

{
  unsigned short *p = (unsigned short *)DAT_0043dcf0;
  if (p != 0) {
    p[0x1e] = 0;
    p[0x20] = 0xffff;
    p[0x1f] = 0;
  }
  return;
}

} /* extern "C" */
