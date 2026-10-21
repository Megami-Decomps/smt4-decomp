/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ff998` (_code @ 0x3ff998, 0x708 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003ff22c(unsigned int *, int, int, int);
int FUN_003ff524(...);

typedef struct fn_003ff998_arg1 fn_003ff998_arg1;
struct fn_003ff998_arg1 {
    unsigned char pad_0x0[0x20];
    short field_0x20; /* +0x20 */
    unsigned char pad_0x22[0x1];
    byte field_0x23; /* +0x23 */
    unsigned char pad_0x24[0xb];
    byte field_0x2f; /* +0x2f */
    unsigned char pad_0x30[0x2];
    char field_0x32; /* +0x32 */
    char field_0x33; /* +0x33 */
    char field_0x34; /* +0x34 */
    char field_0x35; /* +0x35 */
    unsigned char pad_0x36[0x2];
    byte field_0x38; /* +0x38 */
    byte field_0x39; /* +0x39 */
    ushort field_0x3a; /* +0x3a */
    uint field_0x3c; /* +0x3c */
    unsigned char pad_0x40[0x1];
    char field_0x41; /* +0x41 */
    unsigned char pad_0x42[0x3];
    byte field_0x45; /* +0x45 */
    unsigned char pad_0x46[0x11];
    byte field_0x57; /* +0x57 */
    unsigned char pad_0x58[0x8];
    char field_0x60; /* +0x60 */
    unsigned char pad_0x61[0x25];
    ushort field_0x86; /* +0x86 */
};

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned int g_btlScriptUnit; /* 0x57113c */
extern unsigned int DAT_00573c98; /* 0x573c98 */
extern unsigned int DAT_00573c9c; /* 0x573c9c */
extern unsigned int DAT_00573ca0; /* 0x573ca0 */
extern unsigned int DAT_00573ca4; /* 0x573ca4 */
extern unsigned int DAT_00573cb0; /* 0x573cb0 */
extern unsigned int DAT_00573cb4; /* 0x573cb4 */

extern int btlGetMainState(void);
extern int FUN_0017760c(unsigned int);
/* Supplied declaration required: FUN_003ff22c. */
/* Supplied declaration required: FUN_003ff524. */
extern int btlCanSelectReservePartyMember(unsigned int *);
extern int FUN_003ff888(void);
extern int btlFindEntryValue(int, unsigned int);
extern int FUN_004c6b8c(int, int);
extern int halfTable152TopIs2(unsigned int *, unsigned int);
extern int btlUnitGet(unsigned int);


/* WARNING: Removing unreachable block (ram,0x003ffdc8) */
/* WARNING: Removing unreachable block (ram,0x003ffdd8) */
/* WARNING: Removing unreachable block (ram,0x003ffb0c) */
/* WARNING: Removing unreachable block (ram,0x003ffb18) */
/* WARNING: Removing unreachable block (ram,0x00400008) */
/* WARNING: Removing unreachable block (ram,0x0040002c) */
/* WARNING: Removing unreachable block (ram,0x00400050) */
/* WARNING: Removing unreachable block (ram,0x00400070) */

unsigned int FUN_003ff998(unsigned int *param_1,fn_003ff998_arg1 *param_2)

{
/* irregular: 1 goto(s); 10 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  short temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned char temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  
  temp_v9 = 0;
  temp_v0 = param_2->field_0x33;
  temp_v1 = param_2->field_0x38;
  temp_v3 = param_2->field_0x3c;
  temp_v6 = (unsigned int)((param_2->field_0x3a & 0xfff) != 0);
  temp_v7 = 0;
  if ((temp_v3 & 0x7f) != 0) {
    temp_v6 = temp_v6 | 4;
  }
  temp_v10 = temp_v0 != '\0';
  if (!temp_v10) {
    temp_v0 = param_2->field_0x32;
  }
  if (!(temp_v10 || temp_v0 != '\0')) {
    temp_v0 = param_2->field_0x34;
    temp_v10 = temp_v0 == '\0';
    if (temp_v10) {
      temp_v0 = param_2->field_0x35;
    }
    if ((!temp_v10 || temp_v0 != '\0') || (temp_v1 & 1) != 0) {
      temp_v6 = temp_v6 | 0x100;
    }
  }
  else {
    temp_v6 = temp_v6 | 0x100;
  }
  if ((temp_v1 & 2) != 0) {
    temp_v6 = temp_v6 | 0x200;
  }
  if ((temp_v3 & 0x100000) != 0) {
    temp_v6 = temp_v6 | 0x400;
  }
  if ((temp_v3 & 0x200000) != 0) {
    temp_v6 = temp_v6 | 0x800;
  }
  if ((temp_v1 & 8) != 0) {
    temp_v6 = temp_v6 | 0x1000;
  }
  if ((temp_v1 & 0x10) != 0) {
    temp_v6 = temp_v6 | 0x2000;
  }
  if ((temp_v3 & 0x400000) != 0) {
    temp_v6 = temp_v6 | 0x4000;
  }
  if ((temp_v3 & 0x800000) != 0) {
    temp_v6 = temp_v6 | 0x8000;
  }
  if ((temp_v3 & 0x1000000) != 0) {
    temp_v6 = temp_v6 | 0x10000;
  }
  if ((temp_v3 & 0x80) != 0) {
    temp_v6 = temp_v6 | 0x20000;
  }
  if ((temp_v3 & 0x100) != 0) {
    temp_v6 = temp_v6 | 0x40000;
  }
  if ((temp_v3 & 0x2000000) != 0) {
    temp_v6 = temp_v6 | 0x80000;
  }
  if (param_2->field_0x57 != 0) {
    temp_v6 = temp_v6 | 0x200000;
  }
  if ((param_2->field_0x3a & 0x1000) != 0) {
    temp_v6 = temp_v6 | 0x800000;
  }
  if ((temp_v1 & 4) != 0) {
    temp_v6 = temp_v6 | 0x2000000;
  }
  else if (param_2->field_0x23 == 7 || param_2->field_0x23 == 9) {
    temp_v6 = temp_v6 | 0x1000000;
  }
  if (param_2->field_0x2f == 4) {
    temp_v6 = temp_v6 | 0x4000000;
  }
  if ('\0' < param_2->field_0x60) {
    temp_v6 = temp_v6 | 0x8000000;
  }
  if ((param_2->field_0x39 & 0x40) != 0) {
    temp_v6 = temp_v6 | 0x10000000;
  }
  if (param_2->field_0x41 - 1 >= 0x15) {
    temp_v6 = temp_v6 | 0x20000000;
  }
  if (param_2->field_0x45 != 0) {
    temp_v6 = temp_v6 | 0x40000000;
  }
  if (((temp_v6 & 1) != 0) &&
     (((temp_v6 & 0x1000000) != 0 || (((param_1[0x9d] & 2) == 0 && (param_1[0x96] != param_1[0x97]))))
     )) {
    temp_v7 = 1;
  }
  temp_v8 = temp_v7;
  if ((temp_v6 & 4) != 0) {
    if ((temp_v6 & 0x1000000) == 0) {
      temp_v12 = temp_v3 & 0x7f;
      temp_v2 = param_2->field_0x20;
      if (param_2->field_0x86 == 6) {
        temp_v4 = btlUnitGet(g_btlScriptUnit);
        temp_v5 = 0;
        if (temp_v4 != 0) {
          temp_v5 = *(int *)(temp_v4 + 0x20);
        }
        if ((temp_v4 == 0 || temp_v5 == 0) ||
           (((*(unsigned short *)(temp_v5 + 0x274) & 0x10) != 0 &&
            ((temp_v2 == 0 || (temp_v5 = FUN_004c6b8c(temp_v5,(int)temp_v2), temp_v5 == 0))))))
        goto LAB_003ffb9c;
      }
      else {
LAB_003ffb9c:
        temp_v11 = temp_v11 & 0xffff0000;
        FUN_003ff524(&temp_v11,temp_v12);
        if (((unsigned short)temp_v11 & (unsigned short)param_1[0x9d]) != 0) {
          temp_v8 = temp_v7 | 4;
        }
      }
      if ((temp_v8 & 4) != 0) {
        if ((temp_v6 & 1) != 0) {
          temp_v8 = temp_v8 | 1;
        }
      }
      else if ((temp_v8 & 1) != 0) {
        temp_v11 = temp_v11 & 0xffff0000;
        FUN_003ff524(&temp_v11,param_2->field_0x3c & 0x7f);
        temp_v7 = temp_v8;
        if ((((temp_v11 & 2) != 0) ||
            (temp_v7 = temp_v8 | 4, temp_v3 = temp_v8 & 1, temp_v8 = temp_v7, temp_v3 != 0)) &&
           (temp_v8 = temp_v7, (param_2->field_0x3c & 0x7f) == 0x1b)) {
          temp_v8 = temp_v7 | 4;
        }
      }
    }
    else {
      temp_v8 = temp_v7 | 4;
    }
  }
  if (((temp_v6 & 0x200) != 0) && (temp_v5 = btlFindEntryValue((int)(short)param_1[2],0xd), temp_v5 < 1)) {
    temp_v8 = temp_v8 | 0x200;
  }
  if (((temp_v6 & 0x400) != 0) && (temp_v5 = btlFindEntryValue((int)(short)param_1[2],0x14), temp_v5 < 1)) {
    temp_v8 = temp_v8 | 0x400;
  }
  if (((temp_v6 & 0x800) != 0) && (temp_v5 = btlFindEntryValue((int)(short)param_1[2],0x15), temp_v5 < 1)) {
    temp_v8 = temp_v8 | 0x800;
  }
  if (((temp_v6 & 0x1000) != 0) && (temp_v5 = btlFindEntryValue((int)(short)param_1[2],0x14), 0 < temp_v5)) {
    temp_v8 = temp_v8 | 0x1000;
  }
  if (((temp_v6 & 0x2000) != 0) && (temp_v5 = btlFindEntryValue((int)(short)param_1[2],0x15), 0 < temp_v5)) {
    temp_v8 = temp_v8 | 0x2000;
  }
  if (((temp_v6 & 0x4000) != 0) && (temp_v5 = btlFindEntryValue((int)(short)param_1[2],0x16), temp_v5 < 1)) {
    temp_v8 = temp_v8 | 0x4000;
  }
  if (((temp_v6 & 0x8000) != 0) && (temp_v5 = btlFindEntryValue((int)(short)param_1[2],0xe), temp_v5 < 1)) {
    temp_v8 = temp_v8 | 0x8000;
  }
  if (((temp_v6 & 0x10000) != 0) && (temp_v5 = btlFindEntryValue((int)(short)param_1[2],0xf), temp_v5 < 1)) {
    temp_v8 = temp_v8 | 0x10000;
  }
  if (((temp_v6 & 0x20000) != 0) && (temp_v5 = btlFindEntryValue((int)(short)param_1[2],0x10), temp_v5 < 1)) {
    temp_v8 = temp_v8 | 0x20000;
  }
  if (((temp_v6 & 0x40000) != 0) && (temp_v5 = btlFindEntryValue((int)(short)param_1[2],0x11), temp_v5 < 1)) {
    temp_v8 = temp_v8 | 0x40000;
  }
  if (((temp_v6 & 0x80000) != 0) && (temp_v5 = btlFindEntryValue((int)(short)param_1[2],0x13), temp_v5 < 1)) {
    temp_v8 = temp_v8 | 0x80000;
  }
  if ((temp_v6 & 0x200000) != 0) {
    if (!((DAT_00573c98 & *param_1) == 0 && (DAT_00573c9c & param_1[1]) == 0)) {
      if ((int)*(short *)(param_1[0xfe] + 0x1c) >= (int)param_1[0x97]) {
        temp_v8 = temp_v8 | 0x200000;
      }
    }
    else if ((!((param_1[1] & DAT_00573ca4) != 0 || (DAT_00573ca0 & *param_1) != 0)) ||
            (temp_v5 = FUN_0017760c(param_1[0xff]), temp_v5 >= (int)param_1[0x97])) {
      temp_v8 = temp_v8 | 0x200000;
    }
  }
  if (((temp_v6 & 0x800000) != 0) &&
     ((temp_v5 = btlGetMainState(),
      (*(unsigned int *)(temp_v5 + 0x45a4) & DAT_00573cb4) != 0 ||
      (DAT_00573cb0 & *(unsigned int *)(temp_v5 + 0x45a0)) != 0 || ((*(unsigned int *)(temp_v5 + 0x10c) & 0x40000) == 0)
      ))) {
    temp_v8 = temp_v8 | 0x800000;
  }
  if (((temp_v6 & 0x1000000) != 0) && (temp_v5 = btlCanSelectReservePartyMember(param_1), temp_v5 != 0)) {
    temp_v8 = temp_v8 | 0x1000000;
  }
  if (((temp_v6 & 0x2000000) != 0) && (temp_v5 = FUN_003ff888(), temp_v5 != 0)) {
    temp_v8 = temp_v8 | 0x2000000;
  }
  if (((temp_v6 & 0x4000000) != 0) && ((short)param_1[0x9d] == 0 || (short)param_1[0x9d] == 4)) {
    temp_v8 = temp_v8 | 0x4000000;
  }
  if ((temp_v6 & 0x8000000) != 0) {
    temp_v5 = btlGetMainState();
    temp_v2 = *(short *)(temp_v5 + 0x4c70);
    if (*(short *)(temp_v5 + 0x4c70) < *(short *)(temp_v5 + 0x4c72)) {
      temp_v2 = *(short *)(temp_v5 + 0x4c72);
    }
    if (temp_v2 < 8) {
      temp_v8 = temp_v8 | 0x8000000;
    }
  }
  if (((temp_v6 & 0x10000000) != 0 && param_1 != (unsigned int *)0x0) && ((param_1[0x9d] & 0x10) != 0)) {
    temp_v8 = temp_v8 | 0x10000000;
  }
  if ((((temp_v6 & 0x20000000) != 0) &&
      (temp_v5 = btlFindEntryValue((int)*(short *)((int)param_1 + 0x6e),0x17), temp_v5 < 1)) &&
     ((((temp_v5 = halfTable152TopIs2(param_1 + 0x59,0), temp_v5 != 0 ||
        ((((temp_v5 = halfTable152TopIs2(param_1 + 0x59,1), temp_v5 != 0 ||
           (temp_v5 = halfTable152TopIs2(param_1 + 0x59,2), temp_v5 != 0)) ||
          (temp_v5 = halfTable152TopIs2(param_1 + 0x59,3), temp_v5 != 0)) ||
         ((temp_v5 = halfTable152TopIs2(param_1 + 0x59,4), temp_v5 != 0 ||
          (temp_v5 = halfTable152TopIs2(param_1 + 0x59,5), temp_v5 != 0)))))) ||
       (temp_v5 = halfTable152TopIs2(param_1 + 0x59,6), temp_v5 != 0)) ||
      (temp_v5 = halfTable152TopIs2(param_1 + 0x59,7), temp_v5 != 0)))) {
    temp_v8 = temp_v8 | 0x20000000;
  }
  if ((temp_v6 & 0x40000000) != 0) {
    temp_v11 = temp_v11 & 0xffff0000;
    FUN_003ff524(&temp_v11,param_2->field_0x45);
    if (((unsigned short)temp_v11 & (unsigned short)param_1[0x9d]) != 0) {
      temp_v8 = temp_v8 | 0x40000000;
    }
  }
  temp_v7 = temp_v8;
  if ((temp_v6 & 0x100) != 0) {
    temp_v11 = (unsigned int)param_2->field_0x35;
    temp_v12 = param_2->field_0x38 & 1;
    FUN_003ff22c(param_1,(int)param_2->field_0x33,(int)param_2->field_0x32,(int)param_2->field_0x34)
    ;
    if (param_1 == (unsigned int *)0x0) {
      temp_v8 = temp_v8 | 0x100;
    }
    temp_v7 = temp_v8;
    if (((temp_v8 & 0x100) == 0) ||
       (((temp_v6 & ~temp_v8 & 1) != 0 && (temp_v7 = temp_v8 | 1, (temp_v8 & 0x100) == 0)))) {
      temp_v3 = temp_v6 & temp_v7;
      temp_v10 = (temp_v3 & 1) == 0;
      if (temp_v10) {
        temp_v3 = (unsigned int)param_2->field_0x2f;
      }
      if (!temp_v10 || temp_v3 != 0) {
        temp_v7 = temp_v7 | 0x100;
      }
    }
  }
  if (temp_v6 != temp_v7) {
    temp_v9 = 3;
  }
  return temp_v9;
}

} /* extern "C" */
