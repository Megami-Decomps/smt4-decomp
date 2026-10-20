#include "romwright_types.h"

extern "C" {

int FUN_003d385c(unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_003d385c. */


void VX2DecoderRelease(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_003d385c(*param_1);
  if (param_1[1] != 0) {
    for (temp_v0 = 0; temp_v0 < param_1[2]; temp_v0++) {
      FUN_003d385c(*(unsigned int *)(param_1[1] + temp_v0 * 4));
    }
    FUN_003d385c(param_1[1]);
    return;
  }
  return;
}

} /* extern "C" */
