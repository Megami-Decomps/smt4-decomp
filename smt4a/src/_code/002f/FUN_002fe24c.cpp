#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00163e40(unsigned int);


void FUN_002fe24c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00163e40(*(unsigned int *)(param_1 + 0x74));
  if (temp_v0 != 0) {
    FUN_001631d0(*(unsigned int *)(param_1 + 0x74),0);
    return;
  }
  return;
}

} /* extern "C" */
