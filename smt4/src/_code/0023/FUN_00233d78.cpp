#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int jobIsValid(unsigned int);
/* Supplied declaration required: jobStop. */


void FUN_00233d78(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = jobIsValid(param_1[0x5e5]);
  if (temp_v0 != 0) {
    *param_1 = *param_1 & 0xfffffcff;
    jobStop(param_1[0x5e5],0);
    return;
  }
  return;
}

} /* extern "C" */
