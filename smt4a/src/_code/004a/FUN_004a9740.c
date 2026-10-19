/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a9740` (_code @ 0x4a9740, 0x230 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_7: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_7_stack;

extern int DAT_0057a9c8; /* 0x57a9c8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
extern unsigned int FUN_00152f54(void);
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184b80. */
/* Supplied declaration required: FUN_002a1850. */
/* Supplied declaration required: FUN_00358e94. */
/* Supplied declaration required: FUN_00387240. */
extern unsigned int FUN_004aaff0(unsigned int, int);
extern int aeabi_idivmod(int, unsigned int);


void FUN_004a9740(unsigned int param_1,int param_2,int param_3,unsigned int param_4,int param_5,
                 int param_6,int param_7)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s1, in_s2; 10 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int in_fpscr;
  float in_s0;
  float in_s1;
  unsigned int in_s2;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  int iStack_30;
  int iStack_2c;
  unsigned int uStack_28;
  
  temp_v6 = DAT_0057a9c8;
  temp_v9 = in_s0;
  temp_v8 = in_s1;
  temp_v11 = in_s2;
  temp_v12 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  uStack_28 = param_4;
  if (param_7 != 0) {
    temp_v10 = in_s1;
    temp_v2 = FUN_00152f54();
    FUN_002a1850(&temp_v9,0,temp_v2);
    temp_v3 = FUN_001834a4(0xd,0x41a);
    temp_v8 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(temp_v3 + 0xc) + 2) << 1,
                                       (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8 = 240.0f - temp_v8;
    temp_v5 = in_fpscr & 0xfffffff;
    temp_v0 = temp_v5 | ((unsigned int)(temp_v10 < temp_v8) << 0x1f) | ((unsigned int)(temp_v10 == temp_v8) << 0x1e);
    in_fpscr = temp_v0 | ((unsigned int)((temp_v10 != temp_v10) || (temp_v8 != temp_v8)) << 0x1c);
    temp_v1 = (unsigned char)(temp_v0 >> 0x18);
    if ((unsigned char)((temp_v1 >> 6) & 1) || temp_v1 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
      temp_v5 = temp_v5 | ((unsigned int)(temp_v10 < 0.0f) << 0x1f) | ((unsigned int)(temp_v10 == 0.0f) << 0x1e);
      in_fpscr = temp_v5 | ((unsigned int)(temp_v10 != temp_v10) << 0x1c);
      temp_v1 = (unsigned char)(temp_v5 >> 0x18);
      temp_v8 = temp_v10;
      if ((unsigned char)((temp_v1 >> 6) & 1) || temp_v1 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
        temp_v8 = 0.0f;
      }
    }
  }
  temp_v10 = temp_v8;
  temp_v6 = temp_v6 + param_2 * 0x400;
  *(unsigned char *)(temp_v6 + 0x7994) = 1;
  *(char *)(temp_v6 + 0x7995) = (char)param_7;
  *(int *)(temp_v6 + 0x79ac) = param_3;
  *(float *)(temp_v6 + 0x7988) = temp_v9;
  *(float *)(temp_v6 + 0x798c) = temp_v10;
  *(unsigned int *)(temp_v6 + 0x7990) = temp_v11;
  *(unsigned char *)(temp_v6 + 0x79b0) = 0;
  temp_v2 = FUN_004aaff0(temp_v12,param_2);
  temp_v5 = 10000;
  temp_v3 = 4;
  do {
    *(unsigned int *)(temp_v6 + temp_v3 * 4 + 0x7998) = 0;
    temp_v7 = temp_v6 + temp_v3 * 0x8c + 0x75b4;
    FUN_001846d0(temp_v7,3);
    FUN_00387240(temp_v7,0xd,temp_v3 + 0x41a);
    temp_v8 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00358e94(temp_v7,(int)(short)(int)(temp_v9 + temp_v8),(int)(short)(int)temp_v10);
    if (param_5 == 0) {
      if (param_6 != 0) {
        temp_v4 = aeabi_idivmod(param_3,temp_v5);
        temp_v4 = temp_v4 + 0x7f8;
      }
      else {
        temp_v4 = aeabi_idivmod(param_3,temp_v5);
        temp_v4 = temp_v4 + 0x7e4;
      }
    }
    else if (param_6 != 0) {
      temp_v4 = aeabi_idivmod(param_3,temp_v5);
      temp_v4 = temp_v4 + 0x802;
    }
    else {
      temp_v4 = aeabi_idivmod(param_3,temp_v5);
      temp_v4 = temp_v4 + 0x7ee;
    }
    FUN_00184b80(temp_v7,temp_v4);
    temp_v7 = aeabi_idivmod(param_3,temp_v5);
    temp_v3 = temp_v3 - 1;
    param_3 = param_3 - temp_v7 * temp_v5;
    temp_v5 = temp_v5 / 10;
  } while (-1 < temp_v3);
  return;
}
