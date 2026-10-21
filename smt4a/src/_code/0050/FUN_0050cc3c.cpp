/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050cc3c` (_code @ 0x50cc3c, 0x354 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e5f10(...);
int rt_memcpy(...);

typedef struct fn_0050cc3c_arg0 fn_0050cc3c_arg0;
struct fn_0050cc3c_arg0 {
    unsigned char pad_0x0[0x8];
    int field_0x8; /* +0x8 */
    uint field_0xc; /* +0xc */
    unsigned char pad_0x10[0x4];
    uint field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x18];
    int field_0x30; /* +0x30 */
    uint field_0x34; /* +0x34 */
    unsigned char pad_0x38[0x4];
    uint field_0x3c; /* +0x3c */
    unsigned char pad_0x40[0x14];
    void *field_0x54; /* +0x54 */
    int field_0x58; /* +0x58 */
    uint field_0x5c; /* +0x5c */
    undefined4 field_0x60; /* +0x60 */
};

typedef int romwright_code(...);
/* stack frame of param_3: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp74; /* 0x74: local_74 */
} param_3_stack;

/* Supplied declaration required: FUN_002e5f10. */
extern unsigned int containerGrowCapacity(unsigned int, unsigned int);
/* Supplied declaration required: rt_memcpy. */


unsigned int FUN_0050cc3c(fn_0050cc3c_arg0 *param_1,int *param_2,unsigned int *param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char *puVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char *puVar8;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  int *piVar16;
  unsigned int temp_v13;
  unsigned char *puVar18;
  unsigned int temp_v14;
  
  temp_v0 = param_1->field_0x3c;
  if (param_1->field_0x34 <= temp_v0) {
    temp_v0 = temp_v0 - param_1->field_0x34;
  }
  temp_v0 = *(unsigned int *)(*(int *)(param_1->field_0x30 + temp_v0 * 0x10 + 4) + 8);
  temp_v1 = param_1->field_0x8;
  temp_v5 = temp_v1;
  if (temp_v0 != 0) {
    temp_v4 = param_1->field_0x14;
    temp_v10 = param_1->field_0xc;
    temp_v8 = temp_v4 + temp_v0;
    if (temp_v10 <= temp_v4) {
      temp_v4 = temp_v4 - temp_v10;
    }
    if (temp_v10 < temp_v8) {
      temp_v8 = temp_v8 - temp_v10;
    }
    temp_v5 = temp_v4 + temp_v1;
    if (temp_v8 <= temp_v4) {
      temp_v4 = param_1->field_0x60;
      temp_v12 = 0;
      temp_v2 = param_1->field_0x58;
      if (temp_v4 < temp_v0) {
        temp_v11 = temp_v0 - temp_v4;
        puVar8 = (unsigned char *)(temp_v2 + temp_v4);
        if (temp_v11 != 0) {
          temp_v2 = (int)puVar8 - temp_v2;
          temp_v13 = temp_v4 + temp_v11;
          if (param_1->field_0x5c >= temp_v13) {
            temp_v4 = temp_v4 - temp_v2;
            temp_v3 = temp_v4;
            if (temp_v11 <= temp_v4) {
              temp_v3 = temp_v11;
            }
            temp_v12 = temp_v13 - temp_v3;
            for (puVar4 = puVar8 + -temp_v3; puVar4 != puVar8; puVar4 = puVar4 + 1) {
              puVar18 = (unsigned char *)(param_1->field_0x58 + temp_v12);
              if (puVar18 != (unsigned char *)0x0) {
                *puVar18 = *puVar4;
              }
              temp_v12 = temp_v12 + 1;
            }
            FUN_002e5f10(param_1->field_0x58 + temp_v2 + temp_v11,param_1->field_0x58 + temp_v2,
                         temp_v4 - temp_v3);
          }
          else {
            temp_v3 = containerGrowCapacity(param_1->field_0x5c,temp_v13);
            piVar16 = (int *)param_1->field_0x54;
            temp_v14 = 0;
            temp_v4 = temp_v14;
            if ((temp_v3 != 0) &&
               (temp_v12 = (**(romwright_code **)*piVar16)(piVar16,temp_v3), temp_v4 = temp_v3, temp_v12 == 0)) {
              (**(romwright_code **)(*piVar16 + 8))
                        (piVar16,"MoLive::Allocator: not enough memory to allocate %d bytes !!!\n",
                         temp_v3);
              if (temp_v13 == temp_v3) {
                (**(romwright_code **)(*piVar16 + 4))(piVar16,0);
                return 0;
              }
              temp_v4 = temp_v14;
              if ((temp_v13 != 0) &&
                 (temp_v12 = (**(romwright_code **)*piVar16)(piVar16,temp_v13), temp_v4 = temp_v13, temp_v12 == 0)) {
                (**(romwright_code **)(*piVar16 + 8))
                          (piVar16,"MoLive::Allocator: not enough memory to allocate %d bytes !!!\n"
                           ,temp_v13);
                (**(romwright_code **)(*piVar16 + 4))(piVar16,0);
                return 0;
              }
            }
            temp_v14 = temp_v4;
            temp_v6 = param_1->field_0x58;
            if (temp_v6 != temp_v6 + temp_v2) {
              rt_memcpy(temp_v12,temp_v6,(temp_v6 + temp_v2) - temp_v6);
            }
            temp_v7 = param_1->field_0x58;
            temp_v9 = param_1->field_0x60;
            temp_v6 = temp_v2 + temp_v11;
            for (puVar8 = (unsigned char *)(temp_v7 + temp_v2); puVar8 != (unsigned char *)(temp_v9 + temp_v7);
                puVar8 = puVar8 + 1) {
              if ((unsigned char *)(temp_v12 + temp_v6) != (unsigned char *)0x0) {
                *(unsigned char *)(temp_v12 + temp_v6) = *puVar8;
              }
              temp_v6 = temp_v6 + 1;
            }
            temp_v6 = param_1->field_0x58;
            param_1->field_0x58 = temp_v12;
            param_1->field_0x5c = temp_v14;
            (**(romwright_code **)(*piVar16 + 4))(piVar16,temp_v6);
          }
          param_1->field_0x60 = temp_v13;
          do {
            puVar8 = (unsigned char *)(param_1->field_0x58 + temp_v2);
            if (puVar8 != (unsigned char *)0x0) {
              *puVar8 = 0;
            }
            temp_v2 = temp_v2 + 1;
            temp_v11 = temp_v11 - 1;
          } while (temp_v11 != 0);
        }
      }
      else {
        temp_v6 = temp_v2 + temp_v4;
        temp_v12 = temp_v2 + temp_v0;
        if (temp_v12 != temp_v6) {
          FUN_002e5f10(temp_v12,temp_v2 + (temp_v6 - temp_v2),temp_v4 - (temp_v6 - temp_v2));
          param_1->field_0x60 = temp_v4 - (temp_v6 - temp_v12);
        }
      }
      temp_v2 = (temp_v1 + temp_v10) - temp_v5;
      rt_memcpy(param_1->field_0x58,temp_v5,temp_v2);
      rt_memcpy(param_1->field_0x58 + temp_v2,temp_v1,temp_v8);
      *param_2 = param_1->field_0x58;
      *param_3 = temp_v0;
      if (temp_v0 <= *(unsigned int *)(param_1 + 1)) {
        temp_v0 = *(unsigned int *)(param_1 + 1);
      }
      *(unsigned int *)(param_1 + 1) = temp_v0;
      return 1;
    }
  }
  *param_2 = temp_v5;
  *param_3 = temp_v0;
  if (temp_v0 <= *(unsigned int *)(param_1 + 1)) {
    temp_v0 = *(unsigned int *)(param_1 + 1);
  }
  *(unsigned int *)(param_1 + 1) = temp_v0;
  return 1;
}

} /* extern "C" */
