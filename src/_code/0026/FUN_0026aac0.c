/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026aac0` (_code @ 0x26aac0, 0xfc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0026aac0_arg0 fn_0026aac0_arg0;
struct fn_0026aac0_arg0 {
    unsigned char pad_0x0[0x2];
    byte field_0x2; /* +0x2 */
    unsigned char pad_0x3[0x1];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    ushort field_0xc; /* +0xc */
    ushort field_0xe; /* +0xe */
    ushort field_0x10; /* +0x10 */
    ushort field_0x12; /* +0x12 */
    ushort field_0x14; /* +0x14 */
    unsigned char pad_0x16[0x22];
    ushort field_0x38; /* +0x38 */
    unsigned char pad_0x3a[0xe];
    ushort field_0x48; /* +0x48 */
    ushort field_0x4a; /* +0x4a */
    ushort field_0x4c; /* +0x4c */
    ushort field_0x4e; /* +0x4e */
    ushort field_0x50; /* +0x50 */
    ushort field_0x52; /* +0x52 */
    ushort field_0x54; /* +0x54 */
    ushort field_0x56; /* +0x56 */
};

/* Supplied declaration required: FUN_0024be90. */
/* Supplied declaration required: FUN_002b087c. */
/* Supplied declaration required: FUN_002b9364. */
/* Supplied declaration required: FUN_002bcf58. */
/* Supplied declaration required: FUN_002c4b30. */


void FUN_0026aac0(fn_0026aac0_arg0 *param_1,unsigned int *param_2)

{
/* irregular: 5 native warning(s); review required */
  fn_0026aac0_arg0 *pfVar1;
  
  pfVar1 = param_1;
  FUN_002b087c();
  FUN_002c4b30(param_2,0x604);
  *(short *)((int)param_2 + 0x46) = (short)param_1;
  *(unsigned char *)(param_2 + 0x12) = pfVar1->field_0x2;
  *(short *)param_2 = (short)pfVar1->field_0x4;
  *(short *)((int)param_2 + 2) = (short)pfVar1->field_0x8;
  *(unsigned short *)(param_2 + 1) = pfVar1->field_0xc;
  *(unsigned short *)(param_2 + 2) = pfVar1->field_0x10;
  *(unsigned short *)((int)param_2 + 10) = pfVar1->field_0x12;
  *(unsigned short *)(param_2 + 3) = pfVar1->field_0x14;
  *(unsigned short *)((int)param_2 + 6) = pfVar1->field_0xe;
  FUN_002bcf58(param_2 + 7,param_2,0xe);
  *(unsigned int *)((int)param_2 + 0xe) = *param_2;
  *(unsigned int *)((int)param_2 + 0x12) = param_2[1];
  *(unsigned int *)((int)param_2 + 0x16) = param_2[2];
  *(unsigned short *)((int)param_2 + 0x1a) = *(unsigned short *)(param_2 + 3);
  *(unsigned short *)(param_2 + 0xd) = pfVar1->field_0x48;
  *(unsigned short *)((int)param_2 + 0x36) = pfVar1->field_0x4a;
  *(unsigned short *)(param_2 + 0xe) = pfVar1->field_0x4c;
  *(unsigned short *)((int)param_2 + 0x3a) = pfVar1->field_0x4e;
  *(unsigned short *)(param_2 + 0xf) = pfVar1->field_0x50;
  *(unsigned short *)((int)param_2 + 0x3e) = pfVar1->field_0x52;
  *(unsigned short *)(param_2 + 0x10) = pfVar1->field_0x54;
  *(unsigned short *)((int)param_2 + 0x42) = pfVar1->field_0x56;
  FUN_002b9364();
  FUN_0024be90(param_2,param_1->field_0x38);
  *(unsigned short *)((int)param_2 + 0x2a) = *(unsigned short *)((int)param_2 + 0xe);
  *(unsigned short *)(param_2 + 0xb) = *(unsigned short *)(param_2 + 4);
  return;
}
