/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00117dec` (_code @ 0x117dec, 0x7e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_8: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_8_stack;

/* Supplied declaration required: FUN_002e6e26. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
extern int FUN_002e760a(unsigned int);
extern int FUN_002e789a(int);
/* Supplied declaration required: FUN_002e78d0. */
/* Supplied declaration required: FUN_00303aac. */


unsigned int
FUN_00117dec(int param_1,int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5,
            unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [12];
  int iStack_24;
  int iStack_20;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  iStack_24 = param_1;
  iStack_20 = param_2;
  temp_v3 = param_3;
  temp_v4 = param_4;
  temp_v0 = FUN_002e6e26();
  FUN_002e6e34(temp_v2,temp_v0 + 0x58);
  temp_v0 = FUN_002e789a(param_2);
  if (temp_v0 != 0) {
    temp_v0 = FUN_002e760a(0x1b0);
    if (temp_v0 != 0) {
      FUN_00303aac(temp_v0,*(unsigned int *)(param_2 + 0x44),param_1 + 0x10,temp_v3,temp_v4,param_5,
                   param_6,0,5,0,0,param_7,param_8,0);
    }
    temp_v1 = FUN_002e6e26();
    FUN_002e78d0(temp_v1,temp_v0,0);
    FUN_002e6e5c(temp_v2);
    temp_v1 = 1;
  }
  else {
    FUN_002e6e5c(temp_v2);
    temp_v1 = 0;
  }
  return temp_v1;
}
