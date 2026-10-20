#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0062d88c; /* 0x62d88c */

extern int FUN_00301454(unsigned char *);


unsigned int FUN_001153a0(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00301454(&DAT_0062d88c);
  return *(unsigned int *)(temp_v0 + 0x34);
}

} /* extern "C" */
