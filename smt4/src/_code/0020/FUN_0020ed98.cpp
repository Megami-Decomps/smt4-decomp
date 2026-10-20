#include "romwright_types.h"

extern "C" {

int FUN_00295ba4(int);
int jobStop(unsigned int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_00295ba4. */
extern int FUN_00295bd0(void);
extern int jobIsValid(unsigned int);
extern int jobGetWork(void);
/* Supplied declaration required: jobStop. */


void FUN_0020ed98(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = jobGetWork();
  temp_v1 = jobIsValid(*(unsigned int *)(temp_v0 + 0x24));
  if (temp_v1 == 0) {
    return;
  }
  temp_v1 = FUN_00295bd0();
  if (temp_v1 != 0) {
    FUN_00295ba4(1);
  }
  jobStop(*(unsigned int *)(temp_v0 + 0x24),0);
  return;
}

} /* extern "C" */
