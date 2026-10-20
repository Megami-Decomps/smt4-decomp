/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b9238` (_code @ 0x3b9238, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022b064(...);
int FUN_002305e8(...);
int FUN_0026374c(...);
int FUN_0027db24(...);
int FUN_0027e774(...);
int FUN_0027e7b4(...);

typedef struct fn_003b9238_arg0 fn_003b9238_arg0;
struct fn_003b9238_arg0 {
    unsigned char pad_0x0[0x28];
    undefined4 field_0x28; /* +0x28 */
    undefined4 field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0x69c];
    undefined1 field_0x6cc; /* +0x6cc */
    unsigned char pad_0x6cd[0x68f];
    void *field_0xd5c; /* +0xd5c */
    unsigned char pad_0xd60[0x20];
    unsigned char field_0xd80; /* +0xd80 */
    unsigned char pad_0xd81[0x1b];
    undefined4 field_0xd9c; /* +0xd9c */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int FUN_0019e0c0(unsigned int);
/* Supplied declaration required: FUN_0022b064. */
/* Supplied declaration required: FUN_002305e8. */
/* Supplied declaration required: FUN_0026374c. */
/* Supplied declaration required: FUN_0027db24. */
/* Supplied declaration required: FUN_0027e774. */
/* Supplied declaration required: FUN_0027e7b4. */


void FUN_003b9238(fn_003b9238_arg0 *param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0019e0c0(param_1->field_0xd9c);
  if (temp_v0 == 2) {
    FUN_0022b064(param_1);
    FUN_0027db24(0);
    FUN_0027e774(0);
    FUN_0027e7b4(*(unsigned int *)&param_1->field_0xd80,
                 *(unsigned char *)((int)param_1->field_0xd5c + 0x3f));
    param_1->field_0x2c = 0;
    param_1->field_0x28 = 5;
    param_1->field_0x6cc = 0;
    FUN_0026374c((int)param_1->field_0xd5c + 2);
    FUN_002305e8(1);
    return;
  }
  return;
}

} /* extern "C" */
