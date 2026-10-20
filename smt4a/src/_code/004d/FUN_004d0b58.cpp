/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d0b58` (_code @ 0x4d0b58, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001641c4(void);
int FUN_002e3328(unsigned int *);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_001641c4. */
/* Supplied declaration required: FUN_002e3328. */


void FUN_004d0b58(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  *param_1 = param_2;
  temp_v0 = 0;
  if (temp_v0 < *(short *)((int)param_1 + 0x5a)) {
    do {
      FUN_001641c4();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(short *)((int)param_1 + 0x5a));
  }
  *(unsigned short *)((int)param_1 + 0x5a) = 0;
  FUN_002e3328(param_1);
  return;
}

} /* extern "C" */
