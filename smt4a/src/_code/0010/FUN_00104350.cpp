/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00104350` (_code @ 0x104350, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9ec8(int, unsigned int);
int FUN_002ea214(int, unsigned int);
int FUN_002ea3d0(int, unsigned int);
int FUN_002ea43c(int);
int FUN_002ea458(int);
int FUN_002ea4d2(void);
int FUN_00442330(int, unsigned int, int *, int *);
int strncpy(int *, unsigned int, int);

/* stack frame of param_1: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern unsigned int DAT_00104418; /* 0x104418 */
extern unsigned char LAB_00104521; /* 0x104521 */

extern unsigned int FUN_002e7908(unsigned int *, unsigned int *);
extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002ea214. */
extern unsigned int FUN_002ea3c0(unsigned int *, unsigned char *, unsigned int, unsigned int *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea43c. */
/* Supplied declaration required: FUN_002ea458. */
extern int FUN_002ea4ac(int *, unsigned int *);
extern int FUN_002ea4bc(void);
/* Supplied declaration required: FUN_002ea4d2. */
/* Supplied declaration required: FUN_00442330. */


void FUN_00104350(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3 [3];
  int temp_v4;
  int temp_v5 [2];
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v5[0] = -0x181c0001;
  temp_v9 = 0x30303030;
  temp_v10 = 0;
  FUN_002ea458(param_1);
  strncpy(&temp_v6,*(unsigned int *)(param_1 + 0xf0),8);
  temp_v0 = param_1 + 0x118;
  temp_v2 = 0;
  temp_v3[0] = 0;
  FUN_00442330(temp_v0,*(unsigned int *)(param_1 + 0xe4),&temp_v6,&temp_v9);
  temp_v5[0] = temp_v0;
  if (-1 < temp_v0) {
    temp_v1 = FUN_002ea3c0((unsigned int *)&temp_v2,&LAB_00104521,0,&DAT_00104418);
    FUN_002ea3d0(param_1,temp_v1);
    return;
  }
  temp_v2 = 0xc8a0c7f0;
  temp_v0 = FUN_002ea4ac(temp_v5,(unsigned int *)&temp_v2);
  if (temp_v0 != 0) {
    temp_v0 = FUN_002e9af4();
    FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0xe0));
    if (temp_v0 == 0) {
      FUN_002ea43c(param_1);
      return;
    }
    temp_v0 = FUN_002ea4bc();
    if ((*(char *)(temp_v0 + 0x30) == '\0') && (temp_v0 = param_1, FUN_002ea4d2(), temp_v0 != 0)) {
      return;
    }
    temp_v4 = 0x8001000b;
  }
  else {
    temp_v4 = 0x8001000c;
  }
  temp_v1 = FUN_002e7908(temp_v3,(unsigned int *)&temp_v4);
  FUN_002ea214(param_1,temp_v1);
  return;
}

} /* extern "C" */
