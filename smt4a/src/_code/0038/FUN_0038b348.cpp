#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f6bc; /* 0x57f6bc */


int FUN_0038b348(void)

{
  return (int)(*(signed char *)((unsigned char *)&DAT_0057f6bc + 0x1));
}

} /* extern "C" */
