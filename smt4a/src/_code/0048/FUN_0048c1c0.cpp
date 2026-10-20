/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048c1c0` (_code @ 0x48c1c0, 0x1b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00163aa4(int);
int FUN_00168980(int);
int FUN_00184528(int, int);
int FUN_002844e4(void);
int sub68OwnerDestroy(void);
int FUN_004935b0(int, unsigned int, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char DAT_005f161d; /* 0x5f161d */
extern signed char DAT_005f1891; /* 0x5f1891 */
extern unsigned char DAT_005f1a5c; /* 0x5f1a5c */
extern signed char DAT_005f1a5d; /* 0x5f1a5d */
extern unsigned char DAT_005f1a5e; /* 0x5f1a5e */
extern unsigned char DAT_005f1a5f; /* 0x5f1a5f */

/* Supplied declaration required: FUN_00163aa4. */
extern unsigned int FUN_001654d8(int);
extern unsigned int FUN_001654e4(int);
/* Supplied declaration required: FUN_00168980. */
/* Supplied declaration required: FUN_00184528. */
/* Supplied declaration required: FUN_002844e4. */
extern int FUN_002e19f8(void);
/* Supplied declaration required: sub68OwnerDestroy. */
/* Supplied declaration required: FUN_004935b0. */


void FUN_0048c1c0(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = *(int *)(param_1 + 8);
  if (temp_v0 == 0) {
    FUN_00184528(param_1 + 0x4e4,1);
    if (DAT_005f1891 == '\0') {
      FUN_00168980(0x1b);
    }
    DAT_005f1a5f = 1;
    *(unsigned int *)(param_1 + 8) = 1;
    *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) | 0x1000008;
    return;
  }
  if (temp_v0 != 1) {
    if (temp_v0 == 2) {
      if (DAT_005f1a5d != '\0') {
        *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) & 0xfffffff7;
        sub68OwnerDestroy();
        DAT_005f1a5d = '\0';
      }
      *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) & 0xfffffff7;
    }
    return;
  }
  temp_v0 = 0;
  do {
    FUN_00163aa4(param_1 + temp_v0 * 0x8c + 0xc40);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 6);
  FUN_00163aa4(param_1 + 0x112c);
  FUN_00163aa4(param_1 + 0x10a0);
  temp_v3 = param_1 + 0x590;
  temp_v0 = FUN_00163aa4(temp_v3);
  if ((temp_v0 != 0) && (temp_v0 = FUN_002e19f8(), temp_v0 != 0)) {
    *(char *)(param_1 + 100) = (char)*(unsigned int *)(param_1 + 0x20510);
    *(unsigned char *)(param_1 + 0x7b90) = 1;
    *(unsigned char *)(param_1 + 0x7b91) = 1;
    *(unsigned char *)(param_1 + 0x7b92) = 1;
    *(unsigned char *)(param_1 + 0x7b93) = 1;
    DAT_005f161d = 0;
    DAT_005f1a5c = 0;
    DAT_005f1a5f = 0;
    DAT_005f1a5e = 0;
    *(unsigned int *)(param_1 + 8) = 2;
    *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) | 2;
    FUN_002844e4();
  }
  temp_v1 = FUN_001654e4(temp_v3);
  temp_v2 = FUN_001654d8(temp_v3);
  FUN_004935b0(param_1 + 0x4d0,temp_v2,temp_v1);
  return;
}

} /* extern "C" */
