#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(unsigned int *);
int FUN_0023917c(unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int *FUN_00164a9c(void);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0023917c. */


void FUN_0034da10(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_00164a9c();
  FUN_0023917c(*puVar1);
  if (puVar1 != (unsigned int *)0x0) {
    FUN_0019a5a0(puVar1);
    return;
  }
  return;
}

} /* extern "C" */
