/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026fd50` (_code @ 0x26fd50, 0x3a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010063a(unsigned short *, int, int, unsigned char *);
int FUN_00180118(unsigned int);
int FUN_00184310(void);
int FUN_001a9110(unsigned short *, unsigned short *);
int FUN_002e342c(unsigned short *, unsigned int);
int FUN_002e6354(unsigned short *, int, int, unsigned int *, unsigned int *);
int FUN_004bd294(int, unsigned int);
int rt_memcpy_w(unsigned short *, int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern unsigned char LAB_003b8e98; /* 0x3b8e98 */
extern unsigned char DAT_00588fd0; /* 0x588fd0 */

/* Supplied declaration required: FUN_0010063a. */
/* Supplied declaration required: FUN_00180118. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_001a9110. */
extern unsigned int FUN_002b4dcc(int);
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_002e6354. */
extern unsigned int FUN_003a6f84(int);
extern int FUN_004bd21c(int);
/* Supplied declaration required: FUN_004bd294. */
extern int FUN_004cc8d8(unsigned short, unsigned short);
extern int FUN_004ccbf0(unsigned short);
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0026fd50(unsigned short *param_1,int param_2,int param_3,unsigned int *param_4)

{
/* irregular: 8 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned short *puVar16;
  
  temp_v1 = (*(int *)((unsigned char *)&DAT_00588fd0 + 0x4));
  FUN_002e6354(param_1,0x640,param_3,param_4,param_4);
  *param_1 = *(unsigned short *)(param_2 + 0x62);
  param_1[1] = *(unsigned short *)(param_2 + 100);
  if (param_3 != 0) {
    temp_v2 = FUN_004ccbf0(*(unsigned short *)(param_2 + 100));
    *(int *)(param_1 + 2) = temp_v2 - *(int *)(param_2 + 0x30);
  }
  else {
    temp_v2 = FUN_004cc8d8(*(unsigned short *)(param_2 + 0x62),*(unsigned short *)(param_2 + 100));
    *(int *)(param_1 + 2) = temp_v2 - *(int *)(param_2 + 0x30);
  }
  *(int *)(param_1 + 4) = (int)*(short *)(param_2 + 0x2a);
  *(int *)(param_1 + 6) = (int)*(short *)(param_2 + 0x2c);
  temp_v3 = FUN_002b4dcc(param_2);
  *(unsigned int *)(param_1 + 8) = temp_v3;
  *(int *)(param_1 + 10) = (int)*(short *)(param_2 + 0x10);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = *(unsigned short *)(param_2 + 0x60);
  *(unsigned int *)(param_1 + 0x2d0) = 0xffffffff;
  *(unsigned int *)(param_1 + 0xf) = *(unsigned int *)(param_2 + 0xe);
  *(unsigned int *)(param_1 + 0x11) = *(unsigned int *)(param_2 + 0x12);
  *(unsigned int *)(param_1 + 0x13) = *(unsigned int *)(param_2 + 0x16);
  param_1[0x15] = *(unsigned short *)(param_2 + 0x1a);
  rt_memcpy_w(param_1 + 0x16,param_2,0xe);
  if (param_3 != 0) {
    rt_memcpy_w(param_1 + 0x28,param_2 + 0x34,0x10);
  }
  else if (*(char *)(temp_v1 + 0x2017) != '\x11') {
    temp_v2 = FUN_004bd21c(param_2);
    rt_memcpy_w(param_1 + 0x28,param_2 + 0x34,temp_v2 << 1);
  }
  else {
    temp_v3 = *(unsigned int *)(param_2 + 0x38);
    temp_v9 = *(unsigned int *)(param_2 + 0x3c);
    temp_v10 = *(unsigned int *)(param_2 + 0x40);
    *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_2 + 0x34);
    *(unsigned int *)(param_1 + 0x2a) = temp_v3;
    *(unsigned int *)(param_1 + 0x2c) = temp_v9;
    *(unsigned int *)(param_1 + 0x2e) = temp_v10;
  }
  temp_v4 = (unsigned int)*(unsigned short *)(param_2 + 0x62);
  FUN_00180118(temp_v4);
  FUN_002e342c(param_1 + 0x2d2,temp_v4);
  if ((short)param_1[0x11] >= 1000) {
    param_1[0x11] = 999;
  }
  if ((short)param_1[0x12] >= 1000) {
    param_1[0x12] = 999;
  }
  if ((short)param_1[0x13] >= 1000) {
    param_1[0x13] = 999;
  }
  if ((short)param_1[0x14] >= 1000) {
    param_1[0x14] = 999;
  }
  temp_v4 = 0;
  if ((short)param_1[0x15] >= 1000) {
    param_1[0x15] = 999;
  }
  do {
    temp_v2 = param_2;
    FUN_004bd294(param_2,temp_v4 & 0xff);
    temp_v7 = temp_v4 + 1;
    *(char *)((int)param_1 + temp_v4 + 0x3a) = (char)temp_v2;
    temp_v4 = temp_v7;
  } while ((int)temp_v7 < 8);
  puVar16 = param_1 + 0x300;
  temp_v3 = *(unsigned int *)(param_2 + 0x6c);
  temp_v9 = *(unsigned int *)(param_2 + 0x70);
  temp_v10 = *(unsigned int *)(param_2 + 0x74);
  temp_v11 = *(unsigned int *)(param_2 + 0x78);
  temp_v12 = *(unsigned int *)(param_2 + 0x7c);
  temp_v13 = *(unsigned int *)(param_2 + 0x80);
  temp_v14 = *(unsigned int *)(param_2 + 0x84);
  *(unsigned int *)(param_1 + 0x30) = *(unsigned int *)(param_2 + 0x68);
  *(unsigned int *)(param_1 + 0x32) = temp_v3;
  *(unsigned int *)(param_1 + 0x34) = temp_v9;
  *(unsigned int *)(param_1 + 0x36) = temp_v10;
  *(unsigned int *)(param_1 + 0x38) = temp_v11;
  *(unsigned int *)(param_1 + 0x3a) = temp_v12;
  *(unsigned int *)(param_1 + 0x3c) = temp_v13;
  *(unsigned int *)(param_1 + 0x3e) = temp_v14;
  temp_v8 = 0;
  temp_v2 = 0;
  temp_v3 = *(unsigned int *)(param_2 + 0x8c);
  temp_v9 = *(unsigned int *)(param_2 + 0x90);
  temp_v10 = *(unsigned int *)(param_2 + 0x94);
  temp_v11 = *(unsigned int *)(param_2 + 0x98);
  temp_v12 = *(unsigned int *)(param_2 + 0x9c);
  temp_v13 = *(unsigned int *)(param_2 + 0xa0);
  temp_v14 = *(unsigned int *)(param_2 + 0xa4);
  *(unsigned int *)(param_1 + 0x40) = *(unsigned int *)(param_2 + 0x88);
  *(unsigned int *)(param_1 + 0x42) = temp_v3;
  *(unsigned int *)(param_1 + 0x44) = temp_v9;
  *(unsigned int *)(param_1 + 0x46) = temp_v10;
  *(unsigned int *)(param_1 + 0x48) = temp_v11;
  *(unsigned int *)(param_1 + 0x4a) = temp_v12;
  *(unsigned int *)(param_1 + 0x4c) = temp_v13;
  *(unsigned int *)(param_1 + 0x4e) = temp_v14;
  param_1[0x30c] = 0;
  do {
    if (*(char *)(param_2 + temp_v2 + 0x4c) != '\0') {
      temp_v3 = FUN_003a6f84((int)(short)temp_v2);
      *(unsigned int *)(param_1 + temp_v8 * 4 + 0x2dc) = temp_v3;
      param_1[temp_v8 * 4 + 0x2df] = (short)temp_v2;
      temp_v0 = *(char *)(param_2 + temp_v2 + 0x4c);
      *(char *)(param_1 + temp_v8 * 4 + 0x2de) = temp_v0;
      if (temp_v0 >= '\n') {
        temp_v5 = 9;
        *(unsigned char *)(param_1 + temp_v8 * 4 + 0x2de) = temp_v5;
      }
      else if (temp_v0 < -9) {
        temp_v5 = 0xf7;
        *(unsigned char *)(param_1 + temp_v8 * 4 + 0x2de) = temp_v5;
      }
      temp_v8 = temp_v8 + 1;
    }
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x12) break;
    while( 1 ) {
      while( 1 ) {
        while( 1 ) {
          while (temp_v2 == 2) {
            temp_v2 = 3;
          }
          if (temp_v2 != 0xb) break;
          temp_v2 = 0xc;
        }
        if (temp_v2 != 0xd) break;
        temp_v2 = 0xe;
      }
      if (temp_v2 != 0xf) break;
      temp_v2 = 0x10;
    }
  } while (temp_v2 != 0x11);
  temp_v4 = 0xc - temp_v8;
  if (0 < (int)temp_v4) {
    temp_v2 = 0;
    if (temp_v8 >= 0xc) {
      temp_v7 = 0;
    }
    else {
      temp_v7 = temp_v4 & 1;
      if (temp_v7 == 1) {
        temp_v2 = 1;
        *(unsigned int *)(param_1 + temp_v8 * 4 + 0x2dc) = 0xffffffff;
      }
    }
    for (; (int)temp_v7 < (int)temp_v4; temp_v7 = temp_v7 + 2) {
      temp_v6 = temp_v2 + 1;
      *(unsigned int *)(param_1 + (temp_v8 + temp_v2) * 4 + 0x2dc) = 0xffffffff;
      temp_v2 = temp_v2 + 2;
      *(unsigned int *)(param_1 + (temp_v8 + temp_v6) * 4 + 0x2dc) = 0xffffffff;
    }
  }
  FUN_0010063a(param_1 + 0x2dc,0xc,8,&LAB_003b8e98);
  puVar16[0xc] = (short)temp_v8;
  if (param_4 != (unsigned int *)0x0) {
    *(unsigned int *)(param_1 + 0x30d) = *param_4;
    *(unsigned int *)(param_1 + 0x30f) = param_4[1];
    *(unsigned int *)(param_1 + 0x311) = param_4[2];
    *(unsigned int *)(param_1 + 0x313) = param_4[3];
    *(unsigned int *)(param_1 + 0x315) = param_4[4];
    *(unsigned char *)(param_1 + 0x317) = *(unsigned char *)(param_4 + 5);
  }
  else {
    FUN_001a9110(param_1 + 0x30d,param_1 + 0x1d);
  }
  temp_v4 = (unsigned int)*(unsigned short *)(param_2 + 0x62);
  FUN_00184310();
  *(unsigned char *)(temp_v1 + 0x2010) = (*(unsigned char *)(temp_v4 + 0xb3) & 2) == 0;
  return;
}

} /* extern "C" */
