/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029a794` (_code @ 0x29a794, 0x290 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e188(int, int, int, int, int);
int paramsInit(int, unsigned char *, int, unsigned char *, int, unsigned char *, int, unsigned char *, int, unsigned char *, int);
int uiSpriteSelectAnim(int, int);
int uiSpriteSetKeyframe(int, int);
int FUN_00352d30(float *);
int FUN_00352eec(void);
int paramsClearPacket(int);

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

extern unsigned char DAT_005315d0; /* 0x5315d0 */
extern unsigned char DAT_005315d8; /* 0x5315d8 */
extern unsigned char DAT_005315f0; /* 0x5315f0 */
extern unsigned char DAT_00531608; /* 0x531608 */
extern unsigned char DAT_00531620; /* 0x531620 */
extern unsigned int g_gameState; /* 0x5f15fc */
extern unsigned int DAT_005f1600; /* 0x5f1600 */
extern unsigned int DAT_005f1604; /* 0x5f1604 */
extern float DAT_005f16bc; /* 0x5f16bc */
extern float DAT_005f16c0; /* 0x5f16c0 */
extern float DAT_005f16c4; /* 0x5f16c4 */
extern float DAT_005f16c8; /* 0x5f16c8 */
extern float DAT_005f16cc; /* 0x5f16cc */
extern unsigned int DAT_005f16d0; /* 0x5f16d0 */
extern unsigned int DAT_005f16d4; /* 0x5f16d4 */
extern unsigned int DAT_005f1d0c; /* 0x5f1d0c */
extern unsigned short DAT_005f1d70; /* 0x5f1d70 */
extern unsigned short DAT_005f1d72; /* 0x5f1d72 */
extern unsigned int DAT_005f1dc4; /* 0x5f1dc4 */
extern unsigned short DAT_005f1e18; /* 0x5f1e18 */
extern unsigned short DAT_005f1e1a; /* 0x5f1e1a */

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: paramsInit. */
extern int gameFlagsGetBlock(void);
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: FUN_00352d30. */
/* Supplied declaration required: FUN_00352eec. */
/* Supplied declaration required: paramsClearPacket. */


void FUN_0029a794(int param_1,int param_2)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = gameFlagsGetBlock();
  *(unsigned int *)(param_1 + 0x48) = 0;
  *(unsigned int *)(param_1 + 0x4c) = 0;
  *(unsigned char *)(param_1 + 0x50) = 0;
  *(unsigned int *)(param_1 + 0x54) = 0;
  *(unsigned int *)(param_1 + 0x58) = 0;
  *(unsigned int *)(param_1 + 0x5c) = 0;
  *(unsigned char *)(param_1 + 0x60) = 0;
  *(unsigned char *)(param_1 + 0x61) = 0;
  *(unsigned int *)(param_1 + 100) = 0;
  *(unsigned char *)(param_1 + 0x68) = 0;
  *(unsigned int *)(param_1 + 0x6c) = 0;
  *(unsigned char *)(param_1 + 0x70) = 0;
  *(unsigned int *)(param_1 + 0x74) = 0;
  *(unsigned int *)(param_1 + 0x78) = 0;
  *(unsigned char *)(param_1 + 0x8c) = 0;
  *(unsigned char *)(param_1 + 0x8d) = 0;
  *(unsigned char *)(param_1 + 0x8e) = 0;
  *(unsigned int *)(param_1 + 0x90) = 0;
  *(unsigned int *)(param_1 + 0x94) = 0;
  *(unsigned int *)(param_1 + 0x98) = 0;
  *(unsigned int *)(param_1 + 0x9c) = 0;
  *(unsigned char *)(param_1 + 0xa0) = 0;
  *(unsigned char *)(param_1 + 0xac) = 0;
  *(unsigned int *)(param_1 + 0xa4) = 0;
  *(unsigned int *)(param_1 + 0xa8) = 0;
  *(unsigned char *)(param_1 + 0xa1) = 0;
  *(unsigned int *)(param_1 + 0xb0) = 0;
  *(unsigned int *)(param_1 + 0xb4) = 0;
  *(unsigned int *)(param_1 + 0xb8) = 0;
  *(unsigned int *)(param_1 + 0xbc) = 0;
  *(unsigned int *)(param_1 + 0xd4) = 0;
  *(unsigned int *)(param_1 + 0xe8) = 0;
  *(unsigned int *)(param_1 + 0xc0) = 0;
  *(unsigned int *)(param_1 + 0xd8) = 0;
  *(unsigned int *)(param_1 + 0xec) = 0;
  *(unsigned int *)(param_1 + 0xc4) = 0;
  *(unsigned int *)(param_1 + 0xdc) = 0;
  *(unsigned int *)(param_1 + 0xf0) = 0;
  *(unsigned int *)(param_1 + 200) = 0;
  *(unsigned int *)(param_1 + 0xe0) = 0;
  *(unsigned int *)(param_1 + 0xf4) = 0;
  *(unsigned int *)(param_1 + 0xcc) = 0;
  *(unsigned int *)(param_1 + 0xe4) = 0;
  *(unsigned int *)(param_1 + 0xf8) = 0;
  *(unsigned int *)(param_1 + 0xfc) = 0;
  *(unsigned int *)(param_1 + 0xd0) = 0;
  *(unsigned int *)(param_1 + 0x4a0) = 0;
  *(unsigned int *)(param_1 + 0x4a4) = 0;
  *(unsigned int *)(param_1 + 0x4a8) = 0;
  *(unsigned int *)(param_1 + 0x4ac) = 0;
  *(unsigned int *)(param_1 + 0x4b0) = 0;
  *(unsigned int *)(param_1 + 0x4b4) = 0;
  *(unsigned int *)(param_1 + 0x4b8) = 0;
  *(unsigned int *)(param_1 + 0x4bc) = 0;
  *(unsigned int *)(param_1 + 0x4c0) = 0;
  *(unsigned int *)(param_1 + 0x4c4) = 0;
  FUN_00352d30(&DAT_005f16c0);
  if (param_2 != 0) {
    *(short *)(temp_v0 + 0x2c) = (short)(int)DAT_005f16bc;
    *(short *)(temp_v0 + 0x2e) = (short)g_gameState;
    *(short *)(temp_v0 + 0x30) = (short)DAT_005f1600;
    *(unsigned int *)(temp_v0 + 0xe10) = DAT_005f1604;
    *(short *)(temp_v0 + 0x32) = (short)(int)DAT_005f16c0;
    *(short *)(temp_v0 + 0x34) = (short)(int)DAT_005f16c4;
    *(short *)(temp_v0 + 0x36) = (short)(int)DAT_005f16c8;
    *(short *)(temp_v0 + 0x38) = (short)(int)DAT_005f16cc;
    *(short *)(temp_v0 + 0x28) = (short)DAT_005f16d0;
    *(short *)(temp_v0 + 0x2a) = (short)DAT_005f16d4;
  }
  FUN_00352eec();
  DAT_005f1d0c = 0;
  DAT_005f1d70 = 0;
  DAT_005f1d72 = 0;
  DAT_005f1dc4 = 0;
  DAT_005f1e18 = 0;
  DAT_005f1e1a = 0;
  paramsClearPacket(param_1 + 0x128);
  paramsInit(param_1 + 0x128,&DAT_005315d8,0x18,&DAT_00531608,0x18,&DAT_005315f0,0x18,
               &DAT_005315d0,8,&DAT_00531620,0x54);
  *(unsigned int *)(param_1 + 0x490) = 0;
  FUN_0014e188(param_1 + 0x148,0x1d,0,param_1 + 0x128,1);
  uiSpriteSetKeyframe(param_1 + 0x148,0);
  temp_v0 = 0;
  do {
    temp_v1 = param_1 + temp_v0 * 0x8c;
    FUN_0014e188(temp_v1 + 0x1d4,0x13,0x11d4,param_1 + 0x128,0xb);
    uiSpriteSelectAnim(temp_v1 + 0x1d4,0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 5);
  return;
}

} /* extern "C" */
