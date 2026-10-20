/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00482610` (_code @ 0x482610, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorNew(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: asdOperatorNew. */
extern int FUN_00481b80(void);
extern int FUN_00481db4(void);
extern int FUN_004823ec(void);


void FUN_00482610(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (param_2 != 0) {
    if (param_2 != 1) {
      if (param_2 != 2) {
        temp_v0 = *(int *)(param_1 + 0x74);
        *(int *)(temp_v0 + 0xc) = param_1;
        return;
      }
      temp_v1 = 0x10;
      asdOperatorNew();
      temp_v0 = 0;
      if (temp_v1 != 0) {
        temp_v0 = FUN_00481b80();
      }
    }
    else {
      temp_v1 = 0x1c;
      asdOperatorNew();
      temp_v0 = 0;
      if (temp_v1 != 0) {
        temp_v0 = FUN_004823ec();
      }
    }
  }
  else {
    temp_v1 = 0x24;
    asdOperatorNew();
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = FUN_00481db4();
    }
  }
  *(int *)(param_1 + 0x74) = temp_v0;
  *(int *)(temp_v0 + 0xc) = param_1;
  return;
}

} /* extern "C" */
