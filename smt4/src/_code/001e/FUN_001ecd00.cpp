/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ecd00` (_code @ 0x1ecd00, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002123dc(void);
int FUN_0025a0e0(void);
int FUN_0026a704(void);
int FUN_0028dc68(int);
int FUN_0028dc98(...);
int FUN_002d7bb0(void);

/* Supplied declaration required: FUN_002123dc. */
/* Supplied declaration required: FUN_0025a0e0. */
/* Supplied declaration required: FUN_0026a704. */
extern int FUN_002893d8(void);
/* Supplied declaration required: FUN_0028dc68. */
/* Supplied declaration required: FUN_0028dc98. */
/* Supplied declaration required: FUN_002d7bb0. */
extern int FUN_002ed5bc(void);


unsigned int FUN_001ecd00(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  
  FUN_0028dc98();
  temp_v0 = FUN_002893d8();
  if (temp_v0 != 0) {
    temp_v0 = FUN_002ed5bc();
    if (temp_v0 != 0) {
      FUN_002123dc();
      FUN_0028dc98(0xffffffff);
      FUN_0028dc68(0);
      return 1;
    }
  }
  else {
    FUN_0026a704();
    FUN_0025a0e0();
    FUN_002d7bb0();
  }
  return 0;
}

} /* extern "C" */
