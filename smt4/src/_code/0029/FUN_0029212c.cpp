/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029212c` (_code @ 0x29212c, 0x6d0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

int skillFormatTargetLabel(...);
int btlFormatCategoryLabel(...);
int FUN_002907c4(...);
int textEncodeFontSlot(...);
int asdTextDrawDirectoryEntry(...);
int FUN_0029ede8(...);
int dataTable40FindById(void);
int dataTable08Sub2GetRecord(void);
int dataTable08Sub1GetRecord(void);
int textFormatBuffer(...);

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp128; /* 0x128: local_128 */
} param_1_stack;

extern unsigned char LAB_002927fc; /* 0x2927fc */
extern unsigned char LAB_0029280c; /* 0x29280c */
extern unsigned char LAB_0029281c; /* 0x29281c */
extern unsigned char LAB_00292828; /* 0x292828 */
extern unsigned char LAB_00292838; /* 0x292838 */
extern int DAT_0043da2c; /* 0x43da2c */

/* Supplied declaration required: skillFormatTargetLabel. */
/* Supplied declaration required: btlFormatCategoryLabel. */
/* Supplied declaration required: FUN_002907c4. */
/* Supplied declaration required: textEncodeFontSlot. */
extern int FUN_00295cec(void);
/* Supplied declaration required: asdTextDrawDirectoryEntry. */
/* Supplied declaration required: FUN_0029ede8. */
/* Supplied declaration required: dataTable40FindById. */
extern unsigned int aocEntryGetKind(int);
/* Supplied declaration required: dataTable08Sub2GetRecord. */
/* Supplied declaration required: dataTable08Sub1GetRecord. */
extern unsigned int recordPackedValue(int);
extern unsigned int aocIndexValueOrDefault(void);
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: memClear. */
extern unsigned int dataTableValue0f(void);


void FUN_0029212c(int param_1)

{
/* irregular: 11 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  char temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  unsigned int uStack_124;
  int iStack_120;
  char acStack_c8 [8];
  unsigned char temp_v13 [8];
  unsigned char temp_v14 [2];
  char acStack_b6 [18];
  char acStack_a4 [18];
  char acStack_92 [18];
  char acStack_80 [28];
  char temp_v15 [24];
  int temp_v16;
  unsigned int temp_v17;
  unsigned char temp_v18 [16];
  int temp_v19;
  
  temp_v5 = DAT_0043da2c;
  temp_v16 = DAT_0043da2c;
  if (param_1 == 0) {
    *(unsigned char *)(DAT_0043da2c + 0x4cb) = 0;
    return;
  }
  *(unsigned char *)(DAT_0043da2c + 0x55c) = 1;
  *(unsigned char *)(temp_v5 + 0x4cb) = 1;
  temp_v19 = param_1;
  temp_v17 = dataTableValue0f();
  temp_v5 = temp_v19;
  temp_v4 = aocEntryGetKind(temp_v19);
  switch(temp_v4) {
  default:
    temp_v12 = 3;
    uStack_124 = temp_v17;
    iStack_120 = temp_v19;
    asdTextDrawDirectoryEntry(*(unsigned int *)(temp_v16 + 0x558),3,0xffffffff,0);
    return;
  case 1:
    temp_v8 = temp_v5;
    dataTable08Sub1GetRecord();
    if (*(short *)(temp_v8 + 0x76) != 0) {
      temp_v5 = FUN_00295cec();
      FUN_0029ede8(0x24,temp_v5,0xffffffff,0);
      temp_v5 = (unsigned int)*(unsigned short *)(temp_v8 + 0x76) + temp_v5;
      if (temp_v5 >= 10000) {
        temp_v5 = 9999;
      }
      FUN_0029ede8(0x25,temp_v5,0xffffffff,0);
    }
    else {
      temp_v6 = (unsigned int)*(unsigned short *)(temp_v8 + 0x62);
      if (temp_v6 != 0) {
        dataTable40FindById();
        skillFormatTargetLabel(&temp_v12,(*(unsigned int *)(temp_v6 + 0x28) & 0x1ff) >> 5);
      }
      else if ((*(unsigned char *)(temp_v8 + 0x6a) & 0x80) != 0) {
        textFormatBuffer(&temp_v12,"\x82`\x82\x8c\x82\x8c\x81@\x82\x81\x82\x8c\x82\x8c\x82\x89\x82\x85\x82\x93");
      }
      else {
        textFormatBuffer(&temp_v12,"\x82P\x81@\x82\x81\x82\x8c\x82\x8c\x82\x99");
      }
      textEncodeFontSlot(0x24,&temp_v12);
      temp_v4 = recordPackedValue(temp_v5);
      FUN_0029ede8(0x25,temp_v4,0xffffffff,0);
    }
    temp_v12 = 3;
    uStack_124 = temp_v17;
    iStack_120 = temp_v19;
    asdTextDrawDirectoryEntry(*(unsigned int *)(temp_v16 + 0x558),3,0xffffffff,0);
    return;
  case 2:
  case 3:
  case 8:
    dataTable08Sub2GetRecord();
    FUN_0029ede8(0x24,*(unsigned int *)(temp_v5 + 0x54) & 0x3ff,0xffffffff,0);
    temp_v0 = *(unsigned char *)(temp_v5 + 0x58);
    if ((temp_v0 & 0xf) == temp_v0 >> 4) {
      FUN_0029ede8(0x25,temp_v0 & 0xf,0xffffffff,0);
    }
    else {
      FUN_002907c4(temp_v13,temp_v0 & 0xf);
      FUN_002907c4(temp_v14,*(unsigned char *)(temp_v5 + 0x58) >> 4);
      textFormatBuffer(&temp_v12,"%s\x81`%s",temp_v13,temp_v14);
      textEncodeFontSlot(0x25,&temp_v12);
    }
    btlFormatCategoryLabel(&temp_v12,*(unsigned int *)(temp_v5 + 0x54) >> 0x14);
    textEncodeFontSlot(0x26,&temp_v12);
    skillFormatTargetLabel(&temp_v12,*(unsigned char *)(temp_v5 + 0x59));
    textEncodeFontSlot(0x27,&temp_v12);
    if (*(char *)(temp_v5 + 0x5b) == '\0') {
      textFormatBuffer(&temp_v12,"\x82m\x82\x8f\x82\x8e\x82\x85");
    }
    if (*(char *)(temp_v5 + 0x5b) == '\x01') {
      textFormatBuffer(&temp_v12,"\x82j\x82n");
    }
    if (*(char *)(temp_v5 + 0x5b) == '\x05') {
      textFormatBuffer(&temp_v12,"\x82o\x82\x8f\x82\x89\x82\x93\x82\x8f\x82\x8e");
    }
    if (*(char *)(temp_v5 + 0x5b) == '\x06') {
      textFormatBuffer(&temp_v12,"\x82o\x82\x81\x82\x8e\x82\x89\x82\x83");
    }
    if (*(char *)(temp_v5 + 0x5b) == '\a') {
      textFormatBuffer(&temp_v12,"\x82r\x82\x8c\x82\x85\x82\x85\x82\x90");
    }
    if (*(char *)(temp_v5 + 0x5b) == '\b') {
      textFormatBuffer(&temp_v12,"\x82a\x82\x89\x82\x8e\x82\x84");
    }
    if (*(char *)(temp_v5 + 0x5b) == '\t') {
      textFormatBuffer(&temp_v12,"\x82r\x82\x89\x82\x83\x82\x8b");
    }
    temp_v4 = 0x28;
    break;
  case 4:
  case 5:
  case 6:
  case 7:
    dataTable08Sub2GetRecord();
    temp_v8 = 0;
    do {
      temp_v10 = (int)*(char *)(temp_v5 + temp_v8 + 0x61);
      temp_v11 = temp_v10;
      if (temp_v10 < 0) {
        temp_v11 = -temp_v10;
      }
      FUN_002907c4(temp_v18,temp_v11);
      if (temp_v10 != 0) {
        if (temp_v10 >= 1) {
          textFormatBuffer(&temp_v12,"\x81{%s");
        }
        else {
          textFormatBuffer(&temp_v12,"\x81|%s");
        }
      }
      else {
        textFormatBuffer(&temp_v12,"\x81}\x82O");
      }
      textEncodeFontSlot(temp_v8 + 0x24,&temp_v12);
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < 5);
    reinterpret_cast<int>(memClear(reinterpret_cast<void*>(acStack_c8), 0x5c));
    temp_v8 = 0;
    temp_v15[0] = '\0';
    temp_v15[1] = '\0';
    temp_v15[2] = '\0';
    temp_v15[3] = '\0';
    temp_v15[4] = '\0';
    temp_v15[5] = '\0';
    temp_v15[6] = '\0';
    temp_v15[7] = '\0';
    do {
      temp_v11 = temp_v5 + temp_v8 * 2;
      temp_v1 = (char)temp_v8;
      if (*(short *)(temp_v11 + 0x74) >> 10 == 4) {
        temp_v2 = temp_v15[0] + '\x01';
        acStack_c8[temp_v15[0]] = temp_v1;
        temp_v15[0] = temp_v2;
      }
      if (*(short *)(temp_v11 + 0x74) >> 10 == 3) {
        temp_v2 = temp_v15[1] + '\x01';
        acStack_b6[temp_v15[1]] = temp_v1;
        temp_v15[1] = temp_v2;
      }
      if (*(short *)(temp_v11 + 0x74) >> 10 == 1) {
        temp_v2 = temp_v15[2] + '\x01';
        acStack_a4[temp_v15[2]] = temp_v1;
        temp_v15[2] = temp_v2;
      }
      if (*(short *)(temp_v11 + 0x74) >> 10 == 5) {
        temp_v2 = temp_v15[3] + '\x01';
        acStack_92[temp_v15[3]] = temp_v1;
        temp_v15[3] = temp_v2;
      }
      if (*(short *)(temp_v11 + 0x74) >> 10 == 2) {
        temp_v2 = temp_v15[4] + '\x01';
        acStack_80[temp_v15[4]] = temp_v1;
        temp_v15[4] = temp_v2;
      }
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < 0x12);
    temp_v10 = 0;
    temp_v8 = 0;
    temp_v11 = 0;
    do {
      if ('\0' < temp_v15[temp_v11]) {
        if (0 < temp_v10) {
          temp_v9 = (int)&temp_v12 + temp_v8;
          textFormatBuffer(temp_v9,"\x81@");
          temp_v8 = temp_v8 + temp_v9;
        }
        temp_v9 = 0;
        if ('\0' < temp_v15[temp_v11]) {
          temp_v3 = temp_v11 * 0x12 - 200;
          do {
            temp_v7 = btlFormatCategoryLabel((int)&temp_v12 + temp_v8,(int)acStack_c8[temp_v9 + temp_v3 + 200]);
            temp_v8 = temp_v8 + temp_v7;
            if ((temp_v9 < 0x11) && ('\0' < acStack_c8[temp_v9 + temp_v3 + 0xc9])) {
              temp_v7 = (int)&temp_v12 + temp_v8;
              textFormatBuffer(temp_v7,"\x81^");
              temp_v8 = temp_v8 + temp_v7;
            }
            temp_v9 = temp_v9 + 1;
          } while (temp_v9 < temp_v15[temp_v11]);
        }
        if (temp_v11 != 0) {
          if (temp_v11 != 1) {
            if (temp_v11 != 2) {
              if (temp_v11 != 3) {
                if (temp_v11 == 4) {
                  temp_v9 = (int)&temp_v12 + temp_v8;
                  textFormatBuffer(temp_v9,&LAB_00292838);
                  temp_v8 = temp_v8 + temp_v9;
                }
              }
              else {
                temp_v9 = (int)&temp_v12 + temp_v8;
                textFormatBuffer(temp_v9,&LAB_00292828);
                temp_v8 = temp_v8 + temp_v9;
              }
            }
            else {
              temp_v9 = (int)&temp_v12 + temp_v8;
              textFormatBuffer(temp_v9,&LAB_0029281c);
              temp_v8 = temp_v8 + temp_v9;
            }
          }
          else {
            temp_v9 = (int)&temp_v12 + temp_v8;
            textFormatBuffer(temp_v9,&LAB_0029280c);
            temp_v8 = temp_v8 + temp_v9;
          }
        }
        else {
          temp_v9 = (int)&temp_v12 + temp_v8;
          textFormatBuffer(temp_v9,&LAB_002927fc);
          temp_v8 = temp_v8 + temp_v9;
        }
        temp_v10 = temp_v10 + 1;
      }
      temp_v11 = temp_v11 + 1;
    } while (temp_v11 < 5);
    textEncodeFontSlot(0x29,&temp_v12);
    if (*(short *)(temp_v5 + 0x6a) != 0) {
      temp_v4 = aocIndexValueOrDefault();
      textFormatBuffer(&temp_v12,"%s",temp_v4);
    }
    else {
      textFormatBuffer(&temp_v12,"\x82m\x82\x8f\x82\x8e\x82\x85");
    }
    temp_v4 = 0x2a;
  }
  textEncodeFontSlot(temp_v4,&temp_v12);
  temp_v12 = 3;
  uStack_124 = temp_v17;
  iStack_120 = temp_v19;
  asdTextDrawDirectoryEntry(*(unsigned int *)(temp_v16 + 0x558),3,0xffffffff,0);
  return;
}

} /* extern "C" */
