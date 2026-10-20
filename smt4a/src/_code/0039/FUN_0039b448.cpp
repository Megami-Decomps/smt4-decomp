#include "romwright_types.h"

extern "C" {

extern int jobIsValid(unsigned int);
extern int jobGetWork(unsigned int);
extern unsigned int scrGetArg(unsigned int);


unsigned int FUN_0039b448(void)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = jobIsValid(temp_v0);
  if (temp_v2 != 0) {
    temp_v2 = jobGetWork(temp_v0);
    *(unsigned int *)(temp_v2 + 0x6c) = *(unsigned int *)(temp_v2 + 0x10);
    *(unsigned int *)(temp_v2 + 100) = 0;
    *(unsigned int *)(temp_v2 + 0x68) = temp_v1;
  }
  return 1;
}

} /* extern "C" */
