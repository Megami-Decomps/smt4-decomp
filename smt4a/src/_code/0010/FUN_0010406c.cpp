/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010406c` (_code @ 0x10406c, 0x182 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6354(unsigned char [32], int);
int FUN_002e9318(unsigned char [4]);
int FUN_002e9c0c(void);
int FUN_002ea0c8(int, unsigned char [256]);
int FUN_002ea100(unsigned char [4], unsigned char [32]);
int FUN_002ea12c(void);
int FUN_002ea198(int *);
int FUN_002ea20c(int *);
int FUN_002ea214(int, unsigned int);
int FUN_002ea2b4(int, unsigned int);
int FUN_002ea2d2(unsigned char [8]);
int FUN_002ea2e8(unsigned char [4]);
int FUN_002ea314(unsigned char [4], int);
int FUN_002ea374(int, int, unsigned int, unsigned char [32]);
int FUN_002ea3a8(unsigned char [4]);
int FUN_002ea3d0(int, unsigned int);
int FUN_00442164(void);

/* stack frame of param_1: 14 slot(s), 54 byte(s) */
typedef struct {
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned short sp170; /* 0x170: local_170 */
    unsigned int sp194; /* 0x194: local_194 */
    unsigned int sp198; /* 0x198: local_198 */
    unsigned int sp3A8; /* 0x3a8: local_3a8 */
    unsigned int sp3B0; /* 0x3b0: local_3b0 */
    unsigned int sp3B4; /* 0x3b4: local_3b4 */
    unsigned int sp3B8; /* 0x3b8: local_3b8 */
    unsigned int sp3BC; /* 0x3bc: local_3bc */
    unsigned int sp3C0; /* 0x3c0: local_3c0 */
} param_1_stack;

extern unsigned char LAB_001041fc; /* 0x1041fc */

/* Supplied declaration required: FUN_002e6354. */
extern int FUN_002e760a(unsigned int);
extern unsigned int FUN_002e7908(unsigned int *, unsigned int *);
/* Supplied declaration required: FUN_002e9318. */
/* Supplied declaration required: FUN_002e9c0c. */
/* Supplied declaration required: FUN_002ea0c8. */
/* Supplied declaration required: FUN_002ea100. */
/* Supplied declaration required: FUN_002ea12c. */
/* Supplied declaration required: FUN_002ea198. */
/* Supplied declaration required: FUN_002ea20c. */
/* Supplied declaration required: FUN_002ea214. */
extern unsigned int FUN_002ea268(void);
extern unsigned int FUN_002ea2a8(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002ea2b4. */
/* Supplied declaration required: FUN_002ea2d2. */
/* Supplied declaration required: FUN_002ea2e8. */
/* Supplied declaration required: FUN_002ea314. */
/* Supplied declaration required: FUN_002ea374. */
/* Supplied declaration required: FUN_002ea3a8. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_00442164. */


void FUN_0010406c(int param_1)

{
/* irregular: 1 goto(s); 17 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8 [4];
  unsigned int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned char temp_v12 [32];
  unsigned short temp_v13;
  unsigned char temp_v14 [256];
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned char temp_v17 [4];
  unsigned int temp_v18;
  int temp_v19;
  int temp_v20;
  unsigned char temp_v21 [32];
  unsigned char temp_v22 [16];
  unsigned char temp_v23 [8];
  unsigned int *puVar4;
  
  temp_v0 = param_1;
  FUN_002ea12c();
  temp_v15 = 0;
  temp_v16 = 0;
  FUN_002e6354(temp_v21,0x20);
  FUN_002ea198(&temp_v10);
  *(int *)(*(int *)(param_1 + 0xe8) + 300) = temp_v11;
  *(int *)(*(int *)(param_1 + 0xe8) + 0x128) = temp_v10;
  if ((temp_v11 != 200) || (temp_v10 != 1)) {
    temp_v3 = 0x80680001;
  }
  else {
    puVar2 = temp_v21;
    FUN_00442164();
    if (-1 < (int)puVar2) {
      if (*(int *)(param_1 + 0xf8) == -1) {
        *(unsigned int *)(*(int *)(param_1 + 0xe8) + 0x74) = 0xffffffff;
LAB_00104110:
        temp_v19 = *(int *)(param_1 + 0xe8);
        temp_v20 = param_1 + 0x68;
        FUN_002e9c0c();
        temp_v2 = FUN_002e760a(0x1c);
        temp_v1 = 0;
        if (temp_v2 != 0) {
          temp_v1 = FUN_002ea268();
        }
        temp_v1 = FUN_002ea2a8(temp_v23,temp_v1);
        FUN_002ea2b4(param_1 + 0x108,temp_v1);
        FUN_002ea2d2(temp_v23);
        FUN_002ea2e8(temp_v8);
        FUN_002ea100(temp_v17,temp_v12);
        FUN_002ea0c8(*(int *)(param_1 + 0x10c) + 8,temp_v14);
        FUN_002ea314(temp_v8,temp_v0);
        if (*(char *)(*(int *)(param_1 + 0xe8) + 0x140) != '\0') {
          *(unsigned int *)(*(int *)(param_1 + 0x10c) + 0x18) = 0xffffffff;
        }
        temp_v4 = (unsigned int)temp_v13;
        temp_v7 = param_1 + 0x110;
        temp_v6 = param_1 + 0xec;
        temp_v3 = temp_v18;
        temp_v0 = temp_v19;
        temp_v5 = param_1 + 0x108;
        FUN_002ea374(temp_v19,temp_v20,temp_v9,temp_v21);
        if (temp_v0 != 0) {
          FUN_002e9318(temp_v17);
          FUN_002ea3a8(temp_v8);
          temp_v1 = FUN_002ea3c0(temp_v22,0x104205,0,&LAB_001041fc);
          FUN_002ea3d0(param_1,temp_v1);
          return;
        }
        temp_v3 = 0x8001000d;
        temp_v1 = FUN_002e7908(&temp_v4,(unsigned int *)&temp_v3);
        FUN_002ea214(param_1,temp_v1);
        FUN_002e9318(temp_v17);
        FUN_002ea3a8(temp_v8);
        return;
      }
      FUN_002ea20c(&temp_v5);
      temp_v5 = temp_v5 - *(int *)(param_1 + 0x100);
      if (temp_v5 < *(int *)(param_1 + 0xf8)) {
        *(int *)(*(int *)(param_1 + 0xe8) + 0x74) = *(int *)(param_1 + 0xf8) - temp_v5;
        goto LAB_00104110;
      }
      temp_v3 = 0x8001000b;
      puVar4 = &temp_v7;
      temp_v1 = FUN_002e7908(puVar4,(unsigned int *)&temp_v3);
      FUN_002ea214(param_1,temp_v1);
      return;
    }
    temp_v3 = 0x80030065;
  }
  puVar4 = &temp_v4;
  temp_v1 = FUN_002e7908(puVar4,(unsigned int *)&temp_v3);
  FUN_002ea214(param_1,temp_v1);
  return;
}

} /* extern "C" */
