/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00185dd4` (_code @ 0x185dd4, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184efc(int, int, unsigned int *);

/* stack frame of param_8: 7 slot(s), 24 byte(s) */
typedef struct {
    unsigned short sp32; /* 0x32: local_32 */
    unsigned short sp34; /* 0x34: local_34 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_8_stack;

/* Supplied declaration required: FUN_00184efc. */
extern int asdTMTexTableCallFileC(unsigned int, int);


void FUN_00185dd4(unsigned int param_1,unsigned int param_2,int param_3,unsigned int param_4,unsigned int param_5,
                 int param_6,int param_7,unsigned int param_8)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int iStack_4c;
  int iStack_48;
  unsigned short temp_v6;
  unsigned short temp_v7;
  
  if (param_6 != 0 && param_7 != 0) {
    temp_v0 = asdTMTexTableCallFileC(param_2,param_3);
    temp_v1 = param_1 | 0x8000;
    temp_v5 = 0;
    iStack_4c = param_6;
    iStack_48 = param_7;
    temp_v6 = 1;
    temp_v7 = 1;
    temp_v2 = param_4;
    temp_v3 = param_5;
    temp_v4 = param_8;
    FUN_00184efc(temp_v0,**(int **)(temp_v0 + 4) + (param_3 % 1000) * 0x14,&temp_v1);
  }
  return;
}

} /* extern "C" */
