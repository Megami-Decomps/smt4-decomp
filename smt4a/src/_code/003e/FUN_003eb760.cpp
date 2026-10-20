/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eb760` (_code @ 0x3eb760, 0x2ac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int FUN_002e6dd4(unsigned char *, int);
int FUN_004bd274(unsigned int, unsigned int);
int FUN_004bd294(unsigned int, unsigned int);
int FUN_004da024(void);
int FUN_004da0b4(void);
int clearTwoWords(unsigned char *);

typedef struct fn_003eb760_arg0 fn_003eb760_arg0;
struct fn_003eb760_arg0 {
    unsigned char pad_0x0[0x3c];
    undefined1 field_0x3c; /* +0x3c */
    unsigned char pad_0x3d[0x2];
    undefined1 field_0x3f; /* +0x3f */
    undefined1 field_0x40; /* +0x40 */
    undefined1 field_0x41; /* +0x41 */
};

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

extern int FUN_00168518(int, unsigned short);
extern int FUN_00177654(void);
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_002e6dd4. */
/* Supplied declaration required: FUN_004bd274. */
/* Supplied declaration required: FUN_004bd294. */
/* Supplied declaration required: FUN_004da024. */
/* Supplied declaration required: FUN_004da0b4. */
/* Supplied declaration required: clearTwoWords. */


void FUN_003eb760(fn_003eb760_arg0 *param_1,unsigned char *param_2,unsigned int param_3)

{
/* irregular: 7 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  short temp_v2;
  short temp_v3;
  short temp_v4;
  unsigned char temp_v5;
  unsigned short temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  
  temp_v7 = FUN_00177654();
  *(unsigned short *)(param_2 + 2) = *(unsigned short *)(param_3 + 0x62);
  *param_2 = 8;
  *(unsigned short *)(param_2 + 8) = 0xffff;
  *(unsigned short *)(param_2 + 4) = 0xffff;
  *(unsigned short *)(param_2 + 6) = 0xffff;
  param_2[0xd4] = 0;
  param_2[0xd5] = 0;
  param_2[0xd6] = 0;
  param_2[0xd7] = 0;
  temp_v1 = *(short *)(param_3 + 0x2a);
  *(int *)(param_2 + 0xd8) = (int)temp_v1;
  temp_v2 = *(short *)(param_3 + 0xe);
  *(int *)(param_2 + 0xdc) = (int)temp_v2;
  temp_v3 = *(short *)(param_3 + 0x2c);
  *(int *)(param_2 + 0xe0) = (int)temp_v3;
  temp_v4 = *(short *)(param_3 + 0x10);
  *(int *)(param_2 + 0xe4) = (int)temp_v4;
  *(unsigned short *)(param_2 + 0xe8) = *(unsigned short *)(param_3 + 0x12);
  *(unsigned short *)(param_2 + 0xea) = *(unsigned short *)(param_3 + 0x14);
  *(unsigned short *)(param_2 + 0xec) = *(unsigned short *)(param_3 + 0x16);
  *(unsigned short *)(param_2 + 0xee) = *(unsigned short *)(param_3 + 0x18);
  *(unsigned short *)(param_2 + 0xf0) = *(unsigned short *)(param_3 + 0x1a);
  *(int *)(param_2 + 0xf4) = (int)temp_v1;
  *(int *)(param_2 + 0xf8) = (int)temp_v2;
  *(int *)(param_2 + 0xfc) = (int)temp_v3;
  *(int *)(param_2 + 0x100) = (int)temp_v4;
  *(unsigned int *)(param_2 + 0x104) = *(unsigned int *)(param_2 + 0xe8);
  *(unsigned int *)(param_2 + 0x108) = *(unsigned int *)(param_2 + 0xec);
  *(unsigned int *)(param_2 + 0x10c) = *(unsigned int *)(param_2 + 0xf0);
  *(unsigned short *)(param_2 + 0x110) = *(unsigned short *)(param_3 + 0x60);
  *(unsigned short *)(param_2 + 0x116) = *(unsigned short *)(param_3 + 100);
  temp_v9 = 0;
  if (temp_v7 != 0) {
    *(unsigned short *)(param_2 + 4) = *(unsigned short *)(param_3 + 300);
    *(unsigned short *)(param_2 + 6) = *(unsigned short *)(param_3 + 0x12e);
    do {
      temp_v6 = (unsigned short)temp_v9 & 0xff;
      FUN_004da024();
      *(unsigned short *)(param_2 + temp_v9 * 2 + 0x128) =
           (temp_v6 & 0x3ff) | (*(unsigned short *)(param_2 + temp_v9 * 2 + 0x128) & 0xfc00);
      temp_v8 = temp_v9 & 0xff;
      FUN_004da0b4();
      *(unsigned short *)(param_2 + temp_v9 * 2 + 0x128) =
           (unsigned short)(temp_v8 << 10) | (*(unsigned short *)(param_2 + temp_v9 * 2 + 0x128) & 0x3ff);
      temp_v6 = (unsigned short)temp_v9 & 0xff;
      FUN_004da024();
      *(unsigned short *)(param_2 + temp_v9 * 2 + 0x152) =
           (temp_v6 & 0x3ff) | (*(unsigned short *)(param_2 + temp_v9 * 2 + 0x152) & 0xfc00);
      temp_v8 = temp_v9 & 0xff;
      FUN_004da0b4();
      *(unsigned short *)(param_2 + temp_v9 * 2 + 0x152) =
           (unsigned short)((temp_v8 & 0x3f) << 10) | (*(unsigned short *)(param_2 + temp_v9 * 2 + 0x152) & 0x3ff);
      temp_v10 = temp_v9 + 1;
      param_2[temp_v9 + 0x1a6] = (char)(temp_v8 & 0x3f);
      temp_v9 = temp_v10;
    } while ((int)temp_v10 < 0x15);
    temp_v7 = FUN_00168518((int)*(short *)(param_3 + 300),*(unsigned short *)(param_3 + 0x12e));
    param_2[0x1bb] = (char)*(unsigned int *)(temp_v7 + 0xc);
  }
  else {
    do {
      temp_v8 = param_3;
      FUN_004bd274(param_3,temp_v9 & 0xff);
      *(unsigned short *)(param_2 + temp_v9 * 2 + 0x128) =
           ((unsigned short)temp_v8 & 0x3ff) | (*(unsigned short *)(param_2 + temp_v9 * 2 + 0x128) & 0xfc00);
      temp_v8 = param_3;
      FUN_004bd294(param_3,temp_v9 & 0xff);
      *(unsigned short *)(param_2 + temp_v9 * 2 + 0x128) =
           (unsigned short)(temp_v8 << 10) | (*(unsigned short *)(param_2 + temp_v9 * 2 + 0x128) & 0x3ff);
      temp_v8 = param_3;
      FUN_004bd274(param_3,temp_v9 & 0xff);
      *(unsigned short *)(param_2 + temp_v9 * 2 + 0x152) =
           ((unsigned short)temp_v8 & 0x3ff) | (*(unsigned short *)(param_2 + temp_v9 * 2 + 0x152) & 0xfc00);
      temp_v8 = param_3;
      FUN_004bd294(param_3,temp_v9 & 0xff);
      *(unsigned short *)(param_2 + temp_v9 * 2 + 0x152) =
           (unsigned short)((temp_v8 & 0x3f) << 10) | (*(unsigned short *)(param_2 + temp_v9 * 2 + 0x152) & 0x3ff);
      temp_v10 = temp_v9 + 1;
      param_2[temp_v9 + 0x1a6] = (char)(temp_v8 & 0x3f);
      temp_v9 = temp_v10;
    } while ((int)temp_v10 < 0x15);
    temp_v9 = (unsigned int)*(unsigned short *)(param_2 + 2);
    FUN_00184310();
    param_2[0x1bb] = *(unsigned char *)(temp_v9 + 0x3b);
    temp_v0 = *(char *)(temp_v9 + 9);
    temp_v5 = 1;
    if (temp_v0 != '\x01') {
      if (temp_v0 == '\x04') {
        param_2[0x1bc] = 0;
      }
      else if (temp_v0 == '\x05') {
        temp_v5 = 2;
        param_2[0x1bc] = temp_v5;
      }
    }
    else {
      param_2[0x1bc] = temp_v5;
    }
  }
  *(unsigned short *)(param_2 + 0x112) = 0;
  *(unsigned short *)(param_2 + 0x114) = 0;
  *(unsigned int *)(param_2 + 0x228) = 0;
  clearTwoWords(param_2 + 0x1be);
  clearTwoWords(param_2 + 0x1c6);
  clearTwoWords(param_2 + 0x1ce);
  FUN_002e6dd4(param_2 + 0x1d6,0x50);
  return;
}

} /* extern "C" */
