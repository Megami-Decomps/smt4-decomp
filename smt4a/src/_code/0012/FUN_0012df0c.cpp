/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012df0c` (_code @ 0x12df0c, 0x7e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ea734(unsigned int *);
int FUN_002ead28(...);
int FUN_002ead38(int *, int, unsigned int [2]);
int FUN_0030c10a(int, unsigned int);

/* stack frame of param_4: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_4_stack;

/* Supplied declaration required: FUN_002ea734. */
extern int FUN_002ea764(unsigned int *, unsigned int);
/* Supplied declaration required: FUN_002ead28. */
/* Supplied declaration required: FUN_002ead38. */
/* Supplied declaration required: FUN_0030c10a. */


void FUN_0012df0c(unsigned int *param_1,int param_2,unsigned int *param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5 [2];
  unsigned int *puStack_24;
  int iStack_20;
  unsigned int *puStack_1c;
  unsigned int temp_v6;
  
  *param_1 = *(unsigned int *)(param_2 + 0x10);
  temp_v2 = *(unsigned int *)(*(int *)(param_2 + 0x10) + 8);
  puStack_24 = param_1;
  iStack_20 = param_2;
  puStack_1c = param_3;
  temp_v6 = param_4;
  temp_v0 = FUN_002ead28(param_3,&temp_v2);
  if (temp_v0 != 0) {
    temp_v3 = *(unsigned int *)(param_2 + 0x10);
    temp_v0 = FUN_002ead28(temp_v6,&temp_v3);
    if ((temp_v0 != 0) && (*(int *)(param_2 + 0x14) != 0)) {
      FUN_0030c10a(param_2,*(unsigned int *)(*(int *)(param_2 + 0x10) + 4));
      *(int *)(*(int *)(param_2 + 0x10) + 8) = *(int *)(param_2 + 0x10);
      *(unsigned int *)(*(int *)(param_2 + 0x10) + 4) = 0;
      *(int *)(*(int *)(param_2 + 0x10) + 0xc) = *(int *)(param_2 + 0x10);
      *(unsigned int *)(param_2 + 0x14) = 0;
      *param_1 = *(unsigned int *)(param_2 + 0x10);
      return;
    }
  }
  while (temp_v0 = FUN_002ea764(param_3,temp_v6), temp_v0 != 0) {
    temp_v1 = *param_3;
    FUN_002ea734(param_3);
    temp_v5[0] = temp_v1;
    FUN_002ead38(&temp_v4,param_2,temp_v5);
    *param_1 = temp_v4;
  }
  return;
}

} /* extern "C" */
