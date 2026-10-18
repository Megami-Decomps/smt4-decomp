/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003171f8` (_code @ 0x3171f8, 0x1d0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spA8; /* 0xa8: local_a8 */
} param_2_stack;

extern unsigned char LAB_003173cc; /* 0x3173cc */
extern unsigned char LAB_003173d4; /* 0x3173d4 */
extern unsigned char LAB_003173e0; /* 0x3173e0 */
extern unsigned char LAB_003173e8; /* 0x3173e8 */
extern unsigned char LAB_003173f8; /* 0x3173f8 */
extern unsigned char LAB_00317404; /* 0x317404 */
extern unsigned char LAB_00317410; /* 0x317410 */
extern unsigned char LAB_0031741c; /* 0x31741c */
extern int DAT_0043da2c; /* 0x43da2c */
extern int DAT_0043da30; /* 0x43da30 */

/* Supplied declaration required: FUN_001f4480. */
/* Supplied declaration required: FUN_0024beac. */
/* Supplied declaration required: FUN_0024bfbc. */
/* Supplied declaration required: FUN_00290a68. */
/* Supplied declaration required: FUN_00295904. */
/* Supplied declaration required: FUN_00296d8c. */
/* Supplied declaration required: FUN_0029f088. */
extern int FUN_002b47cc(unsigned short);
extern unsigned short *FUN_002b66ec(void);
/* Supplied declaration required: FUN_002be7fc. */


void FUN_003171f8(int param_1,unsigned int param_2)

{
/* irregular: 8 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned short *puVar3;
  int temp_v2;
  int temp_v3;
  int iStack_a4;
  unsigned int temp_v4 [2];
  unsigned char temp_v5 [128];
  
  temp_v1 = DAT_0043da2c;
  puVar3 = (unsigned short *)FUN_002b66ec();
  temp_v2 = FUN_002b47cc(*puVar3);
  if (temp_v2 == 0) {
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
      FUN_00290a68(&temp_v3,temp_v0 & 0xf);
      FUN_00290a68(temp_v4,*(unsigned char *)(temp_v2 + 0x58) >> 4);
      FUN_002be7fc(temp_v5,&LAB_003173cc,&temp_v3,temp_v4);
      FUN_00295904(0x25,temp_v5);
    }
    FUN_0024bfbc(temp_v5,*(unsigned int *)(temp_v2 + 0x54) >> 0x14);
    FUN_00295904(0x26,temp_v5);
    FUN_0024beac(temp_v5,*(unsigned char *)(temp_v2 + 0x59));
    FUN_00295904(0x27,temp_v5);
    if (*(char *)(temp_v2 + 0x5b) == '\0') {
      FUN_002be7fc(temp_v5,&LAB_003173d4);
    }
    if (*(char *)(temp_v2 + 0x5b) == '\x01') {
      FUN_002be7fc(temp_v5,&LAB_003173e0);
    }
    if (*(char *)(temp_v2 + 0x5b) == '\x05') {
      FUN_002be7fc(temp_v5,&LAB_003173e8);
    }
    if (*(char *)(temp_v2 + 0x5b) == '\x06') {
      FUN_002be7fc(temp_v5,&LAB_003173f8);
    }
    if (*(char *)(temp_v2 + 0x5b) == '\a') {
      FUN_002be7fc(temp_v5,&LAB_00317404);
    }
    if (*(char *)(temp_v2 + 0x5b) == '\b') {
      FUN_002be7fc(temp_v5,&LAB_00317410);
    }
    if (*(char *)(temp_v2 + 0x5b) == '\t') {
      FUN_002be7fc(temp_v5,&LAB_0031741c);
    }
    FUN_00295904(0x28,temp_v5);
    FUN_001f4480(1,0,0,temp_v5);
    FUN_00295904(0x29,temp_v5);
    if (param_1 == 0) {
      param_1 = DAT_0043da30;
    }
    temp_v3 = 3;
    iStack_a4 = param_1;
    temp_v4[0] = param_2;
    FUN_00296d8c(*(unsigned int *)(temp_v1 + 0x558),3,0xffffffff,0);
  }
  return;
}
