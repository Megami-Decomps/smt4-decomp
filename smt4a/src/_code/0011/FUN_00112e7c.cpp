/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00112e7c` (_code @ 0x112e7c, 0x282 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9acc(int *, int);
int FUN_002e9ec8(int, unsigned int);
int FUN_002ea3d0(...);
int FUN_002ea43c(int);
int FUN_002ea704(void);
int FUN_002eb858(unsigned char [32], unsigned int, int);
int FUN_002ede60(...);
int FUN_002f2e3c(int, int, int, int, unsigned int);
int FUN_002f3490(unsigned char [36]);
int FUN_002fa18c(void);
int FUN_002fa434(unsigned char [36], unsigned int);
int FUN_002fd750(...);
int FUN_002fda98(...);
int FUN_002fdabe(...);
int FUN_002fdafa(...);
int rt_memcpy_w(unsigned int, unsigned int);

/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
} param_1_stack;

extern unsigned char LAB_00113108; /* 0x113108 */

extern unsigned int FUN_001127d8(unsigned char *);
extern unsigned int FUN_001322ae(int *);
/* Supplied declaration required: FUN_002e9acc. */
extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea43c. */
/* Supplied declaration required: FUN_002ea704. */
/* Supplied declaration required: FUN_002eb858. */
/* Supplied declaration required: FUN_002ede60. */
/* Supplied declaration required: FUN_002f2e3c. */
/* Supplied declaration required: FUN_002f3490. */
/* Supplied declaration required: FUN_002fa18c. */
/* Supplied declaration required: FUN_002fa434. */
/* Supplied declaration required: FUN_002fd750. */
/* Supplied declaration required: FUN_002fda98. */
extern unsigned int FUN_002fdaa0(unsigned char *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002fdabe. */
/* Supplied declaration required: FUN_002fdafa. */
extern int FUN_002fdb0c(unsigned char *);
/* Supplied declaration required: rt_memcpy_w. */


void FUN_00112e7c(int param_1)

{
/* irregular: 16 native warning(s); review required */
  unsigned short temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int *temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  int temp_v11 [2];
  int *temp_v12 [2];
  int temp_v13;
  int temp_v14;
  unsigned char temp_v15 [36];
  unsigned char temp_v16 [32];
  unsigned char temp_v17 [16];
  unsigned char temp_v18 [32];
  unsigned char temp_v19 [32];
  unsigned char temp_v20 [16];
  
  temp_v2 = FUN_002ea704();
  if (temp_v2 == 0) {
    temp_v2 = FUN_002e9af4();
    FUN_002e9ec8(temp_v2,*(unsigned int *)(param_1 + 0x1f0));
    if (temp_v2 != 0) {
      FUN_002fa18c();
    }
    FUN_002ea43c(param_1);
    return;
  }
  temp_v6 = 0;
  do {
    temp_v3 = FUN_001127d8(temp_v16);
    rt_memcpy_w(temp_v6 * 0x14 + param_1 + 0x370,temp_v3);
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 3);
  FUN_002e9acc(&temp_v9,0x9c4);
  *(unsigned int *)(param_1 + 0x2e0) = temp_v9;
  *(unsigned int *)(param_1 + 0x2e4) = temp_v10;
  temp_v8 = (unsigned int *)0x1;
  FUN_002f2e3c(param_1 + 0x1ac,param_1 + 0x19c,0x10,param_1 + 0x178,*(unsigned int *)(param_1 + 0x11c)
              );
  temp_v6 = 0;
  temp_v7 = param_1 + 0x334;
  temp_v2 = param_1 + 0x120;
  do {
    temp_v4 = FUN_002fda98(temp_v2);
    temp_v5 = *(unsigned int *)(temp_v4 + 8);
    FUN_002eb858(temp_v16,
                 (temp_v5 << 0x18) | (((temp_v5 >> 8) & 0xff) << 0x10) | (((temp_v5 >> 0x10) & 0xff) << 8)
                 | (temp_v5 >> 0x18),0x8236);
    temp_v3 = FUN_002ede60(temp_v19,temp_v16);
    temp_v3 = FUN_002fdaa0(temp_v17,0,temp_v3);
    FUN_002fdabe(temp_v7,temp_v3);
    FUN_002fdafa(temp_v17);
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 5);
  temp_v12[0] = *(int **)(param_1 + 0x130);
  temp_v1 = 0;
  temp_v11[0] = *temp_v12[0];
  temp_v4 = FUN_002fd750(temp_v11,temp_v12);
  temp_v8 = (unsigned int *)(param_1 + 0x180);
  if (temp_v4 != 0) {
    temp_v14 = *(unsigned int *)(param_1 + 0x130);
    temp_v3 = FUN_001322ae(temp_v11);
    temp_v4 = FUN_002fd750(temp_v3,&temp_v14);
    if ((temp_v4 != 0) && (*(char *)(temp_v8 + 6) == '\x03')) {
      temp_v3 = FUN_002ea704();
      FUN_002fa434(temp_v15,temp_v3);
      temp_v1 = 1;
      temp_v4 = FUN_002fdb0c(temp_v15);
      if (temp_v4 == 2) {
        temp_v13 = 1;
      }
      else {
        temp_v13 = 0;
      }
    }
    else {
      temp_v13 = 0;
    }
  }
  else {
    temp_v13 = 0;
  }
  if (temp_v1) {
    FUN_002f3490(temp_v15);
  }
  if (temp_v13 != 0) {
    temp_v6 = 0;
    do {
      temp_v3 = FUN_002ede60(temp_v18,temp_v11[0] + 8);
      temp_v3 = FUN_002fdaa0(temp_v16,0x65,temp_v3);
      FUN_002fdabe(temp_v7,temp_v3);
      FUN_002fdafa(temp_v16);
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 5);
  }
  else {
    temp_v6 = 0;
    do {
      temp_v3 = FUN_002fda98(temp_v2);
      temp_v3 = FUN_002ede60(temp_v18,temp_v3);
      temp_v3 = FUN_002fdaa0(temp_v16,0x65,temp_v3);
      FUN_002fdabe(temp_v7,temp_v3);
      FUN_002fdafa(temp_v16);
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 5);
  }
  if (*(char *)(temp_v8 + 6) == '\x01') {
    temp_v6 = 0;
    temp_v8 = (unsigned int *)**(unsigned int **)(param_1 + 0x130);
    do {
      temp_v3 = FUN_002ede60(temp_v18,temp_v8 + 2);
      temp_v3 = FUN_002fdaa0(temp_v16,0x66,temp_v3);
      FUN_002fdabe(temp_v7,temp_v3);
      FUN_002fdafa(temp_v16);
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 5);
    do {
      temp_v8 = (unsigned int *)*temp_v8;
      temp_v13 = *(int *)(param_1 + 0x130);
      temp_v4 = FUN_002fd750(&temp_v8,&temp_v13);
      if (temp_v4 == 0) {
        temp_v3 = FUN_002ea3c0(temp_v20,0x112b39,0,&LAB_00113108);
        FUN_002ea3d0(param_1,temp_v3);
        return;
      }
      temp_v6 = temp_v8[4];
      temp_v4 = FUN_002fda98(temp_v2);
      temp_v5 = *(unsigned int *)(temp_v4 + 8);
    } while ((((temp_v6 << 0x18) | (((temp_v6 >> 8) & 0xff) << 0x10) | (((temp_v6 >> 0x10) & 0xff) << 8) |
              (temp_v6 >> 0x18)) ==
              ((temp_v5 << 0x18) | (((temp_v5 >> 8) & 0xff) << 0x10) | (((temp_v5 >> 0x10) & 0xff) << 8) |
              (temp_v5 >> 0x18))) ||
            (temp_v0 = *(unsigned short *)((int)temp_v8 + 0xe), temp_v4 = FUN_002fda98(temp_v2),
            (unsigned short)((temp_v0 << 8) | (temp_v0 >> 8)) !=
            (unsigned short)((*(unsigned short *)(temp_v4 + 6) << 8) | (*(unsigned short *)(temp_v4 + 6) >> 8))));
    temp_v6 = 0;
    do {
      temp_v3 = FUN_002ede60(temp_v18,temp_v8 + 2);
      temp_v3 = FUN_002fdaa0(temp_v16,0x67,temp_v3);
      FUN_002fdabe(temp_v7,temp_v3);
      FUN_002fdafa(temp_v16);
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 5);
  }
  temp_v3 = FUN_002ea3c0(temp_v20,0x112b39,0,&LAB_00113108);
  FUN_002ea3d0(param_1,temp_v3);
  return;
}

} /* extern "C" */
