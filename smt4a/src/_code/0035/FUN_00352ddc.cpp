/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00352ddc` (_code @ 0x352ddc, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00274970(unsigned int);
int FUN_002d23f0(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_00274970. */
/* Supplied declaration required: FUN_002d23f0. */
extern int FUN_003a32a8(void);


void FUN_00352ddc(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_003a32a8();
  if (temp_v0 != -1) {
    FUN_002d23f0();
    FUN_00274970(param_1);
    return;
  }
  return;
}

} /* extern "C" */
