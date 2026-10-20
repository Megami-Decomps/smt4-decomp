/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00309bc8` (_code @ 0x309bc8, 0x1cc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024bc98(unsigned char [100], int);
int FUN_0024bda8(unsigned char [100], unsigned int);
int FUN_002907c4(...);
int FUN_00295660(int, unsigned char [100]);
int FUN_00296ae8(unsigned int, int, unsigned int, int);
int FUN_0029ede8(int, int, unsigned int, int);
int FUN_002b45e8(void);
int FUN_002be624(...);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp90; /* 0x90: local_90 */
} param_2_stack;

extern unsigned char LAB_00309d98; /* 0x309d98 */
extern unsigned char LAB_00309da0; /* 0x309da0 */
extern unsigned char LAB_00309dac; /* 0x309dac */
extern unsigned char LAB_00309db4; /* 0x309db4 */
extern unsigned char LAB_00309dc4; /* 0x309dc4 */
extern unsigned char LAB_00309dd0; /* 0x309dd0 */
extern unsigned char LAB_00309ddc; /* 0x309ddc */
extern unsigned char LAB_00309de8; /* 0x309de8 */
extern int DAT_0043da2c; /* 0x43da2c */
extern int DAT_0043da30; /* 0x43da30 */

/* Supplied declaration required: FUN_0024bc98. */
/* Supplied declaration required: FUN_0024bda8. */
/* Supplied declaration required: FUN_002907c4. */
/* Supplied declaration required: FUN_00295660. */
/* Supplied declaration required: FUN_00296ae8. */
/* Supplied declaration required: FUN_0029ede8. */
/* Supplied declaration required: FUN_002b45e8. */
extern int FUN_002b63ac(void);
/* Supplied declaration required: FUN_002be624. */


void FUN_00309bc8(int param_1,unsigned int param_2)

{
/* irregular: 8 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int iStack_8c;
  unsigned int temp_v6 [2];
  unsigned char temp_v7 [100];
  
  temp_v1 = DAT_0043da2c;
  temp_v2 = FUN_002b63ac();
  temp_v3 = (unsigned int)*(unsigned short *)(temp_v2 + 2);
  FUN_002b45e8();
  temp_v2 = FUN_002b63ac();
  temp_v4 = (unsigned int)*(unsigned short *)(temp_v2 + 4);
  FUN_002b45e8();
  if (temp_v3 == 0 || temp_v4 == 0) {
    *(unsigned char *)(temp_v1 + 0x4cb) = 0;
  }
  else {
    *(unsigned char *)(temp_v1 + 0x55c) = 1;
    *(unsigned char *)(temp_v1 + 0x4cb) = 1;
    temp_v0 = *(unsigned char *)(temp_v3 + 0x58);
    if ((temp_v0 & 0xf) == temp_v0 >> 4) {
      FUN_0029ede8(0x25,temp_v0 & 0xf,0xffffffff,0);
    }
    else {
      FUN_002907c4(&temp_v5,temp_v0 & 0xf);
      FUN_002907c4(temp_v6,*(unsigned char *)(temp_v3 + 0x58) >> 4);
      FUN_002be624(temp_v7,&LAB_00309d98,&temp_v5,temp_v6);
      FUN_00295660(0x25,temp_v7);
    }
    FUN_0024bda8(temp_v7,*(unsigned int *)(temp_v4 + 0x54) >> 0x14);
    FUN_00295660(0x26,temp_v7);
    FUN_0024bc98(temp_v7,*(unsigned char *)(temp_v3 + 0x59));
    FUN_00295660(0x27,temp_v7);
    if (*(char *)(temp_v4 + 0x5b) == '\0') {
      FUN_002be624(temp_v7,&LAB_00309da0);
    }
    if (*(char *)(temp_v4 + 0x5b) == '\x01') {
      FUN_002be624(temp_v7,&LAB_00309dac);
    }
    if (*(char *)(temp_v4 + 0x5b) == '\x05') {
      FUN_002be624(temp_v7,&LAB_00309db4);
    }
    if (*(char *)(temp_v4 + 0x5b) == '\x06') {
      FUN_002be624(temp_v7,&LAB_00309dc4);
    }
    if (*(char *)(temp_v4 + 0x5b) == '\a') {
      FUN_002be624(temp_v7,&LAB_00309dd0);
    }
    if (*(char *)(temp_v4 + 0x5b) == '\b') {
      FUN_002be624(temp_v7,&LAB_00309ddc);
    }
    if (*(char *)(temp_v4 + 0x5b) == '\t') {
      FUN_002be624(temp_v7,&LAB_00309de8);
    }
    FUN_00295660(0x28,temp_v7);
    if (param_1 == 0) {
      param_1 = DAT_0043da30;
    }
    temp_v5 = 3;
    iStack_8c = param_1;
    temp_v6[0] = param_2;
    FUN_00296ae8(*(unsigned int *)(temp_v1 + 0x558),3,0xffffffff,0);
  }
  return;
}

} /* extern "C" */
