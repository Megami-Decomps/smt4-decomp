/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00512398` (_code @ 0x512398, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00512398_arg0 fn_00512398_arg0;
struct fn_00512398_arg0 {
    undefined1 field_0x0; /* +0x0 */
    undefined1 field_0x1; /* +0x1 */
    undefined1 field_0x2; /* +0x2 */
    unsigned char pad_0x3[0x1];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x24];
    undefined4 field_0x38; /* +0x38 */
    undefined4 field_0x3c; /* +0x3c */
    undefined4 field_0x40; /* +0x40 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_0055c000; /* 0x55c000 */
extern unsigned char DAT_0055c014; /* 0x55c014 */
extern unsigned char DAT_0055c0e8; /* 0x55c0e8 */
extern unsigned char DAT_0055c138; /* 0x55c138 */
extern unsigned char DAT_0055c14c; /* 0x55c14c */
extern unsigned char *DAT_005c0f6c; /* 0x5c0f6c */
extern unsigned char *DAT_005c0f70; /* 0x5c0f70 */
extern unsigned char *DAT_005c0f74; /* 0x5c0f74 */
extern unsigned char *DAT_005c0f78; /* 0x5c0f78 */
extern unsigned char *DAT_005c0f7c; /* 0x5c0f7c */
extern unsigned char DAT_00646b38; /* 0x646b38 */

/* Supplied declaration required: FUN_002f5020. */
/* Supplied declaration required: FUN_00462724. */


void FUN_00512398(fn_00512398_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_002f5020();
  param_1->field_0x38 = 0;
  param_1->field_0x3c = 0;
  param_1->field_0x40 = 0;
  DAT_005c0f6c = &DAT_0055c014;
  DAT_005c0f70 = &DAT_0055c000;
  DAT_005c0f74 = &DAT_0055c0e8;
  DAT_005c0f78 = &DAT_0055c138;
  DAT_005c0f7c = &DAT_0055c14c;
  FUN_00462724(&DAT_00646b38,0x4611e8,0x100000);
  return;
}
