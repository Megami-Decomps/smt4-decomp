/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00359a08` (_code @ 0x359a08, 0x164 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char LAB_00359c6c; /* 0x359c6c */
extern int DAT_0057f0c8; /* 0x57f0c8 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_00100388. */
extern unsigned int FUN_0016a0e8(void);
extern int FUN_0019c6bc(unsigned int);
/* Supplied declaration required: FUN_001aba54. */
/* Supplied declaration required: FUN_0020d164. */
/* Supplied declaration required: FUN_00230c1c. */
/* Supplied declaration required: FUN_002a1f60. */
/* Supplied declaration required: FUN_002a48e0. */
/* Supplied declaration required: FUN_002a4964. */
/* Supplied declaration required: FUN_002c2c68. */
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: FUN_0031d1d8. */
extern int FUN_00348ed0(void);
/* Supplied declaration required: FUN_0034a290. */


void FUN_00359a08(int param_1)

{
/* irregular: 12 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
  int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  
  piVar1 = (int *)(param_1 + 0x8e7c);
  temp_v5 = *piVar1;
  *piVar1 = temp_v5 - 1;
  temp_v5 = param_1 + *(int *)(param_1 + (temp_v5 - 1) * 4 + 0x8e8c) * 2;
  temp_v7 = (unsigned int)*(unsigned short *)(temp_v5 + 0x8b60);
  *(unsigned short *)(temp_v5 + 0x8b60) = 0;
  *(unsigned int *)(param_1 + *piVar1 * 4 + 0x8e8c) = 0xffffffff;
  temp_v5 = 0;
  do {
    temp_v3 = temp_v5;
    if (*(short *)(param_1 + temp_v5 * 2 + 0x8b60) == 0) break;
    temp_v5 = temp_v5 + 1;
    temp_v3 = 0;
  } while (temp_v5 < 8);
  temp_v5 = param_1 + 0x8db0;
  temp_v0 = FUN_002c2c68();
  if (temp_v3 < temp_v0) {
    FUN_002a48e0(temp_v5,0);
    FUN_002a4964(temp_v5,temp_v3);
  }
  else {
    FUN_002a48e0(temp_v5,0);
    FUN_002a4964(temp_v5,0);
  }
  temp_v5 = 0;
  do {
    temp_v3 = temp_v5;
    if (*(unsigned short *)(param_1 + temp_v5 * 2 + 0x8b70) == temp_v7) break;
    temp_v5 = temp_v5 + 1;
    temp_v3 = 0;
  } while (temp_v5 < 0x60);
  param_1 = param_1 + 0x8e14;
  temp_v0 = FUN_00348ed0();
  temp_v0 = temp_v0 - 2;
  temp_v1 = FUN_002c2c68(param_1);
  temp_v8 = SBORROW4(temp_v3,temp_v0);
  temp_v5 = temp_v3 - temp_v0;
  temp_v6 = 0;
  if (temp_v0 < temp_v3) {
    temp_v6 = temp_v3 - temp_v0;
  }
  temp_v1 = temp_v1 - 2;
  if (temp_v0 <= temp_v3) {
    temp_v8 = SBORROW4(temp_v1,temp_v3);
    temp_v5 = temp_v1 - temp_v3;
    temp_v0 = temp_v1;
  }
  temp_v1 = temp_v3 - temp_v6;
  if (temp_v3 != temp_v0 && temp_v5 < 0 == temp_v8) {
    temp_v6 = temp_v6 + 1;
    temp_v1 = temp_v1 - 1;
  }
  FUN_002a48e0(param_1,temp_v6);
  FUN_0031d1d8(param_1,temp_v1);
  temp_v5 = DAT_0057f0c8;
  if (temp_v7 == 0) {
    *(unsigned char *)(DAT_0057f0c8 + 0x5ea) = 0;
  }
  else {
    *(unsigned char *)(DAT_0057f0c8 + 0x67c) = 1;
    *(unsigned char *)(temp_v5 + 0x5ea) = 1;
    temp_v2 = FUN_0016a0e8();
    temp_v3 = FUN_0019c6bc(temp_v7);
    if (temp_v3 != 0) {
      temp_v4 = temp_v7;
      FUN_0034a290();
      FUN_0020d164(&uStack_80,(*(unsigned int *)(temp_v4 + 0x44) & 0xffff) >> 0xb);
      FUN_003180c4(0x24,&uStack_80);
      FUN_00100388(&uStack_80,&LAB_00359c6c);
      FUN_003180c4(0x25,&uStack_80);
    }
    else {
      temp_v4 = temp_v7;
      FUN_001aba54();
      FUN_0020d164(&uStack_80,(*(unsigned int *)(temp_v4 + 0x28) & 0xffff) >> 0xb);
      FUN_003180c4(0x24,&uStack_80);
      FUN_00230c1c(&uStack_80,(*(unsigned int *)(temp_v4 + 0x28) & 0x1ff) >> 5);
      FUN_003180c4(0x25,&uStack_80);
    }
    uStack_80 = 3;
    uStack_7c = temp_v2;
    uStack_78 = temp_v7;
    FUN_002a1f60(*(unsigned int *)(temp_v5 + 0x678),2,0xffffffff,0);
  }
  return;
}
