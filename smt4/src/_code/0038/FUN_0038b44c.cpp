/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038b44c` (_code @ 0x38b44c, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bcc60(...);
int FUN_002c526c(...);

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

extern int FUN_0038b400(...); /* 0x38b400 */
extern unsigned char LAB_003f6f14; /* 0x3f6f14 */
extern unsigned char LAB_003f6fbc; /* 0x3f6fbc */
extern unsigned char LAB_003f7008; /* 0x3f7008 */

/* Supplied declaration required: FUN_002bcc60. */
/* Supplied declaration required: FUN_002c526c. */
extern int FUN_003611c4(void);


unsigned int FUN_0038b44c(int param_1)

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
  
  temp_v0 = FUN_003611c4();
  if (temp_v0 != 0) {
    temp_v1 = 0;
  }
  else {
    temp_v2 = param_1 + 0x88;
    temp_v3 = 4;
    temp_v4 = &LAB_003f6f14;
    temp_v5 = &LAB_003f7008;
    temp_v6 = &LAB_003f6fbc;
    temp_v7 = param_1;
    FUN_002bcc60(temp_v2,&temp_v3,FUN_0038b400,&temp_v7,
                 *(int *)(*(int *)(param_1 + 0x94) + 0xc) + *(int *)(*(int *)(param_1 + 0x94) + 8),
                 0x11,0xfffffffe,0);
    if ((temp_v2 & 0x7e00000) != 0x600000 && (int)temp_v2 < 0) {
      FUN_002c526c();
    }
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
