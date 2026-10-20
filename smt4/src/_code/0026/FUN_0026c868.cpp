/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026c868` (_code @ 0x26c868, 0x150 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029212c(...);

int FUN_001f4568(int, int, int, unsigned char [136]);
int FUN_0024bc98(unsigned char [136], int);
int FUN_0024bda8(unsigned char [136], unsigned int);
int FUN_002907c4(...);
int FUN_00295660(int, unsigned char [136]);
int FUN_00296ae8(...);
int FUN_0029c94c(...);
int FUN_0029da34(...);
int FUN_0029dc74(...);
int FUN_0029ede8(int, int, unsigned int, int);
int FUN_0029ee6c(...);
int dataTable08Sub2GetRecord(void);
int FUN_002be624(...);
int dataTableGetCount(...);
int SBORROW4(...);
int rt_memcpy(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char LAB_00317284; /* 0x317284 */
extern unsigned char LAB_0031728c; /* 0x31728c */
extern unsigned char LAB_00317298; /* 0x317298 */
extern unsigned char LAB_003172a0; /* 0x3172a0 */
extern unsigned char LAB_003172b0; /* 0x3172b0 */
extern unsigned char LAB_003172bc; /* 0x3172bc */
extern unsigned char LAB_003172c8; /* 0x3172c8 */
extern unsigned char LAB_003172d4; /* 0x3172d4 */
extern int DAT_0043da2c; /* 0x43da2c */
extern unsigned int DAT_0043da30; /* 0x43da30 */
extern int g_partyPanel; /* 0x43dcf0 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_001f4568. */
/* Supplied declaration required: FUN_0024bc98. */
/* Supplied declaration required: FUN_0024bda8. */
extern unsigned int FUN_00282ccc(void);
extern int FUN_00282e70(void);
/* Supplied declaration required: FUN_002907c4. */
/* Supplied declaration required: FUN_0029212c. */
/* Supplied declaration required: FUN_00295660. */
/* Supplied declaration required: FUN_00296ae8. */
/* Supplied declaration required: FUN_0029c94c. */
/* Supplied declaration required: FUN_0029da34. */
/* Supplied declaration required: FUN_0029dc74. */
/* Supplied declaration required: FUN_0029ede8. */
/* Supplied declaration required: FUN_0029ee6c. */
extern unsigned char *FUN_002b066c(unsigned int);
/* Supplied declaration required: dataTable08Sub2GetRecord. */
extern unsigned short *gameGetPlayerData(void);
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: dataTableGetCount. */
extern int dataTableGetEntries(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);
/* Supplied declaration required: rt_memcpy. */


void FUN_0026c868(void)

{
/* irregular: 17 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char *puVar7;
  int temp_v6;
  int temp_v7;
  unsigned short *puVar10;
  int temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10 [1408];
  int uStack_a8;
  unsigned int uStack_a4;
  unsigned int temp_v11 [2];
  unsigned char temp_v12 [136];
  
  temp_v2 = g_partyPanel;
  if (g_partyPanel == 0) {
    return;
  }
  temp_v6 = 0;
  switch(*(unsigned char *)(g_partyPanel + 0x66c)) {
  default:
    if (temp_v6 == 0) {
      return;
    }
    FUN_0029ee6c(temp_v6,0x323232ff);
    return;
  case 2:
  case 3:
  case 4:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
    temp_v3 = FUN_00282e70();
    temp_v4 = FUN_00282ccc();
    temp_v6 = DAT_0043da2c;
    if (temp_v3 != 0) {
      puVar10 = (unsigned short *)gameGetPlayerData();
      temp_v4 = (unsigned int)*puVar10;
      dataTable08Sub2GetRecord();
      if (temp_v4 == 0) {
        *(unsigned char *)(temp_v6 + 0x4cb) = 0;
      }
      else {
        *(unsigned char *)(temp_v6 + 0x55c) = 1;
        *(unsigned char *)(temp_v6 + 0x4cb) = 1;
        temp_v1 = *(unsigned char *)(temp_v4 + 0x58);
        if ((temp_v1 & 0xf) == temp_v1 >> 4) {
          FUN_0029ede8(0x25,temp_v1 & 0xf,0xffffffff,0);
        }
        else {
          FUN_002907c4(&uStack_a8,temp_v1 & 0xf);
          FUN_002907c4(temp_v11,*(unsigned char *)(temp_v4 + 0x58) >> 4);
          FUN_002be624(temp_v12,&LAB_00317284,&uStack_a8,temp_v11);
          FUN_00295660(0x25,temp_v12);
        }
        FUN_0024bda8(temp_v12,*(unsigned int *)(temp_v4 + 0x54) >> 0x14);
        FUN_00295660(0x26,temp_v12);
        FUN_0024bc98(temp_v12,*(unsigned char *)(temp_v4 + 0x59));
        FUN_00295660(0x27,temp_v12);
        if (*(char *)(temp_v4 + 0x5b) == '\0') {
          FUN_002be624(temp_v12,&LAB_0031728c);
        }
        if (*(char *)(temp_v4 + 0x5b) == '\x01') {
          FUN_002be624(temp_v12,&LAB_00317298);
        }
        if (*(char *)(temp_v4 + 0x5b) == '\x05') {
          FUN_002be624(temp_v12,&LAB_003172a0);
        }
        if (*(char *)(temp_v4 + 0x5b) == '\x06') {
          FUN_002be624(temp_v12,&LAB_003172b0);
        }
        if (*(char *)(temp_v4 + 0x5b) == '\a') {
          FUN_002be624(temp_v12,&LAB_003172bc);
        }
        if (*(char *)(temp_v4 + 0x5b) == '\b') {
          FUN_002be624(temp_v12,&LAB_003172c8);
        }
        if (*(char *)(temp_v4 + 0x5b) == '\t') {
          FUN_002be624(temp_v12,&LAB_003172d4);
        }
        FUN_00295660(0x28,temp_v12);
        FUN_001f4568(1,0,0,temp_v12);
        FUN_00295660(0x29,temp_v12);
        uStack_a4 = DAT_0043da30;
        uStack_a8 = 3;
        temp_v11[0] = 0;
        FUN_00296ae8(*(unsigned int *)(temp_v6 + 0x558),3,0xffffffff,0);
      }
      return;
    }
    if ((int)temp_v4 < 0) {
      if (*(char *)(temp_v2 + 0x66c) == '\f' || *(char *)(temp_v2 + 0x66c) == '\r') {
        temp_v5 = dataTableGet(0x39,0);
        temp_v6 = dataTableGetEntries();
        temp_v4 = dataTableGetCount(temp_v5);
        if (temp_v4 >= 7) {
          temp_v6 = temp_v6 + 0x1f9;
        }
        else {
          temp_v6 = 0;
        }
        FUN_0029ee6c(temp_v6,0x323232ff);
      }
      if (*(char *)(temp_v2 + 0x66c) == '\x0e') {
        temp_v5 = dataTableGet(0x39,0);
        temp_v6 = dataTableGetEntries();
        temp_v4 = dataTableGetCount(temp_v5);
        if (temp_v4 >= 8) {
          temp_v6 = temp_v6 + 0x24d;
        }
        else {
          temp_v6 = 0;
        }
        FUN_0029ee6c(temp_v6,0x323232ff);
      }
      if (*(char *)(temp_v2 + 0x66c) == '\x04') {
        temp_v5 = dataTableGet(0x39,0);
        temp_v6 = dataTableGetEntries();
        temp_v4 = dataTableGetCount(temp_v5);
        if (temp_v4 >= 3) {
          temp_v6 = temp_v6 + 0xa9;
        }
        else {
          temp_v6 = 0;
        }
        FUN_0029ee6c(temp_v6,0x323232ff);
      }
      if (*(char *)(temp_v2 + 0x66c) == '\x0f') {
        temp_v5 = dataTableGet(0x39,0);
        temp_v6 = dataTableGetEntries();
        temp_v4 = dataTableGetCount(temp_v5);
        if (temp_v4 >= 9) {
          temp_v6 = temp_v6 + 0x2a1;
        }
        else {
          temp_v6 = 0;
        }
        FUN_0029ee6c(temp_v6,0x323232ff);
      }
      if (*(char *)(temp_v2 + 0x66c) == '\x02') {
        temp_v5 = dataTableGet(0x39,0);
        temp_v3 = dataTableGetEntries();
        temp_v6 = dataTableGetCount(temp_v5);
        if (temp_v6 != 0) {
          temp_v3 = temp_v3 + 1;
        }
        else {
          temp_v3 = 0;
        }
        FUN_0029ee6c(temp_v3,0x323232ff);
      }
      if (*(char *)(temp_v2 + 0x66c) == '\x03') {
        temp_v5 = dataTableGet(0x39,0);
        temp_v6 = dataTableGetEntries();
        temp_v4 = dataTableGetCount(temp_v5);
        temp_v2 = DAT_0043da2c;
        if (temp_v4 >= 2) {
          temp_v6 = temp_v6 + 0x55;
        }
        else {
          temp_v6 = 0;
        }
        *(unsigned int *)(DAT_0043da2c + 0x4cc) = 0x323232ff;
        *(unsigned int *)(temp_v2 + 0x550) = 0;
        *(unsigned char *)(temp_v2 + 0x554) = 0xff;
        if (temp_v6 == 0) {
          *(unsigned char *)(temp_v2 + 0x4cb) = 0;
        }
        else {
          *(unsigned int *)(temp_v2 + 0x4d0) = 0;
          *(unsigned int *)(temp_v2 + 0x4d4) = 0;
          *(unsigned int *)(temp_v2 + 0x4d8) = 0;
          *(unsigned int *)(temp_v2 + 0x4dc) = 0;
          *(unsigned int *)(temp_v2 + 0x4e0) = 0;
          *(unsigned int *)(temp_v2 + 0x4e4) = 0;
          *(unsigned int *)(temp_v2 + 0x4e8) = 0;
          *(unsigned int *)(temp_v2 + 0x4ec) = 0;
          *(unsigned int *)(temp_v2 + 0x4f0) = 0;
          *(unsigned int *)(temp_v2 + 0x4f4) = 0;
          *(unsigned int *)(temp_v2 + 0x4f8) = 0;
          *(unsigned int *)(temp_v2 + 0x4fc) = 0;
          *(unsigned int *)(temp_v2 + 0x500) = 0;
          *(unsigned int *)(temp_v2 + 0x504) = 0;
          *(unsigned int *)(temp_v2 + 0x508) = 0;
          *(unsigned int *)(temp_v2 + 0x50c) = 0;
          *(unsigned int *)(temp_v2 + 0x510) = 0;
          *(unsigned int *)(temp_v2 + 0x514) = 0;
          *(unsigned int *)(temp_v2 + 0x518) = 0;
          *(unsigned int *)(temp_v2 + 0x51c) = 0;
          *(unsigned int *)(temp_v2 + 0x520) = 0;
          *(unsigned int *)(temp_v2 + 0x524) = 0;
          *(unsigned int *)(temp_v2 + 0x528) = 0;
          *(unsigned int *)(temp_v2 + 0x52c) = 0;
          *(unsigned int *)(temp_v2 + 0x530) = 0;
          *(unsigned int *)(temp_v2 + 0x534) = 0;
          *(unsigned int *)(temp_v2 + 0x538) = 0;
          *(unsigned int *)(temp_v2 + 0x53c) = 0;
          *(unsigned int *)(temp_v2 + 0x540) = 0;
          *(unsigned int *)(temp_v2 + 0x544) = 0;
          temp_v8 = 0;
          *(unsigned int *)(temp_v2 + 0x548) = 0;
          temp_v7 = 0;
          temp_v3 = 0;
          *(unsigned int *)(temp_v2 + 0x54c) = 0;
          do {
            if (*(char *)(temp_v6 + temp_v3) == '\0') {
              rt_memcpy(temp_v2 + temp_v8 * 0x40 + 0x4d0,temp_v6 + temp_v7,temp_v3 - temp_v7);
              break;
            }
            if (*(char *)(temp_v6 + temp_v3) == '\n') {
              rt_memcpy(temp_v2 + temp_v8 * 0x40 + 0x4d0,temp_v6 + temp_v7,temp_v3 - temp_v7);
              temp_v7 = temp_v3 + 1;
              temp_v8 = temp_v8 + 1;
            }
            temp_v9 = SBORROW4(temp_v8,1);
            temp_v0 = temp_v8 - 1;
            if (temp_v8 < 2) {
              temp_v9 = SBORROW4(temp_v3 + 1,0x80);
              temp_v0 = temp_v3 - 0x7f;
              temp_v3 = temp_v3 + 1;
            }
          } while (temp_v0 < 0 != temp_v9);
          *(unsigned char *)(temp_v2 + 0x55c) = 0;
          *(unsigned char *)(temp_v2 + 0x4cb) = 1;
        }
        return;
      }
    }
    else {
      puVar7 = (unsigned char *)FUN_002b066c(temp_v4 & 0xffff);
      if (puVar7 == (unsigned char *)0x0) {
        FUN_0029dc74(temp_v4 & 0xffff,temp_v10);
        puVar7 = temp_v10;
      }
      FUN_0029da34(0,1,temp_v4 & 0xffff,puVar7);
    }
    return;
  case 5:
  case 6:
  case 7:
    FUN_0029c94c(*(unsigned short *)(g_partyPanel + 0x36));
    return;
  case 8:
  case 9:
    FUN_0029212c(*(unsigned short *)(g_partyPanel + 0x36));
    return;
  case 10:
    if (*(int *)(g_partyPanel + 0xb3c) == 0) {
      temp_v5 = dataTableGet(0x39,0);
      temp_v6 = dataTableGetEntries();
      temp_v4 = dataTableGetCount(temp_v5);
      if (temp_v4 < 4) {
        return;
      }
      temp_v6 = temp_v6 + 0xfd;
      if (temp_v6 == 0) {
        return;
      }
      FUN_0029ee6c(temp_v6,0x323232ff);
      return;
    }
    if (*(int *)(g_partyPanel + 0xb3c) != 1) {
      return;
    }
    temp_v5 = dataTableGet(0x39,0);
    temp_v6 = dataTableGetEntries();
    temp_v4 = dataTableGetCount(temp_v5);
    if (temp_v4 < 5) {
      return;
    }
    temp_v6 = temp_v6 + 0x150;
    break;
  case 0xb:
    temp_v5 = dataTableGet(0x39,0);
    temp_v6 = dataTableGetEntries();
    temp_v4 = dataTableGetCount(temp_v5);
    if (temp_v4 < 6) {
      return;
    }
    temp_v6 = temp_v6 + 0x1a4;
  }
  temp_v6 = temp_v6 + 1;
  if (temp_v6 == 0) {
    return;
  }
  FUN_0029ee6c(temp_v6,0x323232ff);
  return;
}

} /* extern "C" */
