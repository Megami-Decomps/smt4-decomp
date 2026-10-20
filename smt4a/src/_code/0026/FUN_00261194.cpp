#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int FUN_003bb088(unsigned int);

/* Supplied declaration required: jobStop. */
extern int jobIsValid(void);
extern unsigned int scrGetArg(void);
/* Supplied declaration required: FUN_003bb088. */


unsigned int FUN_00261194(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = jobIsValid();
  if (temp_v1 != 0) {
    FUN_003bb088(temp_v0);
    jobStop(temp_v0,0);
  }
  return 1;
}

} /* extern "C" */
