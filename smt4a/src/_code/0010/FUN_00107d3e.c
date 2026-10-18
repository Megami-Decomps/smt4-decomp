/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00107d3e` (_code @ 0x107d3e, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_002efa34(int, int, unsigned int, unsigned int, unsigned int);


unsigned int FUN_00107d3e(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if ((((*(unsigned short *)(param_2 + 0x3c) & 0xf) == 1) && (*(char *)(param_1 + 0x14c) == '\x01')) &&
     (temp_v0 = FUN_002efa34(param_1,param_2,0x2000000,0,param_4), temp_v0 == 0)) {
    return 4;
  }
  temp_v1 = (**(romwright_code **)(**(int **)(param_1 + 0x1fc) + 0x10))
                    (*(int **)(param_1 + 0x1fc),param_2,param_3,param_4);
  return temp_v1;
}
