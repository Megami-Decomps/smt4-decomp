/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a23a0` (_code @ 0x1a23a0, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b013c(int, unsigned int *);

/* stack frame of param_5: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_5_stack;

extern unsigned char DAT_005c14a8; /* 0x5c14a8 */
extern unsigned int *DAT_005c14ac; /* 0x5c14ac */

#ifndef ROMWRIGHT_PIECE_1_3_DEFINED
#define ROMWRIGHT_PIECE_1_3_DEFINED
#define romwright_piece_1_3(upper, lower) ((unsigned int)(((unsigned int)(unsigned char)(upper) << 24) | ((unsigned int)(lower) & 0xffffffULL)))
#endif
extern int FUN_001a2a4c(void);
/* Supplied declaration required: FUN_001b013c. */


void FUN_001a23a0(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int uStack_2c;
  unsigned int temp_v4;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int temp_v5;
  
  if ((param_5 == 0) || (param_1 + 0xe1000000U < 0x600000)) {
    temp_v4 = DAT_005c14ac[4];
    uStack_24 = DAT_005c14ac[5];
    uStack_20 = DAT_005c14ac[6];
    temp_v1 = romwright_piece_1_3(DAT_005c14a8,(int)*DAT_005c14ac) & 0xffffff00;
    temp_v2 = param_2;
    temp_v3 = param_1;
    uStack_2c = param_3;
    temp_v5 = param_4;
    temp_v0 = FUN_001a2a4c();
    FUN_001b013c(temp_v0 + 0x58,&temp_v1);
  }
  return;
}

} /* extern "C" */
