/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00116700` (_code @ 0x116700, 0x32 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [12], int);
int _ZN9Obj55b28cD1Ev(unsigned char [12]);
int FUN_002f8624(unsigned char [8], int, unsigned short [2]);

/* stack frame of param_3: 4 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned short sp10; /* 0x10: local_10 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned short sp24; /* 0x24: local_24 */
} param_3_stack;

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: FUN_002f8624. */


unsigned int FUN_00116700(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0 [12];
  unsigned short temp_v1 [2];
  unsigned int temp_v2;
  unsigned char temp_v3 [8];
  int iStack_14;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  iStack_14 = param_1;
  temp_v4 = param_2;
  temp_v5 = param_3;
  FUN_002e6e34(temp_v0,param_1 + 8);
  temp_v1[0] = (unsigned short)temp_v4;
  temp_v2 = temp_v5;
  FUN_002f8624(temp_v3,param_1 + 0x38,temp_v1);
  _ZN9Obj55b28cD1Ev(temp_v0);
  return 1;
}

} /* extern "C" */
