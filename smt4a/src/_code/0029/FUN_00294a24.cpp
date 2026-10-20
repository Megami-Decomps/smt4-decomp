#include "romwright_types.h"

extern "C" {

extern int DAT_0058103c; /* 0x58103c */


unsigned char FUN_00294a24(void)

{
  return *(int *)(DAT_0058103c + 0x40) != 0xff;
}

} /* extern "C" */
