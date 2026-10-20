#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0062d88c; /* 0x62d88c */

extern int FUN_00301454(unsigned char *);


int FUN_00115380(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00301454(&DAT_0062d88c);
  return temp_v0 + 4;
}

} /* extern "C" */
