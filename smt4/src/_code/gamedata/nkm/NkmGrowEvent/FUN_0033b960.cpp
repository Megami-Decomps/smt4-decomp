/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033b960` (_code @ 0x33b960, 0x1ec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002954bc(...);
int unitRecalculateEffectiveStats(...);
int dataTable06Sub1GetRecord(...);
int FUN_002b7bca(...);
int devilGetRecord(...);
int asdMemFree(...);
int asdMemoryAlloc(...);

typedef struct fn_0033b960_arg0 fn_0033b960_arg0;
struct fn_0033b960_arg0 {
    unsigned char pad_0x0[0x34];
    undefined4 field_0x34; /* +0x34 */
    undefined4 field_0x38; /* +0x38 */
    undefined4 field_0x3c; /* +0x3c */
    undefined4 field_0x40; /* +0x40 */
    unsigned char pad_0x44[0x2];
    ushort field_0x46; /* +0x46 */
};

/* stack frame of param_1: 10 slot(s), 24 byte(s) */
typedef struct {
    unsigned short sp22; /* 0x22: local_22 */
    unsigned short sp24; /* 0x24: local_24 */
    unsigned short sp26; /* 0x26: local_26 */
    unsigned short sp28; /* 0x28: local_28 */
    unsigned short sp2A; /* 0x2a: local_2a */
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned short sp2E; /* 0x2e: local_2e */
    unsigned short sp30; /* 0x30: local_30 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern unsigned char LAB_0032b33c; /* 0x32b33c */

/* Supplied declaration required: FUN_002954bc. */
/* Supplied declaration required: unitRecalculateEffectiveStats. */
/* Supplied declaration required: dataTable06Sub1GetRecord. */
/* Supplied declaration required: FUN_002b7bca. */
/* Supplied declaration required: devilGetRecord. */
extern int randNextInRange(unsigned int);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdMemoryAlloc. */


unsigned short FUN_0033b960(fn_0033b960_arg0 *param_1)

{
/* irregular: 1 goto(s); 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned short temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned short temp_v8;
  unsigned short temp_v9;
  unsigned short temp_v10;
  unsigned short temp_v11;
  unsigned short temp_v12;
  unsigned short temp_v13;
  unsigned short temp_v14;
  unsigned short temp_v15;
  
  temp_v0 = 0x100;
  asdMemoryAlloc(0x100,0x100,0,0x3ea,1);
  temp_v1 = (unsigned int)param_1->field_0x46;
  temp_v6 = 0;
  devilGetRecord();
  temp_v5 = 0;
  do {
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + temp_v5 * 2 + 0x3c);
    if (temp_v2 != 0) {
      dataTable06Sub1GetRecord();
      if (temp_v6 < (*(unsigned char *)(temp_v2 + 3) & 0x1f)) {
        temp_v6 = *(unsigned char *)(temp_v2 + 3) & 0x1f;
      }
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 8);
  temp_v5 = randNextInRange(99);
  temp_v7 = param_1->field_0x34;
  uStack_3c = param_1->field_0x38;
  uStack_38 = param_1->field_0x3c;
  uStack_34 = param_1->field_0x40;
  if (temp_v5 < 3) {
    temp_v6 = temp_v6 + 1;
  }
  temp_v8 = *(unsigned short *)(temp_v1 + 0x4e);
  temp_v9 = *(unsigned short *)(temp_v1 + 0x52);
  temp_v10 = *(unsigned short *)(temp_v1 + 0x56);
  temp_v11 = *(unsigned short *)(temp_v1 + 0x5a);
  temp_v12 = *(unsigned short *)(temp_v1 + 0x5e);
  temp_v13 = *(unsigned short *)(temp_v1 + 0x62);
  temp_v14 = *(unsigned short *)(temp_v1 + 0x66);
  temp_v15 = *(unsigned short *)(temp_v1 + 0x6a);
  FUN_002b7bca(&temp_v7,0x10,2,&LAB_0032b33c);
  temp_v5 = 0;
  do {
    temp_v1 = 1;
    do {
      temp_v2 = temp_v1;
      dataTable06Sub1GetRecord();
      if (((*(unsigned char *)(temp_v2 + 3) & 0x80) != 0) && ((*(unsigned char *)(temp_v2 + 3) & 0x1f) == temp_v6)) {
        temp_v3 = 0;
        do {
          temp_v2 = (unsigned int)*(unsigned short *)((int)&temp_v7 + temp_v3 * 2);
          if (temp_v2 == temp_v1) goto LAB_0033bab0;
        } while ((temp_v2 != 0) && (temp_v3 = temp_v3 + 1, temp_v3 < 0x10));
        temp_v3 = temp_v5 * 2;
        temp_v5 = temp_v5 + 1;
        *(short *)(temp_v0 + temp_v3) = (short)temp_v1;
      }
LAB_0033bab0:
      temp_v1 = (temp_v1 + 1) & 0xffff;
    } while (temp_v1 < 0x1f5);
  } while ((temp_v5 < 1) && (temp_v6 = temp_v6 - 1, -1 < (int)temp_v6));
  temp_v4 = 0;
  if (0 < temp_v5) {
    temp_v5 = randNextInRange((temp_v5 - 1U) & 0xffff);
    temp_v3 = 0;
    do {
      if (*(short *)((int)&param_1->field_0x34 + temp_v3 * 2) == 0) {
        temp_v4 = *(unsigned short *)(temp_v0 + temp_v5 * 2);
        *(unsigned short *)((int)&param_1->field_0x34 + temp_v3 * 2) = temp_v4;
        break;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 8);
  }
  unitRecalculateEffectiveStats(param_1);
  FUN_002954bc(param_1);
  asdMemFree(temp_v0);
  return temp_v4;
}

} /* extern "C" */
