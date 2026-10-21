/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00346b84` (_code @ 0x346b84, 0x394 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023b9d0(int, unsigned char *, unsigned int, int);
int asdMemoryAllocAligned(...);
int memAlloc(int, int, int, unsigned int, int, int);

/* stack frame of param_1: 17 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned char sp2D; /* 0x2d: local_2d */
    unsigned char sp2E; /* 0x2e: local_2e */
    unsigned char sp2F; /* 0x2f: local_2f */
    unsigned char sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned char sp35; /* 0x35: local_35 */
    unsigned char sp36; /* 0x36: local_36 */
    unsigned char sp37; /* 0x37: local_37 */
    unsigned char sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned char sp3D; /* 0x3d: local_3d */
    unsigned char sp3E; /* 0x3e: local_3e */
    unsigned char sp3F; /* 0x3f: local_3f */
    unsigned char sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

/* Supplied declaration required: FUN_0023b9d0. */
extern unsigned int osVirtToPhysAddress(unsigned int);
/* Supplied declaration required: asdMemoryAllocAligned. */
/* Supplied declaration required: memAlloc. */
extern unsigned int FUN_0034711c(int, unsigned int);


void FUN_00346b84(int param_1)

{
/* irregular: 1 goto(s); irregular input(s): in_s0; 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  unsigned int in_s0;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  unsigned char temp_v11;
  unsigned int temp_v12;
  unsigned char temp_v13;
  unsigned char temp_v14;
  unsigned char temp_v15;
  unsigned char temp_v16;
  unsigned int temp_v17;
  unsigned char temp_v18;
  unsigned char temp_v19;
  unsigned char temp_v20;
  unsigned char temp_v21;
  unsigned int temp_v22;
  
  temp_v22 = 0;
  temp_v18 = 0;
  temp_v13 = 0;
  temp_v8 = 0;
  temp_v19 = 1;
  temp_v14 = 1;
  temp_v9 = 1;
  temp_v20 = 0xff;
  temp_v15 = 0xff;
  temp_v10 = 0xff;
  temp_v21 = 0xff;
  temp_v16 = 0xff;
  temp_v17 = 0;
  temp_v11 = 0xff;
  temp_v12 = 0;
  if ((*(unsigned int *)(param_1 + 4) & 0x100) != 0) {
    temp_v0 = FUN_0034711c(param_1,0x13a);
    temp_v1 = 0x10000;
    memAlloc(0x10000,0x100,0,temp_v0,0x10,1);
    *(unsigned int *)(param_1 + 0x2c) = temp_v1;
  }
  else {
    temp_v0 = FUN_0034711c(param_1,0x137);
    temp_v1 = 0x100;
    memAlloc(0x100,0x100,0,temp_v0,0x10,1);
    *(unsigned int *)(param_1 + 0x2c) = temp_v1;
  }
  temp_v6 = 0;
  if ((*(unsigned int *)(param_1 + 4) & 1) != 0) {
    *(unsigned int *)(param_1 + 0x30) = *(unsigned int *)(param_1 + 0x2c);
    temp_v6 = *(int *)(param_1 + 0xc) * 0xc;
    if ((*(unsigned int *)(param_1 + 4) & 0x100) != 0) {
      temp_v20 = 0;
      temp_v0 = osVirtToPhysAddress(*(unsigned int *)(param_1 + 0x30));
      FUN_0023b9d0(param_1 + 0x4c,&temp_v18,temp_v0,0xb);
    }
  }
  if ((*(unsigned int *)(param_1 + 4) & 2) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x2c) + temp_v6;
    temp_v5 = *(unsigned int *)(param_1 + 0xc);
    temp_v6 = temp_v6 + temp_v5 * 0x10;
    if ((temp_v5 & 0x3fffffff) != 0) {
      temp_v3 = 0;
      temp_v7 = (temp_v5 & 0x3fffffff) != 0;
      if (temp_v7) {
        in_s0 = 0x3f800000;
      }
      temp_v5 = 0;
      if (temp_v7) {
        do {
          temp_v5 = temp_v5 + 2;
          temp_v4 = temp_v3 + 1;
          *(unsigned int *)(*(int *)(param_1 + 0x34) + temp_v3 * 4) = in_s0;
          temp_v3 = temp_v3 + 2;
          *(unsigned int *)(*(int *)(param_1 + 0x34) + temp_v4 * 4) = in_s0;
        } while (temp_v5 < (unsigned int)(*(int *)(param_1 + 0xc) << 2));
      }
    }
    if ((*(unsigned int *)(param_1 + 4) & 0x100) != 0) {
      temp_v10 = 1;
      temp_v0 = osVirtToPhysAddress(*(unsigned int *)(param_1 + 0x34));
      FUN_0023b9d0(param_1 + 0x4c,&temp_v8,temp_v0,0xf);
    }
  }
  if ((*(unsigned int *)(param_1 + 4) & 0x20) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x2c) + temp_v6;
    temp_v5 = *(unsigned int *)(param_1 + 0xc);
    temp_v6 = temp_v6 + temp_v5 * 4;
    if ((temp_v5 & 0x3fffffff) != 0) {
      temp_v3 = 0;
      temp_v2 = 0;
      if ((temp_v5 & 0x3fffffff) != 0) {
        do {
          temp_v2 = temp_v2 + 2;
          *(unsigned char *)(*(int *)(param_1 + 0x38) + temp_v3) = 0xff;
          *(unsigned char *)(*(int *)(param_1 + 0x38) + temp_v3 + 1) = 0xff;
          temp_v3 = temp_v3 + 2;
        } while (temp_v2 < (unsigned int)(*(int *)(param_1 + 0xc) << 2));
      }
    }
    if ((*(unsigned int *)(param_1 + 4) & 0x100) != 0) {
      temp_v10 = 1;
      temp_v0 = osVirtToPhysAddress(*(unsigned int *)(param_1 + 0x38));
      FUN_0023b9d0(param_1 + 0x4c,&temp_v8,temp_v0,0xd);
    }
  }
  if ((*(unsigned int *)(param_1 + 4) & 4) != 0) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x2c) + temp_v6;
    if ((*(unsigned int *)(param_1 + 4) & 0x100) != 0) {
      temp_v15 = 2;
      temp_v0 = osVirtToPhysAddress(*(unsigned int *)(param_1 + 0x3c));
      FUN_0023b9d0(param_1 + 0x4c,&temp_v13,temp_v0,7);
      goto LAB_00346e10;
    }
    temp_v0 = 0x100;
    asdMemoryAllocAligned(0x100,0x100,0,*(int *)(param_1 + 0x18) << 1,0x10,1);
    *(unsigned int *)(param_1 + 0x48) = temp_v0;
  }
  else {
LAB_00346e10:
    if ((*(unsigned int *)(param_1 + 4) & 0x100) != 0) {
      temp_v0 = 0x10000;
      asdMemoryAllocAligned(0x10000,0x100,0,*(int *)(param_1 + 0x18) << 1,0x10,1);
      *(unsigned int *)(param_1 + 0x48) = temp_v0;
    }
    else {
      temp_v0 = 0x100;
      asdMemoryAllocAligned(0x100,0x100,0,*(int *)(param_1 + 0x18) << 1,0x10,1);
      *(unsigned int *)(param_1 + 0x48) = temp_v0;
    }
  }
  if (*(unsigned int *)(param_1 + 0x18) != 0) {
    temp_v5 = *(unsigned int *)(param_1 + 0x18) & 1;
    if (temp_v5 == 1) {
      **(unsigned short **)(param_1 + 0x48) = 0;
    }
    temp_v2 = (unsigned int)(temp_v5 == 1);
    if (temp_v5 < *(unsigned int *)(param_1 + 0x18)) {
      do {
        temp_v5 = temp_v5 + 2;
        temp_v6 = temp_v2 + 1;
        *(unsigned short *)(*(int *)(param_1 + 0x48) + temp_v2 * 2) = 0;
        temp_v2 = temp_v2 + 2;
        *(unsigned short *)(*(int *)(param_1 + 0x48) + temp_v6 * 2) = 0;
      } while (temp_v5 < *(unsigned int *)(param_1 + 0x18));
    }
  }
  if ((*(unsigned int *)(param_1 + 4) & 0x100) != 0) {
    temp_v0 = osVirtToPhysAddress(*(unsigned int *)(param_1 + 0x48));
    *(unsigned int *)(param_1 + 0x7dc) = temp_v0;
    *(unsigned int *)(param_1 + 0x7e0) = *(unsigned int *)(param_1 + 0x18);
    *(unsigned char *)(param_1 + 0x7e4) = 0;
  }
  return;
}

} /* extern "C" */
