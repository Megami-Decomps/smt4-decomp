#include "romwright_types.h"

extern "C" {

int asdMemFree(unsigned int);
int FUN_0020209c(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int jobGetWork(void);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_0020209c. */


void FUN_002be8b4(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = jobGetWork();
  FUN_0020209c();
  asdMemFree(temp_v0);
  return;
}

} /* extern "C" */
