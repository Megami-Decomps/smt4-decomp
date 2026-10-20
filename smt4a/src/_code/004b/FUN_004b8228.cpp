/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b8228` (_code @ 0x4b8228, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001f4e20(...);
int FUN_0020401c(...);
int FUN_00215978(...);
int FUN_00284f90(...);
int FUN_002a49e4(...);
int FUN_004b7d88(...);

typedef struct fn_004b8228_arg0 fn_004b8228_arg0;
struct fn_004b8228_arg0 {
    unsigned char pad_0x0[0x28];
    undefined4 field_0x28; /* +0x28 */
    undefined4 field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0xa58];
    undefined1 field_0xa88; /* +0xa88 */
    unsigned char pad_0xa89[0x68f];
    void *field_0x1118; /* +0x1118 */
    unsigned char pad_0x111c[0x20];
    unsigned char field_0x113c; /* +0x113c */
    unsigned char pad_0x113d[0x1b];
    undefined4 field_0x1158; /* +0x1158 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_001f4e20. */
/* Supplied declaration required: FUN_0020401c. */
/* Supplied declaration required: FUN_00215978. */
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_00284f90. */
/* Supplied declaration required: FUN_002a49e4. */
/* Supplied declaration required: FUN_004b7d88. */


void FUN_004b8228(fn_004b8228_arg0 *param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00224880(param_1->field_0x1158);
  if (temp_v0 == 2) {
    FUN_004b7d88(param_1);
    FUN_00215978(0);
    FUN_001f4e20(0);
    FUN_002a49e4(*(unsigned int *)&param_1->field_0x113c,
                 *(unsigned char *)((int)param_1->field_0x1118 + 0x3f));
    param_1->field_0x2c = 0;
    param_1->field_0x28 = 5;
    param_1->field_0xa88 = 0;
    FUN_0020401c((int)param_1->field_0x1118 + 2);
    FUN_00284f90(1);
    return;
  }
  return;
}

} /* extern "C" */
