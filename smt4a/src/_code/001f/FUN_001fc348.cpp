/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fc348` (_code @ 0x1fc348, 0x1a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00401a74(...);

typedef struct fn_001fc348_arg0 fn_001fc348_arg0;
struct fn_001fc348_arg0 {
    unsigned char pad_0x0[0x8];
    void *field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x4];
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
};

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int DAT_0057f2c4; /* 0x57f2c4 */

/* Supplied declaration required: FUN_00401a74. */


void FUN_001fc348(fn_001fc348_arg0 *param_1)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned short *puVar3;
  unsigned char temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  unsigned short temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned char temp_v10 [8];
  int temp_v11;
  unsigned int uStack_1c;
  
  temp_v0 = DAT_0057f2c4;
  FUN_00401a74(param_1,temp_v10,&temp_v11);
  temp_v7 = param_1->field_0x10;
  temp_v8 = param_1->field_0x14;
  temp_v9 = param_1->field_0x18;
  temp_v4 = 0;
  temp_v5 = *(unsigned int *)(*(int *)((int)param_1->field_0x8 + 0xc) + 0x34);
  if (0 < *(int *)(temp_v0 + 0x330)) {
    do {
      temp_v1 = temp_v0 + temp_v4 * 4;
      temp_v3 = (int)*(short *)(temp_v1 + 0x232);
      puVar3 = (unsigned short *)
               (*(int *)(*(int *)(*(int *)(temp_v0 + 0x90) + 4) + 0x10c) +
               *(short *)(temp_v1 + 0x230) * 0x158);
      if (temp_v3 == 0) {
        temp_v6 = *puVar3 | 0x1000;
        *puVar3 = temp_v6;
      }
      else if (temp_v3 == 1) {
        temp_v6 = *puVar3 | 0x2000;
        *puVar3 = temp_v6;
      }
      else if (temp_v3 == 2) {
        *puVar3 = *puVar3 | 0x4000;
      }
      *(unsigned int *)(puVar3 + temp_v3 * 0xc + 0x7e) = temp_v11;
      *(unsigned int *)(puVar3 + temp_v3 * 0xc + 0x80) = uStack_1c;
      (puVar3 + temp_v3 * 0xc + 0x78)[0] = 0;
      (puVar3 + temp_v3 * 0xc + 0x78)[1] = 0x3f80;
      (puVar3 + temp_v3 * 0xc + 0x7a)[0] = 0;
      (puVar3 + temp_v3 * 0xc + 0x7a)[1] = 0x3f80;
      if (temp_v3 != 0) {
        if (temp_v3 != 1) {
          if (temp_v3 == 2) {
            *(unsigned int *)(puVar3 + 0xa0) = temp_v9;
            puVar3[0xa2] = 0xc;
            puVar3[0xa3] = 0;
            goto joined_r0x001fc4ac;
          }
        }
        else {
          *(unsigned int *)(puVar3 + 0xa0) = temp_v8;
          puVar3[0xa2] = 0xc;
          puVar3[0xa3] = 0;
joined_r0x001fc4ac:
          if (temp_v5 == 0xc) {
            temp_v2 = (unsigned char)puVar3[1] | 1;
          }
          else {
            temp_v2 = (unsigned char)puVar3[1] & 0xfe;
          }
          *(unsigned char *)(puVar3 + 1) = temp_v2;
        }
      }
      else {
        *(unsigned int *)(puVar3 + 0xa0) = temp_v7;
        puVar3[0xa2] = 0xc;
        puVar3[0xa3] = 0;
        if (temp_v5 == 0xc) {
          temp_v2 = (unsigned char)puVar3[1] | 1;
          *(unsigned char *)(puVar3 + 1) = temp_v2;
        }
        else {
          temp_v2 = (unsigned char)puVar3[1] & 0xfe;
          *(unsigned char *)(puVar3 + 1) = temp_v2;
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < *(int *)(temp_v0 + 0x330));
  }
  return;
}

} /* extern "C" */
