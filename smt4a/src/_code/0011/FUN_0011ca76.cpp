/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011ca76` (_code @ 0x11ca76, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00113f00(...);
int FUN_002e6e34(...);
int FUN_002e6e5c(...);
int FUN_002e75fa(...);
int FUN_002e9538(...);
int FUN_002eb588(...);
int FUN_002ec8a8(...);
int FUN_00301484(...);
int FUN_00311544(...);

typedef struct fn_0011ca76_arg1 fn_0011ca76_arg1;
struct fn_0011ca76_arg1 {
    unsigned char pad_0x0[0xc];
    int field_0xc; /* +0xc */
    int field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    int field_0x18; /* +0x18 */
};

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

/* Supplied declaration required: FUN_00113f00. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002e75fa. */
/* Supplied declaration required: FUN_002e9538. */
/* Supplied declaration required: FUN_002eb588. */
/* Supplied declaration required: FUN_002ec8a8. */
/* Supplied declaration required: FUN_00301484. */
extern int *FUN_00311202(int);
/* Supplied declaration required: FUN_00311544. */


unsigned int FUN_0011ca76(int param_1,fn_0011ca76_arg1 *param_2,unsigned int param_3)

{
/* irregular: 9 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [16];
  int iStack_20;
  fn_0011ca76_arg1 *pfStack_1c;
  unsigned int temp_v5;
  
  temp_v1 = 0;
  if ((param_2 != (fn_0011ca76_arg1 *)0x0) && (param_2->field_0x10 != 0)) {
    iStack_20 = param_1;
    pfStack_1c = param_2;
    temp_v5 = param_3;
    FUN_002e6e34(temp_v4,param_1 + 0x224);
    piVar1 = (int *)FUN_00311202(param_1 + 0x1d8);
    if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
      FUN_002ec8a8(*piVar1,param_2);
      FUN_002e9538(piVar1 + 1,temp_v5);
      FUN_002eb588(&temp_v2);
      piVar1[0xb] = temp_v3;
      piVar1[10] = temp_v2;
      FUN_00113f00(param_1 + 0x1d8,piVar1 + 10);
      *(unsigned char *)(param_1 + 0x50) = 1;
      FUN_002e75fa(param_2);
      *(int *)(*(int *)(param_1 + 0x48) + 0x3c) = param_1;
      *(unsigned char *)(*(int *)(param_1 + 0x48) + 0x35) = 2;
      piVar1 = *(int **)(param_1 + 0x48);
      temp_v0 = param_2->field_0x10;
      *piVar1 = param_2->field_0xc + param_2->field_0x18;
      piVar1[1] = temp_v0;
      FUN_002e9538(*(int *)(param_1 + 0x48) + 0x10,temp_v5);
      *(unsigned int *)(*(int *)(param_1 + 0x48) + 0xc) = 0;
      FUN_00301484(*(unsigned int *)(param_1 + 0x48));
      temp_v1 = 1;
      *(fn_0011ca76_arg1 **)(*(int *)(param_1 + 0x48) + 0x38) = param_2;
      if (*(int *)(param_1 + 0x26c) != 0) {
        FUN_00311544();
      }
    }
    FUN_002e6e5c(temp_v4);
  }
  return temp_v1;
}

} /* extern "C" */
