/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001246b8` (_code @ 0x1246b8, 0xfe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

void FUN_002e32a4(int kind, ...);
int FUN_0030eb1c(int *);
int FUN_0030eb40(int *, int, unsigned int *);
int FUN_0030ebc0(int *, int);
int FUN_0030ebe4(int, unsigned int, int *);

typedef int romwright_code(...);
/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

extern int DAT_005c4bf8; /* 0x5c4bf8 */
extern int DAT_005c4bfc; /* 0x5c4bfc */

/* Supplied declaration required: FUN_002e32a4. */
/* Supplied declaration required: FUN_0030eb1c. */
/* Supplied declaration required: FUN_0030eb40. */
/* Supplied declaration required: FUN_0030ebc0. */
/* Supplied declaration required: FUN_0030ebe4. */


int FUN_001246b8(int *param_1,unsigned int *param_2,int param_3,unsigned int param_4,romwright_code *param_5)

{
/* irregular: 1 goto(s); 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int *piStack_24;
  unsigned int *temp_v7;
  int temp_v8;
  unsigned int uStack_18;
  
  if ((*(unsigned int *)(*param_1 + 0x14) & param_4) != 0) {
    temp_v3 = 0;
  }
  else {
    temp_v3 = DAT_005c4bf8;
    if ((*(unsigned int *)(*param_1 + 0x10) & param_4) != 0) {
      temp_v3 = DAT_005c4bfc;
    }
  }
  piStack_24 = param_1;
  temp_v7 = param_2;
  temp_v8 = param_3;
  uStack_18 = param_4;
  if (temp_v3 != 0) {
    temp_v4 = *param_2;
    if (*(unsigned int *)(temp_v3 + 0xc) <= temp_v4) {
      temp_v6 = 0;
      FUN_0030ebe4(temp_v3 + 8,temp_v4 + 1,&temp_v6);
    }
    temp_v5 = *(int *)(*(int *)(temp_v3 + 8) + temp_v4 * 4);
    if (temp_v5 != 0) {
      FUN_0030eb40(param_1,temp_v5,temp_v7);
      return temp_v5;
    }
  }
  if (temp_v8 == 0) {
    FUN_002e32a4(4);
  }
  if (temp_v3 != 0) {
    temp_v4 = *temp_v7;
    if (*(unsigned int *)(temp_v3 + 0xc) <= temp_v4) {
      temp_v6 = 0;
      FUN_0030ebe4(temp_v3 + 8,temp_v4 + 1,&temp_v6);
    }
    temp_v5 = *(int *)(*(int *)(temp_v3 + 8) + temp_v4 * 4);
    if (temp_v5 != 0) {
      FUN_0030eb40(param_1,temp_v5,temp_v7);
      return temp_v5;
    }
  }
  piVar3 = (int *)*param_1;
  temp_v2 = 0;
  temp_v0 = 0x1247bc;
  if ((piVar3[5] & param_4) != 0) {
    temp_v2 = 2;
    temp_v1 = 0x10;
    temp_v4 = 0;
    do {
      if ((param_4 & temp_v1) != 0) {
        temp_v0 = *(unsigned int *)(*piVar3 + temp_v4 * 4);
        goto LAB_00124770;
      }
      temp_v4 = temp_v4 + 1;
      temp_v1 = temp_v1 << 1;
    } while (temp_v4 < 6);
    temp_v0 = 0x1247bc;
  }
  else if ((piVar3[4] & param_4) != 0) {
    temp_v2 = 1;
  }
LAB_00124770:
  temp_v5 = (*param_5)(temp_v2,temp_v0,0);
  if ((temp_v3 != 0) && (*param_1 != temp_v3)) {
    FUN_0030ebc0(&temp_v6,temp_v3);
    FUN_0030eb40(&temp_v6,temp_v5,temp_v7);
    temp_v6 = 0;
    *(int *)(temp_v3 + 0x1c) = *(int *)(temp_v3 + 0x1c) - 1;
    FUN_0030eb1c(&temp_v6);
  }
  FUN_0030eb40(param_1,temp_v5,temp_v7);
  return temp_v5;
}

} /* extern "C" */
