#include "romwright_types.h"

extern "C" {

int FUN_0037a2a8(unsigned int, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int FUN_002bb020(void);
/* Supplied declaration required: FUN_0037a2a8. */


void FUN_0037c9e8(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002bb020();
  FUN_0037a2a8(temp_v0,param_1);
  return;
}

} /* extern "C" */
