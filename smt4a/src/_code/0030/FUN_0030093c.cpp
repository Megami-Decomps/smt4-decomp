/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030093c` (_code @ 0x30093c, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9318(int *);
int FUN_002e95c4(unsigned int, unsigned int);
int constructObj0055affc(int *);
int FUN_002fbc1a(int, int *);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_4_stack;

/* Supplied declaration required: FUN_002e9318. */
/* Supplied declaration required: FUN_002e95c4. */
/* Supplied declaration required: constructObj0055affc. */
/* Supplied declaration required: FUN_002fbc1a. */


unsigned int FUN_0030093c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int uStack_18;
  unsigned int temp_v0;
  
  uStack_18 = param_3;
  temp_v0 = param_4;
  constructObj0055affc(&uStack_18);
  FUN_002fbc1a(param_1,&uStack_18);
  if (param_1 != 0) {
    FUN_002e95c4(param_2,temp_v0);
    FUN_002e9318(&uStack_18);
    return 1;
  }
  FUN_002e9318(&uStack_18);
  return 0;
}

} /* extern "C" */
