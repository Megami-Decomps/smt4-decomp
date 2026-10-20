/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002aead8` (_code @ 0x2aead8, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a4e18(int, unsigned int);
int FUN_002a5ed0(unsigned int, unsigned int);
int FUN_002a5ee4(unsigned int, unsigned int, unsigned int, int);
int FUN_002a60cc(unsigned int, unsigned int, unsigned int);
int FUN_002a86d4(int);
int FUN_002ae898(...);
int FUN_002aecd8(...);

typedef struct fn_002aead8_arg0 fn_002aead8_arg0;
struct fn_002aead8_arg0 {
    unsigned char pad_0x0[0xc];
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0xc];
    undefined4 field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0x4];
    byte field_0x30; /* +0x30 */
    unsigned char pad_0x31[0x4b];
    byte field_0x7c; /* +0x7c */
    unsigned char pad_0x7d[0x3];
    undefined4 field_0x80; /* +0x80 */
    undefined4 field_0x84; /* +0x84 */
    unsigned char pad_0x88[0x5];
    byte field_0x8d; /* +0x8d */
};

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_5_stack;

extern unsigned int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_002a4e18. */
/* Supplied declaration required: FUN_002a5ed0. */
/* Supplied declaration required: FUN_002a5ee4. */
extern int FUN_002a60b4(unsigned int);
/* Supplied declaration required: FUN_002a60cc. */
/* Supplied declaration required: FUN_002a86d4. */
/* Supplied declaration required: FUN_002ae898. */
extern int FUN_002ae98c(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002aecd8. */
extern int FUN_002c08f0(void);
extern int FUN_002c1d5c(void);


/* WARNING: Removing unreachable block (ram,0x002a8970) */
/* WARNING: Removing unreachable block (ram,0x002a88ac) */
/* WARNING: Removing unreachable block (ram,0x002a88d8) */
/* WARNING: Removing unreachable block (ram,0x002a8908) */
/* WARNING: Removing unreachable block (ram,0x002a8900) */
/* WARNING: Removing unreachable block (ram,0x002a8918) */
/* WARNING: Removing unreachable block (ram,0x002a89d0) */
/* WARNING: Removing unreachable block (ram,0x002a89bc) */
/* WARNING: Removing unreachable block (ram,0x002a8980) */
/* WARNING: Removing unreachable block (ram,0x002a898c) */
/* WARNING: Removing unreachable block (ram,0x002a8924) */
/* WARNING: Removing unreachable block (ram,0x002a88e8) */
/* WARNING: Removing unreachable block (ram,0x002a88bc) */
/* WARNING: Removing unreachable block (ram,0x002a8850) */
/* WARNING: Removing unreachable block (ram,0x002a8860) */

void FUN_002aead8(fn_002aead8_arg0 *param_1,int param_2,int param_3,int param_4,int param_5)

{
/* irregular: 23 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_002c08f0();
  if (param_2 < 1) {
    param_2 = 1;
  }
  temp_v1 = param_3;
  if (0 < param_3) {
    temp_v1 = param_4;
  }
  temp_v3 = 0;
  if (0 < temp_v1) {
    temp_v1 = FUN_002aecd8(*(unsigned int *)(temp_v0 + 4),param_2);
    temp_v3 = (unsigned int)*(unsigned short *)((temp_v1 + param_3 * 6 + param_4 * 2) - 6);
  }
  do {
    if (*(unsigned int *)(temp_v0 + 0x14) == temp_v3) {
      return;
    }
    if (*(char *)(temp_v0 + 0x7c) != '\0') {
      if (*(int *)(temp_v0 + 0x84) != -1) {
        FUN_002ae898(*(unsigned int *)(temp_v0 + 0x10));
        FUN_002a60cc(DAT_00433158,*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x84));
        *(unsigned int *)(temp_v0 + 0x84) = 0xffffffff;
        *(unsigned int *)(temp_v0 + 0x80) = 0;
      }
      *(unsigned int *)(temp_v0 + 0x14) = temp_v3;
      return;
    }
    if (*(char *)(temp_v0 + 0x8d) != '\0') {
      return;
    }
    if ((*(unsigned int *)(temp_v0 + 0x14) != 0xffffffff) &&
       (temp_v1 = FUN_002a60b4(*(unsigned int *)(temp_v0 + 0x10)), temp_v1 == 0)) {
      if (*(int *)(temp_v0 + 0x18) == -1) {
        *(unsigned int *)(temp_v0 + 0x18) = temp_v3;
      }
      return;
    }
    if (((*(char *)(temp_v0 + 0x30) == '\0') || (*(float *)(temp_v0 + 0x28) == 0.0f)) &&
       (*(int *)(temp_v0 + 0xc) != 0)) {
      FUN_002ae898(*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x14));
      FUN_002a60cc(DAT_00433158,*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x14));
      *(unsigned int *)(temp_v0 + 0xc) = 0;
    }
    temp_v1 = FUN_002c1d5c();
    if (temp_v1 != 0) {
      *(unsigned char *)(temp_v0 + 0x7c) = 1;
      return;
    }
    if (*(int *)(temp_v0 + 0xc) != 0) {
      *(int *)(temp_v0 + 0x80) = *(int *)(temp_v0 + 0xc);
      *(unsigned int *)(temp_v0 + 0x84) = *(unsigned int *)(temp_v0 + 0x14);
    }
    *(unsigned int *)(temp_v0 + 0x14) = temp_v3;
    temp_v1 = FUN_002ae98c(DAT_00433158,*(unsigned int *)(temp_v0 + 0x10),temp_v3,1);
    if (temp_v1 != 0) {
      temp_v2 = DAT_00433158;
      FUN_002a5ee4(DAT_00433158,*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x14),0x10000)
      ;
    }
    else {
      temp_v2 = *(unsigned int *)(temp_v0 + 0x10);
      FUN_002a5ed0(temp_v2,*(unsigned int *)(temp_v0 + 0x14));
    }
    *(unsigned int *)(temp_v0 + 0xc) = temp_v2;
    if (*(int *)(temp_v0 + 0x80) == 0) {
      return;
    }
    if (param_5 < 0) {
      temp_v3 = 3;
    }
    else {
      temp_v3 = 4;
    }
    *(unsigned int *)(temp_v0 + 0x24) = temp_v3;
                    /* WARNING: Switch table taken from the stored dispatch table */
    if (temp_v3 >= 10) {
      if (((*(char *)(temp_v0 + 0x30) == '\0') || (*(int *)(temp_v0 + 0xc) != 0)) ||
         ((*(int *)(temp_v0 + 0x14) != -1 || (*(int *)(temp_v0 + 4) == 0)))) {
        return;
      }
      temp_v1 = FUN_002aecd8(*(int *)(temp_v0 + 4),1);
      temp_v3 = (unsigned int)*(unsigned short *)(temp_v1 + 2);
      param_5 = -1;
      continue;
    }
    switch(temp_v3) {
    case 1:
      *(unsigned int *)(temp_v0 + 0x74) = 0x40800000;
      *(unsigned int *)(temp_v0 + 0x28) = 0x3f800000;
      *(unsigned char *)(temp_v0 + 0x30) = 0;
      break;
    case 2:
      temp_v2 = 0x41400000;
      *(unsigned int *)(temp_v0 + 0x74) = temp_v2;
      *(unsigned int *)(temp_v0 + 0x28) = 0;
      *(unsigned char *)(temp_v0 + 0x30) = 1;
      FUN_002a86d4(temp_v0);
      break;
    case 3:
      *(unsigned char *)(temp_v0 + 0x8d) = 1;
      *(unsigned int *)(temp_v0 + 0x74) = 0x40c00000;
      *(unsigned int *)(temp_v0 + 0x28) = 0x3f800000;
      *(unsigned int *)(temp_v0 + 0x88) = 0x3f800000;
      break;
    case 4:
      *(unsigned int *)(temp_v0 + 0x74) = 0x41400000;
      *(unsigned int *)(temp_v0 + 0x28) = 0;
      *(unsigned int *)(temp_v0 + 0x88) = 0x3f800000;
      break;
    case 5:
      *(unsigned int *)(temp_v0 + 0x74) = 0x41200000;
      break;
    case 6:
      *(unsigned int *)(temp_v0 + 0x74) = 0x41200000;
      FUN_002a4e18(temp_v0 + 0x34,*(unsigned int *)(temp_v0 + 8));
      *(unsigned char *)(temp_v0 + 0x30) = 1;
      *(unsigned int *)(temp_v0 + 0x5c) = 0;
      *(unsigned int *)(temp_v0 + 0x58) = 0;
      *(unsigned int *)(temp_v0 + 0x60) = 0;
      *(unsigned int *)(temp_v0 + 0x28) = 0;
      FUN_002a86d4(temp_v0);
      break;
    case 7:
      temp_v2 = 0x40800000;
      *(unsigned int *)(temp_v0 + 0x74) = temp_v2;
      *(unsigned int *)(temp_v0 + 0x28) = 0;
      *(unsigned char *)(temp_v0 + 0x30) = 1;
      FUN_002a86d4(temp_v0);
      break;
    case 8:
      *(unsigned int *)(temp_v0 + 0x74) = 0x42f00000;
      *(unsigned char *)(temp_v0 + 0x30) = 1;
      *(unsigned int *)(temp_v0 + 0x28) = 0;
      *(unsigned int *)(temp_v0 + 0x2c) = 0;
      FUN_002a86d4(temp_v0);
      break;
    case 9:
      *(unsigned int *)(temp_v0 + 0x74) = 0x42f00000;
      *(unsigned int *)(temp_v0 + 0x28) = 0x3f800000;
      *(unsigned char *)(temp_v0 + 0x30) = 1;
      *(unsigned int *)(temp_v0 + 0x2c) = 0;
      FUN_002a86d4(temp_v0);
    }
    if (((*(char *)(temp_v0 + 0x30) == '\0') || (*(int *)(temp_v0 + 0xc) != 0)) ||
       ((*(int *)(temp_v0 + 0x14) != -1 || (*(int *)(temp_v0 + 4) == 0)))) {
      return;
    }
    temp_v1 = FUN_002aecd8(*(int *)(temp_v0 + 4),1);
    temp_v3 = (unsigned int)*(unsigned short *)(temp_v1 + 2);
    param_5 = -1;
  } while( 1 );
}

} /* extern "C" */
