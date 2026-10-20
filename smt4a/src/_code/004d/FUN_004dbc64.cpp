/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004dbc64` (_code @ 0x4dbc64, 0x184 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int FUN_002e6354(char [38], int);

typedef struct fn_004dbc64_arg0 fn_004dbc64_arg0;
struct fn_004dbc64_arg0 {
    unsigned char pad_0x0[0x148];
    char field_0x148; /* +0x148 */
    unsigned char pad_0x149[0x1];
    ushort field_0x14a; /* +0x14a */
    byte field_0x14c; /* +0x14c */
    unsigned char pad_0x14d[0x1];
    ushort field_0x14e; /* +0x14e */
    unsigned char pad_0x150[0x2a];
    byte field_0x17a; /* +0x17a */
};

/* stack frame of param_2: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp3A; /* 0x3a: local_3a */
} param_2_stack;

/* Supplied declaration required: FUN_00184310. */
extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern int FUN_00192748(unsigned int);
extern unsigned char *FUN_00192798(void);
extern int FUN_002a46f8(void);
extern int FUN_002a4b28(unsigned int);
/* Supplied declaration required: FUN_002e6354. */


int FUN_004dbc64(fn_004dbc64_arg0 *param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  char temp_v1;
  fn_004dbc64_arg0 *pfVar3;
  unsigned int temp_v2;
  unsigned char *pbVar5;
  int temp_v3;
  unsigned short temp_v4;
  unsigned char *pbVar8;
  unsigned char *pbVar9;
  unsigned int temp_v5;
  int temp_v6;
  char acStack_60 [38];
  unsigned char temp_v7;
  
  temp_v1 = param_1->field_0x148;
  temp_v6 = 0;
  pfVar3 = param_1;
  if (temp_v1 == '\0') {
    pfVar3 = (fn_004dbc64_arg0 *)(unsigned int)param_1->field_0x14c;
  }
  if (!(temp_v1 == '\0' && pfVar3 == (fn_004dbc64_arg0 *)0x0)) {
    FUN_002e6354(acStack_60,0x44);
    if (temp_v1 == '\0') {
      temp_v5 = (unsigned int)param_1->field_0x14e;
    }
    else {
      temp_v5 = (unsigned int)param_1->field_0x14a;
      FUN_00184310();
      temp_v5 = (unsigned int)*(unsigned char *)(temp_v5 + 2);
    }
    temp_v2 = FUN_00187180(5,1);
    pbVar5 = (unsigned char *)FUN_00192798();
    temp_v3 = FUN_00192748(temp_v2);
    if (temp_v3 != 0) {
      pbVar8 = pbVar5 + 2;
      pbVar9 = pbVar5 + 1;
      do {
        if (*pbVar8 == temp_v5) {
          acStack_60[*pbVar5] = '\x01';
          acStack_60[*pbVar9] = '\x01';
        }
        temp_v3 = temp_v3 - 1;
        pbVar8 = pbVar8 + 4;
        pbVar5 = pbVar5 + 4;
        pbVar9 = pbVar9 + 4;
      } while (temp_v3 != 0);
    }
    if (param_1->field_0x17a != 0) {
      temp_v7 = 1;
      acStack_60[temp_v5] = '\x01';
    }
    temp_v3 = FUN_002a46f8();
    temp_v5 = (unsigned int)*(unsigned short *)(temp_v3 + 8);
    temp_v3 = FUN_002a46f8();
    temp_v0 = *(unsigned short *)(temp_v3 + 10);
    if (temp_v5 <= temp_v0) {
      do {
        temp_v3 = FUN_002a4b28(temp_v5 & 0xffff);
        if (temp_v3 != 0) {
          temp_v4 = temp_v5;
          FUN_00184310();
          if (acStack_60[*(unsigned char *)(temp_v4 + 2)] != '\0') {
            temp_v3 = temp_v6 * 2;
            temp_v6 = temp_v6 + 1;
            *(short *)(param_2 + temp_v3) = (short)temp_v5;
          }
        }
        temp_v5 = temp_v5 + 1;
      } while ((int)temp_v5 <= (int)(unsigned int)temp_v0);
    }
  }
  else {
    temp_v3 = FUN_002a46f8();
    temp_v5 = (unsigned int)*(unsigned short *)(temp_v3 + 8);
    temp_v3 = FUN_002a46f8();
    temp_v0 = *(unsigned short *)(temp_v3 + 10);
    if (temp_v5 <= temp_v0) {
      do {
        temp_v3 = FUN_002a4b28(temp_v5 & 0xffff);
        if (temp_v3 != 0) {
          temp_v3 = temp_v6 * 2;
          temp_v6 = temp_v6 + 1;
          *(short *)(param_2 + temp_v3) = (short)temp_v5;
        }
        temp_v5 = temp_v5 + 1;
      } while ((int)temp_v5 <= (int)(unsigned int)temp_v0);
    }
  }
  return temp_v6;
}

} /* extern "C" */
