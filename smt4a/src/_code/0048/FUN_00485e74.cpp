/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00485e74` (_code @ 0x485e74, 0x490 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexTableLoadTmx(int, int);
int FUN_0014e188(...);
int FUN_0014e220(...);
int paramsInit(unsigned char *, unsigned char *, int, unsigned char *, int, int, int, int, int, unsigned char *, int);
int uiSpriteSetKeyframe(...);
int uiSpriteSetImageKeyframe(...);
int FUN_001a90e0(unsigned char *);
int sysMemClear(...);
int rt_memclr(unsigned char *, int);
int FUN_0048738c(unsigned char *);
int rectangleInitializeSelection(unsigned char *, int, int, int);
int FUN_004cf7cc(...);
int fillTwoWordsWithByte(...);
int paramsClearPacket(unsigned char *);

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern unsigned char DAT_00532378; /* 0x532378 */
extern unsigned char DAT_005323d8; /* 0x5323d8 */
extern unsigned char DAT_0053242c; /* 0x53242c */
extern unsigned int DAT_00587f24; /* 0x587f24 */
extern unsigned char DAT_00616ee4; /* 0x616ee4 */

/* Supplied declaration required: asdTMTexTableLoadTmx. */
/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_0014e220. */
/* Supplied declaration required: paramsInit. */
extern int gameFlagsGetBlock(void);
/* Supplied declaration required: uiSpriteSetKeyframe. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: FUN_001a90e0. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: rt_memclr. */
/* Supplied declaration required: FUN_0048738c. */
/* Supplied declaration required: rectangleInitializeSelection. */
/* Supplied declaration required: FUN_004cf7cc. */
/* Supplied declaration required: fillTwoWordsWithByte. */
/* Supplied declaration required: paramsClearPacket. */


void FUN_00485e74(unsigned char *param_1)

{
/* irregular: 14 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = gameFlagsGetBlock();
  FUN_0048738c(param_1);
  asdTMTexTableLoadTmx(0x28,0);
  param_1[0xc] = 0xff;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *param_1 = 0;
  param_1[0x55] = 0;
  *(unsigned int *)(param_1 + 0x10) = 0;
  rt_memclr(param_1 + 0x66,0x100);
  param_1[100] = 0;
  param_1[0x65] = 0;
  rectangleInitializeSelection(param_1 + 0x4d0,0,0,0x13);
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 8) = 0;
  FUN_001a90e0(param_1 + 0x56);
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(unsigned int *)(param_1 + 0x488) = 0;
  *(unsigned int *)(param_1 + 0x48c) = 0;
  *(unsigned int *)(param_1 + 0x490) = 0;
  *(unsigned int *)(param_1 + 0x498) = 0;
  *(unsigned int *)(param_1 + 0x494) = 0;
  *(unsigned int *)(param_1 + 0x49c) = 0;
  *(unsigned int *)(param_1 + 0x4a0) = 0;
  *(unsigned int *)(param_1 + 0x4a4) = 0;
  *(unsigned int *)(param_1 + 0x4bc) = 0;
  *(unsigned int *)(param_1 + 0x4c0) = 0;
  param_1[0x486] = 0;
  *(unsigned int *)(param_1 + 0x4ac) = 0;
  *(unsigned int *)(param_1 + 0x4b0) = 0;
  *(unsigned int *)(param_1 + 0x4b4) = 0;
  *(unsigned int *)(param_1 + 0x4a8) = 0;
  *(unsigned int *)(param_1 + 0x4b8) = 0;
  *(unsigned int *)(param_1 + 0x4c4) = 0;
  *(unsigned int *)(param_1 + 0x4c8) = 0;
  paramsClearPacket(param_1 + 0xc20);
  paramsInit(param_1 + 0xc20,&DAT_00532378,0x60,&DAT_005323d8,0x54,0,0,0,0,&DAT_0053242c,0x8c);
  temp_v2 = 0;
  do {
    FUN_0014e188(param_1 + temp_v2 * 0x8c + 0xc40,0x13,0xfa1,param_1 + 0xc20,0x15);
    uiSpriteSetKeyframe(param_1 + temp_v2 * 0x8c + 0xc40,4,0);
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 6);
  FUN_0014e188(param_1 + 0x10a0,0x13,0x112d,param_1 + 0xc20,0x15);
  uiSpriteSetKeyframe(param_1 + 0x10a0,4,0);
  FUN_0014e188(param_1 + 0x11b8,0x13,0x1135,param_1 + 0xc20,0x15);
  uiSpriteSetImageKeyframe(param_1 + 0x11b8,3,0);
  FUN_0014e188(param_1 + 0x1244,0x13,0x112e,param_1 + 0xc20,0x15);
  uiSpriteSetImageKeyframe(param_1 + 0x1244,5,0);
  FUN_0014e188(param_1 + 0x112c,0x13,0x112e,param_1 + 0xc20,0x15);
  uiSpriteSetKeyframe(param_1 + 0x112c,4,0);
  FUN_004cf7cc(param_1 + 0x4e4);
  *(unsigned int *)(param_1 + 0x1480) = 0;
  *(unsigned int *)(param_1 + 0x1484) = 0xa0;
  *(unsigned int *)(param_1 + 0x1488) = 0x78;
  if (*(char *)(temp_v1 + 0xd8e) == '\0') {
    *(unsigned char *)(temp_v1 + 0xd8e) = 0xc;
  }
  *(unsigned int *)(param_1 + 0x7b8c) = 0;
  *(unsigned int *)(param_1 + 0x84f4) = 0;
  param_1[0x7b90] = 0;
  param_1[0x7b91] = 0;
  param_1[0x7b92] = 0;
  temp_v1 = 0;
  temp_v2 = 0x20;
  param_1[0x7b93] = 0;
  do {
    *(unsigned int *)(param_1 + temp_v1 * 8 + 0x148c) = 0;
    temp_v0 = temp_v1 * 8;
    *(unsigned int *)(param_1 + temp_v1 * 8 + 0x1490) = 0;
    *(unsigned int *)(param_1 + temp_v1 * 8 + 0x158c) = 0;
    temp_v2 = temp_v2 - 1;
    temp_v1 = temp_v1 + 1;
    *(unsigned int *)(param_1 + temp_v0 + 0x1590) = 0;
  } while (temp_v2 != 0);
  *(unsigned int *)(param_1 + 0x20510) = 0;
  param_1[0x205ac] = 0;
  param_1[0x20500] = 0;
  *(unsigned short *)(param_1 + 0x20502) = 0;
  *(unsigned short *)(param_1 + 0x20504) = 0xffff;
  fillTwoWordsWithByte(param_1 + 0x2062c,1);
  temp_v2 = 0x20;
  temp_v1 = 0;
  do {
    temp_v2 = temp_v2 - 1;
    *(unsigned short *)(param_1 + temp_v1 * 4 + 0x20528) = 0;
    *(unsigned short *)(param_1 + temp_v1 * 4 + 0x2052a) = 0;
    temp_v1 = temp_v1 + 1;
  } while (temp_v2 != 0);
  *(unsigned int *)(param_1 + 0x205a8) = 0;
  param_1[0x20634] = 0;
  *(unsigned int *)(param_1 + 0x20638) = 0xa0;
  *(unsigned int *)(param_1 + 0x2063c) = 0x78;
  *(unsigned int *)(param_1 + 0x20640) = 0;
  param_1[0x20644] = 0;
  param_1[0x20645] = 0;
  *(unsigned int *)(param_1 + 0x20648) = 0xa0;
  *(unsigned int *)(param_1 + 0x2064c) = 0x78;
  param_1[0x12d0] = 0;
  param_1[0x12d1] = 0;
  param_1[0x12d2] = 0;
  *(unsigned int *)(param_1 + 0x12d4) = 0;
  FUN_0014e220(param_1 + 0x12dc,0x13,0x1121,0x1d,param_1 + 0xc20,0x15);
  uiSpriteSetKeyframe(param_1 + 0x12dc,0);
  param_1[0x1368] = 0;
  param_1[0x1369] = 0;
  param_1[0x136a] = 0;
  FUN_0014e220(param_1 + 0x136c,0x13,0x111a,0x1c,param_1 + 0xc20,0x15);
  uiSpriteSetKeyframe(param_1 + 0x136c,5,0);
  sysMemClear(&DAT_00616ee4,0x400);
  DAT_00587f24 = 0;
  return;
}

} /* extern "C" */
