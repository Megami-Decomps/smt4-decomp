#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588e3c; /* 0x588e3c */


unsigned int FUN_002deb84(void)

{
  return *(unsigned int *)((*(int *)((unsigned char *)&DAT_00588e3c + 0x20)) + 0xd0);
}

} /* extern "C" */
