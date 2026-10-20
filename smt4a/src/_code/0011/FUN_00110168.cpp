/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00110168` (_code @ 0x110168, 0xc2 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011f42c(int, int, int, unsigned char [8]);
int FUN_002e9318(unsigned char [8]);
int FUN_002e9c0c(void);
int FUN_002e9ec8(int, unsigned int);
int FUN_002ea3c0(...);
int FUN_002ea3d0(int, unsigned int);
int FUN_002f7cb0(int);
int FUN_002f7cba(int, int, unsigned int);
int FUN_002fa6e8(int);
int FUN_002fa6f8(int, int, unsigned int);
int FUN_002fa794(unsigned char [8], int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char LAB_0010fa5d; /* 0x10fa5d */
extern unsigned char LAB_00110230; /* 0x110230 */

/* Supplied declaration required: FUN_0011f42c. */
extern int FUN_002e760a(unsigned int);
extern unsigned int FUN_002e7908(unsigned char *, unsigned int *);
/* Supplied declaration required: FUN_002e9318. */
extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9c0c. */
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002ea3c0. */
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002f7cb0. */
/* Supplied declaration required: FUN_002f7cba. */
/* Supplied declaration required: FUN_002fa6e8. */
/* Supplied declaration required: FUN_002fa6f8. */
/* Supplied declaration required: FUN_002fa794. */


void FUN_00110168(int param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int iStack_34;
  int iStack_30;
  int temp_v3;
  unsigned char temp_v4 [8];
  unsigned char temp_v5 [12];
  int temp_v6;
  
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    FUN_002e9c0c();
    temp_v0 = FUN_002e760a(0x10);
    if (temp_v0 != 0) {
      temp_v1 = FUN_002ea3c0(temp_v0,&LAB_0010fa5d,0,&LAB_00110230);
    }
    else {
      temp_v1 = 0;
    }
    FUN_002f7cba(param_1,param_1 + 0x130,temp_v1);
    FUN_002fa794(temp_v4,param_1 + 0xac);
    temp_v3 = param_1 + 0x94;
    iStack_34 = param_1 + 0x80;
    iStack_30 = param_1 + 0x8c;
    temp_v2 = param_1 + 0x7c;
    temp_v0 = *(int *)(param_1 + 0x6c);
    FUN_0011f42c(temp_v0,param_1 + 0x130,param_1 + 0x70,temp_v4);
    FUN_002e9318(temp_v4);
    if (temp_v0 != 0) {
      if (*(char *)(param_1 + 0x140) != '\x01') {
        temp_v1 = FUN_002ea3c0(&temp_v2,&LAB_0010fa5d,0,&LAB_00110230);
        FUN_002ea3d0(param_1,temp_v1);
      }
      else {
        FUN_002f7cb0(param_1);
      }
    }
    else {
      temp_v6 = 0x8001000d;
      temp_v1 = FUN_002e7908(temp_v5,(unsigned int *)&temp_v6);
      FUN_002fa6f8(param_1,3,temp_v1);
    }
  }
  else {
    FUN_002fa6e8(param_1);
  }
  return;
}

} /* extern "C" */
