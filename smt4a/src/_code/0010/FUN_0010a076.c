/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010a076` (_code @ 0x10a076, 0x4e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_0010a0d8(int *, int);
extern int FUN_002eea7c(void);


unsigned int FUN_0010a076(int *param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = (**(romwright_code **)(*param_1 + 0x2c))(param_1);
  if ((*(char *)(temp_v0 + 8) != '\0') && (*(char *)((int)param_1 + 0x10d) == '\0')) {
    temp_v0 = FUN_002eea7c();
    if ((temp_v0 != 0) && (temp_v0 = FUN_0010a0d8(param_1,param_1[0x51]), temp_v0 == 0)) {
      return 0;
    }
    temp_v1 = param_1[0x4a];
    *(unsigned char *)((int)param_1 + 0x10d) =
         (((temp_v1 & 0xff) != 0 || ((temp_v1 >> 8) & 0xff) != 0) || ((temp_v1 >> 0x10) & 0xff) != 0) ||
         temp_v1 >> 0x18 != 0;
  }
  return 1;
}
