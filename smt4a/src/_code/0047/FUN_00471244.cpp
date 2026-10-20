/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00471244` (_code @ 0x471244, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0047ca10(unsigned int, unsigned int, int, unsigned int, int, int, int, int);

/* stack frame of param_8: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_8_stack;

extern int FUN_001b2ca4(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0047ca10. */


unsigned int
FUN_00471244(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5
            ,int param_6,int param_7,int param_8)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  unsigned int *unaff_r6;
  
  temp_v0 = FUN_001b2ca4(param_1,0x17,param_4);
  if (temp_v0 != 0) {
    unaff_r6 = *(unsigned int **)(temp_v0 + 4);
  }
  if (temp_v0 != 0 && unaff_r6 != (unsigned int *)0x0) {
    if (unaff_r6[1] == 0) {
      return 0;
    }
    for (piVar3 = *(int **)(unaff_r6[1] + 4); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[4]) {
      if (*piVar3 == param_5) {
        if (piVar3 == (int *)0x0) {
          return 0;
        }
        temp_v0 = 0;
        if (temp_v0 < piVar3[1]) {
          do {
            piVar2 = (int *)(piVar3[3] + temp_v0 * 0x14);
            FUN_0047ca10(*unaff_r6,param_3,0xf,param_4,piVar2[1] + *piVar2 * 1000,
                         piVar2[2] + param_6,piVar2[3] + param_7,piVar2[4] + param_8);
            temp_v0 = temp_v0 + 1;
          } while (temp_v0 < piVar3[1]);
        }
        return 1;
      }
    }
  }
  return 0;
}

} /* extern "C" */
