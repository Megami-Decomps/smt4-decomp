#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f6bc; /* 0x57f6bc */


int FUN_003b70d0(void)

{
  return (int)(*(signed char *)((unsigned char *)&DAT_0057f6bc + 0x4));
}

} /* extern "C" */
