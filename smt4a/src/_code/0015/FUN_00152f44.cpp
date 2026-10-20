#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0061978c; /* 0x61978c */


unsigned char FUN_00152f44(void)

{
  return (*(unsigned char *)((unsigned char *)&DAT_0061978c + 0x1e4));
}

} /* extern "C" */
