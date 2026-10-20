#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005f1afc; /* 0x5f1afc */


int FUN_002d1fdc(void)

{
  return (int)(*(signed char *)((unsigned char *)&DAT_005f1afc + 0x74));
}

} /* extern "C" */
