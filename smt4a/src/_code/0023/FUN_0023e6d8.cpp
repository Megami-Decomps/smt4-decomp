/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023e6d8` (_code @ 0x23e6d8, 0x224 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002efc44(...);
int FUN_0034a290(...);
int playerGetWords(...);
int FUN_004c6c8c(...);
int VectorUnsignedToFloat(...);

typedef struct fn_0023e6d8_arg0 fn_0023e6d8_arg0;
struct fn_0023e6d8_arg0 {
    unsigned char pad_0x0[0x16];
    short field_0x16; /* +0x16 */
    unsigned char pad_0x18[0x8];
    ushort field_0x20; /* +0x20 */
    unsigned char pad_0x22[0x12];
    undefined4 field_0x34; /* +0x34 */
    undefined4 field_0x38; /* +0x38 */
    undefined4 field_0x3c; /* +0x3c */
    undefined4 field_0x40; /* +0x40 */
    unsigned char pad_0x44[0x7];
    byte field_0x4b; /* +0x4b */
};

/* stack frame of param_3: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_3_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern int gameGetPlayerData(void);
extern unsigned int padGetMappedValue(unsigned short);
extern int gameGetSlotRecord(void);
/* Supplied declaration required: FUN_002efc44. */
/* Supplied declaration required: FUN_0034a290. */
/* Supplied declaration required: playerGetWords. */
/* Supplied declaration required: FUN_004c6c8c. */
extern int mathApplyReductionMultiplier(int, fn_0023e6d8_arg0 *, unsigned int);


int FUN_0023e6d8(fn_0023e6d8_arg0 *param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  fn_0023e6d8_arg0 *pfVar7;
  unsigned char temp_v6;
  unsigned int in_fpscr;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  fn_0023e6d8_arg0 *pfStack_30;
  int temp_v12;
  int iStack_28;
  
  temp_v4 = (unsigned int)*(unsigned short *)((int)&param_1->field_0x38 + 2) << 0x14;
  temp_v6 = temp_v4 == 0;
  if (temp_v6) {
    temp_v4 = (unsigned int)param_1->field_0x4b;
  }
  if (temp_v6 && temp_v4 == 0) {
    temp_v2 = 0;
  }
  else {
    pfVar7 = (fn_0023e6d8_arg0 *)0x0;
    temp_v7 = 0;
    temp_v8 = 0;
    temp_v9 = 0;
    temp_v10 = 0;
    temp_v11 = 0;
    pfStack_30 = param_1;
    temp_v12 = param_2;
    iStack_28 = param_3;
    if (param_3 < 0) {
      temp_v2 = gameGetPlayerData();
      temp_v1 = *(short *)(temp_v2 + 0x24);
      playerGetWords(&temp_v7,1);
      temp_v3 = padGetMappedValue(param_1->field_0x20);
      pfVar7 = param_1;
      FUN_002efc44(param_1,temp_v3,2);
    }
    else {
      temp_v2 = gameGetSlotRecord();
      if (temp_v2 == 0) {
        return 0;
      }
      temp_v1 = *(short *)(temp_v2 + 0x16);
      temp_v7 = *(unsigned int *)(temp_v2 + 0x34);
      temp_v8 = *(unsigned int *)(temp_v2 + 0x38);
      temp_v9 = *(unsigned int *)(temp_v2 + 0x3c);
      temp_v10 = *(unsigned int *)(temp_v2 + 0x40);
    }
    temp_v2 = 0;
    do {
      if (*(short *)((int)&temp_v7 + temp_v2 * 2) != 0) {
        FUN_0034a290();
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 9);
    temp_v0 = *(unsigned short *)((int)&param_1->field_0x38 + 2);
    temp_v5 = 0;
    temp_v2 = temp_v12;
    if ((temp_v0 & 0xfff) != 4000) {
      temp_v4 = (unsigned int)param_1->field_0x4b;
      if ((temp_v0 & 0xfff) != 0) {
        if (temp_v4 != 0) {
          VectorUnsignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v5 = mathApplyReductionMultiplier(temp_v12,pfVar7,0);
        }
        VectorUnsignedToFloat
                  (*(unsigned short *)((int)&param_1->field_0x38 + 2) & 0xffff0fff,
                   (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v2 = FUN_004c6c8c((int)temp_v1,pfVar7,0,temp_v5);
      }
      else {
        temp_v2 = temp_v5;
        if (temp_v4 != 0) {
          VectorUnsignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v2 = mathApplyReductionMultiplier(temp_v12,pfVar7,0);
          temp_v0 = *(unsigned short *)((int)&param_1->field_0x38 + 2);
          if ((temp_v0 & 0xfff) != 0) {
            VectorUnsignedToFloat(temp_v0 & 0xffff0fff,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v5 = FUN_004c6c8c((int)temp_v1,pfVar7,0,0);
            temp_v2 = temp_v2 + temp_v5;
          }
        }
      }
    }
  }
  return temp_v2;
}

} /* extern "C" */
