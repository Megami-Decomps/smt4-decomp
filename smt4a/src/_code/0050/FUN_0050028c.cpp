/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050028c` (_code @ 0x50028c, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern unsigned int FUN_0016ccfc(void);
extern int FUN_004287ac(unsigned int, int **, unsigned int);


int FUN_0050028c(unsigned int *param_1,int param_2,int param_3,int *param_4)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int *piVar6;
  int *piVar7;
  int *unaff_r10;
  int *piVar8;
  int *temp_v3;
  
  temp_v3 = param_4;
  temp_v0 = FUN_0016ccfc();
  temp_v1 = FUN_004287ac(temp_v0,&temp_v3,*param_1);
  if (-1 < temp_v1) {
    if (param_4 != (int *)0x0) {
      unaff_r10 = temp_v3;
    }
    piVar6 = (int *)0x0;
    if (param_4 != (int *)0x0) {
      do {
        temp_v2 = 0;
        if (unaff_r10[2] == 0) {
          return -0x377ec770;
        }
        piVar7 = (int *)(param_3 + (int)piVar6 * 8);
        while (((piVar8 = (int *)(*unaff_r10 + temp_v2 * 8), (char)piVar7[1] != (char)piVar8[1] ||
                (*piVar7 != *piVar8)) || (*(char *)((int)piVar7 + 5) != *(char *)((int)piVar8 + 5)))
              ) {
          temp_v2 = temp_v2 + 1;
          if ((unsigned int)unaff_r10[2] <= temp_v2) {
            return -0x377ec770;
          }
        }
        puVar4 = (unsigned int *)(*unaff_r10 + temp_v2 * 8);
        puVar5 = (unsigned int *)(param_2 + (int)piVar6 * 8);
        temp_v0 = puVar4[1];
        piVar6 = (int *)((int)piVar6 + 1);
        *puVar5 = *puVar4;
        puVar5[1] = temp_v0;
      } while (piVar6 < param_4);
    }
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
