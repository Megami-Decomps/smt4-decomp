/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029dc00` (_code @ 0x29dc00, 0xd4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char LAB_0029deb8; /* 0x29deb8 */
extern unsigned char LAB_0029dec0; /* 0x29dec0 */
extern unsigned char LAB_0029decc; /* 0x29decc */
extern unsigned char LAB_0029ded4; /* 0x29ded4 */
extern unsigned char LAB_0029dee4; /* 0x29dee4 */
extern unsigned char LAB_0029def0; /* 0x29def0 */
extern unsigned char LAB_0029defc; /* 0x29defc */
extern unsigned char LAB_0029df08; /* 0x29df08 */
extern int DAT_0043da2c; /* 0x43da2c */
extern unsigned int DAT_0043da30; /* 0x43da30 */

/* Supplied declaration required: FUN_001f4480. */
extern int FUN_002337a0(int);
/* Supplied declaration required: FUN_0024beac. */
/* Supplied declaration required: FUN_0024bfbc. */
/* Supplied declaration required: FUN_00290a68. */
/* Supplied declaration required: FUN_00295904. */
/* Supplied declaration required: FUN_00296d8c. */
/* Supplied declaration required: FUN_0029da10. */
/* Supplied declaration required: FUN_0029dcd4. */
/* Supplied declaration required: FUN_0029f088. */
extern unsigned int FUN_002b0824(unsigned short);
/* Supplied declaration required: FUN_002b9364. */
/* Supplied declaration required: FUN_002be7fc. */


void FUN_0029dc00(int param_1)

{
/* irregular: 11 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6 [1400];
  int uStack_b0;
  unsigned int uStack_ac;
  unsigned int temp_v7 [2];
  unsigned char temp_v8 [136];
  
  temp_v3 = FUN_002337a0(param_1 + 0x20);
  temp_v1 = *(unsigned short *)(param_1 + 0x5a8 + temp_v3 * 0x20 + 4);
  if (*(char *)(param_1 + 0x5a4) == '\0') {
    FUN_0029da10(temp_v1,temp_v6);
    FUN_0029dcd4(0,1,temp_v1,temp_v6);
    return;
  }
  temp_v3 = FUN_002337a0(param_1 + 0x20);
  temp_v2 = *(unsigned short *)(param_1 + 0x5a8 + temp_v3 * 0x20 + 4);
  if (*(char *)(param_1 + 0x5a5) == '\x01') {
    temp_v4 = FUN_002b0824(temp_v2);
    temp_v3 = DAT_0043da2c;
    temp_v5 = (unsigned int)temp_v2;
    FUN_002b9364();
    if (temp_v5 == 0) {
      *(unsigned char *)(temp_v3 + 0x4cb) = 0;
    }
    else {
      *(unsigned char *)(temp_v3 + 0x55c) = 1;
      *(unsigned char *)(temp_v3 + 0x4cb) = 1;
      temp_v0 = (*(unsigned short *)(temp_v5 + 8) & 0xff) >> 5;
      if (temp_v0 == (*(unsigned short *)(temp_v5 + 8) & 0x7ff) >> 8) {
        FUN_0029f088(0x25,temp_v0,0xffffffff,0);
      }
      else {
        FUN_00290a68(&uStack_b0);
        FUN_00290a68(temp_v7,(*(unsigned short *)(temp_v5 + 8) & 0x7ff) >> 8);
        FUN_002be7fc(temp_v8,&LAB_0029deb8,&uStack_b0,temp_v7);
        FUN_00295904(0x25,temp_v8);
      }
      FUN_0024bfbc(temp_v8,*(unsigned char *)(temp_v5 + 10));
      FUN_00295904(0x26,temp_v8);
      FUN_0024beac(temp_v8,(*(unsigned short *)(temp_v5 + 8) & 0x1f) >> 1);
      FUN_00295904(0x27,temp_v8);
      if (*(char *)(temp_v5 + 0xc) == '\0') {
        FUN_002be7fc(temp_v8,&LAB_0029dec0);
      }
      if (*(char *)(temp_v5 + 0xc) == '\x01') {
        FUN_002be7fc(temp_v8,&LAB_0029decc);
      }
      if (*(char *)(temp_v5 + 0xc) == '\x05') {
        FUN_002be7fc(temp_v8,&LAB_0029ded4);
      }
      if (*(char *)(temp_v5 + 0xc) == '\x06') {
        FUN_002be7fc(temp_v8,&LAB_0029dee4);
      }
      if (*(char *)(temp_v5 + 0xc) == '\a') {
        FUN_002be7fc(temp_v8,&LAB_0029def0);
      }
      if (*(char *)(temp_v5 + 0xc) == '\b') {
        FUN_002be7fc(temp_v8,&LAB_0029defc);
      }
      if (*(char *)(temp_v5 + 0xc) == '\t') {
        FUN_002be7fc(temp_v8,&LAB_0029df08);
      }
      FUN_00295904(0x28,temp_v8);
      FUN_001f4480(0,temp_v4,(unsigned int)temp_v2,temp_v8);
      FUN_00295904(0x29,temp_v8);
      uStack_ac = DAT_0043da30;
      uStack_b0 = 3;
      temp_v7[0] = 1;
      FUN_00296d8c(*(unsigned int *)(temp_v3 + 0x558),3,0xffffffff,0);
    }
    return;
  }
  FUN_0029da10(temp_v2,temp_v6);
  FUN_0029dcd4(0,1,temp_v2,temp_v6);
  return;
}
