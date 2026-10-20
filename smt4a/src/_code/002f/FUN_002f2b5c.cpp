/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f2b5c` (_code @ 0x2f2b5c, 0xae bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010526e(int, int *);
int FUN_002e75fa(int);
int FUN_002eab08(int *);
int wordRefsDiffer_002eb690(...);
int FUN_002eb6a0(int, int *, int *);

/* stack frame of param_3: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

/* Supplied declaration required: FUN_0010526e. */
/* Supplied declaration required: FUN_002e75fa. */
/* Supplied declaration required: FUN_002eab08. */
/* Supplied declaration required: wordRefsDiffer_002eb690. */
/* Supplied declaration required: FUN_002eb6a0. */
extern int FUN_002eb6ae(int, unsigned int);


void FUN_002f2b5c(int param_1,int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3 [2];
  int temp_v4;
  unsigned int temp_v5;
  int iStack_20;
  int temp_v6;
  int temp_v7;
  
  if ((*(int *)(param_2 + 0x10) == 0) && (*(int *)(param_2 + 0xc) == 0)) {
    temp_v3[0] = param_2;
    iStack_20 = param_1;
    temp_v6 = param_2;
    temp_v7 = param_3;
    temp_v0 = wordRefsDiffer_002eb690(param_1 + 8,temp_v3);
    if (temp_v0 != 0) {
      FUN_002e75fa(temp_v6);
      temp_v0 = wordRefsDiffer_002eb690(param_1 + 8,param_1 + 0x10);
      piVar2 = (int *)(param_1 + 0xc);
      if (temp_v0 != 0) {
        FUN_002eb6a0(param_1 + 4,piVar2,&temp_v6);
        *piVar2 = temp_v6;
      }
      else {
        *(int *)(param_1 + 8) = temp_v6;
        *piVar2 = temp_v6;
      }
      temp_v0 = temp_v6;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      if (temp_v7 != 0) {
        FUN_002eab08(&temp_v1);
        *(unsigned int *)(temp_v0 + 0x108) = temp_v1;
        *(unsigned int *)(temp_v0 + 0x10c) = temp_v2;
        if (((*(int *)(param_1 + 0x18) != 0) && (temp_v0 = FUN_002eb6ae(temp_v6,0x20), temp_v0 == 0))
           && (temp_v0 = FUN_002eb6ae(temp_v6,0x800), temp_v0 != 0)) {
          temp_v5 = *(unsigned int *)(temp_v6 + 0x10c);
          temp_v4 = *(unsigned int *)(temp_v6 + 0x108);
          FUN_0010526e(param_1,&temp_v4);
        }
      }
    }
  }
  return;
}

} /* extern "C" */
