/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00133b48` (_code @ 0x133b48, 0xe2 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e14(int);
int FUN_00307a98(int, int, int, int *);
int FUN_00307aba(...);
int vectorCapacity40(...);
int FUN_0030d108(...);
int FUN_0030fd28(int *, int, int);
int FUN_0030fd70(int *);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_00307a98. */
/* Supplied declaration required: FUN_00307aba. */
/* Supplied declaration required: vectorCapacity40. */
/* Supplied declaration required: FUN_0030d108. */
/* Supplied declaration required: FUN_0030fd28. */
extern int FUN_0030fd62(int *, int, int);
/* Supplied declaration required: FUN_0030fd70. */
extern int FUN_0030fd7e(unsigned int, int *);
extern int __aeabi_idivmod(int, unsigned int);


void FUN_00133b48(int *param_1,int param_2,unsigned int param_3)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v0 = vectorCapacity40();
  temp_v1 = FUN_0030fd70(param_1);
  if (temp_v1 < temp_v0) {
    temp_v5 = param_1[1];
    temp_v4 = temp_v5 - 0x28;
    param_1[1] = temp_v5 + 0x28;
    FUN_0030d108(param_1,temp_v5);
    while (param_2 != temp_v4) {
      temp_v4 = temp_v4 - 0x28;
      temp_v5 = temp_v5 - 0x28;
      FUN_00307aba(temp_v5,temp_v4);
    }
    FUN_00307aba(param_2,param_3);
  }
  else {
    temp_v2 = FUN_0030fd70(param_1);
    temp_v4 = FUN_0030fd7e(temp_v2,param_1);
    temp_v5 = FUN_0030fd62(param_1,temp_v4,*param_1);
    FUN_00307a98(*param_1,param_2,temp_v5,param_1);
    temp_v3 = __aeabi_idivmod(param_2 - *param_1,0x28);
    FUN_0030d108(param_1,temp_v3 * 0x28 + temp_v5,param_3);
    temp_v3 = __aeabi_idivmod(param_2 - *param_1,0x28);
    FUN_00307a98(param_2,param_1[1],temp_v3 * 0x28 + temp_v5 + 0x28,param_1);
    temp_v3 = FUN_0030fd70(param_1);
    FUN_0030fd28(param_1,*param_1,param_1[1]);
    temp_v6 = *param_1;
    vectorCapacity40(param_1);
    FUN_002e6e14(temp_v6);
    *param_1 = temp_v5;
    param_1[2] = temp_v4 * 0x28 + temp_v5;
    param_1[1] = temp_v3 * 0x28 + temp_v5 + 0x28;
  }
  return;
}

} /* extern "C" */
