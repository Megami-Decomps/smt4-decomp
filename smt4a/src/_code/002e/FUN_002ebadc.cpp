/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ebadc` (_code @ 0x2ebadc, 0x116 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001055c0(unsigned int *);
int FUN_002eb338(...);
int FUN_002eba78(unsigned int *);
int FUN_002ebab4(unsigned int *, unsigned int *);
int FUN_002ebacc(unsigned int *, unsigned int *, int, int);

/* stack frame of param_2: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_2_stack;

extern signed char DAT_00594961; /* 0x594961 */
extern unsigned int DAT_00594b04; /* 0x594b04 */
extern int DAT_00594b38; /* 0x594b38 */
extern int DAT_00594b3c; /* 0x594b3c */
extern unsigned int DAT_00594b60; /* 0x594b60 */
extern unsigned int DAT_00594b64; /* 0x594b64 */

/* Supplied declaration required: FUN_001055c0. */
/* Supplied declaration required: FUN_002eb338. */
extern int FUN_002eba64(unsigned int *);
/* Supplied declaration required: FUN_002eba78. */
extern int FUN_002eba9c(int *, unsigned int *);
/* Supplied declaration required: FUN_002ebab4. */
/* Supplied declaration required: FUN_002ebacc. */


void FUN_002ebadc(unsigned int *param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  unsigned int *puStack_1c;
  int temp_v13;
  
  puStack_1c = param_1;
  temp_v13 = param_2;
  if (((DAT_00594b04 & 1) == 0) && (temp_v1 = FUN_002eba64(&DAT_00594b04), temp_v1 != 0)) {
    DAT_00594b60 = 0;
    DAT_00594b64 = 0;
  }
  temp_v0 = DAT_00594b3c;
  temp_v1 = DAT_00594b38;
  temp_v3 = DAT_00594b60;
  temp_v4 = DAT_00594b64;
  FUN_002eba78(&temp_v9);
  if (DAT_00594961 == '\0') {
    DAT_00594b60 = 1;
    DAT_00594b64 = 0;
    DAT_00594961 = 1;
    temp_v8 = 0;
    temp_v7 = 1;
    temp_v5 = temp_v9;
    temp_v6 = temp_v10;
    FUN_002ebab4(&temp_v5,&temp_v7);
    param_1[1] = 0;
    *param_1 = 1;
    return;
  }
  if (temp_v0 < 0) {
    temp_v11 = -temp_v1;
    temp_v12 = -(unsigned int)(temp_v1 != 0) - temp_v0;
    temp_v2 = FUN_002eba9c(&temp_v11,&temp_v9);
    if (temp_v2 != 0) {
      if (temp_v13 == 0) {
        FUN_001055c0(param_1);
        return;
      }
      FUN_002eb338(&temp_v7,&temp_v3,1);
      DAT_00594b38 = temp_v7 - temp_v9;
      DAT_00594b3c = (temp_v8 - temp_v10) - (unsigned int)(temp_v7 < temp_v9);
      temp_v5 = temp_v7;
      temp_v6 = temp_v8;
      DAT_00594b60 = temp_v5;
      DAT_00594b64 = temp_v6;
      *param_1 = temp_v5;
      param_1[1] = temp_v6;
      return;
    }
  }
  FUN_002ebacc(&temp_v5,&temp_v9,temp_v1,temp_v0);
  if (temp_v6 <= temp_v4 && (unsigned int)(temp_v3 <= temp_v5) <= temp_v6 - temp_v4) {
    if (temp_v13 == 0) {
      FUN_001055c0(param_1);
      return;
    }
    FUN_002eb338(&temp_v7,&temp_v3,1,(temp_v6 - temp_v4) - (unsigned int)(temp_v3 > temp_v5));
    DAT_00594b38 = temp_v7 - temp_v9;
    DAT_00594b3c = (temp_v8 - temp_v10) - (unsigned int)(temp_v7 < temp_v9);
    temp_v5 = temp_v7;
    temp_v6 = temp_v8;
  }
  DAT_00594b60 = temp_v5;
  DAT_00594b64 = temp_v6;
  *param_1 = temp_v5;
  param_1[1] = temp_v6;
  return;
}

} /* extern "C" */
