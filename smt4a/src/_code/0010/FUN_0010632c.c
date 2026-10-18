/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010632c` (_code @ 0x10632c, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_5_stack;

/* Supplied declaration required: FUN_002e76b6. */
extern int FUN_002ea908(unsigned char *, int);
/* Supplied declaration required: FUN_002ed2b0. */


unsigned char FUN_0010632c(unsigned int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [16];
  unsigned int temp_v4;
  unsigned int uStack_24;
  int iStack_20;
  int iStack_1c;
  unsigned int temp_v5;
  
  temp_v4 = 0;
  temp_v2 = *(int *)(*(int *)(param_2 + 8) + 0x10);
  uStack_24 = param_1;
  iStack_20 = param_2;
  iStack_1c = param_3;
  temp_v5 = param_4;
  temp_v0 = FUN_002e76b6();
  temp_v1 = FUN_002e76b6(*(unsigned int *)(param_2 + 8));
  FUN_002ed2b0(temp_v3,*(unsigned short *)(param_3 + 0xa2) & 0xf,temp_v5,param_5,temp_v1,temp_v0 + 0x2c,
               temp_v2 - 0x2c);
  temp_v0 = FUN_002ea908(temp_v3,param_3 + 0x28);
  return temp_v0 == 1;
}
