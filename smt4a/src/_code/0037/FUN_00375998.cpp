/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00375998` (_code @ 0x375998, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003811ec(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int FUN_001ab854(void);
/* Supplied declaration required: FUN_003811ec. */


void FUN_00375998(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  short temp_v2;
  
  if (*(int *)(param_1 + 4) < 0) {
    temp_v2 = 0;
  }
  else {
    temp_v1 = FUN_001ab854();
    temp_v2 = *(short *)(temp_v1 + 0x62);
  }
  if (*(int *)(param_2 + 4) < 0) {
    temp_v0 = 0;
  }
  else {
    temp_v1 = FUN_001ab854();
    temp_v0 = *(short *)(temp_v1 + 0x62);
  }
  if (temp_v0 != temp_v2) {
    return;
  }
  FUN_003811ec(param_1,param_2);
  return;
}

} /* extern "C" */
