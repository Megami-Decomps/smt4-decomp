/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011c1e4` (_code @ 0x11c1e4, 0xa6 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00106098(int, int);
int FUN_0011c4f2(int *, int, unsigned int, unsigned char [64]);
int FUN_0012240e(unsigned int, unsigned int, unsigned int, unsigned char [64]);
int vectorCopyHeader(int, unsigned int);
int FUN_002f4f00(unsigned char [64]);
int FUN_00303cd8(unsigned char [64]);
int listHolderOwnerBack(int *);
int FUN_003113ee(unsigned int, int, int);
int FUN_0031144c(void);

typedef int romwright_code(...);
/* stack frame of param_6: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} param_6_stack;

/* Supplied declaration required: FUN_00106098. */
/* Supplied declaration required: FUN_0011c4f2. */
/* Supplied declaration required: FUN_0012240e. */
extern unsigned int FUN_002e7908(unsigned char *, char **);
/* Supplied declaration required: vectorCopyHeader. */
extern int FUN_002ecf28(void);
/* Supplied declaration required: FUN_002f4f00. */
/* Supplied declaration required: FUN_00303cd8. */
/* Supplied declaration required: listHolderOwnerBack. */
/* Supplied declaration required: FUN_003113ee. */
/* Supplied declaration required: FUN_0031144c. */


void FUN_0011c1e4(int *param_1,int param_2,unsigned int param_3,unsigned int param_4,char *param_5,
                 unsigned int param_6)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  char *temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [64];
  unsigned int temp_v5;
  unsigned char temp_v6 [16];
  int *temp_v7;
  int iStack_20;
  unsigned int temp_v8;
  unsigned int temp_v9;
  
  temp_v7 = param_1;
  iStack_20 = param_2;
  temp_v8 = param_3;
  temp_v9 = param_4;
  temp_v0 = FUN_002ecf28();
  FUN_00106098(temp_v0,param_2);
  if (((temp_v0 != 0) || (temp_v0 = (**(romwright_code **)(*temp_v7 + 0x2c))(temp_v7,param_2), temp_v0 != 0)) ||
     (param_2 != 1)) {
    temp_v1 = temp_v8;
    FUN_0031144c();
    temp_v5 = temp_v1;
    FUN_00303cd8(temp_v4);
    *param_5 = '\0';
    if (temp_v0 != 0) {
      temp_v2 = param_5;
      temp_v3 = param_6;
      FUN_0011c4f2(temp_v7,temp_v0,temp_v8,temp_v4);
    }
    else {
      *param_5 = '\x01';
      temp_v0 = listHolderOwnerBack(temp_v7);
      temp_v2 = (char *)0x80010002;
      temp_v1 = FUN_002e7908(temp_v6,&temp_v2);
      vectorCopyHeader(temp_v0 + 0x20,temp_v1);
    }
    if (*param_5 != '\0') {
      FUN_003113ee(temp_v9,0,param_2);
      temp_v1 = listHolderOwnerBack(temp_v7);
      FUN_0012240e(temp_v9,temp_v1,temp_v5,temp_v4);
    }
    FUN_002f4f00(temp_v4);
  }
  else {
    *param_5 = '\0';
  }
  return;
}

} /* extern "C" */
