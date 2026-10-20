/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030f69c` (_code @ 0x30f69c, 0xea bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00122c48(int, int *);
int FUN_00122d5a(int);
int FUN_002eb338(...);
int onlineTimeGetNow(int *);
int FUN_002f2dc2(int *, int *);
int FUN_0030f4bc(int, int *);
int FUN_0030f7d8(int, int *);
int FUN_0030f8f2(int, int *);

typedef int romwright_code(...);
/* stack frame of param_3: 13 slot(s), 52 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_3_stack;

extern unsigned char DAT_005949d8; /* 0x5949d8 */

/* Supplied declaration required: FUN_00122c48. */
/* Supplied declaration required: FUN_00122d5a. */
extern unsigned int FUN_00124550(int);
/* Supplied declaration required: FUN_002eb338. */
/* Supplied declaration required: onlineTimeGetNow. */
/* Supplied declaration required: FUN_002f2dc2. */
/* Supplied declaration required: FUN_0030f4bc. */
/* Supplied declaration required: FUN_0030f7d8. */
/* Supplied declaration required: FUN_0030f8f2. */


unsigned int FUN_0030f69c(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  int *piVar4;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  int temp_v13;
  unsigned int temp_v14;
  int temp_v15;
  int iStack_1c;
  unsigned int uStack_18;
  
  temp_v2 = param_2;
  if (param_2 == 0) {
    temp_v2 = -1;
  }
  piVar2 = (int *)(param_1 + 0x1cc);
  temp_v15 = param_1;
  iStack_1c = param_2;
  uStack_18 = param_3;
  (**(romwright_code **)(*piVar2 + 8))();
  onlineTimeGetNow(&temp_v5);
  temp_v0 = temp_v15;
  piVar4 = (int *)(temp_v15 + 0x1e0);
  if (*piVar4 != 0 || *(int *)(temp_v15 + 0x1e4) != 0) {
    FUN_002eb338(&temp_v9,piVar4,(*(unsigned int *)((unsigned char *)&DAT_005949d8 + 0x1c)));
    FUN_002f2dc2(&temp_v9,&temp_v5);
  }
  *piVar4 = temp_v5;
  *(unsigned int *)(temp_v0 + 0x1e4) = temp_v6;
  if (temp_v2 != -1) {
    FUN_002eb338(&temp_v3,&temp_v5,temp_v2);
  }
  else {
    temp_v3 = 0;
    temp_v4 = 0;
  }
  FUN_0030f4bc(temp_v15,&temp_v3);
  if (-1 < (int)(param_3 << 0x1e)) {
    do {
      temp_v8 = temp_v4;
      temp_v7 = temp_v3;
      FUN_00122c48(temp_v15,&temp_v7);
      if ((param_3 & 1) == 0) break;
      temp_v12 = temp_v4;
      temp_v11 = temp_v3;
      temp_v2 = temp_v15;
      FUN_0030f7d8(temp_v15,&temp_v11);
      if (temp_v2 == 0) break;
      FUN_00122d5a(temp_v15);
      temp_v14 = temp_v4;
      temp_v13 = temp_v3;
      temp_v2 = temp_v15;
      FUN_0030f8f2(temp_v15,&temp_v13);
    } while (temp_v2 == 0);
  }
  temp_v1 = FUN_00124550(temp_v15);
  temp_v10 = temp_v4;
  temp_v9 = temp_v3;
  temp_v2 = temp_v15;
  FUN_0030f8f2(temp_v15,&temp_v9);
  if (temp_v2 == 0) {
    FUN_0030f4bc(temp_v15,&temp_v3);
  }
  (**(romwright_code **)(*piVar2 + 0xc))(piVar2);
  return temp_v1;
}

} /* extern "C" */
