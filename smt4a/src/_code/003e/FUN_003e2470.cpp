/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e2470` (_code @ 0x3e2470, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003e1114(...);
int FUN_003ebec8(...);
int FUN_003f1334(...);

typedef struct fn_003e2470_arg1 fn_003e2470_arg1;
struct fn_003e2470_arg1 {
    unsigned char pad_0x0[0x3];
    byte field_0x3; /* +0x3 */
    unsigned char pad_0x4[0x30];
    undefined4 field_0x34; /* +0x34 */
    unsigned char pad_0x38[0x32];
    short field_0x6a; /* +0x6a */
    unsigned char pad_0x6c[0x398];
    void *field_0x404; /* +0x404 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_003e1114. */
extern int FUN_003e9b28(fn_003e2470_arg1 *);
/* Supplied declaration required: FUN_003ebec8. */
extern int FUN_003f0f40(fn_003e2470_arg1 *);
/* Supplied declaration required: FUN_003f1334. */
extern int FUN_003f86c8(unsigned int);


void FUN_003e2470(unsigned int *param_1,fn_003e2470_arg1 *param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_003f86c8(0x4e);
  if (temp_v0 == 0) {
    return;
  }
  FUN_003ebec8(param_2);
  temp_v0 = FUN_003e9b28(param_2);
  if (temp_v0 != 0) {
    *param_1 = 4;
    param_1[4] = 0;
    param_1[3] = 0;
    FUN_003f1334(param_2);
    *param_1 = 5;
    param_1[4] = 0;
    param_1[3] = 0;
    temp_v0 = FUN_003f0f40(param_2);
    if (temp_v0 == 0) {
      return;
    }
  }
  param_1[4] = 0;
  *param_1 = 6;
  param_1[3] = 0;
  FUN_003e1114(param_1,param_2);
  return;
}

} /* extern "C" */
