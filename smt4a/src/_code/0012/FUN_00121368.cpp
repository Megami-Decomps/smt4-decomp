/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121368` (_code @ 0x121368, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001173ac(void);
int FUN_002e6e14(void);
int FUN_0031008a(unsigned int *);

typedef int romwright_code(...);
extern unsigned char DAT_0055afbc; /* 0x55afbc */

/* Supplied declaration required: FUN_001173ac. */
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_0031008a. */


unsigned int * FUN_00121368(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055afbc;
  FUN_0031008a(param_1);
  if (param_1[2] != 0) {
    FUN_001173ac();
    FUN_002e6e14();
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[3] + 4))();
  }
  return param_1;
}

} /* extern "C" */
