/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b797c` (_code @ 0x4b797c, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(undefined4);
int FUN_0019c364(undefined4);
int FUN_001f4e20(int, int);
int FUN_0020401c(int);
int FUN_00284f90(int);
int FUN_002a49e4(unsigned int, int);

typedef struct fn_004b797c_arg0 fn_004b797c_arg0;
struct fn_004b797c_arg0 {
    unsigned char pad_0x0[0x28];
    undefined4 field_0x28; /* +0x28 */
    undefined4 field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0xa58];
    undefined1 field_0xa88; /* +0xa88 */
    unsigned char pad_0xa89[0x68f];
    void *field_0x1118; /* +0x1118 */
    unsigned char pad_0x111c[0x20];
    unsigned char field_0x113c; /* +0x113c */
    unsigned char pad_0x113d[0x1f];
    undefined4 field_0x115c; /* +0x115c */
    undefined4 field_0x1160; /* +0x1160 */
    undefined4 field_0x1164; /* +0x1164 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_001f4e20. */
/* Supplied declaration required: FUN_0020401c. */
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_00284f90. */
/* Supplied declaration required: FUN_002a49e4. */


void FUN_004b797c(fn_004b797c_arg0 *param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00224880(param_1->field_0x1164);
  if (temp_v0 == 2) {
    FUN_0019c364(param_1->field_0x1164);
    param_1->field_0x1164 = 0;
    FUN_0019a5a0(param_1->field_0x115c);
    param_1->field_0x115c = 0;
    FUN_0019a5a0(param_1->field_0x1160);
    param_1->field_0x1160 = 0;
    FUN_001f4e20(0,0);
    FUN_002a49e4(*(unsigned int *)&param_1->field_0x113c,
                 *(unsigned char *)((int)param_1->field_0x1118 + 0x3f));
    param_1->field_0x28 = 5;
    param_1->field_0x2c = 0;
    param_1->field_0xa88 = 0;
    FUN_0020401c((int)param_1->field_0x1118 + 2);
    FUN_00284f90(1);
    return;
  }
  return;
}

} /* extern "C" */
