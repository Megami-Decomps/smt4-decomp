/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011bc64` (_code @ 0x11bc64, 0x1a8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00133ab8(int, int);
int rt_malloc(...);
int FUN_002e9300(unsigned char [12], unsigned char *);
int FUN_002e9318(unsigned char [12]);
int FUN_002f5020(int, unsigned char *, int, int);
int FUN_002f5928(...);
int FUN_002f9e68(int, int);
int FUN_003116c8(int *, int, unsigned int);
int FUN_003116d6(int *, int, unsigned int *);

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
} param_1_stack;

extern unsigned char LAB_0011be18; /* 0x11be18 */
extern unsigned char LAB_0013315b; /* 0x13315b */
extern unsigned char DAT_0055a7b0; /* 0x55a7b0 */
extern unsigned int DAT_00594a50; /* 0x594a50 */
extern int DAT_00594a5c; /* 0x594a5c */

extern int FUN_0012272c(int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00133ab8. */
extern int *FUN_002e4e86(int *, unsigned int *);
/* Supplied declaration required: rt_malloc. */
extern int FUN_002e760a(unsigned int);
/* Supplied declaration required: FUN_002e9300. */
/* Supplied declaration required: FUN_002e9318. */
/* Supplied declaration required: FUN_002f5020. */
/* Supplied declaration required: FUN_002f5928. */
/* Supplied declaration required: FUN_002f9e68. */
extern unsigned int FUN_00311520(unsigned int, int *);
extern unsigned int FUN_00311532(unsigned int, int *);
/* Supplied declaration required: FUN_003116c8. */
/* Supplied declaration required: FUN_003116d6. */
extern unsigned int FUN_00311700(int, unsigned char *, unsigned int);


int FUN_0011bc64(unsigned int *param_1)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int *piVar6;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7 [2];
  unsigned int *temp_v8;
  unsigned char temp_v9 [12];
  int temp_v10;
  int temp_v11;
  unsigned int temp_v12 [3];
  
  *param_1 = (unsigned int)&DAT_0055a7b0;
  *(unsigned char *)(param_1 + 1) = 0;
  *(unsigned char *)((int)param_1 + 5) = 0;
  temp_v0 = FUN_002f5928(param_1 + 2,0x8000);
  *(unsigned int *)(temp_v0 + 0x34) = 0xffffffff;
  piVar6 = (int *)(temp_v0 + 0x38);
  temp_v6 = (unsigned int)((unsigned int)(*(unsigned short *)((unsigned char *)&temp_v6 + 2)) << 0x10);
  temp_v7[0] = 0;
  temp_v7[1] = 0;
  *piVar6 = 0;
  *(unsigned int *)(temp_v0 + 0x3c) = 0;
  *(unsigned int *)(temp_v0 + 0x40) = 0;
  temp_v11 = 0;
  temp_v12[0] = FUN_00311532(0,piVar6);
  piVar2 = (int *)FUN_002e4e86(&temp_v11,temp_v12);
  temp_v4 = *piVar2;
  temp_v1 = rt_malloc(temp_v4 * 0xc);
  *piVar6 = temp_v1;
  temp_v8 = &temp_v6;
  for (temp_v2 = temp_v11; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
    FUN_003116d6(piVar6,temp_v1,temp_v8);
    temp_v1 = temp_v1 + 0xc;
  }
  *(int *)(temp_v0 + 0x40) = *piVar6 + temp_v4 * 0xc;
  *(int *)(temp_v0 + 0x3c) = *piVar6 + temp_v11 * 0xc;
  temp_v0 = temp_v0 + 0x4c;
  FUN_002f5020(temp_v0,&LAB_0013315b,8,2);
  temp_v7[0] = temp_v7[0] & 0xffff0000;
  piVar6 = (int *)(temp_v0 + 0x10);
  temp_v7[1] = 0;
  *piVar6 = 0;
  *(unsigned int *)(temp_v0 + 0x14) = 0;
  *(unsigned int *)(temp_v0 + 0x18) = 0;
  temp_v10 = 0;
  temp_v12[0] = FUN_00311520(0,piVar6);
  piVar2 = (int *)FUN_002e4e86(&temp_v10,temp_v12);
  temp_v1 = *piVar2;
  temp_v4 = rt_malloc();
  *piVar6 = temp_v4;
  temp_v6 = (unsigned int)temp_v7;
  for (temp_v2 = temp_v10; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
    FUN_003116c8(piVar6,temp_v4,temp_v6);
    temp_v4 = temp_v4 + 8;
  }
  *(int *)(temp_v0 + 0x18) = *piVar6 + temp_v1 * 8;
  *(int *)(temp_v0 + 0x14) = *piVar6 + temp_v10 * 8;
  temp_v2 = FUN_002f5928(temp_v0 + 0x1c,0x10000);
  temp_v2 = FUN_0012272c(temp_v2 + 0x38,0x10000,0);
  temp_v1 = FUN_002f5928(temp_v2 + 0x40,0x10000);
  temp_v0 = temp_v1 - 0xe8;
  FUN_00133ab8(temp_v1 - 0xa8,2);
  FUN_002f9e68(temp_v1 - 0x84,2);
  temp_v2 = 0;
  do {
    temp_v5 = temp_v2 * 4 + temp_v0;
    *(unsigned int *)(temp_v5 + 0xa0) = 0;
    temp_v4 = FUN_002e760a(0x30);
    if (temp_v4 != 0) {
      temp_v3 = FUN_002f5928(temp_v4,0x10000);
    }
    else {
      temp_v3 = 0;
    }
    *(unsigned int *)(temp_v5 + 0x4c) = temp_v3;
    temp_v4 = temp_v2 * 8 + temp_v0;
    *(unsigned char *)(temp_v0 + temp_v2 + 0x38) = 0;
    *(unsigned char *)(temp_v0 + temp_v2 + 0x3a) = 0;
    temp_v2 = temp_v2 + 1;
    *(unsigned short *)(temp_v4 + 0x54) = 0;
    *(unsigned int *)(temp_v4 + 0x58) = 0;
  } while (temp_v2 < 2);
  temp_v2 = FUN_002e760a(0x34);
  temp_v3 = DAT_00594a50;
  if (temp_v2 != 0) {
    FUN_002e9300(temp_v9,&LAB_0011be18);
    temp_v3 = FUN_00311700(temp_v2,temp_v9,temp_v3);
    *(unsigned int *)(temp_v1 + 0x30) = temp_v3;
    FUN_002e9318(temp_v9);
  }
  else {
    *(unsigned int *)(temp_v1 + 0x30) = 0;
  }
  if (DAT_00594a5c != -0x80000000) {
    *(int *)(*(int *)(temp_v1 + 0x30) + 0x20) = DAT_00594a5c;
  }
  return temp_v0;
}

} /* extern "C" */
