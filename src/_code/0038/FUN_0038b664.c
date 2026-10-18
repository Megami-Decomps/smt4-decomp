/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038b664` (_code @ 0x38b664, 0x94 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int FUN_0038b618(); /* 0x38b618 */
extern unsigned char LAB_003f7140; /* 0x3f7140 */
extern unsigned char LAB_003f71e8; /* 0x3f71e8 */
extern unsigned char LAB_003f7234; /* 0x3f7234 */

/* Supplied declaration required: FUN_002bce50. */
/* Supplied declaration required: FUN_002c5468. */
extern int FUN_003613d4(void);


unsigned int FUN_0038b664(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char *temp_v4;
  unsigned char *temp_v5;
  unsigned char *temp_v6;
  int temp_v7;
  
  temp_v0 = FUN_003613d4();
  if (temp_v0 != 0) {
    temp_v1 = 0;
  }
  else {
    temp_v2 = param_1 + 0x88;
    temp_v3 = 4;
    temp_v4 = &LAB_003f7140;
    temp_v5 = &LAB_003f7234;
    temp_v6 = &LAB_003f71e8;
    temp_v7 = param_1;
    FUN_002bce50(temp_v2,&temp_v3,FUN_0038b618,&temp_v7,
                 *(int *)(*(int *)(param_1 + 0x94) + 0xc) + *(int *)(*(int *)(param_1 + 0x94) + 8),
                 0x11,0xfffffffe,0);
    if ((temp_v2 & 0x7e00000) != 0x600000 && (int)temp_v2 < 0) {
      FUN_002c5468();
    }
    temp_v1 = 1;
  }
  return temp_v1;
}
