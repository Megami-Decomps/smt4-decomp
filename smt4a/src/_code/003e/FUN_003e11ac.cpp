/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e11ac` (_code @ 0x3e11ac, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003e1114(...);
int FUN_003e2470(...);
int FUN_003f1334(...);
int loadSlotRequestAsync(...);

typedef struct fn_003e11ac_arg1 fn_003e11ac_arg1;
struct fn_003e11ac_arg1 {
    unsigned char pad_0x0[0x3];
    byte field_0x3; /* +0x3 */
    unsigned char pad_0x4[0x30];
    undefined4 field_0x34; /* +0x34 */
    unsigned char pad_0x38[0x32];
    short field_0x6a; /* +0x6a */
    unsigned char pad_0x6c[0xc0];
    unsigned char field_0x12c; /* +0x12c */
    unsigned char pad_0x12d[0x2d7];
    void *field_0x404; /* +0x404 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int g_btlEvent; /* 0x573898 */

/* Supplied declaration required: FUN_003e1114. */
/* Supplied declaration required: FUN_003e2470. */
extern int valueAtF0IsReady(fn_003e11ac_arg1 *);
extern int loadSlotMainIsLoaded(fn_003e11ac_arg1 *);
/* Supplied declaration required: FUN_003f1334. */
extern int loadSlotIsLoaded(unsigned int);
/* Supplied declaration required: loadSlotRequestAsync. */
extern int isEntryUsable(unsigned int);


unsigned int * FUN_003e11ac(unsigned int *param_1,fn_003e11ac_arg1 *param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = isEntryUsable(g_btlEvent);
  if (temp_v0 != 0) {
    return (unsigned int *)0x0;
  }
  if (*(int *)&param_2->field_0x12c < 1) {
    temp_v0 = valueAtF0IsReady(param_2);
    if (temp_v0 != 0) {
      *param_1 = 4;
      param_1[4] = 0;
      param_1[3] = 0;
      FUN_003f1334(param_2);
      *param_1 = 5;
      param_1[4] = 0;
      param_1[3] = 0;
      temp_v0 = loadSlotMainIsLoaded(param_2);
      if (temp_v0 == 0) {
        return (unsigned int *)0x0;
      }
    }
    param_1[4] = 0;
    *param_1 = 6;
    param_1[3] = 0;
    FUN_003e1114(param_1,param_2);
    return param_1;
  }
  *param_1 = 2;
  param_1[4] = 0;
  param_1[3] = 0;
  temp_v0 = loadSlotIsLoaded(0x4e);
  if (temp_v0 == 0) {
    loadSlotRequestAsync(0x4e,0);
  }
  param_1[4] = 0;
  *param_1 = 3;
  param_1[3] = 0;
  FUN_003e2470(param_1,param_2);
  return param_1;
}

} /* extern "C" */
