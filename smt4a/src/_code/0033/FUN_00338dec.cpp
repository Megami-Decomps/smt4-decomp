#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005f0c7c; /* 0x5f0c7c */


int FUN_00338dec(void)

{
  return (int)(*(signed char *)((unsigned char *)&DAT_005f0c7c + 0x76));
}

} /* extern "C" */
