#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int FUN_00203d04(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: jobStop. */
extern int jobIsValid(unsigned int);
extern int jobGetWork(void);
/* Supplied declaration required: FUN_00203d04. */
extern int FUN_002619e0(void);


void FUN_002dec74(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = jobGetWork();
  temp_v1 = jobIsValid(*(unsigned int *)(temp_v0 + 0x44));
  if (temp_v1 == 0) {
    return;
  }
  temp_v1 = FUN_002619e0();
  if (temp_v1 != 0) {
    FUN_00203d04(1);
  }
  jobStop(*(unsigned int *)(temp_v0 + 0x44),0);
  return;
}

} /* extern "C" */
