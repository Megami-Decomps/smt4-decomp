#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005b406c; /* 0x5b406c */


unsigned int FUN_0036bacc(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_005b406c + 0x10));
}

} /* extern "C" */
