/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00151e4c` (_code @ 0x151e4c, 0x454 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int positionStateSet(...);
int FUN_00164168(...);
int FUN_00164b5c(int, int, int, int, int, int);
int efctSetSpeed(void);
int FUN_00168bec(...);
int FUN_001696d4(void *, int);
int renderCtxPopState(...);
int renderStackPushIndexed(unsigned int, int, unsigned int);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_00183bb0(void);
int VectorSignedToFloat(...);

typedef struct fn_00151e4c_arg0 fn_00151e4c_arg0;
struct fn_00151e4c_arg0 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    byte field_0x8; /* +0x8 */
    byte field_0x9; /* +0x9 */
    unsigned char pad_0xa[0xe];
    undefined4 field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x4];
    int field_0x20; /* +0x20 */
    unsigned char pad_0x24[0x19ec];
    byte field_0x1a10; /* +0x1a10 */
};

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_1_stack;

extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: positionStateSet. */
/* Supplied declaration required: FUN_00164168. */
/* Supplied declaration required: FUN_00164b5c. */
extern int npcRoomGetEntryValue(unsigned int);
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_00168bec. */
extern int FUN_00168d38(unsigned int);
extern int FUN_001691a8(void);
extern unsigned int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001696d4. */
/* Supplied declaration required: renderCtxPopState. */
/* Supplied declaration required: renderStackPushIndexed. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */


void FUN_00151e4c(fn_00151e4c_arg0 *param_1)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr, in_s0; 12 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  void *pvVar4;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int in_fpscr;
  float in_s0;
  int temp_v5;
  float temp_v6;
  unsigned long long temp_v7;
  unsigned long long temp_v8;
  unsigned int temp_v9 [15];
  
  if (param_1->field_0x8 != 1 && param_1->field_0x8 != 5) {
    return;
  }
  temp_v0 = FUN_001692ac(1,0);
  renderStackPushIndexed(g_renderCtx,3,temp_v0);
  temp_v8 = 0x3f800000;
  if (param_1->field_0x9 != 0xb) {
    if (param_1->field_0x9 != 0x14) {
      renderCtxPopState(g_renderCtx,3);
      return;
    }
    temp_v1 = FUN_001834a4(0x2f,0x97);
    temp_v3 = 0;
    if (temp_v3 < param_1->field_0x20) {
      do {
        temp_v2 = FUN_001834a4(0x2f,temp_v3 + 0x98);
        if (param_1->field_0x18 == temp_v3) {
          FUN_00164b5c(2,0x2f,0x12,(int)*(short *)(temp_v2 + 8),(int)*(short *)(temp_v2 + 10),0xb);
          pvVar4 = param_1->field_0x4;
          temp_v0 = 0xf;
        }
        else {
          FUN_00164b5c(2,0x2f,0x11,(int)*(short *)(temp_v2 + 8),(int)*(short *)(temp_v2 + 10),0xb);
          pvVar4 = param_1->field_0x4;
          temp_v0 = 0xe;
        }
        *(unsigned int *)((int)pvVar4 + 0xb0) = temp_v0;
        FUN_001696d4(param_1->field_0x4,temp_v3);
        temp_v5 = (int)in_s0;
        in_s0 = (float)temp_v8;
        FUN_00164168(param_1->field_0x4,
                     ((int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v2 + 8) +
                     ((int)**(short **)(temp_v1 + 0xc) >> 1)) - (temp_v5 >> 1),
                     (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v2 + 10),0x33,6,temp_v3);
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < param_1->field_0x20);
    }
  }
  else {
    temp_v3 = 0;
    temp_v9[0] = 0xa8;
    temp_v9[1] = 0xa9;
    temp_v9[2] = 0x9c;
    temp_v9[3] = 0x9d;
    temp_v9[4] = 0x9e;
    temp_v9[5] = 0xb0;
    temp_v9[6] = 0xb1;
    temp_v9[7] = 0xb2;
    temp_v9[8] = 0xb3;
    temp_v1 = param_1->field_0x20;
    if (temp_v1 != 2) {
      if (temp_v1 == 3) {
        temp_v3 = 2;
      }
      else if (temp_v1 == 4) {
        temp_v3 = 5;
      }
    }
    temp_v4 = 0;
    if (0 < temp_v1) {
      temp_v8 = 0xc0a0000043700000;
      do {
        temp_v1 = FUN_001834a4(8,temp_v9[temp_v3 + temp_v4]);
        if (param_1->field_0x18 == temp_v4) {
          *(unsigned int *)((int)param_1->field_0x4 + 0xb0) = 10;
          positionStateSet(param_1->field_0x4,0,0xffffffff);
        }
        else {
          *(unsigned int *)((int)param_1->field_0x4 + 0xb0) = 0xb;
          positionStateSet(param_1->field_0x4,0,0x5a5a5aff);
        }
        FUN_00164168(param_1->field_0x4,(int)*(short *)(temp_v1 + 8),(int)*(short *)(temp_v1 + 10),0x33,
                     6,temp_v4);
        temp_v6 = (float)VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3)
        ;
        temp_v2 = npcRoomGetEntryValue(temp_v4);
        if (-1 < temp_v2) {
          if (param_1->field_0x1a10 != 0) {
            if ((temp_v4 < 4) && (*(char *)((int)param_1 + temp_v4 + 0x1a11) != '\0')) {
LAB_00151ff8:
              efctSetSpeed();
              FUN_00183bb0();
              temp_v5 = (int)(temp_v6 + (float)((unsigned long long)temp_v8 >> 0x20));
              FUN_001835b4(2,8,0x18d,0xf0,temp_v5,0x33);
              temp_v2 = 0;
              temp_v7 = romwright_piece_4_4((int)(float)temp_v8,temp_v5);
              do {
                if (param_1->field_0x1a10 == 0) {
                  FUN_00168bec(temp_v2);
                }
                efctSetSpeed();
                FUN_001835b4(2,8,temp_v2 + 0x18e,(int)((unsigned long long)temp_v7 >> 0x20),(int)temp_v7,0x33);
                temp_v2 = temp_v2 + 1;
              } while (temp_v2 < 3);
              efctSetSpeed();
              FUN_00183bb0();
            }
          }
          else {
            temp_v2 = FUN_001691a8();
            if (temp_v2 != 0) goto LAB_00151ff8;
          }
        }
        temp_v6 = (float)VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3)
        ;
        temp_v1 = FUN_00168d38(temp_v4);
        if (temp_v1 != 0) {
          efctSetSpeed();
          FUN_00183bb0();
          temp_v1 = (int)temp_v6;
          FUN_001835b4(2,8,0x1a6,0,temp_v1,0x33);
          FUN_001835b4(2,8,0x1a7,0,temp_v1,0x33);
          efctSetSpeed();
          FUN_00183bb0();
        }
        temp_v4 = temp_v4 + 1;
      } while ((int)temp_v4 < param_1->field_0x20);
    }
  }
  *(unsigned int *)((int)param_1->field_0x4 + 0xb0) = 0;
  positionStateSet(param_1->field_0x4,0,0x646464ff);
  renderCtxPopState(g_renderCtx,3);
  return;
}

} /* extern "C" */
