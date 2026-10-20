#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);

extern unsigned int scrGetArg(void);
extern int jobIsValid(void);
/* Supplied declaration required: jobStop. */


unsigned int FUN_002eea20(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = jobIsValid();
  if (temp_v1 != 0) {
    jobStop(temp_v0,0);
  }
  return 1;
}

} /* extern "C" */
