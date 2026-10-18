/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b5148` (_code @ 0x2b5148, 0x180 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned char LAB_00138724; /* 0x138724 */

/* Supplied declaration required: FUN_0014c2d0. */
extern int FUN_0014d960(int, int **);
/* Supplied declaration required: FUN_0014d9ec. */
/* Supplied declaration required: FUN_002b48dc. */
extern unsigned int FUN_002bb0b4(int, unsigned int);
extern unsigned int FUN_002c0e4c(int);


void FUN_002b5148(int param_1,romwright_code *param_2,unsigned int param_3,int *param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int *piVar6;
  int temp_v4;
  int *temp_v5;
  unsigned char uStack_18;
  
  temp_v1 = param_1;
  temp_v5 = param_4;
  FUN_0014c2d0();
  if (temp_v1 == 0) {
    while (temp_v1 = FUN_0014d960(param_1 + 0xb4,&temp_v5), temp_v1 != 0) {
      *(int *)(param_1 + 0x178) = temp_v5[2];
      piVar6 = temp_v5;
      if (temp_v5 != (int *)0x0) {
        do {
          piVar3 = piVar6;
          piVar6 = (int *)*piVar3;
        } while (piVar6 != (int *)0x0);
        temp_v1 = piVar3[3];
        *(int *)(param_1 + 0x188) = temp_v1;
        *(unsigned char *)(param_1 + 0x18c) = 0;
        if (*(int *)(param_1 + 0x184) == temp_v1) {
          *(unsigned int *)(param_1 + 0x188) = 0;
          *(unsigned int *)(param_1 + 0x184) = 0;
        }
      }
    }
    temp_v1 = param_1;
    FUN_0014c2d0(param_1,param_2);
    if (temp_v1 == 0) {
      temp_v2 = FUN_002bb0b4(param_1,1);
      temp_v3 = param_1 + 0xb4;
      FUN_0014d9ec();
      (*param_2)(temp_v3 >> 8,temp_v4 + 0x78,temp_v3,*(unsigned int *)(temp_v3 + 8));
      temp_v0 = FUN_002c0e4c(param_1);
      temp_v5 = (int *)&LAB_00138724;
      FUN_002b48dc(&uStack_18,temp_v2,temp_v0,0xa8);
      return;
    }
  }
  return;
}
