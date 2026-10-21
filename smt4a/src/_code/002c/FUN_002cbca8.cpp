/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cbca8` (_code @ 0x2cbca8, 0x410 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192550(void);
int statusDisplayBindUnitRecord(unsigned int, int, int);
int objBInitBlock19D0(int, int);
int FUN_0033449c(int);
int gameGlobalsQueueValues(unsigned int, int);
int FUN_00372100(int, int);
int rt_memcpy_w(int, unsigned int, int);

typedef struct fn_002cbca8_arg0 fn_002cbca8_arg0;
typedef struct fn_002cbca8_arg1 fn_002cbca8_arg1;
typedef struct fn_002cbca8_arg2 fn_002cbca8_arg2;
struct fn_002cbca8_arg0 {
    undefined2 field_0x0; /* +0x0 */
    undefined2 field_0x2; /* +0x2 */
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    undefined2 field_0x18; /* +0x18 */
    ushort field_0x1a; /* +0x1a */
    undefined2 field_0x1c; /* +0x1c */
    unsigned char pad_0x1e[0x6];
    short field_0x24; /* +0x24 */
    unsigned char pad_0x26[0x2];
    short field_0x28; /* +0x28 */
    short field_0x2a; /* +0x2a */
    undefined4 field_0x2c; /* +0x2c */
    undefined4 field_0x30; /* +0x30 */
    undefined4 field_0x34; /* +0x34 */
    undefined2 field_0x38; /* +0x38 */
    undefined1 field_0x3a; /* +0x3a */
    undefined1 field_0x3b; /* +0x3b */
    undefined1 field_0x3c; /* +0x3c */
    undefined1 field_0x3d; /* +0x3d */
    undefined1 field_0x3e; /* +0x3e */
    undefined1 field_0x3f; /* +0x3f */
    undefined1 field_0x40; /* +0x40 */
    undefined1 field_0x41; /* +0x41 */
    unsigned char pad_0x42[0xc];
    undefined2 field_0x4e; /* +0x4e */
    unsigned char pad_0x50[0x10];
    undefined4 field_0x60; /* +0x60 */
    undefined4 field_0x64; /* +0x64 */
    undefined4 field_0x68; /* +0x68 */
    undefined4 field_0x6c; /* +0x6c */
    undefined4 field_0x70; /* +0x70 */
    undefined4 field_0x74; /* +0x74 */
    undefined4 field_0x78; /* +0x78 */
    undefined4 field_0x7c; /* +0x7c */
    undefined4 field_0x80; /* +0x80 */
    undefined4 field_0x84; /* +0x84 */
    undefined4 field_0x88; /* +0x88 */
    undefined4 field_0x8c; /* +0x8c */
    undefined4 field_0x90; /* +0x90 */
    undefined4 field_0x94; /* +0x94 */
    undefined4 field_0x98; /* +0x98 */
    undefined4 field_0x9c; /* +0x9c */
    unsigned char pad_0xa0[0x500];
    undefined4 field_0x5a0; /* +0x5a0 */
    unsigned char pad_0x5a4[0x8a];
    undefined1 field_0x62e; /* +0x62e */
};
struct fn_002cbca8_arg1 {
    uint field_0x0; /* +0x0 */
    uint field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    ushort field_0xc; /* +0xc */
    unsigned char pad_0xe[0xc];
    ushort field_0x1a; /* +0x1a */
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
    ushort field_0x28; /* +0x28 */
    short field_0x2a; /* +0x2a */
    short field_0x2c; /* +0x2c */
    unsigned char pad_0x2e[0x2];
    undefined4 field_0x30; /* +0x30 */
    unsigned char pad_0x34[0x2a];
    ushort field_0x5e; /* +0x5e */
    unsigned char pad_0x60[0x2];
    ushort field_0x62; /* +0x62 */
};
struct fn_002cbca8_arg2 {
    undefined4 field_0x0; /* +0x0 */
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    byte field_0x14; /* +0x14 */
};

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern int g_partyPanel; /* 0x57f268 */

extern unsigned int gameGetPlayerData(void);
/* Supplied declaration required: FUN_00192550. */
extern unsigned int gameGetSlotRecord(fn_002cbca8_arg0 *);
/* Supplied declaration required: statusDisplayBindUnitRecord. */
/* Supplied declaration required: objBInitBlock19D0. */
/* Supplied declaration required: FUN_0033449c. */
/* Supplied declaration required: gameGlobalsQueueValues. */
/* Supplied declaration required: FUN_00372100. */
extern short FUN_00480b10(unsigned short, fn_002cbca8_arg0 *);
/* Supplied declaration required: rt_memcpy_w. */


void FUN_002cbca8(fn_002cbca8_arg0 *param_1,fn_002cbca8_arg1 *param_2,fn_002cbca8_arg2 *param_3)

{
/* irregular: 6 goto(s); 7 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  short temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  fn_002cbca8_arg0 *pfVar7;
  
  temp_v2 = g_partyPanel;
  temp_v4 = (unsigned int)*(unsigned short *)(g_partyPanel + 0x36);
  if ((temp_v4 == 0) ||
     (((int)param_1 < 0 &&
      (param_2 != (fn_002cbca8_arg1 *)0x0 || param_3 != (fn_002cbca8_arg2 *)0x0)))) {
    return;
  }
  FUN_00192550();
  if ((*(unsigned char *)(temp_v4 + 0x42) & 2) == 0) {
    FUN_0033449c(0);
    return;
  }
  if (!(param_2 == (fn_002cbca8_arg1 *)0x0 && param_3 == (fn_002cbca8_arg2 *)0x0)) {
    temp_v5 = gameGetSlotRecord(param_1);
    rt_memcpy_w(temp_v2 + 0x10e4,temp_v5,300);
    temp_v0 = *(unsigned short *)(temp_v4 + 0x30);
    pfVar7 = param_1;
  }
  else {
    temp_v5 = gameGetPlayerData();
    rt_memcpy_w(temp_v2 + 0x1080,temp_v5,100);
    temp_v0 = *(unsigned short *)(temp_v4 + 0x30);
    pfVar7 = (fn_002cbca8_arg0 *)0xffffffff;
  }
  temp_v3 = FUN_00480b10(temp_v0,pfVar7);
  temp_v1 = *(unsigned short *)(temp_v4 + 0x30);
  if (temp_v1 == 0x7b7) {
    FUN_0033449c(0);
    if (param_2 == (fn_002cbca8_arg1 *)0x0 && param_3 == (fn_002cbca8_arg2 *)0x0) {
      temp_v5 = gameGetPlayerData();
      gameGlobalsQueueValues(temp_v5,0);
      return;
    }
    temp_v5 = gameGetSlotRecord(param_1);
    statusDisplayBindUnitRecord(temp_v5,0,0);
    return;
  }
  if (0x7b6 >= temp_v1) {
    if (temp_v1 != 0x7a1) {
      if (temp_v1 < 0x7a1) {
        if (temp_v1 != 0x22) {
          if (temp_v1 < 0x22) {
            if (temp_v1 != 0x1f) {
              if (temp_v1 == 0x20) goto LAB_002cbe5c;
              if (temp_v1 != 0x21) goto LAB_002cbffc;
              goto LAB_002cbea0;
            }
          }
          else {
            if (temp_v1 == 0x23) goto LAB_002cbf28;
            if (temp_v1 != 0x7a0) goto LAB_002cbffc;
          }
          if (!(param_2 == (fn_002cbca8_arg1 *)0x0 && param_3 == (fn_002cbca8_arg2 *)0x0)) {
            *(short *)(temp_v2 + 0x10e8) = *(short *)(temp_v2 + 0x10e8) + temp_v3;
            *(short *)(temp_v2 + 0x10f6) = temp_v3 + *(short *)(temp_v2 + 0x10f6);
          }
          else {
            *(short *)(temp_v2 + 0x1092) = *(short *)(temp_v2 + 0x1092) + temp_v3;
            *(short *)(temp_v2 + 0x10a0) = temp_v3 + *(short *)(temp_v2 + 0x10a0);
          }
        }
        else {
LAB_002cbee4:
          if (!(param_2 == (fn_002cbca8_arg1 *)0x0 && param_3 == (fn_002cbca8_arg2 *)0x0)) {
            *(short *)(temp_v2 + 0x10ee) = *(short *)(temp_v2 + 0x10ee) + temp_v3;
            *(short *)(temp_v2 + 0x10fc) = temp_v3 + *(short *)(temp_v2 + 0x10fc);
          }
          else {
            *(short *)(temp_v2 + 0x1098) = *(short *)(temp_v2 + 0x1098) + temp_v3;
            *(short *)(temp_v2 + 0x10a6) = temp_v3 + *(short *)(temp_v2 + 0x10a6);
          }
        }
      }
      else {
        switch(temp_v1) {
        default:
          break;
        case 0x7a2:
LAB_002cbea0:
          if (!(param_2 == (fn_002cbca8_arg1 *)0x0 && param_3 == (fn_002cbca8_arg2 *)0x0)) {
            *(short *)(temp_v2 + 0x10ea) = *(short *)(temp_v2 + 0x10ea) + temp_v3;
            *(short *)(temp_v2 + 0x10f8) = temp_v3 + *(short *)(temp_v2 + 0x10f8);
          }
          else {
            *(short *)(temp_v2 + 0x1094) = *(short *)(temp_v2 + 0x1094) + temp_v3;
            *(short *)(temp_v2 + 0x10a2) = temp_v3 + *(short *)(temp_v2 + 0x10a2);
          }
          break;
        case 0x7a3:
          goto LAB_002cbee4;
        case 0x7a4:
LAB_002cbf28:
          if (!(param_2 == (fn_002cbca8_arg1 *)0x0 && param_3 == (fn_002cbca8_arg2 *)0x0)) {
            *(short *)(temp_v2 + 0x10f0) = *(short *)(temp_v2 + 0x10f0) + temp_v3;
            *(short *)(temp_v2 + 0x10fe) = temp_v3 + *(short *)(temp_v2 + 0x10fe);
          }
          else {
            *(short *)(temp_v2 + 0x109a) = *(short *)(temp_v2 + 0x109a) + temp_v3;
            *(short *)(temp_v2 + 0x10a8) = temp_v3 + *(short *)(temp_v2 + 0x10a8);
          }
          break;
        case 0x7a5:
          if (!(param_2 == (fn_002cbca8_arg1 *)0x0 && param_3 == (fn_002cbca8_arg2 *)0x0)) {
            *(short *)(temp_v2 + 0x10e4) = *(short *)(temp_v2 + 0x10e4) + temp_v3;
            *(short *)(temp_v2 + 0x10f2) = temp_v3 + *(short *)(temp_v2 + 0x10f2);
          }
          else {
            *(short *)(temp_v2 + 0x108e) = *(short *)(temp_v2 + 0x108e) + temp_v3;
            *(short *)(temp_v2 + 0x109c) = temp_v3 + *(short *)(temp_v2 + 0x109c);
          }
          break;
        case 0x7a6:
          if (!(param_2 == (fn_002cbca8_arg1 *)0x0 && param_3 == (fn_002cbca8_arg2 *)0x0)) {
            *(short *)(temp_v2 + 0x10e6) = *(short *)(temp_v2 + 0x10e6) + temp_v3;
            *(short *)(temp_v2 + 0x10f4) = temp_v3 + *(short *)(temp_v2 + 0x10f4);
          }
          else {
            *(short *)(temp_v2 + 0x1090) = *(short *)(temp_v2 + 0x1090) + temp_v3;
            *(short *)(temp_v2 + 0x109e) = temp_v3 + *(short *)(temp_v2 + 0x109e);
          }
        }
      }
    }
    else {
LAB_002cbe5c:
      if (!(param_2 == (fn_002cbca8_arg1 *)0x0 && param_3 == (fn_002cbca8_arg2 *)0x0)) {
        *(short *)(temp_v2 + 0x10ec) = *(short *)(temp_v2 + 0x10ec) + temp_v3;
        *(short *)(temp_v2 + 0x10fa) = temp_v3 + *(short *)(temp_v2 + 0x10fa);
      }
      else {
        *(short *)(temp_v2 + 0x1096) = *(short *)(temp_v2 + 0x1096) + temp_v3;
        *(short *)(temp_v2 + 0x10a4) = temp_v3 + *(short *)(temp_v2 + 0x10a4);
      }
    }
  }
  else {
    switch(temp_v1) {
    case 0x7b8:
    case 0x7b9:
    case 0x7ba:
    case 0x7bb:
    case 0x7bc:
    case 0x7bd:
    case 0x7be:
    case 0x7bf:
    case 0x7c0:
    case 0x7c1:
    case 0x7c2:
      FUN_0033449c(0);
      if (param_2 == (fn_002cbca8_arg1 *)0x0 && param_3 == (fn_002cbca8_arg2 *)0x0) {
        temp_v5 = gameGetPlayerData();
        gameGlobalsQueueValues(temp_v5,0);
        return;
      }
      temp_v5 = gameGetSlotRecord(param_1);
      statusDisplayBindUnitRecord(temp_v5,0,0);
      return;
    }
  }
LAB_002cbffc:
  FUN_0033449c(1);
  if (param_2 == (fn_002cbca8_arg1 *)0x0 && param_3 == (fn_002cbca8_arg2 *)0x0) {
    temp_v5 = gameGetPlayerData();
    gameGlobalsQueueValues(temp_v5,0);
    FUN_00372100(temp_v2 + 0x1080,0);
    return;
  }
  temp_v5 = gameGetSlotRecord(param_1);
  statusDisplayBindUnitRecord(temp_v5,0,0);
  objBInitBlock19D0(temp_v2 + 0x10e4,0);
  return;
}

} /* extern "C" */
