/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00309b8c` (_code @ 0x309b8c, 0x1cc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp90; /* 0x90: local_90 */
} param_2_stack;

extern unsigned char LAB_00309d5c; /* 0x309d5c */
extern unsigned char LAB_00309d64; /* 0x309d64 */
extern unsigned char LAB_00309d70; /* 0x309d70 */
extern unsigned char LAB_00309d78; /* 0x309d78 */
extern unsigned char LAB_00309d88; /* 0x309d88 */
extern unsigned char LAB_00309d94; /* 0x309d94 */
extern unsigned char LAB_00309da0; /* 0x309da0 */
extern unsigned char LAB_00309dac; /* 0x309dac */
extern int DAT_0043da2c; /* 0x43da2c */
extern int DAT_0043da30; /* 0x43da30 */

/* Supplied declaration required: FUN_0024beac. */
/* Supplied declaration required: FUN_0024bfbc. */
/* Supplied declaration required: FUN_00290a68. */
/* Supplied declaration required: FUN_00295904. */
/* Supplied declaration required: FUN_00296d8c. */
/* Supplied declaration required: FUN_0029f088. */
extern int FUN_002b47cc(unsigned short);
extern int FUN_002b66ec(void);
/* Supplied declaration required: FUN_002be7fc. */


void FUN_00309b8c(int param_1,unsigned int param_2)

{
/* irregular: 7 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int iStack_8c;
  unsigned int temp_v5 [2];
  unsigned char temp_v6 [100];
  
  temp_v1 = DAT_0043da2c;
  temp_v2 = FUN_002b66ec();
  temp_v2 = FUN_002b47cc(*(unsigned short *)(temp_v2 + 2));
  temp_v3 = FUN_002b66ec();
  temp_v3 = FUN_002b47cc(*(unsigned short *)(temp_v3 + 4));
  if (temp_v2 == 0 || temp_v3 == 0) {
    *(unsigned char *)(temp_v1 + 0x4cb) = 0;
  }
  else {
    *(unsigned char *)(temp_v1 + 0x55c) = 1;
    *(unsigned char *)(temp_v1 + 0x4cb) = 1;
    temp_v0 = *(unsigned char *)(temp_v2 + 0x58);
    if ((temp_v0 & 0xf) == temp_v0 >> 4) {
      FUN_0029f088(0x25,temp_v0 & 0xf,0xffffffff,0);
    }
    else {
      FUN_00290a68(&temp_v4,temp_v0 & 0xf);
      FUN_00290a68(temp_v5,*(unsigned char *)(temp_v2 + 0x58) >> 4);
      FUN_002be7fc(temp_v6,&LAB_00309d5c,&temp_v4,temp_v5);
      FUN_00295904(0x25,temp_v6);
    }
    FUN_0024bfbc(temp_v6,*(unsigned int *)(temp_v3 + 0x54) >> 0x14);
    FUN_00295904(0x26,temp_v6);
    FUN_0024beac(temp_v6,*(unsigned char *)(temp_v2 + 0x59));
    FUN_00295904(0x27,temp_v6);
    if (*(char *)(temp_v3 + 0x5b) == '\0') {
      FUN_002be7fc(temp_v6,&LAB_00309d64);
    }
    if (*(char *)(temp_v3 + 0x5b) == '\x01') {
      FUN_002be7fc(temp_v6,&LAB_00309d70);
    }
    if (*(char *)(temp_v3 + 0x5b) == '\x05') {
      FUN_002be7fc(temp_v6,&LAB_00309d78);
    }
    if (*(char *)(temp_v3 + 0x5b) == '\x06') {
      FUN_002be7fc(temp_v6,&LAB_00309d88);
    }
    if (*(char *)(temp_v3 + 0x5b) == '\a') {
      FUN_002be7fc(temp_v6,&LAB_00309d94);
    }
    if (*(char *)(temp_v3 + 0x5b) == '\b') {
      FUN_002be7fc(temp_v6,&LAB_00309da0);
    }
    if (*(char *)(temp_v3 + 0x5b) == '\t') {
      FUN_002be7fc(temp_v6,&LAB_00309dac);
    }
    FUN_00295904(0x28,temp_v6);
    if (param_1 == 0) {
      param_1 = DAT_0043da30;
    }
    temp_v4 = 3;
    iStack_8c = param_1;
    temp_v5[0] = param_2;
    FUN_00296d8c(*(unsigned int *)(temp_v1 + 0x558),3,0xffffffff,0);
  }
  return;
}
