#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055ae1c; /* 0x55ae1c */

extern int onlineStringDestroy(int);
extern int vectorDestroyBytes(unsigned int *);


int FUN_0012086c(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055ae1c;
  temp_v0 = vectorDestroyBytes(param_1 + 8);
  temp_v0 = onlineStringDestroy(temp_v0 - 8);
  temp_v0 = onlineStringDestroy(temp_v0 - 8);
  temp_v0 = onlineStringDestroy(temp_v0 - 8);
  return temp_v0 - 8;
}

} /* extern "C" */
