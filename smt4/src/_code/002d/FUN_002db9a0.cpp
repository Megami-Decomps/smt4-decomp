#include "romwright_types.h"

extern "C" {

int FUN_00294f64(void);
int asdMemFree(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_00294f64. */
extern int jobGetWork(void);
/* Supplied declaration required: asdMemFree. */


void FUN_002db9a0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = jobGetWork();
  if (*(int *)(temp_v0 + 0x34) != 0) {
    FUN_00294f64();
    *(unsigned int *)(temp_v0 + 0x34) = 0;
  }
  asdMemFree(temp_v0);
  return;
}

} /* extern "C" */
