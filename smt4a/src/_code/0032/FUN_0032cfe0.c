/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032cfe0` (_code @ 0x32cfe0, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_1_stack;

extern unsigned char LAB_0032d2f4; /* 0x32d2f4 */
extern unsigned char LAB_0032d2fc; /* 0x32d2fc */
extern unsigned char LAB_0032d308; /* 0x32d308 */
extern unsigned char LAB_0032d324; /* 0x32d324 */
extern unsigned char LAB_0032d334; /* 0x32d334 */
extern unsigned char LAB_0032d340; /* 0x32d340 */
extern unsigned char LAB_0032d34c; /* 0x32d34c */
extern unsigned char LAB_0032d358; /* 0x32d358 */
extern unsigned char LAB_0032d364; /* 0x32d364 */
extern unsigned char LAB_0032d370; /* 0x32d370 */
extern unsigned char LAB_0032d37c; /* 0x32d37c */
extern int DAT_0057f0c8; /* 0x57f0c8 */
extern unsigned int DAT_0057f0cc; /* 0x57f0cc */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00184310. */
extern unsigned int FUN_0019e4d4(unsigned short);
/* Supplied declaration required: FUN_0020d164. */
/* Supplied declaration required: FUN_00230c1c. */
/* Supplied declaration required: FUN_002a1f60. */
extern int FUN_002a4b28(unsigned short);
/* Supplied declaration required: FUN_002ad414. */
/* Supplied declaration required: FUN_002c0940. */
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: FUN_0032d0c8. */
/* Supplied declaration required: FUN_00359974. */
/* Supplied declaration required: FUN_0035ad50. */
extern int FUN_004cfe4c(int);


void FUN_0032cfe0(int param_1)

{
/* irregular: 11 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5 [144];
  int uStack_b0;
  unsigned int uStack_ac;
  unsigned int temp_v6 [2];
  unsigned char temp_v7 [140];
  
  temp_v2 = FUN_004cfe4c(param_1 + 0x20);
  temp_v1 = *(unsigned short *)(param_1 + 0x864 + temp_v2 * 0x20 + 4);
  if (*(char *)(param_1 + 0x860) != '\0') {
    temp_v2 = FUN_004cfe4c(param_1 + 0x20);
    temp_v1 = *(unsigned short *)(param_1 + 0x864 + temp_v2 * 0x20 + 4);
    if (*(char *)(param_1 + 0x861) == '\x01') {
      temp_v3 = FUN_0019e4d4(temp_v1);
      temp_v2 = DAT_0057f0c8;
      temp_v4 = (unsigned int)temp_v1;
      FUN_00184310();
      if (temp_v4 == 0) {
        *(unsigned char *)(temp_v2 + 0x5ea) = 0;
      }
      else {
        *(unsigned char *)(temp_v2 + 0x67c) = 1;
        *(unsigned char *)(temp_v2 + 0x5ea) = 1;
        temp_v0 = (*(unsigned short *)(temp_v4 + 10) & 0xff) >> 5;
        if (temp_v0 == (*(unsigned short *)(temp_v4 + 10) & 0x7ff) >> 8) {
          FUN_00359974(0x25,temp_v0,0xffffffff,0);
        }
        else {
          FUN_002c0940(&uStack_b0);
          FUN_002c0940(temp_v6,(*(unsigned short *)(temp_v4 + 10) & 0x7ff) >> 8);
          FUN_00100388(temp_v7,&LAB_0032d2f4,&uStack_b0,temp_v6);
          FUN_003180c4(0x25,temp_v7);
        }
        FUN_0020d164(temp_v7,*(unsigned char *)(temp_v4 + 0xc));
        FUN_003180c4(0x26,temp_v7);
        FUN_00230c1c(temp_v7,(*(unsigned short *)(temp_v4 + 10) & 0x1f) >> 1);
        FUN_003180c4(0x27,temp_v7);
        if (*(char *)(temp_v4 + 0xe) == '\0') {
          FUN_00100388(temp_v7,&LAB_0032d2fc);
        }
        if (*(char *)(temp_v4 + 0xe) == '\x01') {
          FUN_00100388(temp_v7,&LAB_0032d308);
        }
        if (*(char *)(temp_v4 + 0xe) == '\x05') {
          FUN_00100388(temp_v7,&LAB_0032d324);
        }
        if (*(char *)(temp_v4 + 0xe) == '\x06') {
          FUN_00100388(temp_v7,&LAB_0032d334);
        }
        if (*(char *)(temp_v4 + 0xe) == '\a') {
          FUN_00100388(temp_v7,&LAB_0032d340);
        }
        if (*(char *)(temp_v4 + 0xe) == '\b') {
          FUN_00100388(temp_v7,&LAB_0032d34c);
        }
        if (*(char *)(temp_v4 + 0xe) == '\t') {
          FUN_00100388(temp_v7,&LAB_0032d358);
        }
        if (*(char *)(temp_v4 + 0xe) == '\v') {
          FUN_00100388(temp_v7,&LAB_0032d364);
        }
        if (*(char *)(temp_v4 + 0xe) == '\f') {
          FUN_00100388(temp_v7,&LAB_0032d370);
        }
        if (*(char *)(temp_v4 + 0xe) == '\r') {
          FUN_00100388(temp_v7,&LAB_0032d37c);
        }
        FUN_003180c4(0x28,temp_v7);
        FUN_002ad414(0,temp_v3,(unsigned int)temp_v1,temp_v7);
        FUN_003180c4(0x29,temp_v7);
        uStack_ac = DAT_0057f0cc;
        uStack_b0 = 3;
        temp_v6[0] = 1;
        FUN_002a1f60(*(unsigned int *)(temp_v2 + 0x678),2,0xffffffff,0);
      }
      return;
    }
    FUN_0035ad50(temp_v1,temp_v5);
  }
  else {
    FUN_0035ad50(temp_v1,temp_v5);
    temp_v2 = FUN_002a4b28(temp_v1);
    if (temp_v2 == 0) {
      FUN_0032d0c8(0,2,temp_v1,temp_v5);
      return;
    }
  }
  FUN_0032d0c8(0,1,temp_v1,temp_v5);
  return;
}
