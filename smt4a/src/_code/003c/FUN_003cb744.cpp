/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cb744` (_code @ 0x3cb744, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018a924(int *, unsigned int [6]);
int FUN_003534b0(int, int, unsigned char *, int, int, unsigned int, int, int, int, int, int, int, int, unsigned int, int, int, int, unsigned int, int);

/* stack frame of void: 15 slot(s), 60 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} void_stack;

extern unsigned char LAB_003cb844; /* 0x3cb844 */
extern int g_mapGimic; /* 0x580ca0 */

/* Supplied declaration required: FUN_0018a924. */
/* Supplied declaration required: FUN_003534b0. */


void FUN_003cb744(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1 [6];
  
  temp_v0 = 0;
  temp_v1[0] = 0;
  if (*(char *)(g_mapGimic + 0x9b4) != '\0') {
    FUN_0018a924(&temp_v0,temp_v1);
    FUN_003534b0(0x208,0,&LAB_003cb844,0x57,0xc,0xffffffff,0,0,0,0,0,0,0,0xffffffff,1,1,1,0xffffffff
                 ,0);
  }
  return;
}

} /* extern "C" */
