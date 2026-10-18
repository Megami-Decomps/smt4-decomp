/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea886` (_code @ 0x2ea886, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_002eafbe(int);


unsigned int FUN_002ea886(int param_1,int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if ((((*(unsigned short *)(param_2 + 0x3c) & 0xf) == 1) && (*(char *)(param_2 + 0x24) == '\x01')) &&
     (temp_v0 = FUN_002eafbe(param_2), temp_v0 == 0)) {
    return 4;
  }
  temp_v1 = (**(romwright_code **)(**(int **)(param_1 + 0xf0) + 0x10))(*(int **)(param_1 + 0xf0),param_2);
  return temp_v1;
}
