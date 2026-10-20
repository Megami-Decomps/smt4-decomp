/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043d144` (_code @ 0x43d144, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nnnstdMemCpy(...);

typedef struct fn_0043d144_arg1 fn_0043d144_arg1;
struct fn_0043d144_arg1 {
    unsigned char pad_0x0[0x2];
    byte field_0x2; /* +0x2 */
    byte field_0x3; /* +0x3 */
    undefined4 field_0x4; /* +0x4 */
    ushort field_0x8; /* +0x8 */
    byte field_0xa; /* +0xa */
    unsigned char pad_0xb[0xa];
    byte field_0x15; /* +0x15 */
    unsigned char pad_0x16[0x4];
    ushort field_0x1a; /* +0x1a */
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    byte field_0x24; /* +0x24 */
    byte field_0x25; /* +0x25 */
    byte field_0x26; /* +0x26 */
    unsigned char pad_0x27[0x81];
    undefined4 field_0xa8; /* +0xa8 */
    undefined4 field_0xac; /* +0xac */
    undefined4 field_0xb0; /* +0xb0 */
    undefined4 field_0xb4; /* +0xb4 */
    undefined4 field_0xb8; /* +0xb8 */
    undefined4 field_0xbc; /* +0xbc */
    undefined4 field_0xc0; /* +0xc0 */
    undefined4 field_0xc4; /* +0xc4 */
    undefined4 field_0xc8; /* +0xc8 */
    byte field_0xcc; /* +0xcc */
    byte field_0xcd; /* +0xcd */
    byte field_0xce; /* +0xce */
    byte field_0xcf; /* +0xcf */
};

typedef int romwright_code(...);
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

/* Supplied declaration required: nnnstdMemCpy. */


void FUN_0043d144(int *param_1,fn_0043d144_arg1 *param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = param_1[5] & 0x3f;
  temp_v1 = 0x40 - temp_v0;
  param_1[5] = param_1[5] + param_3;
  if (param_3 < temp_v1) {
    if (param_3 != 0) {
      nnnstdMemCpy((int)param_1 + temp_v0 + 0x18,param_2);
      return;
    }
  }
  else {
    nnnstdMemCpy((int)param_1 + temp_v0 + 0x18,param_2,temp_v1);
    (**(romwright_code **)(*param_1 + 0x1c))(param_1);
    temp_v2 = temp_v1 + (int)param_2;
    temp_v0 = (param_3 - temp_v1) >> 6;
    if (temp_v0 != 0) {
      do {
        nnnstdMemCpy(param_1 + 6,temp_v2,0x40);
        temp_v2 = temp_v2 + 0x40;
        (**(romwright_code **)(*param_1 + 0x1c))(param_1);
        temp_v0 = temp_v0 - 1;
      } while (0 < (int)temp_v0);
    }
    if (((param_3 - temp_v1) & 0x3f) != 0) {
      nnnstdMemCpy(param_1 + 6,temp_v2);
      return;
    }
  }
  return;
}

} /* extern "C" */
