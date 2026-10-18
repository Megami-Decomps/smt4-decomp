/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e95c4` (_code @ 0x2e95c4, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002e95c4_arg0 fn_002e95c4_arg0;
struct fn_002e95c4_arg0 {
    unsigned char pad_0x0[0x60];
    int field_0x60; /* +0x60 */
    undefined1 field_0x64; /* +0x64 */
    undefined1 field_0x65; /* +0x65 */
    undefined1 field_0x66; /* +0x66 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned char LAB_002e9610; /* 0x2e9610 */

extern int FUN_002e783c(void);
extern int FUN_002e786a(int, unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002e98d4. */
/* Supplied declaration required: FUN_002e98ea. */


void FUN_002e95c4(fn_002e95c4_arg0 *param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (param_1->field_0x60 != 0) {
    FUN_002e98d4();
    param_1->field_0x60 = 0;
    param_1->field_0x65 = 0;
  }
  if (param_2 != 0) {
    temp_v0 = FUN_002e783c();
    temp_v0 = temp_v0 + 1;
    temp_v1 = FUN_002e786a(temp_v0,&LAB_002e9610,0);
    param_1->field_0x60 = temp_v1;
    FUN_002e98ea(temp_v1,param_2,temp_v0);
    *(unsigned short *)(param_1->field_0x60 + (temp_v0 * 2 - 2)) = 0;
    param_1->field_0x65 = 1;
    param_1->field_0x64 = 0;
    param_1->field_0x66 = 0;
  }
  return;
}
