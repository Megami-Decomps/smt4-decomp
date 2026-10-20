#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0061978c; /* 0x61978c */


unsigned char FUN_0014af98(void)

{
  return (*(unsigned char *)((unsigned char *)&DAT_0061978c + 0x1e5));
}

} /* extern "C" */
