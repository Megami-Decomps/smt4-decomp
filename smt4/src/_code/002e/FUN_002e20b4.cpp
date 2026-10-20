#include "romwright_types.h"

extern "C" {

extern int jobIsValid(void);
extern int jobGetWork(int);
extern int eventTexGetCurrentOrInvalid(void);


void FUN_002e20b4(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = eventTexGetCurrentOrInvalid();
  if ((temp_v0 != -1) && (temp_v1 = jobIsValid(), temp_v1 != 0)) {
    temp_v0 = jobGetWork(temp_v0);
    *(unsigned char *)(temp_v0 + 0x94) = 0;
  }
  return;
}

} /* extern "C" */
