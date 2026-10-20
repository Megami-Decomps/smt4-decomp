/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011164c` (_code @ 0x11164c, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001212c6(unsigned int, unsigned int, int, int);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_001212c6. */
extern int *FUN_002ea704(void);
extern unsigned int FUN_002ea93c(int *);


void FUN_0011164c(int param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  
  temp_v0 = *(unsigned int *)(param_1 + 0x30);
  if ((((temp_v0 & 0xff) != 0 || ((temp_v0 >> 8) & 0xff) != 0) || ((temp_v0 >> 0x10) & 0xff) != 0) ||
      temp_v0 >> 0x18 != 0) {
    (**(romwright_code **)(*param_2 + 0x40))(param_2,0xffffffff);
    (**(romwright_code **)(*param_2 + 0x38))(param_2);
    temp_v1 = FUN_002ea93c(param_2 + 2);
    piVar3 = (int *)FUN_002ea704();
    temp_v2 = (**(romwright_code **)(*piVar3 + 0x28))();
    FUN_001212c6(temp_v2,temp_v1,param_1 + 0x28,1);
  }
  return;
}

} /* extern "C" */
