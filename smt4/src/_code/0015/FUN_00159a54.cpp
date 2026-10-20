/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00159a54` (_code @ 0x159a54, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0015d0d8(unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_002bb470(void);


unsigned char FUN_00159a54(int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  
  if (((*(char *)(param_1 + 0xc) != '\0') && (*(unsigned char *)(param_1 + 0xd) == 0xff)) && (param_2 < 2)) {
    temp_v0 = FUN_002bb470();
    temp_v1 = FUN_0015d0d8(temp_v0,1,param_2);
    if (temp_v1 != 0) {
      *(char *)(param_1 + 0xd) = (char)param_2;
    }
    return temp_v1 != 0;
  }
  return 0;
}

} /* extern "C" */
