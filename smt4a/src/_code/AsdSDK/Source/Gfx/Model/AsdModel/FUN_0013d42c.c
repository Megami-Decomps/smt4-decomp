/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013d42c` (_code @ 0x13d42c, 0x698 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 19 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned char sp37; /* 0x37: local_37 */
    unsigned char sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned char sp47; /* 0x47: local_47 */
    unsigned char sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_2_stack;

extern unsigned int DAT_005b3c88; /* 0x5b3c88 */
extern unsigned int DAT_005b3c8c; /* 0x5b3c8c */
extern unsigned int DAT_005b3c90; /* 0x5b3c90 */
extern unsigned int DAT_005b3c94; /* 0x5b3c94 */
extern unsigned int DAT_005b3c98; /* 0x5b3c98 */
extern unsigned int DAT_005b3c9c; /* 0x5b3c9c */
extern unsigned int DAT_005b3ca0; /* 0x5b3ca0 */
extern unsigned int DAT_005b3ca4; /* 0x5b3ca4 */
extern unsigned int DAT_005b3ca8; /* 0x5b3ca8 */
extern unsigned int DAT_005b3cac; /* 0x5b3cac */
extern unsigned int DAT_005b3cb0; /* 0x5b3cb0 */
extern unsigned int DAT_005b3cb4; /* 0x5b3cb4 */

extern unsigned int FUN_00168188(void);
/* Supplied declaration required: FUN_0018e9d8. */
extern unsigned int nw_gfx_TransformNode_DynamicBuilder_Create(unsigned char *, unsigned int);


void FUN_0013d42c(int *param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  int temp_v3 [10];
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned int temp_v6;
  unsigned int uStack_40;
  unsigned int temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  
  if (param_1 == (int *)0x0) {
    param_1 = temp_v3;
  }
  temp_v3[0] = 0;
  temp_v3[1] = 0;
  temp_v3[2] = 0;
  temp_v3[3] = 0;
  temp_v3[4] = 0;
  temp_v3[5] = 0;
  temp_v3[6] = 0;
  temp_v3[7] = 0;
  temp_v3[8] = 0;
  temp_v3[9] = 0;
  temp_v0 = *param_1;
  if (param_2 == (int *)0x0) {
    param_2 = temp_v3;
  }
  temp_v2 = temp_v0 == 0;
  if (temp_v2) {
    temp_v0 = param_1[1];
  }
  if (!(temp_v2 && temp_v0 == 0)) {
    temp_v1 = FUN_00168188();
    temp_v8 = 1;
    temp_v9 = 1;
    temp_v12 = 1;
    temp_v10 = 4;
    temp_v11 = 8;
    temp_v11 = *param_1;
    temp_v10 = param_1[1];
    DAT_005b3c88 = nw_gfx_TransformNode_DynamicBuilder_Create(&temp_v8,temp_v1);
  }
  else {
    temp_v1 = FUN_00168188();
    temp_v9 = 1;
    temp_v12 = 1;
    temp_v10 = 4;
    temp_v11 = 8;
    temp_v8 = 0;
    DAT_005b3c88 = nw_gfx_TransformNode_DynamicBuilder_Create(&temp_v8,temp_v1);
  }
  temp_v0 = param_1[2];
  temp_v2 = temp_v0 == 0;
  if (temp_v2) {
    temp_v0 = param_1[3];
  }
  if (!(temp_v2 && temp_v0 == 0)) {
    temp_v1 = FUN_00168188();
    temp_v8 = 1;
    temp_v9 = 1;
    temp_v12 = 1;
    temp_v10 = 4;
    temp_v11 = 8;
    temp_v11 = param_1[2];
    temp_v10 = param_1[3];
    DAT_005b3c90 = nw_gfx_TransformNode_DynamicBuilder_Create(&temp_v8,temp_v1);
  }
  else {
    temp_v1 = FUN_00168188();
    temp_v9 = 1;
    temp_v12 = 1;
    temp_v10 = 4;
    temp_v11 = 8;
    temp_v8 = 0;
    DAT_005b3c90 = nw_gfx_TransformNode_DynamicBuilder_Create(&temp_v8,temp_v1);
  }
  FUN_0018e9d8(DAT_005b3c88,DAT_005b3c90);
  temp_v1 = FUN_00168188();
  temp_v5 = 1;
  temp_v7 = 1;
  temp_v6 = 4;
  uStack_40 = 8;
  temp_v4 = 0;
  DAT_005b3c98 = nw_gfx_TransformNode_DynamicBuilder_Create(&temp_v4,temp_v1);
  FUN_0018e9d8(DAT_005b3c88,DAT_005b3c98);
  temp_v0 = param_1[4];
  temp_v2 = temp_v0 == 0;
  if (temp_v2) {
    temp_v0 = param_1[5];
  }
  if (!(temp_v2 && temp_v0 == 0)) {
    temp_v1 = FUN_00168188();
    temp_v8 = 1;
    temp_v9 = 1;
    temp_v12 = 1;
    temp_v10 = 4;
    temp_v11 = 8;
    temp_v11 = param_1[4];
    temp_v10 = param_1[5];
    DAT_005b3ca0 = nw_gfx_TransformNode_DynamicBuilder_Create(&temp_v8,temp_v1);
  }
  else {
    temp_v1 = FUN_00168188();
    temp_v9 = 1;
    temp_v12 = 1;
    temp_v10 = 4;
    temp_v11 = 8;
    temp_v8 = 0;
    DAT_005b3ca0 = nw_gfx_TransformNode_DynamicBuilder_Create(&temp_v8,temp_v1);
  }
  FUN_0018e9d8(DAT_005b3c88,DAT_005b3ca0);
  temp_v0 = param_1[6];
  temp_v2 = temp_v0 == 0;
  if (temp_v2) {
    temp_v0 = param_1[7];
  }
  if (!(temp_v2 && temp_v0 == 0)) {
    temp_v1 = FUN_00168188();
    temp_v8 = 1;
    temp_v9 = 1;
    temp_v12 = 1;
    temp_v10 = 4;
    temp_v11 = 8;
    temp_v11 = param_1[6];
    temp_v10 = param_1[7];
    DAT_005b3ca8 = nw_gfx_TransformNode_DynamicBuilder_Create(&temp_v8,temp_v1);
  }
  else {
    temp_v1 = FUN_00168188();
    temp_v9 = 1;
    temp_v12 = 1;
    temp_v10 = 4;
    temp_v11 = 8;
    temp_v8 = 0;
    DAT_005b3ca8 = nw_gfx_TransformNode_DynamicBuilder_Create(&temp_v8,temp_v1);
  }
  FUN_0018e9d8(DAT_005b3c88,DAT_005b3ca8);
  temp_v0 = param_1[8];
  temp_v2 = temp_v0 == 0;
  if (temp_v2) {
    temp_v0 = param_1[9];
  }
  if (!(temp_v2 && temp_v0 == 0)) {
    temp_v1 = FUN_00168188();
    temp_v8 = 1;
    temp_v9 = 1;
    temp_v12 = 1;
    temp_v10 = 4;
    temp_v11 = 8;
    temp_v11 = param_1[8];
    temp_v10 = param_1[9];
    DAT_005b3cb0 = nw_gfx_TransformNode_DynamicBuilder_Create(&temp_v8,temp_v1);
  }
  else {
    temp_v1 = FUN_00168188();
    temp_v9 = 1;
    temp_v12 = 1;
    temp_v10 = 4;
    temp_v11 = 8;
    temp_v8 = 0;
    DAT_005b3cb0 = nw_gfx_TransformNode_DynamicBuilder_Create(&temp_v8,temp_v1);
  }
  FUN_0018e9d8(DAT_005b3c88,DAT_005b3cb0);
  temp_v0 = *param_2;
  temp_v2 = temp_v0 == 0;
  if (temp_v2) {
    temp_v0 = param_2[1];
  }
  if (!(temp_v2 && temp_v0 == 0)) {
    temp_v1 = FUN_00168188();
    temp_v8 = 1;
    temp_v9 = 1;
    temp_v12 = 1;
    temp_v10 = 4;
    temp_v11 = 8;
    temp_v11 = *param_2;
    temp_v10 = param_2[1];
    DAT_005b3c8c = nw_gfx_TransformNode_DynamicBuilder_Create(&temp_v8,temp_v1);
  }
  else {
    temp_v1 = FUN_00168188();
    temp_v9 = 1;
    temp_v12 = 1;
    temp_v10 = 4;
    temp_v11 = 8;
    temp_v8 = 0;
    DAT_005b3c8c = nw_gfx_TransformNode_DynamicBuilder_Create(&temp_v8,temp_v1);
  }
  temp_v0 = param_2[2];
  temp_v2 = temp_v0 == 0;
  if (temp_v2) {
    temp_v0 = param_2[3];
  }
  if (!(temp_v2 && temp_v0 == 0)) {
    temp_v1 = FUN_00168188();
    temp_v8 = 1;
    temp_v9 = 1;
    temp_v12 = 1;
    temp_v10 = 4;
    temp_v11 = 8;
    temp_v11 = param_2[2];
    temp_v10 = param_2[3];
    DAT_005b3c94 = nw_gfx_TransformNode_DynamicBuilder_Create(&temp_v8,temp_v1);
  }
  else {
    temp_v1 = FUN_00168188();
    temp_v9 = 1;
    temp_v12 = 1;
    temp_v10 = 4;
    temp_v11 = 8;
    temp_v8 = 0;
    DAT_005b3c94 = nw_gfx_TransformNode_DynamicBuilder_Create(&temp_v8,temp_v1);
  }
  FUN_0018e9d8(DAT_005b3c8c,DAT_005b3c94);
  temp_v1 = FUN_00168188();
  temp_v5 = 1;
  temp_v7 = 1;
  temp_v6 = 4;
  uStack_40 = 8;
  temp_v4 = 0;
  DAT_005b3c9c = nw_gfx_TransformNode_DynamicBuilder_Create(&temp_v4,temp_v1);
  FUN_0018e9d8(DAT_005b3c8c,DAT_005b3c9c);
  temp_v0 = param_2[4];
  temp_v2 = temp_v0 == 0;
  if (temp_v2) {
    temp_v0 = param_2[5];
  }
  if (!(temp_v2 && temp_v0 == 0)) {
    temp_v1 = FUN_00168188();
    temp_v8 = 1;
    temp_v9 = 1;
    temp_v12 = 1;
    temp_v10 = 4;
    temp_v11 = 8;
    temp_v11 = param_2[4];
    temp_v10 = param_2[5];
    DAT_005b3ca4 = nw_gfx_TransformNode_DynamicBuilder_Create(&temp_v8,temp_v1);
  }
  else {
    temp_v1 = FUN_00168188();
    temp_v9 = 1;
    temp_v12 = 1;
    temp_v10 = 4;
    temp_v11 = 8;
    temp_v8 = 0;
    DAT_005b3ca4 = nw_gfx_TransformNode_DynamicBuilder_Create(&temp_v8,temp_v1);
  }
  FUN_0018e9d8(DAT_005b3c8c,DAT_005b3ca4);
  temp_v0 = param_2[6];
  temp_v2 = temp_v0 == 0;
  if (temp_v2) {
    temp_v0 = param_2[7];
  }
  if (!(temp_v2 && temp_v0 == 0)) {
    temp_v1 = FUN_00168188();
    temp_v8 = 1;
    temp_v9 = 1;
    temp_v12 = 1;
    temp_v10 = 4;
    temp_v11 = 8;
    temp_v11 = param_2[6];
    temp_v10 = param_2[7];
    DAT_005b3cac = nw_gfx_TransformNode_DynamicBuilder_Create(&temp_v8,temp_v1);
  }
  else {
    temp_v1 = FUN_00168188();
    temp_v8 = 1;
    temp_v9 = 1;
    temp_v12 = 1;
    temp_v10 = 4;
    temp_v11 = 8;
    DAT_005b3cac = nw_gfx_TransformNode_DynamicBuilder_Create(&temp_v8,temp_v1);
  }
  FUN_0018e9d8(DAT_005b3c8c,DAT_005b3cac);
  temp_v0 = param_2[8];
  temp_v2 = temp_v0 == 0;
  if (temp_v2) {
    temp_v0 = param_2[9];
  }
  if (!(temp_v2 && temp_v0 == 0)) {
    temp_v1 = FUN_00168188();
    temp_v8 = 1;
    temp_v9 = 1;
    temp_v12 = 1;
    temp_v10 = 4;
    temp_v11 = 8;
    temp_v11 = param_2[8];
    temp_v10 = param_2[9];
    DAT_005b3cb4 = nw_gfx_TransformNode_DynamicBuilder_Create(&temp_v8,temp_v1);
  }
  else {
    temp_v1 = FUN_00168188();
    temp_v9 = 1;
    temp_v12 = 1;
    temp_v10 = 4;
    temp_v11 = 8;
    temp_v8 = 0;
    DAT_005b3cb4 = nw_gfx_TransformNode_DynamicBuilder_Create(&temp_v8,temp_v1);
  }
  FUN_0018e9d8(DAT_005b3c8c,DAT_005b3cb4);
  return;
}
