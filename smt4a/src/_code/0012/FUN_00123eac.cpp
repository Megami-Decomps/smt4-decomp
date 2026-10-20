/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123eac` (_code @ 0x123eac, 0x52 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char LAB_00123f00; /* 0x123f00 */

extern int *FUN_002ea704(void);
extern int FUN_002f7896(int, unsigned char *);
extern int FUN_002fd454(unsigned int);
extern int FUN_002fe3e8(unsigned int);


unsigned int FUN_00123eac(int param_1,unsigned int param_2,int param_3)

{
  int *piVar1;
  int temp_v0;
  
  piVar1 = (int *)FUN_002ea704();
  temp_v0 = (**(romwright_code **)(*piVar1 + 0x2c))();
  if ((((*(char *)(temp_v0 + 8) != '\0') &&
       (temp_v0 = FUN_002f7896(param_1 + 0x110,&LAB_00123f00), temp_v0 == 0)) &&
      (*(short *)(param_1 + 0x118) != 0)) &&
     ((param_3 == 0 ||
      ((temp_v0 = FUN_002fe3e8(param_2), temp_v0 == 0 && (temp_v0 = FUN_002fd454(param_2), temp_v0 != 0)))))
     ) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
