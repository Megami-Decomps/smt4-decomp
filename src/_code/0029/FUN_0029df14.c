/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029df14` (_code @ 0x29df14, 0x104 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0029df14_arg0 fn_0029df14_arg0;
struct fn_0029df14_arg0 {
    unsigned char pad_0x0[0x3];
    byte field_0x3; /* +0x3 */
    unsigned char pad_0x4[0x10];
    ushort field_0x14; /* +0x14 */
    ushort field_0x16; /* +0x16 */
    unsigned char pad_0x18[0x2];
    ushort field_0x1a; /* +0x1a */
    ushort field_0x1c; /* +0x1c */
    ushort field_0x1e; /* +0x1e */
    ushort field_0x20; /* +0x20 */
    ushort field_0x22; /* +0x22 */
    unsigned char pad_0x24[0x14];
    ushort field_0x38; /* +0x38 */
    unsigned char pad_0x3a[0x2];
    ushort field_0x3c; /* +0x3c */
    ushort field_0x3e; /* +0x3e */
    ushort field_0x40; /* +0x40 */
    ushort field_0x42; /* +0x42 */
    ushort field_0x44; /* +0x44 */
    ushort field_0x46; /* +0x46 */
    ushort field_0x48; /* +0x48 */
    ushort field_0x4a; /* +0x4a */
};

/* Supplied declaration required: FUN_0024be90. */
/* Supplied declaration required: FUN_0029c950. */
/* Supplied declaration required: FUN_002b9364. */
/* Supplied declaration required: FUN_002c4b30. */


void FUN_0029df14(fn_0029df14_arg0 *param_1,unsigned short *param_2)

{
/* irregular: 4 native warning(s); review required */
  fn_0029df14_arg0 *pfVar1;
  
  pfVar1 = param_1;
  FUN_002b9364();
  FUN_002c4b30(param_2,0x604);
  param_2[0x23] = (short)param_1;
  *(unsigned char *)(param_2 + 0x24) = pfVar1->field_0x3;
  *param_2 = pfVar1->field_0x14;
  param_2[1] = pfVar1->field_0x16;
  param_2[2] = pfVar1->field_0x1a;
  param_2[4] = pfVar1->field_0x1e;
  param_2[5] = pfVar1->field_0x20;
  param_2[6] = pfVar1->field_0x22;
  param_2[3] = pfVar1->field_0x1c;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = pfVar1->field_0x1a;
  param_2[0x12] = pfVar1->field_0x1e;
  param_2[0x13] = pfVar1->field_0x20;
  param_2[0x14] = pfVar1->field_0x22;
  param_2[0x11] = pfVar1->field_0x1c;
  param_2[0x1a] = pfVar1->field_0x3c;
  param_2[0x1b] = pfVar1->field_0x3e;
  param_2[0x1c] = pfVar1->field_0x40;
  param_2[0x1d] = pfVar1->field_0x42;
  param_2[0x1e] = pfVar1->field_0x44;
  param_2[0x1f] = pfVar1->field_0x46;
  param_2[0x20] = pfVar1->field_0x48;
  param_2[0x21] = pfVar1->field_0x4a;
  *(unsigned int *)(param_2 + 0x18) = 0;
  FUN_0024be90(param_2,pfVar1->field_0x38);
  FUN_0029c950(param_2);
  param_2[0x15] = param_2[7];
  param_2[0x16] = param_2[8];
  return;
}
