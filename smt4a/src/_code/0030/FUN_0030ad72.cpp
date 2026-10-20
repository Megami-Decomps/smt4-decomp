/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ad72` (_code @ 0x30ad72, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9520(int, int);

/* Supplied declaration required: FUN_002e9520. */
extern int FUN_00310478(void);


int FUN_0030ad72(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00310478();
  if (temp_v0 + 0x10 != 0) {
    temp_v1 = FUN_002e9520(temp_v0 + 0x10,param_2);
    FUN_002e9520(temp_v1 + 8,param_2 + 8);
  }
  return temp_v0;
}

} /* extern "C" */
