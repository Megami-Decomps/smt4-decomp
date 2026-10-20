/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fbfd0` (_code @ 0x3fbfd0, 0x100 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

unsigned int FUN_003fbfd0(unsigned int *param_1,unsigned int param_2)

{
  unsigned char *puVar1;
  unsigned char *puVar2;
  int temp_v0;
  int *piVar4;
  unsigned char *puVar5;
  unsigned int temp_v1;
  
  if ((unsigned int)param_1[2] < param_2) {
    piVar4 = (int *)*param_1;
    puVar5 = (unsigned char *)0x0;
    temp_v1 = 0;
    if ((param_2 != 0) &&
       (puVar5 = (unsigned char *)(**(romwright_code **)*piVar4)(piVar4), temp_v1 = param_2,
       puVar5 == (unsigned char *)0x0)) {
      (**(romwright_code **)(*piVar4 + 8))
                (piVar4,"MoLive::Allocator: not enough memory to allocate %d bytes !!!\n",param_2);
      (**(romwright_code **)(*piVar4 + 4))(piVar4,0);
      return 0;
    }
    puVar2 = (unsigned char *)param_1[1];
    puVar1 = puVar5;
    for (temp_v0 = param_1[3]; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
      if (puVar1 != (unsigned char *)0x0) {
        *puVar1 = *puVar2;
      }
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    param_1[1] = (unsigned int)puVar5;
    param_1[2] = temp_v1;
    if (0 < (int)param_1[3]) {
      for (temp_v0 = (int)param_1[3] >> 1; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
      }
    }
    (**(romwright_code **)(*piVar4 + 4))(piVar4);
  }
  return 1;
}

} /* extern "C" */
