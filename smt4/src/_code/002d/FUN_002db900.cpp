#include "romwright_types.h"

extern "C" {

int FUN_001ab998(unsigned int);
int asdMemFree(unsigned int *);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_001ab998. */
extern unsigned int *jobGetWork(void);
/* Supplied declaration required: asdMemFree. */


void FUN_002db900(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)jobGetWork();
  FUN_001ab998(*puVar1);
  if (puVar1 != (unsigned int *)0x0) {
    asdMemFree(puVar1);
    return;
  }
  return;
}

} /* extern "C" */
