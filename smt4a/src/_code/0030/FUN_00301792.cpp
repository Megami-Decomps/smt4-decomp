/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00301792` (_code @ 0x301792, 0x5e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7232(int);
int FUN_00301754(unsigned char [4], int, unsigned int **);

/* stack frame of param_2: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

/* Supplied declaration required: FUN_002e7232. */
extern int wordRefsEqual_00301734(unsigned int **, unsigned int **);
extern int wordRefsDiffer_00301744(unsigned int **, unsigned int *);
/* Supplied declaration required: FUN_00301754. */


unsigned char FUN_00301792(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *temp_v1;
  unsigned char temp_v2 [4];
  unsigned int *temp_v3;
  unsigned int *temp_v4;
  unsigned int *temp_v5;
  int temp_v6;
  int iStack_18;
  int temp_v7;
  
  temp_v5 = *(unsigned int **)(param_1 + 0x30);
  temp_v3 = (unsigned int *)*temp_v5;
  iStack_18 = param_1;
  temp_v7 = param_2;
  while (temp_v0 = wordRefsEqual_00301734(&temp_v3,&temp_v5), temp_v0 == 0) {
    if (temp_v3[2] == temp_v7) break;
    temp_v3 = (unsigned int *)*temp_v3;
  }
  temp_v4 = temp_v3;
  temp_v6 = *(unsigned int *)(param_1 + 0x30);
  temp_v0 = wordRefsDiffer_00301744(&temp_v4,(unsigned int *)&temp_v6);
  if (temp_v0 != 0) {
    temp_v1 = temp_v4;
    FUN_00301754(temp_v2,param_1 + 0x20,&temp_v1);
    FUN_002e7232(temp_v7);
  }
  return temp_v0 != 0;
}

} /* extern "C" */
