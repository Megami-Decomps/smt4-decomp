#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0049fb1c; /* 0x49fb1c */


int FUN_00287304(void)

{
  return (int)(*(signed char *)((unsigned char *)&DAT_0049fb1c + 0xf8));
}

} /* extern "C" */
