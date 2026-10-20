/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ac2cc` (_code @ 0x3ac2cc, 0x184 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00167ab4(int, int, int, int, int, int);
int FUN_00350d90(unsigned int, unsigned char *, int, int);

typedef struct fn_003ac2cc_arg0 fn_003ac2cc_arg0;
struct fn_003ac2cc_arg0 {
    unsigned char pad_0x0[0x38];
    uint field_0x38; /* +0x38 */
    unsigned char pad_0x3c[0x8];
    undefined4 field_0x44; /* +0x44 */
    undefined4 field_0x48; /* +0x48 */
    undefined4 field_0x4c; /* +0x4c */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char DAT_005c1ec8; /* 0x5c1ec8 */

/* Supplied declaration required: FUN_00167ab4. */
/* Supplied declaration required: FUN_00350d90. */


unsigned int * FUN_003ac2cc(fn_003ac2cc_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  unsigned char *puVar7;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  puVar5 = (unsigned int *)0x10000;
  FUN_00167ab4(0x10000,0x100,0,4,0x10,1);
  temp_v4 = param_1->field_0x38;
  if (temp_v4 < 4) {
    temp_v4 = 3;
  }
  param_1->field_0x38 = temp_v4;
  temp_v4 = temp_v4 & 0xffff;
  FUN_00350d90(temp_v4,&DAT_005c1ec8,4,0x48);
  temp_v7 = 0;
  *puVar5 = temp_v4;
  temp_v0 = (int)((int)*(short *)(temp_v4 + 2) + ((unsigned int)((int)*(short *)(temp_v4 + 2) >> 0x1f) >> 0x1e))
          >> 2;
  puVar7 = *(unsigned char **)(*(int *)(temp_v4 + 8) + 0x38);
  *(unsigned int *)(temp_v4 + 0x54) = *(unsigned int *)(temp_v4 + 0x54) | 0x20;
  temp_v6 = param_1->field_0x44;
  temp_v5 = param_1->field_0x48;
  temp_v8 = param_1->field_0x4c;
  if (temp_v0 != 0) {
    do {
      *puVar7 = (char)temp_v6;
      puVar7[1] = (char)((unsigned int)temp_v6 >> 8);
      puVar7[2] = (char)((unsigned int)temp_v6 >> 0x10);
      puVar7[3] = (char)((unsigned int)temp_v6 >> 0x18);
      temp_v2 = (unsigned char)((unsigned int)temp_v5 >> 8);
      puVar7[4] = (char)temp_v5;
      temp_v3 = (unsigned char)((unsigned int)temp_v5 >> 0x10);
      puVar7[5] = temp_v2;
      puVar7[6] = temp_v3;
      temp_v1 = (unsigned char)((unsigned int)temp_v5 >> 0x18);
      puVar7[7] = temp_v1;
      puVar7[8] = (char)temp_v5;
      temp_v7 = temp_v7 + 1;
      puVar7[9] = temp_v2;
      puVar7[10] = temp_v3;
      puVar7[0xb] = temp_v1;
      puVar7[0xc] = (char)temp_v8;
      puVar7[0xd] = (char)((unsigned int)temp_v8 >> 8);
      puVar7[0xe] = (char)((unsigned int)temp_v8 >> 0x10);
      puVar7[0xf] = (char)((unsigned int)temp_v8 >> 0x18);
      puVar7 = puVar7 + 0x10;
    } while (temp_v7 < temp_v0);
  }
  return puVar5;
}

} /* extern "C" */
