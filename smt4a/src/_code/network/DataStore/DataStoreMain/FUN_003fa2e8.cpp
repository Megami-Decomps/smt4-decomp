/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fa2e8` (_code @ 0x3fa2e8, 0x284 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemoryAllocTracked(...);
int asdMemFree(void);
int asdOperatorDelete(void);
int asdOperatorDeleteArray(unsigned char *);
int FUN_00413af4(unsigned char **, int, unsigned int);
int FUN_00414a24(void);
int rt_memcpy_w(int, int, int);

typedef struct fn_003fa2e8_arg0 fn_003fa2e8_arg0;
struct fn_003fa2e8_arg0 {
    unsigned char pad_0x0[0xc];
    byte field_0xc; /* +0xc */
    unsigned char pad_0xd[0x7];
    undefined1 field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x2f];
    int field_0x44; /* +0x44 */
    int field_0x48; /* +0x48 */
    undefined4 field_0x4c; /* +0x4c */
    int field_0x50; /* +0x50 */
};

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int randRange(unsigned int);
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdOperatorDelete. */
/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: FUN_00413af4. */
extern int FUN_00413e28(void);
/* Supplied declaration required: FUN_00414a24. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_003fa2e8(fn_003fa2e8_arg0 *param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned char *puVar8;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  unsigned char *temp_v9;
  unsigned char *temp_v10;
  
  if (param_1->field_0xc == 0) {
    if (param_1->field_0x44 == 0) {
      return;
    }
    temp_v0 = FUN_00413e28();
    param_1->field_0x4c = temp_v0;
    if (0 < temp_v0) {
      temp_v0 = 0x100;
      temp_v9 = (unsigned char *)0x1;
      asdMemoryAllocTracked(0x100,0x100,0,1000);
      param_1->field_0x48 = temp_v0;
      temp_v1 = 0x100;
      temp_v9 = (unsigned char *)0x1;
      asdMemoryAllocTracked(0x100,0x100,0,100);
      temp_v0 = 10;
      if ((int)param_1->field_0x4c < 10) {
        temp_v0 = param_1->field_0x4c;
      }
      param_1->field_0x50 = 0;
      temp_v9 = (unsigned char *)0x1;
      puVar3 = (unsigned int *)0x100;
      asdMemoryAllocTracked(0x100,0x100,0,param_1->field_0x4c << 2);
      if (0 < (int)param_1->field_0x4c) {
        temp_v8 = (param_1->field_0x4c & 1) != 0;
        puVar7 = puVar3 + -1;
        if (temp_v8) {
          *puVar3 = 0;
          puVar7 = puVar3;
        }
        temp_v2 = (unsigned int)temp_v8;
        for (temp_v5 = (int)param_1->field_0x4c >> 1; temp_v5 != 0; temp_v5 = temp_v5 - 1) {
          puVar7[1] = temp_v2;
          puVar7[2] = temp_v2 + 1;
          puVar7 = puVar7 + 2;
          temp_v2 = temp_v2 + 2;
        }
      }
      temp_v5 = 0x100;
      temp_v9 = (unsigned char *)0x1;
      asdMemoryAllocTracked(0x100,0x100,0,temp_v0 << 2);
      temp_v6 = param_1->field_0x4c;
      temp_v7 = 0;
      if (temp_v7 < temp_v0) {
        do {
          temp_v3 = randRange((temp_v6 - 1U) & 0xffff);
          *(unsigned int *)(temp_v5 + temp_v7 * 4) = puVar3[temp_v3];
          temp_v4 = (temp_v6 - temp_v3) - 1;
          if (0 < temp_v4) {
            puVar6 = puVar3 + temp_v3;
            puVar7 = puVar6;
            if (((temp_v6 - temp_v3) & 1U) == 0) {
              puVar7 = puVar6 + 1;
              *puVar6 = puVar6[1];
            }
            for (temp_v4 = temp_v4 >> 1; temp_v4 != 0; temp_v4 = temp_v4 - 1) {
              *puVar7 = puVar7[1];
              puVar7[1] = puVar7[2];
              puVar7 = puVar7 + 2;
            }
          }
          temp_v7 = temp_v7 + 1;
          temp_v6 = temp_v6 - 1;
        } while (temp_v7 < temp_v0);
      }
      temp_v6 = 0;
      if (temp_v6 < temp_v0) {
        do {
          FUN_00413af4(&temp_v9,param_1->field_0x44,*(unsigned int *)(temp_v5 + temp_v6 * 4));
          temp_v7 = 0;
          for (puVar8 = temp_v9; temp_v10 != puVar8; puVar8 = puVar8 + 1) {
            *(unsigned char *)(temp_v1 + temp_v7) = *puVar8;
            temp_v7 = temp_v7 + 1;
          }
          rt_memcpy_w(param_1->field_0x48 + temp_v6 * 100,temp_v1,100);
          asdOperatorDeleteArray(temp_v9);
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < temp_v0);
      }
      if (puVar3 != (unsigned int *)0x0) {
        asdMemFree();
      }
      if (temp_v5 != 0) {
        asdMemFree();
      }
      if (temp_v1 != 0) {
        asdMemFree();
      }
      param_1->field_0x50 = temp_v0;
    }
    param_1->field_0x14 = 1;
  }
  if (param_1->field_0x44 != 0) {
    FUN_00414a24();
    asdOperatorDelete();
    param_1->field_0x44 = 0;
  }
  return;
}

} /* extern "C" */
