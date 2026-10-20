/* NON_MATCHING: romwright 0.5.0 decompilation of `MapDepart_InitState` (_code @ 0x25c13c, 0xf4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00270f70(float *);
int FUN_002df86c(void);

typedef struct fn_0025c13c_arg0 fn_0025c13c_arg0;
struct fn_0025c13c_arg0 {
    unsigned char pad_0x0[0x18];
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    undefined1 field_0x20; /* +0x20 */
    unsigned char pad_0x21[0x3];
    undefined4 field_0x24; /* +0x24 */
    undefined4 field_0x28; /* +0x28 */
    undefined2 field_0x2c; /* +0x2c */
    undefined2 field_0x2e; /* +0x2e */
    undefined4 field_0x30; /* +0x30 */
    undefined2 field_0x34; /* +0x34 */
    undefined2 field_0x36; /* +0x36 */
    undefined4 field_0x38; /* +0x38 */
    undefined1 field_0x3c; /* +0x3c */
    unsigned char pad_0x3d[0x3];
    undefined4 field_0x40; /* +0x40 */
    undefined4 field_0x44; /* +0x44 */
    unsigned char pad_0x48[0xd94];
    undefined4 field_0xddc; /* +0xddc */
};

extern unsigned int DAT_0049f91c; /* 0x49f91c */
extern unsigned int DAT_0049f920; /* 0x49f920 */
extern unsigned int DAT_0049f924; /* 0x49f924 */
extern float DAT_0049f9ac; /* 0x49f9ac */
extern float DAT_0049f9b0; /* 0x49f9b0 */
extern float DAT_0049f9b4; /* 0x49f9b4 */
extern float DAT_0049f9b8; /* 0x49f9b8 */
extern float DAT_0049f9bc; /* 0x49f9bc */
extern unsigned int DAT_0049f9c0; /* 0x49f9c0 */
extern unsigned int DAT_0049f9c4; /* 0x49f9c4 */
extern unsigned int DAT_0049fd88; /* 0x49fd88 */
extern unsigned short DAT_0049fddc; /* 0x49fddc */
extern unsigned short DAT_0049fdde; /* 0x49fdde */

/* Supplied declaration required: FUN_00270f70. */
extern int FUN_002c2950(void);
/* Supplied declaration required: FUN_002df86c. */


void MapDepart_InitState(fn_0025c13c_arg0 *param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c2950();
  param_1->field_0x18 = 0;
  param_1->field_0x1c = 0;
  param_1->field_0x20 = 0;
  param_1->field_0x24 = 0;
  param_1->field_0x28 = 0;
  *(unsigned char *)&param_1->field_0x2c = 0;
  *(unsigned char *)((int)&param_1->field_0x2c + 1) = 0;
  param_1->field_0x30 = 0;
  *(unsigned char *)&param_1->field_0x34 = 0;
  param_1->field_0x38 = 0;
  param_1->field_0x3c = 0;
  param_1->field_0x40 = 0;
  param_1->field_0x44 = 0;
  FUN_00270f70(&DAT_0049f9b0);
  if (param_2 != 0) {
    *(short *)(temp_v0 + 0x2c) = (short)(int)DAT_0049f9ac;
    *(short *)(temp_v0 + 0x2e) = (short)DAT_0049f91c;
    *(short *)(temp_v0 + 0x30) = (short)DAT_0049f920;
    *(unsigned int *)(temp_v0 + 0xddc) = DAT_0049f924;
    *(short *)(temp_v0 + 0x32) = (short)(int)DAT_0049f9b0;
    *(short *)(temp_v0 + 0x34) = (short)(int)DAT_0049f9b4;
    *(short *)(temp_v0 + 0x36) = (short)(int)DAT_0049f9b8;
    *(short *)(temp_v0 + 0x38) = (short)(int)DAT_0049f9bc;
    *(short *)(temp_v0 + 0x28) = (short)DAT_0049f9c0;
    *(short *)(temp_v0 + 0x2a) = (short)DAT_0049f9c4;
  }
  FUN_002df86c();
  DAT_0049fd88 = 0;
  DAT_0049fddc = 0;
  DAT_0049fdde = 0;
  return;
}

} /* extern "C" */
