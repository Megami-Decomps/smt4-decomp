/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e3a20` (_code @ 0x3e3a20, 0x1ac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a7324(int);
int FUN_002f01e0(int *, int);
int unitRecordBuild(int, unsigned char [4]);
int FUN_00334214(unsigned char [4], int, int);
int objBInitBlock19D0(unsigned char [300], int, int);
int FUN_0033449c(int);
int FUN_0035da74(short [10], int);
int FUN_004bcd90(unsigned char [4]);
int FUN_004bd6b0(unsigned char [300], int, int);
int FUN_004cd4b8(unsigned char [4], int);
int rt_memcpy_w(unsigned char [300], unsigned char [4], int);

typedef struct fn_003e3a20_arg1 fn_003e3a20_arg1;
struct fn_003e3a20_arg1 {
    unsigned char pad_0x0[0x2];
    ushort field_0x2; /* +0x2 */
    unsigned char pad_0x4[0x14];
    ushort field_0x18; /* +0x18 */
    ushort field_0x1a; /* +0x1a */
    ushort field_0x1c; /* +0x1c */
    ushort field_0x1e; /* +0x1e */
    ushort field_0x20; /* +0x20 */
    ushort field_0x22; /* +0x22 */
};

/* stack frame of param_2: 16 slot(s), 50 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned short sp25C; /* 0x25c: local_25c */
    unsigned short sp25E; /* 0x25e: local_25e */
    unsigned int sp28C; /* 0x28c: local_28c */
    unsigned int sp290; /* 0x290: local_290 */
    unsigned short sp2B4; /* 0x2b4: local_2b4 */
    unsigned short sp2B6; /* 0x2b6: local_2b6 */
    unsigned short sp2B8; /* 0x2b8: local_2b8 */
    unsigned short sp2BA; /* 0x2ba: local_2ba */
    unsigned short sp2BC; /* 0x2bc: local_2bc */
} param_2_stack;

/* Supplied declaration required: FUN_002a7324. */
/* Supplied declaration required: FUN_002f01e0. */
/* Supplied declaration required: unitRecordBuild. */
/* Supplied declaration required: FUN_00334214. */
/* Supplied declaration required: objBInitBlock19D0. */
/* Supplied declaration required: FUN_0033449c. */
/* Supplied declaration required: FUN_0035da74. */
/* Supplied declaration required: FUN_004bcd90. */
extern int getUnlockedSlotCount(unsigned int);
/* Supplied declaration required: FUN_004bd6b0. */
extern int FUN_004cc8d8(unsigned short, short);
/* Supplied declaration required: FUN_004cd4b8. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_003e3a20(int param_1,fn_003e3a20_arg1 *param_2)

{
/* irregular: 11 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [4];
  unsigned short temp_v5;
  unsigned short temp_v6;
  unsigned short temp_v7;
  unsigned short temp_v8;
  unsigned short temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  unsigned int uStack_288;
  unsigned int uStack_284;
  unsigned int uStack_280;
  unsigned short temp_v12;
  short temp_v13;
  unsigned char temp_v14 [300];
  int temp_v15;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int temp_v16;
  unsigned int uStack_54;
  int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int temp_v17;
  short temp_v18 [10];
  
  unitRecordBuild(param_2->field_0x2,temp_v4);
  temp_v15 = temp_v11;
  uStack_64 = uStack_288;
  uStack_60 = uStack_284;
  uStack_5c = uStack_280;
  FUN_004cd4b8(temp_v4,(int)(short)(param_2->field_0x18 - temp_v13));
  temp_v5 = param_2->field_0x1a;
  temp_v6 = param_2->field_0x1c;
  temp_v7 = param_2->field_0x1e;
  temp_v8 = param_2->field_0x20;
  temp_v9 = param_2->field_0x22;
  FUN_004bcd90(temp_v4);
  temp_v10 = FUN_004cc8d8(temp_v12,temp_v13);
  temp_v10 = temp_v10 - 1;
  rt_memcpy_w(temp_v14,temp_v4,300);
  temp_v18[0] = 0;
  temp_v18[1] = 0;
  temp_v18[2] = 0;
  temp_v18[3] = 0;
  temp_v18[4] = 0;
  temp_v18[5] = 0;
  temp_v18[6] = 0;
  temp_v18[7] = 0;
  temp_v1 = param_1 + *(int *)(param_1 + 0xa0) * 0x24;
  temp_v16 = *(unsigned int *)(temp_v1 + 0x20);
  uStack_54 = *(unsigned int *)(temp_v1 + 0x24);
  uStack_50 = *(unsigned int *)(temp_v1 + 0x28);
  uStack_4c = *(unsigned int *)(temp_v1 + 0x2c);
  uStack_48 = *(unsigned int *)(temp_v1 + 0x30);
  uStack_44 = *(unsigned int *)(temp_v1 + 0x34);
  uStack_40 = *(unsigned int *)(temp_v1 + 0x38);
  uStack_3c = *(unsigned int *)(temp_v1 + 0x3c);
  temp_v17 = *(unsigned int *)(temp_v1 + 0x40);
  temp_v1 = getUnlockedSlotCount(0);
  temp_v3 = 0;
  temp_v2 = 0;
  do {
    FUN_004bd6b0(temp_v14,0,temp_v2);
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 8);
  temp_v2 = 0;
  do {
    temp_v0 = *(short *)((int)&uStack_50 + temp_v2 * 2);
    if (temp_v0 != 0) {
      temp_v18[temp_v3] = temp_v0;
      if (temp_v3 < temp_v1) {
        FUN_004bd6b0(temp_v14,temp_v0,temp_v3);
      }
      temp_v3 = temp_v3 + 1;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 8);
  *(int *)(param_1 + 0xa4) = temp_v3;
  *(int *)(param_1 + 0xa8) = temp_v1;
  FUN_0033449c(1);
  FUN_00334214(temp_v4,0,0);
  objBInitBlock19D0(temp_v14,1,0);
  FUN_002a7324(1);
  FUN_002f01e0(&temp_v15,8);
  FUN_0035da74(temp_v18,8);
  return;
}

} /* extern "C" */
