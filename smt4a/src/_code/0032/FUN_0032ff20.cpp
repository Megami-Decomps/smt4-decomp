/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032ff20` (_code @ 0x32ff20, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(...);
int FUN_002e6354(...);
int FUN_004bcd90(...);
int FUN_004bd6b0(...);
int rt_memcpy_w(...);

typedef struct fn_0032ff20_arg0 fn_0032ff20_arg0;
struct fn_0032ff20_arg0 {
    unsigned char pad_0x0[0x6];
    ushort field_0x6; /* +0x6 */
    unsigned char pad_0x8[0x10];
    ushort field_0x18; /* +0x18 */
    ushort field_0x1a; /* +0x1a */
    unsigned char pad_0x1c[0x2];
    ushort field_0x1e; /* +0x1e */
    ushort field_0x20; /* +0x20 */
    ushort field_0x22; /* +0x22 */
    ushort field_0x24; /* +0x24 */
    ushort field_0x26; /* +0x26 */
};

extern unsigned short FUN_0017760c(unsigned short *);
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_004bcd90. */
/* Supplied declaration required: FUN_004bd6b0. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0032ff20(fn_0032ff20_arg0 *param_1,unsigned short *param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned short temp_v0;
  fn_0032ff20_arg0 *pfVar2;
  int temp_v1;
  
  pfVar2 = param_1;
  FUN_00184310();
  FUN_002e6354(param_2,300);
  param_2[0x31] = (short)(int)param_1;
  param_2[0x32] = pfVar2->field_0x6;
  *param_2 = pfVar2->field_0x18;
  param_2[1] = pfVar2->field_0x1a;
  param_2[2] = pfVar2->field_0x1e;
  param_2[4] = pfVar2->field_0x22;
  param_2[5] = pfVar2->field_0x24;
  param_2[6] = pfVar2->field_0x26;
  param_2[3] = pfVar2->field_0x20;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = pfVar2->field_0x1e;
  param_2[0x12] = pfVar2->field_0x22;
  param_2[0x13] = pfVar2->field_0x24;
  param_2[0x14] = pfVar2->field_0x26;
  param_2[0x11] = pfVar2->field_0x20;
  rt_memcpy_w(param_2 + 0x26,pfVar2 + 4,0x12);
  temp_v1 = 0;
  do {
    FUN_004bd6b0(param_2,(&pfVar2[1].field_0x18)[temp_v1],temp_v1);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 8);
  *(unsigned int *)(param_2 + 0x18) = 0;
  FUN_004bcd90(param_2);
  temp_v0 = FUN_0017760c(param_2);
  param_2[0x15] = temp_v0;
  param_2[0x16] = param_2[8];
  return;
}

} /* extern "C" */
