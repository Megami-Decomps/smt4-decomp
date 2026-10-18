/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a0f80` (_code @ 0x3a0f80, 0x214 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003a0f80_arg0 fn_003a0f80_arg0;
struct fn_003a0f80_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x8];
    byte field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x3];
    int field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x144];
    void *field_0x160; /* +0x160 */
    int field_0x164; /* +0x164 */
    int field_0x168; /* +0x168 */
    int field_0x16c; /* +0x16c */
    unsigned char pad_0x170[0x15bd0];
    undefined4 field_0x15d40; /* +0x15d40 */
    undefined4 field_0x15d44; /* +0x15d44 */
};

extern int FUN_00221d08(unsigned int);
/* Supplied declaration required: FUN_00230a90. */
/* Supplied declaration required: FUN_00230aa8. */
/* Supplied declaration required: FUN_00263978. */
extern int FUN_0028ec74(unsigned int);
/* Supplied declaration required: FUN_002972f8. */
/* Supplied declaration required: FUN_0029e8c0. */
/* Supplied declaration required: FUN_0029e8e8. */
/* Supplied declaration required: FUN_0029f10c. */
/* Supplied declaration required: FUN_002a0678. */
extern int FUN_002a63f8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002b8b78. */
extern int FUN_002bf41c(unsigned int);
/* Supplied declaration required: FUN_003a442c. */


void FUN_003a0f80(fn_003a0f80_arg0 *param_1)

{
/* irregular: 1 goto(s); 10 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  void *pvVar3;
  int temp_v2;
  unsigned char *puVar5;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8 [4];
  unsigned char temp_v9 [8];
  
  puVar5 = temp_v8;
  temp_v7 = param_1->field_0x160 != (void *)0x0;
  temp_v1 = 0;
  if (temp_v7) {
    temp_v1 = param_1->field_0x164;
  }
  if ((temp_v7 && temp_v1 != 0) && (temp_v1 = FUN_002a63f8(0x2b,0), temp_v1 != 0)) {
    temp_v1 = FUN_002bf41c(param_1->field_0x15d40);
    if ((temp_v1 == 0) || (temp_v1 = FUN_00221d08(param_1->field_0x15d40), temp_v1 != 0)) {
      temp_v1 = FUN_002bf41c(param_1->field_0x15d44);
      if ((temp_v1 == 0) || (temp_v1 = FUN_00221d08(param_1->field_0x15d44), temp_v1 != 0)) {
        pvVar3 = param_1->field_0x160;
        FUN_002972f8(pvVar3,param_1->field_0x164);
        param_1->field_0x168 = (int)pvVar3;
        *(unsigned int *)((int)pvVar3 + 0x108) = 2;
        pvVar3 = param_1->field_0x160;
        FUN_002972f8(pvVar3,param_1->field_0x164);
        param_1->field_0x16c = (int)pvVar3;
        *(unsigned int *)((int)pvVar3 + 0x108) = 2;
        FUN_002a0678(0,10);
        FUN_002a0678(1,10);
        FUN_0029e8e8(1,0);
        FUN_0029e8c0(0);
        temp_v0 = param_1->field_0x14;
        temp_v6 = param_1->field_0x18;
        temp_v2 = FUN_00230aa8(temp_v8,0);
        temp_v4 = 0;
        FUN_00230a90();
        temp_v1 = -1;
        if (0 < (int)puVar5) {
          do {
            temp_v3 = temp_v2 + temp_v4 * 0x68;
            temp_v7 = *(unsigned short *)(temp_v3 + 0x24) == (unsigned short)temp_v0;
            if (temp_v7) {
              temp_v3 = *(int *)(temp_v3 + 0x20);
            }
            temp_v1 = temp_v4;
            if (temp_v7 && temp_v3 == temp_v6) break;
            temp_v4 = temp_v4 + 1;
            puVar5 = temp_v8;
            FUN_00230a90();
            temp_v1 = -1;
          } while (temp_v4 < (int)puVar5);
        }
        FUN_00230aa8(temp_v9,temp_v1);
        FUN_00263978();
        temp_v5 = 0x3b7;
        do {
          temp_v1 = FUN_0028ec74(temp_v5);
          if (temp_v1 != 0) goto LAB_003a1144;
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 0x47f);
        temp_v5 = 0x47f;
        while (temp_v1 = FUN_0028ec74(temp_v5), temp_v1 == 0) {
          temp_v5 = temp_v5 + 1;
          if (temp_v5 >= 0x79f) {
            param_1->field_0x4 = 3;
            param_1->field_0x8 = 0;
            return;
          }
        }
LAB_003a1144:
        param_1->field_0x8 = 0;
        param_1->field_0x4 = 1;
        FUN_003a442c(param_1);
        FUN_002b8b78(0x75);
        FUN_0029f10c(0,0x323232ff);
      }
    }
  }
  return;
}
