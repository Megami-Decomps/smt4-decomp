/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043d210` (_code @ 0x43d210, 0x180 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0043d210_arg1 fn_0043d210_arg1;
struct fn_0043d210_arg1 {
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

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned char DAT_005b4820; /* 0x5b4820 */

/* Supplied declaration required: nnnstdMemCpy. */


void FUN_0043d210(int *param_1,fn_0043d210_arg1 *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int temp_v4;
  
  temp_v0 = param_1[5];
  (**(romwright_code **)(*param_1 + 8))(param_1,&DAT_005b4820,1);
  temp_v2 = param_1[5] & 0x3f;
  temp_v1 = 0x40 - temp_v2;
  if (temp_v1 < 8) {
    puVar6 = (unsigned int *)((int)param_1 + temp_v2 + 0x18);
    temp_v3 = 4 - ((unsigned int)puVar6 & 3);
    temp_v4 = temp_v3 & 3;
    if (temp_v4 != 0) {
      puVar5 = (unsigned int *)((int)param_1 + temp_v2 + 0x17);
      if ((temp_v3 & 1) != 0) {
        *(unsigned char *)puVar6 = 0;
        puVar5 = puVar6;
      }
      for (temp_v2 = temp_v4 >> 1; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
        *(unsigned char *)((int)puVar5 + 1) = 0;
        puVar5 = (unsigned int *)((int)puVar5 + 2);
        *(unsigned char *)puVar5 = 0;
      }
      puVar6 = (unsigned int *)((int)puVar6 + temp_v4);
      temp_v1 = temp_v1 - temp_v4;
    }
    for (; temp_v1 >= 4; temp_v1 = temp_v1 - 4) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
      *(unsigned char *)puVar6 = 0;
      puVar6 = (unsigned int *)((int)puVar6 + 1);
    }
    (**(romwright_code **)(*param_1 + 0x1c))(param_1);
    temp_v2 = 0;
    temp_v1 = 0x40;
  }
  else if (temp_v1 < 9) {
    param_1[0x14] = temp_v0 << 3;
    param_1[0x15] = 0;
    (**(romwright_code **)(*param_1 + 0x1c))(param_1);
    nnnstdMemCpy(param_2,param_1 + 1,0x10);
    return;
  }
  puVar6 = (unsigned int *)((int)param_1 + temp_v2 + 0x18);
  temp_v3 = 4 - ((unsigned int)puVar6 & 3);
  temp_v4 = temp_v3 & 3;
  temp_v1 = temp_v1 - 8;
  if (temp_v4 != 0) {
    puVar5 = (unsigned int *)((int)param_1 + temp_v2 + 0x17);
    if ((temp_v3 & 1) != 0) {
      *(unsigned char *)puVar6 = 0;
      puVar5 = puVar6;
    }
    for (temp_v2 = temp_v4 >> 1; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
      *(unsigned char *)((int)puVar5 + 1) = 0;
      puVar5 = (unsigned int *)((int)puVar5 + 2);
      *(unsigned char *)puVar5 = 0;
    }
    puVar6 = (unsigned int *)((int)puVar6 + temp_v4);
    temp_v1 = temp_v1 - temp_v4;
  }
  for (; temp_v1 >= 4; temp_v1 = temp_v1 - 4) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
    *(unsigned char *)puVar6 = 0;
    puVar6 = (unsigned int *)((int)puVar6 + 1);
  }
  param_1[0x14] = temp_v0 << 3;
  param_1[0x15] = 0;
  (**(romwright_code **)(*param_1 + 0x1c))(param_1);
  nnnstdMemCpy(param_2,param_1 + 1,0x10);
  return;
}
