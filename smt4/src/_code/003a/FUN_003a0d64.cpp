/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a0d64` (_code @ 0x3a0d64, 0x214 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable17Sub1GetCount(...);
int dataTable17Sub1GetRecord(...);
int FUN_0026374c(...);
int FUN_00297060(...);
int FUN_0029e620(...);
int FUN_0029e648(...);
int FUN_0029ee6c(...);
int FUN_002a03d8(...);
int FUN_002b8838(...);
int FUN_003a4210(...);

typedef struct fn_003a0d64_arg0 fn_003a0d64_arg0;
struct fn_003a0d64_arg0 {
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

extern int FUN_00221e00(unsigned int);
/* Supplied declaration required: dataTable17Sub1GetCount. */
/* Supplied declaration required: dataTable17Sub1GetRecord. */
/* Supplied declaration required: FUN_0026374c. */
extern int FUN_0028e9d0(unsigned int);
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: FUN_0029e620. */
/* Supplied declaration required: FUN_0029e648. */
/* Supplied declaration required: FUN_0029ee6c. */
/* Supplied declaration required: FUN_002a03d8. */
extern int FUN_002a60b4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002b8838. */
extern int jobIsValid(unsigned int);
/* Supplied declaration required: FUN_003a4210. */


void FUN_003a0d64(fn_003a0d64_arg0 *param_1)

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
  if ((temp_v7 && temp_v1 != 0) && (temp_v1 = FUN_002a60b4(0x2b,0), temp_v1 != 0)) {
    temp_v1 = jobIsValid(param_1->field_0x15d40);
    if ((temp_v1 == 0) || (temp_v1 = FUN_00221e00(param_1->field_0x15d40), temp_v1 != 0)) {
      temp_v1 = jobIsValid(param_1->field_0x15d44);
      if ((temp_v1 == 0) || (temp_v1 = FUN_00221e00(param_1->field_0x15d44), temp_v1 != 0)) {
        pvVar3 = param_1->field_0x160;
        FUN_00297060(pvVar3,param_1->field_0x164);
        param_1->field_0x168 = (int)pvVar3;
        *(unsigned int *)((int)pvVar3 + 0x108) = 2;
        pvVar3 = param_1->field_0x160;
        FUN_00297060(pvVar3,param_1->field_0x164);
        param_1->field_0x16c = (int)pvVar3;
        *(unsigned int *)((int)pvVar3 + 0x108) = 2;
        FUN_002a03d8(0,10);
        FUN_002a03d8(1,10);
        FUN_0029e648(1,0);
        FUN_0029e620(0);
        temp_v0 = param_1->field_0x14;
        temp_v6 = param_1->field_0x18;
        temp_v2 = dataTable17Sub1GetRecord(temp_v8,0);
        temp_v4 = 0;
        dataTable17Sub1GetCount();
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
            dataTable17Sub1GetCount();
            temp_v1 = -1;
          } while (temp_v4 < (int)puVar5);
        }
        dataTable17Sub1GetRecord(temp_v9,temp_v1);
        FUN_0026374c();
        temp_v5 = 0x3b7;
        do {
          temp_v1 = FUN_0028e9d0(temp_v5);
          if (temp_v1 != 0) goto LAB_003a0f28;
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 0x47f);
        temp_v5 = 0x47f;
        while (temp_v1 = FUN_0028e9d0(temp_v5), temp_v1 == 0) {
          temp_v5 = temp_v5 + 1;
          if (temp_v5 >= 0x79f) {
            param_1->field_0x4 = 3;
            param_1->field_0x8 = 0;
            return;
          }
        }
LAB_003a0f28:
        param_1->field_0x8 = 0;
        param_1->field_0x4 = 1;
        FUN_003a4210(param_1);
        FUN_002b8838(0x75);
        FUN_0029ee6c(0,0x323232ff);
      }
    }
  }
  return;
}

} /* extern "C" */
