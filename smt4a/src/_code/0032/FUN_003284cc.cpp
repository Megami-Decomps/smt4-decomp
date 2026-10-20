#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: jobStop. */
extern int jobIsValid(unsigned int);
extern int jobGetWork(void);


void FUN_003284cc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = jobGetWork();
  temp_v1 = jobIsValid(*(unsigned int *)(temp_v0 + *(int *)(temp_v0 + 0xa4) * 4 + 0xc));
  if (temp_v1 != 0) {
    jobStop(*(unsigned int *)(temp_v0 + *(int *)(temp_v0 + 0xa4) * 4 + 0xc),0);
    return;
  }
  return;
}

} /* extern "C" */
