/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00104952` (_code @ 0x104952, 0x9e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010cdce(int *);
int FUN_002e6e34(unsigned char [12], unsigned int);
int FUN_002ea734(int *);
int FUN_002eab08(...);
int FUN_002eab2a(unsigned int);
int SBORROW4(...);

typedef int romwright_code(...);
/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_0010cdce. */
/* Supplied declaration required: FUN_002e6e34. */
extern int FUN_002e6e5c(unsigned char *);
extern unsigned int FUN_002ea714(void);
/* Supplied declaration required: FUN_002ea734. */
extern int wordRefsDiffer_002ea764(int *, int *);
/* Supplied declaration required: FUN_002eab08. */
extern unsigned long long FUN_002eab1c(unsigned char *, int *);
/* Supplied declaration required: FUN_002eab2a. */


int FUN_00104952(int *param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int *piVar5;
  unsigned long long temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8 [12];
  int temp_v9;
  unsigned char temp_v10 [12];
  
  piVar5 = param_1 + 0x22;
  if (param_1[0x22] == 0 && param_1[0x23] == 0) {
    FUN_002eab08(&temp_v5);
    *piVar5 = temp_v5;
    param_1[0x23] = temp_v6;
    temp_v1 = temp_v5;
  }
  else {
    FUN_002eab08(temp_v10);
    temp_v4 = FUN_002eab1c(temp_v10,piVar5);
    temp_v3 = (int)((unsigned long long)temp_v4 >> 0x20);
    temp_v0 = (unsigned int)temp_v4;
    temp_v1 = 0x19 - temp_v0;
    if ((int)(-(unsigned int)(temp_v0 >= 0x1a) - temp_v3) < 0 !=
        (SBORROW4(0,temp_v3) != SBORROW4(-temp_v3,(unsigned int)(temp_v0 >= 0x1a)))) {
      FUN_002eab08(&temp_v5);
      *piVar5 = temp_v5;
      param_1[0x23] = temp_v6;
      FUN_0010cdce(param_1 + 5);
      temp_v2 = FUN_002ea714();
      FUN_002e6e34(temp_v8,temp_v2);
      (**(romwright_code **)(*param_1 + 0x54))(param_1);
      temp_v9 = *(int *)(param_1[0x19] + 8);
      while( 1 ) {
        temp_v7 = param_1[0x19];
        temp_v1 = wordRefsDiffer_002ea764(&temp_v9,&temp_v7);
        if (temp_v1 == 0) break;
        FUN_002eab2a(*(unsigned int *)(temp_v9 + 0x34));
        FUN_002ea734(&temp_v9);
      }
      (**(romwright_code **)(*param_1 + 0x58))(param_1);
      temp_v1 = FUN_002e6e5c(temp_v8);
    }
  }
  return temp_v1;
}

} /* extern "C" */
