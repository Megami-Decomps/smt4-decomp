/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c2b48` (_code @ 0x1c2b48, 0x114 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001ee0a0(unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *);

typedef struct fn_001c2b48_arg0 fn_001c2b48_arg0;
struct fn_001c2b48_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0xb8];
    undefined4 field_0xd8; /* +0xd8 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int g_keyedRecordCount; /* 0x433278 */
extern unsigned int *DAT_00433a58; /* 0x433a58 */

extern unsigned int *FUN_001ab9b0(fn_001c2b48_arg0 *);
extern int FUN_001ed250(void);
/* Supplied declaration required: FUN_001ee0a0. */


void FUN_001c2b48(fn_001c2b48_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  char temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  unsigned int *puVar5;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  
  puVar3 = DAT_00433a58;
  if (((-1 < (g_keyedRecordCount - (int)param_1) - 1) &&
      (temp_v2 = FUN_001ed250(), 0 < *(int *)(temp_v2 + 0xd8))) && (DAT_00433a58 != (unsigned int *)0x0))
  {
    temp_v2 = *(int *)((int)param_1 * 0x148 + 0x4780d8);
    puVar5 = (unsigned int *)FUN_001ab9b0(param_1);
    temp_v4 = puVar5[1];
    temp_v5 = puVar5[2];
    temp_v6 = puVar5[3];
    temp_v7 = puVar5[4];
    temp_v8 = puVar5[5];
    temp_v9 = puVar5[6];
    temp_v10 = puVar5[7];
    puVar3[3] = *puVar5;
    puVar3[4] = temp_v4;
    puVar3[5] = temp_v5;
    puVar3[6] = temp_v6;
    puVar3[7] = temp_v7;
    puVar3[8] = temp_v8;
    puVar3[9] = temp_v9;
    puVar3[10] = temp_v10;
    temp_v1 = '\0';
    if (DAT_00433a58 != (unsigned int *)0x0) {
      temp_v1 = *(char *)(DAT_00433a58 + 0x1b);
    }
    if (!(DAT_00433a58 == (unsigned int *)0x0 || temp_v1 == '\0')) {
      puVar3[0x18] = 0;
      puVar3[0x17] = 0;
      puVar3[0x19] = 0;
      *(unsigned char *)(puVar3 + 0x1b) = 2;
    }
    else {
      puVar3[2] = 0;
      *(unsigned char *)(puVar3 + 0x1b) = 1;
      *puVar3 = 0;
      temp_v3 = (unsigned int)*(unsigned char *)(puVar3 + 3);
      if (temp_v3 >= 0xe) {
        temp_v3 = 0;
      }
      temp_v0 = temp_v3 * 0x30;
      puVar3[0xb] = *(unsigned int *)(temp_v0 + 0x433a90);
      puVar3[0xc] = *(unsigned int *)(temp_v0 + 0x433a94);
      puVar3[0xd] = *(unsigned int *)(temp_v0 + 0x433a98);
      puVar3[0xe] = 0x3f800000;
    }
    *(char *)((int)puVar3 + 0x6d) = (char)(int)param_1;
    puVar3[1] = puVar3[2] + temp_v2;
    FUN_001ee0a0(puVar3 + 3,puVar3 + 0x17,puVar3 + 0x19,puVar3 + 0xf,puVar3 + 0x13);
    puVar3[0x1a] = 1;
  }
  return;
}

} /* extern "C" */
