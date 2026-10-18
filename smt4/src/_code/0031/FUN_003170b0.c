/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003170b0` (_code @ 0x3170b0, 0x1d0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spA8; /* 0xa8: local_a8 */
} param_2_stack;

extern unsigned char LAB_00317284; /* 0x317284 */
extern unsigned char LAB_0031728c; /* 0x31728c */
extern unsigned char LAB_00317298; /* 0x317298 */
extern unsigned char LAB_003172a0; /* 0x3172a0 */
extern unsigned char LAB_003172b0; /* 0x3172b0 */
extern unsigned char LAB_003172bc; /* 0x3172bc */
extern unsigned char LAB_003172c8; /* 0x3172c8 */
extern unsigned char LAB_003172d4; /* 0x3172d4 */
extern int DAT_0043da2c; /* 0x43da2c */
extern int DAT_0043da30; /* 0x43da30 */

/* Supplied declaration required: FUN_001f4568. */
/* Supplied declaration required: FUN_0024bc98. */
/* Supplied declaration required: FUN_0024bda8. */
/* Supplied declaration required: FUN_002907c4. */
/* Supplied declaration required: FUN_00295660. */
/* Supplied declaration required: FUN_00296ae8. */
/* Supplied declaration required: FUN_0029ede8. */
extern int FUN_002b45e8(unsigned short);
extern unsigned short *FUN_002b63ac(void);
/* Supplied declaration required: FUN_002be624. */


void FUN_003170b0(int param_1,unsigned int param_2)

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
  puVar3 = (unsigned short *)FUN_002b63ac();
  temp_v2 = FUN_002b45e8(*puVar3);
  if (temp_v2 == 0) {
    *(unsigned char *)(temp_v1 + 0x4cb) = 0;
  }
  else {
    *(unsigned char *)(temp_v1 + 0x55c) = 1;
    *(unsigned char *)(temp_v1 + 0x4cb) = 1;
    temp_v0 = *(unsigned char *)(temp_v2 + 0x58);
    if ((temp_v0 & 0xf) == temp_v0 >> 4) {
      FUN_0029ede8(0x25,temp_v0 & 0xf,0xffffffff,0);
    }
    else {
      FUN_002907c4(&temp_v3,temp_v0 & 0xf);
      FUN_002907c4(temp_v4,*(unsigned char *)(temp_v2 + 0x58) >> 4);
      FUN_002be624(temp_v5,&LAB_00317284,&temp_v3,temp_v4);
      FUN_00295660(0x25,temp_v5);
    }
    FUN_0024bda8(temp_v5,*(unsigned int *)(temp_v2 + 0x54) >> 0x14);
    FUN_00295660(0x26,temp_v5);
    FUN_0024bc98(temp_v5,*(unsigned char *)(temp_v2 + 0x59));
    FUN_00295660(0x27,temp_v5);
    if (*(char *)(temp_v2 + 0x5b) == '\0') {
      FUN_002be624(temp_v5,&LAB_0031728c);
    }
    if (*(char *)(temp_v2 + 0x5b) == '\x01') {
      FUN_002be624(temp_v5,&LAB_00317298);
    }
    if (*(char *)(temp_v2 + 0x5b) == '\x05') {
      FUN_002be624(temp_v5,&LAB_003172a0);
    }
    if (*(char *)(temp_v2 + 0x5b) == '\x06') {
      FUN_002be624(temp_v5,&LAB_003172b0);
    }
    if (*(char *)(temp_v2 + 0x5b) == '\a') {
      FUN_002be624(temp_v5,&LAB_003172bc);
    }
    if (*(char *)(temp_v2 + 0x5b) == '\b') {
      FUN_002be624(temp_v5,&LAB_003172c8);
    }
    if (*(char *)(temp_v2 + 0x5b) == '\t') {
      FUN_002be624(temp_v5,&LAB_003172d4);
    }
    FUN_00295660(0x28,temp_v5);
    FUN_001f4568(1,0,0,temp_v5);
    FUN_00295660(0x29,temp_v5);
    if (param_1 == 0) {
      param_1 = DAT_0043da30;
    }
    temp_v3 = 3;
    iStack_a4 = param_1;
    temp_v4[0] = param_2;
    FUN_00296ae8(*(unsigned int *)(temp_v1 + 0x558),3,0xffffffff,0);
  }
  return;
}
