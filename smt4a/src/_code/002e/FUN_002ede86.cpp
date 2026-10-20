/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ede86` (_code @ 0x2ede86, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int wordMoveOut_002edb7c(unsigned char [8], unsigned int, int);
int FUN_002edb8c(int *, int, unsigned char [8]);
int FUN_0030c3fa(int, unsigned int);

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

/* Supplied declaration required: wordMoveOut_002edb7c. */
/* Supplied declaration required: FUN_002edb8c. */
extern int wordRefsDiffer_002ede12(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0030c3fa. */
extern int wordRefsEqual_0030f05c(unsigned int, unsigned int *);


void FUN_002ede86(unsigned int *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [8];
  
  *param_1 = *(unsigned int *)(param_2 + 0x10);
  temp_v1 = *(unsigned int *)(*(int *)(param_2 + 0x10) + 8);
  temp_v0 = wordRefsEqual_0030f05c(param_3,(unsigned int *)&temp_v1);
  if (temp_v0 != 0) {
    temp_v2 = *(unsigned int *)(param_2 + 0x10);
    temp_v0 = wordRefsEqual_0030f05c(param_4,(unsigned int *)&temp_v2);
    if ((temp_v0 != 0) && (*(int *)(param_2 + 0x14) != 0)) {
      FUN_0030c3fa(param_2,*(unsigned int *)(*(int *)(param_2 + 0x10) + 4));
      *(int *)(*(int *)(param_2 + 0x10) + 8) = *(int *)(param_2 + 0x10);
      *(unsigned int *)(*(int *)(param_2 + 0x10) + 4) = 0;
      *(int *)(*(int *)(param_2 + 0x10) + 0xc) = *(int *)(param_2 + 0x10);
      *(unsigned int *)(param_2 + 0x14) = 0;
      *param_1 = *(unsigned int *)(param_2 + 0x10);
      return;
    }
  }
  while (temp_v0 = wordRefsDiffer_002ede12(param_3,param_4), temp_v0 != 0) {
    wordMoveOut_002edb7c(temp_v4,param_3,0);
    FUN_002edb8c(&temp_v3,param_2,temp_v4);
    *param_1 = temp_v3;
  }
  return;
}

} /* extern "C" */
