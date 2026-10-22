/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026cf4c` (_code @ 0x26cf4c, 0x1f4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029da34(...);
int FUN_0029dc74(...);
int SBORROW4(...);
int rt_memcpy(...);

int FUN_001f4568(int, int, int, unsigned char [128]);
int skillFormatTargetLabel(unsigned char [128], int);
int FUN_0024bda8(unsigned char [128], unsigned int);
int FUN_0026c214(void);
int FUN_00282e70(void);
int FUN_002907c4(...);
int textEncodeFontSlot(int, unsigned char [128]);
int asdTextDrawDirectoryEntry(unsigned int, int, unsigned int, int);
int FUN_0029acb0(void);
int FUN_0029ede8(int, int, unsigned int, int);
int FUN_0029ee6c(...);
int dataTable08Sub2GetRecord(void);
int textFormatBuffer(...);
int dataTableGetCount(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
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
/* Supplied declaration required: skillFormatTargetLabel. */
/* Supplied declaration required: FUN_0024bda8. */
/* Supplied declaration required: FUN_0026c214. */
extern unsigned int FUN_00282ccc(void);
/* Supplied declaration required: FUN_00282e70. */
/* Supplied declaration required: FUN_002907c4. */
/* Supplied declaration required: textEncodeFontSlot. */
/* Supplied declaration required: asdTextDrawDirectoryEntry. */
/* Supplied declaration required: FUN_0029acb0. */
/* Supplied declaration required: FUN_0029da34. */
/* Supplied declaration required: FUN_0029dc74. */
extern int FUN_0029e02c(void);
/* Supplied declaration required: FUN_0029ede8. */
/* Supplied declaration required: FUN_0029ee6c. */
extern unsigned char *partyMemberFindById(unsigned int);
/* Supplied declaration required: dataTable08Sub2GetRecord. */
extern unsigned short *gameGetPlayerData(void);
extern int buttonHelpGetStatus(void);
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: dataTableGetCount. */
extern int dataTableGetEntries(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);
/* Supplied declaration required: rt_memcpy. */


void FUN_0026cf4c(void)

{
/* irregular: 18 native warning(s); review required */
  int temp_v0;
  char temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char *puVar7;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned short *puVar13;
  int temp_v11;
  unsigned char temp_v12;
  unsigned char temp_v13 [1408];
  int uStack_a8;
  unsigned int uStack_a4;
  unsigned int temp_v14 [2];
  unsigned char temp_v15 [128];
  
  temp_v6 = FUN_0029e02c();
  temp_v5 = g_partyPanel;
  if (temp_v6 == 0) {
    temp_v12 = 0;
    FUN_0029acb0();
    temp_v6 = buttonHelpGetStatus();
    temp_v7 = FUN_00282e70();
    temp_v8 = FUN_00282ccc();
    if (((temp_v6 == 0x1c) || (temp_v6 == 0x1e || temp_v6 == 0xb8)) || (temp_v6 == 0xbf || temp_v6 == 0xcc)) {
      temp_v9 = temp_v8;
      if (temp_v7 != 0) {
        temp_v9 = (unsigned int)*(unsigned char *)(temp_v5 + 0x42);
      }
      temp_v12 = temp_v7 == 0 || temp_v9 == 0;
    }
    if (((temp_v6 == 0x1b || temp_v6 == 0x1d) || ((temp_v6 == 0xb7 || temp_v6 == 0xbe) || temp_v6 == 0xe3)) &&
       ((temp_v7 == 0 || (*(char *)(temp_v5 + 0x42) != '\0')))) {
      temp_v12 = 1;
    }
    if (((temp_v6 == 0x22 || temp_v6 == 0x24) || ((temp_v6 == 0xb6 || temp_v6 == 0xc1) || temp_v6 == 0xcc)) &&
       ((temp_v7 != 0 || (((int)temp_v8 < 0 || (*(char *)(temp_v5 + 0x42) == '\0')))))) {
      temp_v12 = 1;
    }
    if (((temp_v6 == 0x21 || temp_v6 == 0x23) || ((temp_v6 == 0xb5 || temp_v6 == 0xc0) || temp_v6 == 0xe3)) &&
       ((temp_v7 != 0 || (((int)temp_v8 < 0 || (*(char *)(temp_v5 + 0x42) != '\0')))))) {
      temp_v12 = 1;
    }
    if (((temp_v6 == 0x26 || temp_v6 == 4) || ((temp_v6 == 0xbb || temp_v6 == 0xc3) || temp_v6 == 0xcc)) &&
       ((temp_v7 != 0 || ((-1 < (int)temp_v8 || (*(char *)(temp_v5 + 0x42) == '\0')))))) {
      temp_v12 = 1;
    }
    if ((((temp_v6 == 0x25 || temp_v6 == 3) || ((temp_v6 == 0xba || temp_v6 == 0xc2) || temp_v6 == 0xe3)) &&
        ((temp_v7 != 0 || ((-1 < (int)temp_v8 || (*(char *)(temp_v5 + 0x42) != '\0')))))) || (temp_v12)) {
      FUN_0026c214();
    }
    temp_v6 = g_partyPanel;
    temp_v9 = (unsigned int)*(short *)(temp_v5 + 0x3a);
    temp_v12 = temp_v9 == temp_v8;
    if (temp_v12) {
      temp_v9 = (unsigned int)*(char *)(temp_v5 + 0x44);
    }
    if ((!temp_v12 || temp_v9 != temp_v7) &&
       ((((temp_v1 = *(char *)(temp_v5 + 0x66c), temp_v1 == '\x03' || temp_v1 == '\x02' ||
          (temp_v1 == '\x04' || temp_v1 == '\x0f')) || (temp_v1 == '\f' || temp_v1 == '\r')) ||
        (temp_v1 == '\x0e' || temp_v1 == '\x10')))) {
      temp_v3 = FUN_00282e70();
      temp_v7 = FUN_00282ccc();
      temp_v5 = DAT_0043da2c;
      if (temp_v3 != 0) {
        puVar13 = (unsigned short *)gameGetPlayerData();
        temp_v7 = (unsigned int)*puVar13;
        dataTable08Sub2GetRecord();
        if (temp_v7 == 0) {
          *(unsigned char *)(temp_v5 + 0x4cb) = 0;
        }
        else {
          *(unsigned char *)(temp_v5 + 0x55c) = 1;
          *(unsigned char *)(temp_v5 + 0x4cb) = 1;
          temp_v2 = *(unsigned char *)(temp_v7 + 0x58);
          if ((temp_v2 & 0xf) == temp_v2 >> 4) {
            FUN_0029ede8(0x25,temp_v2 & 0xf,0xffffffff,0);
          }
          else {
            FUN_002907c4(&uStack_a8,temp_v2 & 0xf);
            FUN_002907c4(temp_v14,*(unsigned char *)(temp_v7 + 0x58) >> 4);
            textFormatBuffer(temp_v15,&LAB_00317284,&uStack_a8,temp_v14);
            textEncodeFontSlot(0x25,temp_v15);
          }
          FUN_0024bda8(temp_v15,*(unsigned int *)(temp_v7 + 0x54) >> 0x14);
          textEncodeFontSlot(0x26,temp_v15);
          skillFormatTargetLabel(temp_v15,*(unsigned char *)(temp_v7 + 0x59));
          textEncodeFontSlot(0x27,temp_v15);
          if (*(char *)(temp_v7 + 0x5b) == '\0') {
            textFormatBuffer(temp_v15,&LAB_0031728c);
          }
          if (*(char *)(temp_v7 + 0x5b) == '\x01') {
            textFormatBuffer(temp_v15,&LAB_00317298);
          }
          if (*(char *)(temp_v7 + 0x5b) == '\x05') {
            textFormatBuffer(temp_v15,&LAB_003172a0);
          }
          if (*(char *)(temp_v7 + 0x5b) == '\x06') {
            textFormatBuffer(temp_v15,&LAB_003172b0);
          }
          if (*(char *)(temp_v7 + 0x5b) == '\a') {
            textFormatBuffer(temp_v15,&LAB_003172bc);
          }
          if (*(char *)(temp_v7 + 0x5b) == '\b') {
            textFormatBuffer(temp_v15,&LAB_003172c8);
          }
          if (*(char *)(temp_v7 + 0x5b) == '\t') {
            textFormatBuffer(temp_v15,&LAB_003172d4);
          }
          textEncodeFontSlot(0x28,temp_v15);
          FUN_001f4568(1,0,0,temp_v15);
          textEncodeFontSlot(0x29,temp_v15);
          uStack_a4 = DAT_0043da30;
          uStack_a8 = 3;
          temp_v14[0] = 0;
          asdTextDrawDirectoryEntry(*(unsigned int *)(temp_v5 + 0x558),3,0xffffffff,0);
        }
        return;
      }
      if ((int)temp_v7 < 0) {
        if (*(char *)(temp_v6 + 0x66c) == '\f' || *(char *)(temp_v6 + 0x66c) == '\r') {
          temp_v4 = dataTableGet(0x39,0);
          temp_v5 = dataTableGetEntries();
          temp_v7 = dataTableGetCount(temp_v4);
          if (temp_v7 >= 7) {
            temp_v5 = temp_v5 + 0x1f9;
          }
          else {
            temp_v5 = 0;
          }
          FUN_0029ee6c(temp_v5,0x323232ff);
        }
        if (*(char *)(temp_v6 + 0x66c) == '\x0e') {
          temp_v4 = dataTableGet(0x39,0);
          temp_v5 = dataTableGetEntries();
          temp_v7 = dataTableGetCount(temp_v4);
          if (temp_v7 >= 8) {
            temp_v5 = temp_v5 + 0x24d;
          }
          else {
            temp_v5 = 0;
          }
          FUN_0029ee6c(temp_v5,0x323232ff);
        }
        if (*(char *)(temp_v6 + 0x66c) == '\x04') {
          temp_v4 = dataTableGet(0x39,0);
          temp_v5 = dataTableGetEntries();
          temp_v7 = dataTableGetCount(temp_v4);
          if (temp_v7 >= 3) {
            temp_v5 = temp_v5 + 0xa9;
          }
          else {
            temp_v5 = 0;
          }
          FUN_0029ee6c(temp_v5,0x323232ff);
        }
        if (*(char *)(temp_v6 + 0x66c) == '\x0f') {
          temp_v4 = dataTableGet(0x39,0);
          temp_v5 = dataTableGetEntries();
          temp_v7 = dataTableGetCount(temp_v4);
          if (temp_v7 >= 9) {
            temp_v5 = temp_v5 + 0x2a1;
          }
          else {
            temp_v5 = 0;
          }
          FUN_0029ee6c(temp_v5,0x323232ff);
        }
        if (*(char *)(temp_v6 + 0x66c) == '\x02') {
          temp_v4 = dataTableGet(0x39,0);
          temp_v3 = dataTableGetEntries();
          temp_v5 = dataTableGetCount(temp_v4);
          if (temp_v5 != 0) {
            temp_v3 = temp_v3 + 1;
          }
          else {
            temp_v3 = 0;
          }
          FUN_0029ee6c(temp_v3,0x323232ff);
        }
        if (*(char *)(temp_v6 + 0x66c) == '\x03') {
          temp_v4 = dataTableGet(0x39,0);
          temp_v6 = dataTableGetEntries();
          temp_v7 = dataTableGetCount(temp_v4);
          temp_v5 = DAT_0043da2c;
          if (temp_v7 >= 2) {
            temp_v6 = temp_v6 + 0x55;
          }
          else {
            temp_v6 = 0;
          }
          *(unsigned int *)(DAT_0043da2c + 0x4cc) = 0x323232ff;
          *(unsigned int *)(temp_v5 + 0x550) = 0;
          *(unsigned char *)(temp_v5 + 0x554) = 0xff;
          if (temp_v6 == 0) {
            *(unsigned char *)(temp_v5 + 0x4cb) = 0;
          }
          else {
            *(unsigned int *)(temp_v5 + 0x4d0) = 0;
            *(unsigned int *)(temp_v5 + 0x4d4) = 0;
            *(unsigned int *)(temp_v5 + 0x4d8) = 0;
            *(unsigned int *)(temp_v5 + 0x4dc) = 0;
            *(unsigned int *)(temp_v5 + 0x4e0) = 0;
            *(unsigned int *)(temp_v5 + 0x4e4) = 0;
            *(unsigned int *)(temp_v5 + 0x4e8) = 0;
            *(unsigned int *)(temp_v5 + 0x4ec) = 0;
            *(unsigned int *)(temp_v5 + 0x4f0) = 0;
            *(unsigned int *)(temp_v5 + 0x4f4) = 0;
            *(unsigned int *)(temp_v5 + 0x4f8) = 0;
            *(unsigned int *)(temp_v5 + 0x4fc) = 0;
            *(unsigned int *)(temp_v5 + 0x500) = 0;
            *(unsigned int *)(temp_v5 + 0x504) = 0;
            *(unsigned int *)(temp_v5 + 0x508) = 0;
            *(unsigned int *)(temp_v5 + 0x50c) = 0;
            *(unsigned int *)(temp_v5 + 0x510) = 0;
            *(unsigned int *)(temp_v5 + 0x514) = 0;
            *(unsigned int *)(temp_v5 + 0x518) = 0;
            *(unsigned int *)(temp_v5 + 0x51c) = 0;
            *(unsigned int *)(temp_v5 + 0x520) = 0;
            *(unsigned int *)(temp_v5 + 0x524) = 0;
            *(unsigned int *)(temp_v5 + 0x528) = 0;
            *(unsigned int *)(temp_v5 + 0x52c) = 0;
            *(unsigned int *)(temp_v5 + 0x530) = 0;
            *(unsigned int *)(temp_v5 + 0x534) = 0;
            *(unsigned int *)(temp_v5 + 0x538) = 0;
            *(unsigned int *)(temp_v5 + 0x53c) = 0;
            *(unsigned int *)(temp_v5 + 0x540) = 0;
            *(unsigned int *)(temp_v5 + 0x544) = 0;
            temp_v11 = 0;
            *(unsigned int *)(temp_v5 + 0x548) = 0;
            temp_v10 = 0;
            temp_v3 = 0;
            *(unsigned int *)(temp_v5 + 0x54c) = 0;
            do {
              if (*(char *)(temp_v6 + temp_v3) == '\0') {
                rt_memcpy(temp_v5 + temp_v11 * 0x40 + 0x4d0,temp_v6 + temp_v10,temp_v3 - temp_v10);
                break;
              }
              if (*(char *)(temp_v6 + temp_v3) == '\n') {
                rt_memcpy(temp_v5 + temp_v11 * 0x40 + 0x4d0,temp_v6 + temp_v10,temp_v3 - temp_v10);
                temp_v10 = temp_v3 + 1;
                temp_v11 = temp_v11 + 1;
              }
              temp_v12 = SBORROW4(temp_v11,1);
              temp_v0 = temp_v11 - 1;
              if (temp_v11 < 2) {
                temp_v12 = SBORROW4(temp_v3 + 1,0x80);
                temp_v0 = temp_v3 - 0x7f;
                temp_v3 = temp_v3 + 1;
              }
            } while (temp_v0 < 0 != temp_v12);
            *(unsigned char *)(temp_v5 + 0x55c) = 0;
            *(unsigned char *)(temp_v5 + 0x4cb) = 1;
          }
          return;
        }
      }
      else {
        puVar7 = (unsigned char *)partyMemberFindById(temp_v7 & 0xffff);
        if (puVar7 == (unsigned char *)0x0) {
          FUN_0029dc74(temp_v7 & 0xffff,temp_v13);
          puVar7 = temp_v13;
        }
        FUN_0029da34(0,1,temp_v7 & 0xffff,puVar7);
      }
      return;
    }
  }
  return;
}

} /* extern "C" */
