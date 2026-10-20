/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00107b28` (_code @ 0x107b28, 0x19c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7232(int *);
int FUN_002eea5c(int *, unsigned short [4]);
int FUN_002effdc(int *);
int FUN_002f012e(int, int, unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 7 slot(s), 26 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned short sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

/* Supplied declaration required: FUN_002e7232. */
extern int FUN_002e760a(unsigned int);
extern int FUN_002eb7d0(unsigned int, unsigned int);
extern int *FUN_002ed258(int, int *);
/* Supplied declaration required: FUN_002eea5c. */
extern int *FUN_002efa50(int, unsigned int);
extern int *FUN_002eff58(int, unsigned int);
extern int FUN_002eff84(void);
extern int *FUN_002eff90(int, unsigned int);
/* Supplied declaration required: FUN_002effdc. */
extern int FUN_002f000c(int *, unsigned int *);
extern int FUN_002f00f0(int, unsigned int);
/* Supplied declaration required: FUN_002f012e. */


void FUN_00107b28(int param_1)

{
/* irregular: 4 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  unsigned char temp_v2;
  int *piVar4;
  int temp_v3;
  int temp_v4;
  int *piVar7;
  int temp_v5;
  romwright_code *pcVar9;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8 [2];
  int temp_v9;
  unsigned short temp_v10 [4];
  int temp_v11;
  
  temp_v11 = param_1;
  piVar4 = (int *)FUN_002efa50(param_1 + 0x90,0);
  temp_v3 = *piVar4;
  temp_v7 = *(int *)(*(int *)(temp_v3 + 0x14) + 8);
  temp_v6 = (*(unsigned short *)(temp_v3 + 0x24) - 1) & 0xffff;
  while( 1 ) {
    temp_v8[0] = *(unsigned int *)(temp_v3 + 0x14);
    temp_v4 = FUN_002f000c(&temp_v7,temp_v8);
    if ((temp_v4 == 0) || (temp_v1 = *(unsigned short *)(temp_v7 + 0x14), (unsigned int)temp_v1 != temp_v6 + 1)) break;
    FUN_002effdc(&temp_v7);
    temp_v6 = (unsigned int)temp_v1;
  }
  temp_v2 = 1;
  temp_v0 = *(char *)(*(int *)(temp_v11 + 4) + 4);
  if ((temp_v0 != '\n') && (temp_v0 != '\x02')) {
    temp_v4 = FUN_002eb7d0(0x20,0);
    if (temp_v4 == 0) {
      return;
    }
    piVar7 = (int *)FUN_002eff58(temp_v4,0xfe);
    if (piVar7 == (int *)0x0) {
      return;
    }
    temp_v4 = FUN_002eff84();
    if (temp_v4 == 0) {
      pcVar9 = *(romwright_code **)(*piVar7 + 4);
      (*pcVar9)(piVar7);
      return;
    }
    temp_v4 = FUN_002e760a(0x10);
    if (temp_v4 != 0) {
      piVar4 = (int *)FUN_002ed258(temp_v4,piVar7);
    }
    else {
      piVar4 = (int *)0x0;
    }
    FUN_002e7232(piVar7);
  }
  else {
    temp_v2 = 0;
    temp_v4 = FUN_002e760a(0x10);
    if (temp_v4 != 0) {
      piVar4 = (int *)FUN_002eff90(temp_v4,0xfe);
    }
    else {
      piVar4 = (int *)0x0;
    }
  }
  temp_v4 = 0;
  temp_v9 = 0;
  piVar7 = piVar4;
  while( 1 ) {
    temp_v8[0] = *(unsigned int *)(temp_v3 + 0x14);
    temp_v5 = FUN_002f000c(&temp_v7,temp_v8);
    if ((temp_v5 == 0) || (temp_v5 = FUN_002f00f0(piVar7[2],2), temp_v5 == 0)) break;
    temp_v10[0] = *(unsigned short *)(temp_v7 + 0x14);
    FUN_002eea5c(piVar7,temp_v10);
    temp_v4 = temp_v4 + 1;
    piVar4 = piVar7;
    if (temp_v4 >= 500) {
      FUN_002f012e(temp_v11,piVar7[2],temp_v6,0);
      temp_v4 = 0;
      if (piVar7 != (int *)0x0) {
        (**(romwright_code **)(*piVar7 + 4))(piVar7);
      }
      if (temp_v2) {
        temp_v5 = FUN_002eb7d0(0x20,0);
        if (temp_v5 == 0) {
          return;
        }
        piVar7 = (int *)FUN_002eff58(temp_v5,0xfe);
        if (piVar7 == (int *)0x0) {
          return;
        }
        temp_v5 = FUN_002eff84();
        if (temp_v5 == 0) {
          pcVar9 = *(romwright_code **)(*piVar7 + 4);
          (*pcVar9)(piVar7);
          return;
        }
        temp_v5 = FUN_002e760a(0x10);
        piVar4 = (int *)0x0;
        if (temp_v5 != 0) {
          piVar4 = (int *)FUN_002ed258(temp_v5,piVar7);
        }
        FUN_002e7232(piVar7);
      }
      else {
        temp_v5 = FUN_002e760a(0x10);
        piVar4 = (int *)0x0;
        if (temp_v5 != 0) {
          piVar4 = (int *)FUN_002eff90(temp_v5,0xfe);
        }
      }
      temp_v9 = temp_v9 + 1;
    }
    FUN_002effdc(&temp_v7);
    piVar7 = piVar4;
  }
  if ((0 < temp_v4) || (temp_v9 == 0)) {
    FUN_002f012e(temp_v11,piVar7[2],temp_v6,0);
  }
  if (piVar7 == (int *)0x0) {
    return;
  }
  pcVar9 = *(romwright_code **)(*piVar7 + 4);
  (*pcVar9)(piVar7);
  return;
}

} /* extern "C" */
