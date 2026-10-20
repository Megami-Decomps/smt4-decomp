#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(unsigned int);
int FUN_0020209c(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int FUN_00164a9c(void);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0020209c. */


void FUN_002be8b4(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_00164a9c();
  FUN_0020209c();
  FUN_0019a5a0(temp_v0);
  return;
}

} /* extern "C" */
