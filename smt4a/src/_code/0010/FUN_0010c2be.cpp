/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010c2be` (_code @ 0x10c2be, 0x1b2 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7516(unsigned int, unsigned char [4]);
int FUN_002e7526(int, unsigned char [4]);
int constructObj00559344(unsigned char [8], int);
int FUN_002f07b8(...);
int FUN_002f5d1e(void);
int FUN_002f5f98(...);

/* stack frame of param_2: 7 slot(s), 15 byte(s) */
typedef struct {
    unsigned short sp20; /* 0x20: local_20 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned char sp3C; /* 0x3c: local_3c */
    unsigned char sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned short sp4C; /* 0x4c: local_4c */
    unsigned char sp50; /* 0x50: local_50 */
} param_2_stack;

/* Supplied declaration required: FUN_002e7516. */
/* Supplied declaration required: FUN_002e7526. */
/* Supplied declaration required: constructObj00559344. */
extern int FUN_002f035c(unsigned char *, unsigned char *);
/* Supplied declaration required: FUN_002f07b8. */
/* Supplied declaration required: FUN_002f5d1e. */
extern int FUN_002f5d2a(int, int);
/* Supplied declaration required: FUN_002f5f98. */
extern int FUN_002f5fb0(int, unsigned char *, unsigned int, unsigned int);


void FUN_0010c2be(unsigned int param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [4];
  unsigned short temp_v4;
  int temp_v5;
  unsigned char temp_v6 [8];
  unsigned char temp_v7 [4];
  int temp_v8;
  unsigned char temp_v9 [8];
  unsigned char temp_v10 [8];
  unsigned char temp_v11 [4];
  unsigned short temp_v12;
  
  temp_v5 = param_2 + 0x90;
  FUN_002f5d1e();
  if (((*(unsigned short *)(param_2 + 0x3c) & 0xf) == 0) || ((*(unsigned short *)(param_2 + 0x3c) & 0xf) == 1)) {
    temp_v6[0] = 0;
    temp_v1 = temp_v5;
    FUN_002f5f98(temp_v5,temp_v6);
    if (temp_v1 == 0) {
      return;
    }
    temp_v6[0] = 4;
    temp_v1 = temp_v5;
    FUN_002f5f98(temp_v5,temp_v6);
    temp_v8 = temp_v5;
    if (temp_v1 == 0) {
      return;
    }
    FUN_002e7516(*(unsigned int *)(param_2 + 0x8c),temp_v3);
    temp_v8 = temp_v8 + 8;
    temp_v1 = FUN_002f5fb0(temp_v8,temp_v3,4,0xffffffff);
    if (temp_v1 == 0) {
      return;
    }
    temp_v6[0] = 1;
    temp_v1 = temp_v5;
    FUN_002f5f98(temp_v5,temp_v6);
    if (temp_v1 == 0) {
      return;
    }
    temp_v6[0] = 0x10;
    temp_v1 = temp_v5;
    FUN_002f5f98(temp_v5,temp_v6);
    if (temp_v1 == 0) {
      return;
    }
    if (*(int *)(param_2 + 0x60) != 0) {
      temp_v1 = FUN_002f5d2a(temp_v5,param_2 + 0x50);
      if (temp_v1 == 0) {
        return;
      }
    }
    else {
      temp_v3[0] = 0;
      temp_v2 = 0;
      do {
        temp_v1 = temp_v5;
        FUN_002f5f98(temp_v5,temp_v3);
        if (temp_v1 == 0) {
          return;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 0x10);
    }
    if ((*(unsigned short *)(param_2 + 0x3c) & 0xf) == 1) {
      constructObj00559344(temp_v10,0);
      FUN_002f07b8(temp_v9,param_2);
      temp_v1 = FUN_002f035c(temp_v9,temp_v10);
      if (temp_v1 == 0) {
        temp_v0 = 0;
      }
      else {
        temp_v0 = 1;
      }
    }
    else {
      temp_v0 = 0;
    }
    if (temp_v0) {
      temp_v7[0] = 3;
      temp_v1 = temp_v5;
      FUN_002f5f98(temp_v5,temp_v7);
      if (temp_v1 == 0) {
        return;
      }
      temp_v7[0] = 2;
      temp_v1 = temp_v5;
      FUN_002f5f98(temp_v5,temp_v7);
      if (temp_v1 == 0) {
        return;
      }
      FUN_002f07b8(temp_v3,param_2);
      temp_v12 = temp_v4;
      FUN_002e7526(temp_v4,temp_v11);
      temp_v1 = FUN_002f5fb0(temp_v8,temp_v11,2,0xffffffff);
      if (temp_v1 != 1) {
        return;
      }
    }
    temp_v6[0] = 4;
    temp_v1 = temp_v5;
    FUN_002f5f98(temp_v5,temp_v6);
    if (temp_v1 == 0) {
      return;
    }
    temp_v6[0] = 1;
    temp_v1 = temp_v5;
    FUN_002f5f98(temp_v5,temp_v6);
    if (temp_v1 == 0) {
      return;
    }
    temp_v6[0] = *(unsigned char *)(param_2 + 0x67);
    temp_v1 = temp_v5;
    FUN_002f5f98(temp_v5,temp_v6);
    if (temp_v1 == 0) {
      return;
    }
  }
  if ((*(unsigned short *)(param_2 + 0x3c) & 0xf) == 2) {
    temp_v3[0] = 2;
    temp_v1 = temp_v5;
    FUN_002f5f98();
    if (temp_v1 != 0) {
      temp_v3[0] = 1;
      temp_v1 = temp_v5;
      FUN_002f5f98();
      if (temp_v1 != 0) {
        temp_v3[0] = *(unsigned char *)(param_2 + 100);
        FUN_002f5f98();
      }
    }
  }
  return;
}

} /* extern "C" */
