/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002edf08` (_code @ 0x2edf08, 0x55c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int randRange(...);
int FUN_002296b0(int);
int FUN_00332764(void);

/* stack frame of void: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
} void_stack;

extern unsigned char g_mapRndMaze; /* 0x60fc08 */
extern unsigned char DAT_0060fc09; /* 0x60fc09 */
extern unsigned int DAT_0060fd08; /* 0x60fd08 */
extern unsigned int DAT_0060fd0c; /* 0x60fd0c */
extern int DAT_0060ff8c; /* 0x60ff8c */
extern unsigned char DAT_0060ff90; /* 0x60ff90 */
extern unsigned char DAT_0060ff91; /* 0x60ff91 */
extern unsigned char DAT_0060ff92; /* 0x60ff92 */
extern unsigned char DAT_0060ff93; /* 0x60ff93 */
extern int DAT_0060ff94; /* 0x60ff94 */

/* Supplied declaration required: randRange. */
extern int gameFlagsGetBlock(void);
/* Supplied declaration required: FUN_002296b0. */
/* Supplied declaration required: FUN_00332764. */


void FUN_002edf08(void)

{
/* irregular: 4 goto(s); 3 native warning(s); review required */
  char temp_v0;
  char temp_v1;
  unsigned char temp_v2;
  char temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned char temp_v12;
  unsigned char temp_v13;
  
  temp_v4 = gameFlagsGetBlock();
  temp_v3 = randRange(4);
  temp_v11 = 0;
  temp_v2 = 0;
  temp_v3 = temp_v3 + '\x01';
  temp_v0 = *(char *)(temp_v4 + 0x7c5);
  if ('\0' < temp_v0) {
    *(char *)(temp_v4 + 0xe04) = temp_v0;
    *(char *)(temp_v4 + 0xe05) = temp_v0;
    FUN_002296b0(1);
  }
  *(unsigned char *)(temp_v4 + 0x7c5) = 0xff;
LAB_002edf80:
  do {
    temp_v5 = randRange(0x17);
    if (*(char *)(temp_v5 * 4 + 0x581444) == temp_v3) {
      temp_v5 = randRange();
    }
    DAT_0060ff90 = *(unsigned char *)(temp_v5 * 4 + 0x581444);
    temp_v5 = temp_v5 * 4;
    temp_v7 = 0;
    DAT_0060ff91 = *(unsigned char *)(temp_v5 + 0x581445);
    temp_v10 = 0;
    DAT_0060ff92 = *(unsigned char *)(temp_v5 + 0x581446);
    DAT_0060ff93 = *(unsigned char *)(temp_v5 + 0x581447);
    do {
      temp_v8 = (int)*(char *)(temp_v4 + 0xe06);
      temp_v0 = (&DAT_0060ff90)[temp_v7];
      temp_v9 = (int)*(char *)(temp_v4 + 0xe07);
      temp_v5 = gameFlagsGetBlock();
      if (temp_v0 != '\x01') {
        if (temp_v0 != '\x02') {
          if (temp_v0 != '\x03') {
            if (temp_v0 == '\x04') {
              temp_v6 = temp_v5 + temp_v9 * 0x78 + temp_v8 * 8;
              temp_v12 = *(char *)(temp_v6 + 0xb4) == '\0';
              if (temp_v12) {
                temp_v6 = (unsigned int)*(unsigned char *)(temp_v6 + 300);
              }
              if (temp_v12 && temp_v6 == 0) {
                temp_v10 = temp_v10 + 1;
              }
            }
          }
          else {
            temp_v6 = temp_v5 + temp_v9 * 0x78 + temp_v8 * 8;
            temp_v12 = *(char *)(temp_v6 - 0x3c) == '\0';
            if (temp_v12) {
              temp_v6 = (unsigned int)*(unsigned char *)(temp_v6 - 0xb4);
            }
            if (temp_v12 && temp_v6 == 0) {
              temp_v10 = temp_v10 + 1;
            }
          }
        }
        else {
          temp_v6 = temp_v5 + temp_v9 * 0x78 + temp_v8 * 8;
          temp_v12 = *(char *)(temp_v6 + 0x44) == '\0';
          if (temp_v12) {
            temp_v6 = (unsigned int)*(unsigned char *)(temp_v6 + 0x4c);
          }
          if (temp_v12 && temp_v6 == 0) {
            temp_v10 = temp_v10 + 1;
          }
        }
      }
      else {
        temp_v6 = temp_v5 + temp_v9 * 0x78 + temp_v8 * 8;
        temp_v12 = *(char *)(temp_v6 + 0x34) == '\0';
        if (temp_v12) {
          temp_v6 = (unsigned int)*(unsigned char *)(temp_v6 + 0x2c);
        }
        if (temp_v12 && temp_v6 == 0) {
          temp_v10 = temp_v10 + 1;
        }
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 4);
    if (temp_v10 >= 2) {
      temp_v6 = randRange(99);
      if (temp_v6 < 0x3c) {
        temp_v11 = 1;
      }
      else {
        temp_v11 = 2;
      }
    }
    temp_v5 = 0;
    temp_v12 = 0;
    do {
      temp_v10 = (int)*(char *)(temp_v4 + 0xe06);
      temp_v0 = (&DAT_0060ff90)[temp_v5];
      temp_v8 = (int)*(char *)(temp_v4 + 0xe07);
      temp_v7 = gameFlagsGetBlock();
      if (temp_v0 != '\x01') {
        if (temp_v0 != '\x02') {
          if (temp_v0 != '\x03') {
            if (temp_v0 == '\x04') {
              temp_v6 = temp_v7 + temp_v8 * 0x78 + temp_v10 * 8;
              temp_v13 = *(char *)(temp_v6 + 0xb4) == '\0';
              if (temp_v13) {
                temp_v6 = (unsigned int)*(unsigned char *)(temp_v6 + 300);
              }
              if (temp_v13 && temp_v6 == 0) goto LAB_002ee194;
            }
          }
          else {
            temp_v6 = temp_v7 + temp_v8 * 0x78 + temp_v10 * 8;
            temp_v13 = *(char *)(temp_v6 - 0x3c) == '\0';
            if (temp_v13) {
              temp_v6 = (unsigned int)*(unsigned char *)(temp_v6 - 0xb4);
            }
            if (temp_v13 && temp_v6 == 0) goto LAB_002ee194;
          }
        }
        else {
          temp_v6 = temp_v7 + temp_v8 * 0x78 + temp_v10 * 8;
          temp_v13 = *(char *)(temp_v6 + 0x44) == '\0';
          if (temp_v13) {
            temp_v6 = (unsigned int)*(unsigned char *)(temp_v6 + 0x4c);
          }
          if (temp_v13 && temp_v6 == 0) goto LAB_002ee194;
        }
      }
      else {
        temp_v6 = temp_v7 + temp_v8 * 0x78 + temp_v10 * 8;
        temp_v13 = *(char *)(temp_v6 + 0x34) == '\0';
        if (temp_v13) {
          temp_v6 = (unsigned int)*(unsigned char *)(temp_v6 + 0x2c);
        }
        if (temp_v13 && temp_v6 == 0) {
LAB_002ee194:
          temp_v0 = *(char *)(temp_v4 + 0xe06);
          temp_v10 = (int)temp_v0;
          temp_v1 = *(char *)(temp_v4 + 0xe07);
          temp_v8 = (int)temp_v1;
          temp_v3 = (&DAT_0060ff90)[temp_v5];
          temp_v7 = gameFlagsGetBlock();
          (&g_mapRndMaze)[DAT_0060ff8c * 2] = temp_v0;
          (&DAT_0060fc09)[DAT_0060ff8c * 2] = temp_v1;
          DAT_0060ff8c = DAT_0060ff8c + 1;
          if (temp_v3 != '\x01') {
            if (temp_v3 != '\x02') {
              if (temp_v3 != '\x03') {
                if (temp_v3 == '\x04') {
                  temp_v10 = temp_v7 + temp_v8 * 0x78 + temp_v10 * 8;
                  *(unsigned char *)(temp_v10 + 0x3c) = 2;
                  *(unsigned char *)(temp_v10 + 0xb4) = 2;
                  *(unsigned char *)(temp_v10 + 300) = 2;
                  *(char *)(temp_v7 + 0xe06) = temp_v0;
                  *(char *)(temp_v7 + 0xe07) = temp_v1 + '\x02';
                }
              }
              else {
                temp_v10 = temp_v7 + temp_v8 * 0x78 + temp_v10 * 8;
                *(unsigned char *)(temp_v10 + 0x3c) = 2;
                *(unsigned char *)(temp_v10 - 0x3c) = 2;
                *(unsigned char *)(temp_v10 - 0xb4) = 2;
                *(char *)(temp_v7 + 0xe06) = temp_v0;
                *(char *)(temp_v7 + 0xe07) = temp_v1 - '\x02';
              }
            }
            else {
              temp_v10 = temp_v7 + temp_v8 * 0x78 + temp_v10 * 8;
              *(unsigned char *)(temp_v10 + 0x3c) = 2;
              *(unsigned char *)(temp_v10 + 0x44) = 2;
              *(unsigned char *)(temp_v10 + 0x4c) = 2;
              *(char *)(temp_v7 + 0xe06) = temp_v0 + '\x02';
              *(char *)(temp_v7 + 0xe07) = temp_v1;
            }
          }
          else {
            temp_v10 = temp_v7 + temp_v8 * 0x78 + temp_v10 * 8;
            *(unsigned char *)(temp_v10 + 0x3c) = 2;
            *(unsigned char *)(temp_v10 + 0x34) = 2;
            *(unsigned char *)(temp_v10 + 0x2c) = 2;
            *(char *)(temp_v7 + 0xe06) = temp_v0 - '\x02';
            *(char *)(temp_v7 + 0xe07) = temp_v1;
          }
          temp_v12 = 1;
          temp_v2 = 1;
          temp_v3 = (&DAT_0060ff90)[temp_v5];
          temp_v11 = temp_v11 - 1;
          if (temp_v11 < 1) goto LAB_002edf80;
          *(unsigned char *)(DAT_0060ff8c * 2 + 0x60fc06) = *(unsigned char *)(temp_v4 + 0xe06);
          *(unsigned char *)(DAT_0060ff8c * 2 + 0x60fc07) = *(unsigned char *)(temp_v4 + 0xe07);
          *(char *)(temp_v4 + 0xe06) = temp_v0;
          *(char *)(temp_v4 + 0xe07) = temp_v1;
        }
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 4);
    if (!temp_v12) {
      if (temp_v2) {
        temp_v0 = *(char *)(temp_v4 + 0xe07);
        if (DAT_0060ff94 < 0x10) {
          (&DAT_0060fd08)[DAT_0060ff94 * 3] = (int)*(char *)(temp_v4 + 0xe06);
          (&DAT_0060fd0c)[DAT_0060ff94 * 3] = (int)temp_v0;
          *(unsigned int *)(DAT_0060ff94 * 0xc + 0x60fd10) = 0;
          DAT_0060ff94 = DAT_0060ff94 + 1;
        }
        temp_v2 = 0;
      }
      if (DAT_0060ff8c == 0) {
        temp_v11 = 0;
        if ('\0' < *(char *)(temp_v4 + 0xe05)) {
          do {
            temp_v5 = (int)*(char *)(temp_v4 + 0xe04);
            if (0 < temp_v5) {
              temp_v7 = 0;
              do {
                temp_v10 = temp_v4 + temp_v11 * 0x78 + temp_v7 * 8;
                temp_v7 = temp_v7 + 1;
                *(unsigned char *)(temp_v10 + 0x43) = 0;
                if (*(char *)(temp_v10 + 0x3c) == '\0') {
                  *(unsigned char *)(temp_v10 + 0x3c) = 1;
                }
                temp_v5 = temp_v5 - 1;
              } while (temp_v5 != 0);
            }
            temp_v11 = temp_v11 + 1;
          } while (temp_v11 < *(char *)(temp_v4 + 0xe05));
        }
        FUN_00332764();
        return;
      }
      temp_v5 = gameFlagsGetBlock();
      temp_v7 = randRange((DAT_0060ff8c - 1U) & 0xffff);
      temp_v8 = 0;
      temp_v9 = DAT_0060ff8c - 1;
      temp_v10 = 0;
      DAT_0060ff8c = temp_v9;
      *(unsigned char *)(temp_v5 + 0xe06) = (&g_mapRndMaze)[temp_v7 * 2];
      *(unsigned char *)(temp_v5 + 0xe07) = (&DAT_0060fc09)[temp_v7 * 2];
      if (0 < temp_v9) {
        do {
          if (temp_v10 == temp_v7) {
            temp_v8 = temp_v8 + 1;
          }
          temp_v5 = temp_v10 * 2;
          temp_v9 = temp_v8 * 2;
          temp_v10 = temp_v10 + 1;
          temp_v8 = temp_v8 + 1;
          *(unsigned short *)(&g_mapRndMaze + temp_v5) = *(unsigned short *)(&g_mapRndMaze + temp_v9);
        } while (temp_v10 < DAT_0060ff8c);
      }
    }
  } while( 1 );
}

} /* extern "C" */
