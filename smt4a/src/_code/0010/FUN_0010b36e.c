/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b36e` (_code @ 0x10b36e, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_9: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_9_stack;

extern unsigned int FUN_00116498(int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002e6e26. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
extern int FUN_002e760a(unsigned int);
extern int FUN_002e789a(int);
/* Supplied declaration required: FUN_002e78d0. */


unsigned int
FUN_0010b36e(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5
            ,unsigned int param_6,unsigned int param_7,unsigned int param_8,unsigned int param_9)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [12];
  unsigned int temp_v4;
  int iStack_20;
  unsigned int temp_v5;
  unsigned int uStack_18;
  
  temp_v4 = param_1;
  iStack_20 = param_2;
  temp_v5 = param_3;
  uStack_18 = param_4;
  temp_v0 = FUN_002e6e26();
  FUN_002e6e34(temp_v3,temp_v0 + 0x58);
  temp_v0 = FUN_002e789a(param_2);
  if (temp_v0 != 0) {
    temp_v0 = FUN_002e760a(0x1b0);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = FUN_00116498(temp_v0,*(unsigned int *)(param_2 + 0x44),temp_v4,temp_v5,param_4,param_5,
                           param_6,param_7,param_8,param_9);
    }
    temp_v2 = FUN_002e6e26();
    FUN_002e78d0(temp_v2,temp_v1,0);
    FUN_002e6e5c(temp_v3);
    temp_v1 = 1;
  }
  else {
    FUN_002e6e5c(temp_v3);
    temp_v1 = 0;
  }
  return temp_v1;
}
