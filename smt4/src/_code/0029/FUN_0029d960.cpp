/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029d960` (_code @ 0x29d960, 0xd4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001f4568(int, unsigned int, unsigned int, unsigned char [136]);
int FUN_0024bc98(unsigned char [136], int);
int FUN_0024bda8(unsigned char [136], int);
int FUN_002907c4(...);
int FUN_00295660(int, unsigned char [136]);
int asdTextDrawDirectoryEntry(...);
int FUN_0029d770(...);
int FUN_0029da34(...);
int FUN_0029ede8(int, unsigned int, unsigned int, int);
int devilGetRecord(void);
int textFormatBuffer(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char LAB_0029dc18; /* 0x29dc18 */
extern unsigned char LAB_0029dc20; /* 0x29dc20 */
extern unsigned char LAB_0029dc2c; /* 0x29dc2c */
extern unsigned char LAB_0029dc34; /* 0x29dc34 */
extern unsigned char LAB_0029dc44; /* 0x29dc44 */
extern unsigned char LAB_0029dc50; /* 0x29dc50 */
extern unsigned char LAB_0029dc5c; /* 0x29dc5c */
extern unsigned char LAB_0029dc68; /* 0x29dc68 */
extern int DAT_0043da2c; /* 0x43da2c */
extern unsigned int DAT_0043da30; /* 0x43da30 */

/* Supplied declaration required: FUN_001f4568. */
extern int flaggedValueHolderGetTotal(int);
/* Supplied declaration required: FUN_0024bc98. */
/* Supplied declaration required: FUN_0024bda8. */
/* Supplied declaration required: FUN_002907c4. */
/* Supplied declaration required: FUN_00295660. */
/* Supplied declaration required: asdTextDrawDirectoryEntry. */
/* Supplied declaration required: FUN_0029d770. */
/* Supplied declaration required: FUN_0029da34. */
/* Supplied declaration required: FUN_0029ede8. */
extern unsigned int partyMemberFindById(unsigned short);
/* Supplied declaration required: devilGetRecord. */
/* Supplied declaration required: textFormatBuffer. */


void FUN_0029d960(int param_1)

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
  
  temp_v3 = flaggedValueHolderGetTotal(param_1 + 0x20);
  temp_v1 = *(unsigned short *)(param_1 + 0x5a8 + temp_v3 * 0x20 + 4);
  if (*(char *)(param_1 + 0x5a4) == '\0') {
    FUN_0029d770(temp_v1,temp_v6);
    FUN_0029da34(0,1,temp_v1,temp_v6);
    return;
  }
  temp_v3 = flaggedValueHolderGetTotal(param_1 + 0x20);
  temp_v2 = *(unsigned short *)(param_1 + 0x5a8 + temp_v3 * 0x20 + 4);
  if (*(char *)(param_1 + 0x5a5) == '\x01') {
    temp_v4 = partyMemberFindById(temp_v2);
    temp_v3 = DAT_0043da2c;
    temp_v5 = (unsigned int)temp_v2;
    devilGetRecord();
    if (temp_v5 == 0) {
      *(unsigned char *)(temp_v3 + 0x4cb) = 0;
    }
    else {
      *(unsigned char *)(temp_v3 + 0x55c) = 1;
      *(unsigned char *)(temp_v3 + 0x4cb) = 1;
      temp_v0 = (*(unsigned short *)(temp_v5 + 8) & 0xff) >> 5;
      if (temp_v0 == (*(unsigned short *)(temp_v5 + 8) & 0x7ff) >> 8) {
        FUN_0029ede8(0x25,temp_v0,0xffffffff,0);
      }
      else {
        FUN_002907c4(&uStack_b0);
        FUN_002907c4(temp_v7,(*(unsigned short *)(temp_v5 + 8) & 0x7ff) >> 8);
        textFormatBuffer(temp_v8,&LAB_0029dc18,&uStack_b0,temp_v7);
        FUN_00295660(0x25,temp_v8);
      }
      FUN_0024bda8(temp_v8,*(unsigned char *)(temp_v5 + 10));
      FUN_00295660(0x26,temp_v8);
      FUN_0024bc98(temp_v8,(*(unsigned short *)(temp_v5 + 8) & 0x1f) >> 1);
      FUN_00295660(0x27,temp_v8);
      if (*(char *)(temp_v5 + 0xc) == '\0') {
        textFormatBuffer(temp_v8,&LAB_0029dc20);
      }
      if (*(char *)(temp_v5 + 0xc) == '\x01') {
        textFormatBuffer(temp_v8,&LAB_0029dc2c);
      }
      if (*(char *)(temp_v5 + 0xc) == '\x05') {
        textFormatBuffer(temp_v8,&LAB_0029dc34);
      }
      if (*(char *)(temp_v5 + 0xc) == '\x06') {
        textFormatBuffer(temp_v8,&LAB_0029dc44);
      }
      if (*(char *)(temp_v5 + 0xc) == '\a') {
        textFormatBuffer(temp_v8,&LAB_0029dc50);
      }
      if (*(char *)(temp_v5 + 0xc) == '\b') {
        textFormatBuffer(temp_v8,&LAB_0029dc5c);
      }
      if (*(char *)(temp_v5 + 0xc) == '\t') {
        textFormatBuffer(temp_v8,&LAB_0029dc68);
      }
      FUN_00295660(0x28,temp_v8);
      FUN_001f4568(0,temp_v4,(unsigned int)temp_v2,temp_v8);
      FUN_00295660(0x29,temp_v8);
      uStack_ac = DAT_0043da30;
      uStack_b0 = 3;
      temp_v7[0] = 1;
      asdTextDrawDirectoryEntry(*(unsigned int *)(temp_v3 + 0x558),3,0xffffffff,0);
    }
    return;
  }
  FUN_0029d770(temp_v2,temp_v6);
  FUN_0029da34(0,1,temp_v2,temp_v6);
  return;
}

} /* extern "C" */
