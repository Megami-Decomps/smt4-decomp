/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043756c` (_code @ 0x43756c, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004387f0(int *, int);
int FUN_00515520(int *, int, unsigned int);
int FUN_00515598(void);

/* Supplied declaration required: FUN_004387f0. */
/* Supplied declaration required: FUN_00515520. */
/* Supplied declaration required: FUN_00515598. */


unsigned int FUN_0043756c(unsigned int *param_1,int *param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = 0;
  if (temp_v2 < (unsigned int)param_1[4]) {
    do {
      if (*(char *)(*(int *)(*param_2 + 0x24) + temp_v2) != '\0') {
        temp_v0 = *(int *)(param_1[5] + temp_v2 * 4);
        for (temp_v1 = *(int *)(temp_v0 + 0xc); temp_v1 != temp_v0 + 8; temp_v1 = *(int *)(temp_v1 + 4)) {
          if (*(char *)(temp_v1 + 0xc) != '\x01') {
            piVar3 = (int *)(*param_2 + 0x14);
            piVar2 = *(int **)(*param_2 + 0x1c);
            FUN_004387f0(piVar2,2);
            if (piVar2 == (int *)0x0) {
              return 0;
            }
            if (piVar2 != (int *)0xfffffff8) {
              FUN_00515598();
            }
            *piVar2 = *piVar3;
            piVar2[1] = (int)piVar3;
            *piVar3 = (int)piVar2;
            *(int **)(*piVar2 + 4) = piVar2;
            piVar2 = piVar2 + 2;
            FUN_00515520(piVar2,temp_v1 + 8,*param_1);
            if (piVar2 == (int *)0x0) {
              return 0;
            }
          }
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < (unsigned int)param_1[4]);
  }
  return 1;
}

} /* extern "C" */
