#include "romwright_types.h"

extern "C" {

extern unsigned int scrGetArg(unsigned int);
extern int jobIsValid(unsigned int);
extern int jobGetWork(unsigned int);
extern int __aeabi_idivmod(unsigned int, unsigned int);


unsigned int FUN_0030a408(void)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = jobIsValid(temp_v0);
  if (temp_v2 != 0) {
    temp_v2 = jobGetWork(temp_v0);
    temp_v3 = __aeabi_idivmod(*(unsigned int *)(temp_v2 + 0x10),temp_v1);
    *(int *)(temp_v2 + 0x60) = -temp_v3;
  }
  return 1;
}

} /* extern "C" */
