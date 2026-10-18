/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00368e10` (_code @ 0x368e10, 0x448 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00368e10_arg1 fn_00368e10_arg1;
struct fn_00368e10_arg1 {
    unsigned char pad_0x0[0x2];
    ushort field_0x2; /* +0x2 */
    unsigned char pad_0x4[0x12];
    ushort field_0x16; /* +0x16 */
    unsigned char pad_0x18[0xc];
    ushort field_0x24; /* +0x24 */
    ushort field_0x26; /* +0x26 */
    ushort field_0x28; /* +0x28 */
    ushort field_0x2a; /* +0x2a */
    ushort field_0x2c; /* +0x2c */
    ushort field_0x2e; /* +0x2e */
    ushort field_0x30; /* +0x30 */
    ushort field_0x32; /* +0x32 */
};

/* stack frame of param_9: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp40; /* 0x40: local_40 */
} param_9_stack;

extern unsigned char LAB_00369218; /* 0x369218 */
extern int *DAT_0057a9a8; /* 0x57a9a8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
extern int FUN_0014aa78(void);
extern unsigned int FUN_0014bf3c(fn_00368e10_arg1 *, unsigned int);
/* Supplied declaration required: FUN_00180118. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0018408c. */
/* Supplied declaration required: FUN_0019cac4. */
extern unsigned int FUN_00261424(void);
extern unsigned char FUN_0026264c(fn_00368e10_arg1 *);
extern int FUN_002626e0(void);
/* Supplied declaration required: FUN_002a1850. */
extern int FUN_002a4b28(fn_00368e10_arg1 *);
extern unsigned int FUN_00340c10(unsigned int);


void FUN_00368e10(unsigned int *param_1,fn_00368e10_arg1 *param_2,unsigned int param_3,
                 unsigned int param_4,unsigned char param_5,unsigned char param_6,unsigned char param_7,
                 unsigned char param_8,int param_9)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  int *piVar1;
  unsigned char temp_v0;
  fn_00368e10_arg1 *pfVar3;
  fn_00368e10_arg1 *pfVar4;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int in_fpscr;
  float temp_v3;
  int temp_v4;
  float temp_v5;
  int temp_v6;
  unsigned int uStack_3c;
  unsigned int *puStack_34;
  fn_00368e10_arg1 *pfStack_30;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  piVar1 = DAT_0057a9a8;
  pfVar3 = param_2;
  puStack_34 = param_1;
  pfStack_30 = param_2;
  temp_v7 = param_3;
  temp_v8 = param_4;
  FUN_0019cac4();
  pfVar4 = param_2;
  FUN_00180118(param_2);
  FUN_00100388(*piVar1 + 4,&LAB_00369218,pfVar4);
  temp_v1 = FUN_0014bf3c(param_2,0);
  FUN_00100388(*piVar1 + 0x2c,&LAB_00369218,temp_v1);
  temp_v0 = FUN_0026264c(param_2);
  *(unsigned char *)(*piVar1 + 0x24) = temp_v0;
  *(unsigned int *)(*piVar1 + 0x28) = pfVar3->field_0x2 & 0xffff7fff;
  temp_v2 = FUN_002626e0();
  if (temp_v2 != 0) {
    temp_v1 = FUN_00261424();
    temp_v5 = 0.0f;
    temp_v3 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v3) << 0x1d);
    if ((romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) && (temp_v5 = temp_v3, (int)temp_v3 >= 0x41100001)) {
      temp_v5 = 9.0f;
    }
    temp_v3 = (float)VectorUnsignedToFloat
                             (pfVar3->field_0x2 & 0xffff7fff,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v4 = (int)(temp_v3 * (temp_v5 * 0.55f + 1.0f) + temp_v5 * temp_v5 * 5.0f);
    *(int *)(*piVar1 + 0x28) = temp_v4;
    temp_v2 = 999;
    if (temp_v4 < 999) {
      temp_v2 = temp_v4;
    }
    *(int *)(*piVar1 + 0x28) = temp_v2;
  }
  temp_v2 = FUN_001834a4(0xc,0x47);
  temp_v4 = *piVar1 + 0x2c;
  FUN_0018408c(temp_v4,1);
  temp_v1 = VectorSignedToFloat((int)*(short *)(temp_v2 + 8) + (**(short **)(temp_v2 + 0xc) - temp_v4) / 2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(*piVar1 + 0x88) = temp_v1;
  temp_v1 = VectorSignedToFloat((int)*(short *)(temp_v2 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(*piVar1 + 0x8c) = temp_v1;
  temp_v2 = *piVar1;
  if (*(int *)(temp_v2 + 0x28) >= 100) {
    *(unsigned int *)(temp_v2 + 0xf0) = 3;
    temp_v2 = FUN_001834a4(0xc,0xa2);
    temp_v1 = VectorSignedToFloat((int)*(short *)(temp_v2 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(*piVar1 + 0x80) = temp_v1;
    temp_v1 = VectorSignedToFloat((int)*(short *)(temp_v2 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(*piVar1 + 0x84) = temp_v1;
  }
  else {
    *(unsigned int *)(temp_v2 + 0xf0) = 2;
    temp_v2 = FUN_001834a4(0xc,0x46);
    temp_v1 = VectorSignedToFloat((int)*(short *)(temp_v2 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(*piVar1 + 0x80) = temp_v1;
    temp_v1 = VectorSignedToFloat((int)*(short *)(temp_v2 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(*piVar1 + 0x84) = temp_v1;
  }
  *(unsigned char *)(*piVar1 + 0xec) = 0;
  temp_v2 = FUN_002a4b28(param_2);
  if ((temp_v2 == 0) && ((pfVar3->field_0x16 & 4) != 0)) {
    *(unsigned char *)(*piVar1 + 0xec) = 1;
  }
  if (param_9 != 0) {
    *(unsigned char *)(*piVar1 + 0x4c) = (unsigned char)((unsigned short)*(unsigned short *)(param_9 + 0x2b6) >> 10);
    *(unsigned char *)(*piVar1 + 0x4d) = (unsigned char)((unsigned short)*(unsigned short *)(param_9 + 0x2b8) >> 10);
    *(unsigned char *)(*piVar1 + 0x4e) = (unsigned char)((unsigned short)*(unsigned short *)(param_9 + 0x2ba) >> 10);
    *(unsigned char *)(*piVar1 + 0x4f) = (unsigned char)((unsigned short)*(unsigned short *)(param_9 + 700) >> 10);
    *(unsigned char *)(*piVar1 + 0x50) = (unsigned char)((unsigned short)*(unsigned short *)(param_9 + 0x2be) >> 10);
    *(unsigned char *)(*piVar1 + 0x51) = (unsigned char)((unsigned short)*(unsigned short *)(param_9 + 0x2c0) >> 10);
    *(unsigned char *)(*piVar1 + 0x52) = (unsigned char)((unsigned short)*(unsigned short *)(param_9 + 0x2c2) >> 10);
    *(unsigned char *)(*piVar1 + 0x53) = (unsigned char)((unsigned short)*(unsigned short *)(param_9 + 0x2c4) >> 10);
  }
  else {
    *(unsigned char *)(*piVar1 + 0x4c) = (unsigned char)(pfVar3->field_0x24 >> 10);
    *(unsigned char *)(*piVar1 + 0x4d) = (unsigned char)(pfVar3->field_0x26 >> 10);
    *(unsigned char *)(*piVar1 + 0x4e) = (unsigned char)(pfVar3->field_0x28 >> 10);
    *(unsigned char *)(*piVar1 + 0x4f) = (unsigned char)(pfVar3->field_0x2a >> 10);
    *(unsigned char *)(*piVar1 + 0x50) = (unsigned char)(pfVar3->field_0x2c >> 10);
    *(unsigned char *)(*piVar1 + 0x51) = (unsigned char)(pfVar3->field_0x2e >> 10);
    *(unsigned char *)(*piVar1 + 0x52) = (unsigned char)(pfVar3->field_0x30 >> 10);
    *(unsigned char *)(*piVar1 + 0x53) = (unsigned char)(pfVar3->field_0x32 >> 10);
  }
  *(char *)(*piVar1 + 0x54) = (char)temp_v7;
  *(char *)(*piVar1 + 0x55) = (char)temp_v8;
  *(unsigned char *)(*piVar1 + 0x56) = param_5;
  *(unsigned char *)(*piVar1 + 0x57) = param_6;
  *(unsigned char *)(*piVar1 + 0x58) = param_7;
  *(unsigned char *)(*piVar1 + 0x59) = param_8;
  temp_v4 = *piVar1;
  *(unsigned int *)(temp_v4 + 0x5c) = *param_1;
  *(unsigned int *)(temp_v4 + 0x60) = param_1[1];
  *(unsigned int *)(temp_v4 + 100) = param_1[2];
  temp_v1 = FUN_00340c10(0);
  FUN_002a1850(&temp_v6,0,temp_v1,temp_v4 + 0x5c);
  temp_v1 = 0xd2;
  *(unsigned int *)(temp_v4 + 0x68) = temp_v6;
  *(unsigned int *)(temp_v4 + 0x6c) = uStack_3c;
  temp_v2 = FUN_0014aa78();
  if ((temp_v2 != 0) && (*(int *)(temp_v2 + 0xec) == 0x16c)) {
    temp_v1 = 200;
  }
  temp_v5 = *(float *)(temp_v4 + 0x68);
  temp_v3 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  if (temp_v5 > temp_v3) {
    *(unsigned char *)(temp_v4 + 0xa4) = 0;
    temp_v5 = temp_v5 - *(float *)(temp_v4 + 0x78);
  }
  else {
    *(unsigned char *)(temp_v4 + 0xa4) = 1;
    temp_v5 = (*(float *)(temp_v4 + 0x70) + *(float *)(temp_v4 + 0x98)) - temp_v5;
  }
  *(float *)(temp_v4 + 0xb4) = temp_v5;
  return;
}
