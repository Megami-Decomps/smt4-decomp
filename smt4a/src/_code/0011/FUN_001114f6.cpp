/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001114f6` (_code @ 0x1114f6, 0x62 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7614(unsigned char [16], unsigned int);
int FUN_002ec8a8(unsigned char [12], unsigned char [16]);
int FUN_002ec934(unsigned int, int, unsigned int);
int strDestroy(...);
int FUN_002ece14(unsigned char [12], unsigned int);

typedef int romwright_code(...);
/* stack frame of param_4: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
} param_4_stack;

/* Supplied declaration required: FUN_002e7614. */
/* Supplied declaration required: FUN_002ec8a8. */
/* Supplied declaration required: FUN_002ec934. */
/* Supplied declaration required: strDestroy. */
/* Supplied declaration required: FUN_002ece14. */


void FUN_001114f6(unsigned int param_1,int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [12];
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6 [16];
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int *piStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  temp_v9 = param_1;
  piStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  FUN_002ece14(temp_v2,param_3);
  temp_v0 = (**(romwright_code **)(*param_2 + 0x1c))(param_2);
  FUN_002e7614(temp_v6,temp_v0);
  for (temp_v1 = 0; temp_v1 < param_4; temp_v1 = temp_v1 + 1) {
    temp_v7 = 0;
    temp_v8 = 0;
    (**(romwright_code **)(*param_2 + 8))(param_2,temp_v2,temp_v6);
    FUN_002ec8a8(temp_v2,temp_v6);
  }
  FUN_002ec934(temp_v9,temp_v3 + temp_v5,temp_v4);
  strDestroy(temp_v6);
  strDestroy(temp_v2);
  return;
}

} /* extern "C" */
