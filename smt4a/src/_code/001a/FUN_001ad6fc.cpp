#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005b406c; /* 0x5b406c */


unsigned int FUN_001ad6fc(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_005b406c + 0x8));
}

} /* extern "C" */
