/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011e784` (_code @ 0x11e784, 0x56 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 10 byte(s) */
typedef struct {
    unsigned char sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

/* Supplied declaration required: FUN_0012f692. */
extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_00310bd4. */


unsigned char FUN_0011e784(int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5 [12];
  unsigned int temp_v6;
  unsigned char temp_v7;
  int iStack_14;
  int uStack_10;
  
  iStack_14 = param_1;
  uStack_10 = param_2;
  temp_v0 = FUN_002e6e26();
  FUN_002e6e34(temp_v5,temp_v0 + 0x58);
  temp_v1 = param_1 + 0x80;
  temp_v0 = temp_v1;
  FUN_00310bd4(temp_v1,&uStack_10);
  temp_v2 = temp_v0 != *(int *)(param_1 + 0x90);
  if (!temp_v2) {
    FUN_0012f692(&temp_v3,temp_v1,&uStack_10);
    temp_v6 = temp_v3;
    temp_v7 = temp_v4;
    FUN_002e6e5c(temp_v5);
  }
  else {
    FUN_002e6e5c(temp_v5);
  }
  return !temp_v2;
}
