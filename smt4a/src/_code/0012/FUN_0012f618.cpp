/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012f618` (_code @ 0x12f618, 0x7a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030a9c6(int, unsigned int);
int FUN_0030aa4a(int *);
int FUN_0031094e(int *, int, int [2]);

/* stack frame of param_4: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_4_stack;

/* Supplied declaration required: FUN_0030a9c6. */
/* Supplied declaration required: FUN_0030aa4a. */
extern int wordRefsEqual_0030aa7a(int *, unsigned int *);
/* Supplied declaration required: FUN_0031094e. */


void FUN_0012f618(unsigned int *param_1,int param_2,int *param_3,int *param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4 [2];
  unsigned int *puStack_24;
  int iStack_20;
  int *piStack_1c;
  int *temp_v5;
  
  *param_1 = *(unsigned int *)(param_2 + 0x10);
  temp_v1 = *(unsigned int *)(*(int *)(param_2 + 0x10) + 8);
  puStack_24 = param_1;
  iStack_20 = param_2;
  piStack_1c = param_3;
  temp_v5 = param_4;
  temp_v0 = wordRefsEqual_0030aa7a(param_3,(unsigned int *)&temp_v1);
  if (temp_v0 != 0) {
    temp_v2 = *(unsigned int *)(param_2 + 0x10);
    temp_v0 = wordRefsEqual_0030aa7a(temp_v5,(unsigned int *)&temp_v2);
    if ((temp_v0 != 0) && (*(int *)(param_2 + 0x14) != 0)) {
      FUN_0030a9c6(param_2,*(unsigned int *)(*(int *)(param_2 + 0x10) + 4));
      *(int *)(*(int *)(param_2 + 0x10) + 8) = *(int *)(param_2 + 0x10);
      *(unsigned int *)(*(int *)(param_2 + 0x10) + 4) = 0;
      *(int *)(*(int *)(param_2 + 0x10) + 0xc) = *(int *)(param_2 + 0x10);
      *(unsigned int *)(param_2 + 0x14) = 0;
      *param_1 = *(unsigned int *)(param_2 + 0x10);
      return;
    }
  }
  while (temp_v0 = *param_3, temp_v0 != *temp_v5) {
    FUN_0030aa4a(param_3);
    temp_v4[0] = temp_v0;
    FUN_0031094e(&temp_v3,param_2,temp_v4);
    *param_1 = temp_v3;
  }
  return;
}

} /* extern "C" */
