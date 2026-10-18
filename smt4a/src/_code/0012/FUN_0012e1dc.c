/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012e1dc` (_code @ 0x12e1dc, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

/* Supplied declaration required: FUN_002f1324. */
extern int FUN_002f3e5a(unsigned int, unsigned int);
extern int FUN_002f4002(unsigned int, unsigned int *);
/* Supplied declaration required: FUN_0030bb20. */
/* Supplied declaration required: FUN_0030bda6. */


void FUN_0012e1dc(unsigned int *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [8];
  
  *param_1 = *(unsigned int *)(param_2 + 0x10);
  temp_v1 = *(unsigned int *)(*(int *)(param_2 + 0x10) + 8);
  temp_v0 = FUN_002f4002(param_3,(unsigned int *)&temp_v1);
  if (temp_v0 != 0) {
    temp_v2 = *(unsigned int *)(param_2 + 0x10);
    temp_v0 = FUN_002f4002(param_4,(unsigned int *)&temp_v2);
    if ((temp_v0 != 0) && (*(int *)(param_2 + 0x14) != 0)) {
      FUN_0030bda6(param_2,*(unsigned int *)(*(int *)(param_2 + 0x10) + 4));
      *(int *)(*(int *)(param_2 + 0x10) + 8) = *(int *)(param_2 + 0x10);
      *(unsigned int *)(*(int *)(param_2 + 0x10) + 4) = 0;
      *(int *)(*(int *)(param_2 + 0x10) + 0xc) = *(int *)(param_2 + 0x10);
      *(unsigned int *)(param_2 + 0x14) = 0;
      *param_1 = *(unsigned int *)(param_2 + 0x10);
      return;
    }
  }
  while (temp_v0 = FUN_002f3e5a(param_3,param_4), temp_v0 != 0) {
    FUN_002f1324(temp_v4,param_3,0);
    FUN_0030bb20(&temp_v3,param_2,temp_v4);
    *param_1 = temp_v3;
  }
  return;
}
