/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022d1a8` (_code @ 0x22d1a8, 0x268 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029ce60(unsigned int, int, int);
int FUN_002b9024(void);
int FUN_002be624(int, unsigned char *, unsigned int);
int FUN_002bf4f0(int, int);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char LAB_0022d42c; /* 0x22d42c */
extern int DAT_0043d9cc; /* 0x43d9cc */
extern unsigned int DAT_0049375c; /* 0x49375c */

extern int FUN_00233718(int);
/* Supplied declaration required: FUN_0029ce60. */
extern int FUN_0029e924(int);
/* Supplied declaration required: FUN_002b9024. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002bf4f0. */


void FUN_0022d1a8(int param_1)

{
/* irregular: 4 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  short temp_v2;
  short temp_v3;
  short temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned char temp_v14;
  unsigned char temp_v15;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    temp_v5 = FUN_0029e924(param_1 + 0x20);
    temp_v6 = FUN_00233718(param_1 + 0x20);
    if ((temp_v5 != DAT_0043d9cc) && (temp_v9 = 0, DAT_0043d9cc = temp_v5, 0 < temp_v6)) {
      do {
        temp_v13 = 0xffffffff;
        temp_v1 = *(unsigned short *)(param_1 + (temp_v5 + temp_v9) * 0x20 + 0x5ac);
        temp_v14 = *(char *)(param_1 + 0x5a4) == '\0';
        temp_v7 = FUN_0029e924(param_1 + 0x20);
        temp_v0 = *(char *)(param_1 + 0x5a5);
        temp_v7 = param_1 + (temp_v7 + temp_v9) * 0x20;
        temp_v12 = 0;
        if (!temp_v14) {
          if (temp_v0 != '\0') {
            if (temp_v0 == '\x01') {
              temp_v12 = (unsigned int)*(unsigned char *)(temp_v7 + 0x5b9);
            }
          }
          else {
            temp_v12 = (unsigned int)*(unsigned char *)(temp_v7 + 0x5b8);
          }
        }
        else if (temp_v0 != '\0') {
          if (temp_v0 != '\x01') {
            if (temp_v0 == '\x02') {
              temp_v12 = (unsigned int)*(unsigned char *)(temp_v7 + 0x5b9);
            }
          }
          else {
            temp_v12 = (unsigned int)*(unsigned char *)(temp_v7 + 0x5b8);
          }
        }
        else {
          temp_v10 = (unsigned int)*(unsigned short *)(temp_v7 + 0x5ac);
          FUN_002b9024();
          if (temp_v10 != 0) {
            temp_v12 = (unsigned int)*(unsigned char *)(temp_v10 + 3);
          }
        }
        temp_v0 = *(char *)(param_1 + 0x5a4);
        temp_v15 = temp_v0 == '\x01';
        if (temp_v15) {
          temp_v0 = *(char *)(param_1 + 0x5a5);
        }
        if (temp_v15 && temp_v0 == '\x01') {
          temp_v7 = FUN_0029e924(param_1 + 0x20);
          temp_v7 = param_1 + (temp_v7 + temp_v9) * 0x20;
          temp_v10 = 0;
          if (!temp_v14) {
            temp_v10 = (unsigned int)*(unsigned char *)(temp_v7 + 0x5b8);
          }
          else {
            temp_v8 = (unsigned int)*(unsigned short *)(temp_v7 + 0x5ac);
            FUN_002b9024();
            if (temp_v8 != 0) {
              temp_v10 = (unsigned int)*(unsigned char *)(temp_v8 + 3);
            }
          }
          if (temp_v12 >= temp_v10 && temp_v12 != temp_v10) {
            temp_v13 = 0x72e027ff;
          }
          if (temp_v12 < temp_v10) {
            temp_v13 = 0xdc0f14ff;
          }
        }
        temp_v11 = 0xffffffff;
        *(unsigned int *)(temp_v9 * 4 + 0x49357c) = temp_v12;
        *(unsigned int *)(temp_v9 * 4 + 0x4935a4) = temp_v13;
        temp_v14 = *(char *)(param_1 + 0x5a4) != '\0';
        temp_v7 = FUN_002bf4f0(param_1 + 200,temp_v9 + 0x42f);
        temp_v2 = *(short *)(temp_v7 + 8);
        temp_v3 = *(short *)(temp_v7 + 10);
        temp_v12 = (unsigned int)temp_v1;
        FUN_0029ce60(temp_v12,*(unsigned char *)(param_1 + 0x5a5),temp_v14);
        if (*(char *)(param_1 + 0x5a4) == '\x01') {
          temp_v10 = (unsigned int)temp_v1;
          FUN_0029ce60(temp_v10,0,temp_v14);
          if (temp_v12 < temp_v10) {
            temp_v11 = 0xdc0f14ff;
          }
          if (temp_v10 < temp_v12) {
            temp_v11 = 0x72e027ff;
          }
        }
        temp_v7 = FUN_002bf4f0(param_1 + 200,0x4c6);
        temp_v4 = *(short *)(temp_v7 + 10);
        *(int *)(temp_v9 * 4 + 0x4935cc) = (int)*(short *)(temp_v7 + 8) + (int)temp_v2;
        *(int *)(temp_v9 * 4 + 0x4935f4) = (int)temp_v4 + (int)temp_v3;
        FUN_002be624(temp_v9 * 0x20 + 0x49361c,&LAB_0022d42c,temp_v12);
        (&DAT_0049375c)[temp_v9] = temp_v11;
        temp_v9 = temp_v9 + 1;
      } while (temp_v9 < temp_v6);
    }
  }
  return;
}

} /* extern "C" */
