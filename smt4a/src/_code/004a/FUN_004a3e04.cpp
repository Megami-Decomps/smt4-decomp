/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a3e04` (_code @ 0x4a3e04, 0x268 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(int, unsigned char *, unsigned int);
int FUN_0018349c(int, int);
int FUN_00184310(void);
int FUN_004a8750(unsigned int, int, int);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char LAB_004a4088; /* 0x4a4088 */
extern int DAT_0057f0b8; /* 0x57f0b8 */
extern unsigned int DAT_005e1e88; /* 0x5e1e88 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_0018349c. */
/* Supplied declaration required: FUN_00184310. */
extern int FUN_002a482c(int);
/* Supplied declaration required: FUN_004a8750. */
extern int FUN_004d0040(int);


void FUN_004a3e04(int param_1)

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
    temp_v5 = FUN_002a482c(param_1 + 0x20);
    temp_v6 = FUN_004d0040(param_1 + 0x20);
    if ((temp_v5 != DAT_0057f0b8) && (temp_v9 = 0, DAT_0057f0b8 = temp_v5, 0 < temp_v6)) {
      do {
        temp_v13 = 0xffffffff;
        temp_v1 = *(unsigned short *)(param_1 + (temp_v5 + temp_v9) * 0x20 + 0x868);
        temp_v14 = *(char *)(param_1 + 0x860) == '\0';
        temp_v7 = FUN_002a482c(param_1 + 0x20);
        temp_v0 = *(char *)(param_1 + 0x861);
        temp_v7 = param_1 + (temp_v7 + temp_v9) * 0x20;
        temp_v12 = 0;
        if (!temp_v14) {
          if (temp_v0 != '\0') {
            if (temp_v0 == '\x01') {
              temp_v12 = (unsigned int)*(unsigned short *)(temp_v7 + 0x876);
            }
          }
          else {
            temp_v12 = (unsigned int)*(unsigned short *)(temp_v7 + 0x874);
          }
        }
        else if (temp_v0 != '\0') {
          if (temp_v0 != '\x01') {
            if (temp_v0 == '\x02') {
              temp_v12 = (unsigned int)*(unsigned short *)(temp_v7 + 0x876);
            }
          }
          else {
            temp_v12 = (unsigned int)*(unsigned short *)(temp_v7 + 0x874);
          }
        }
        else {
          temp_v10 = (unsigned int)*(unsigned short *)(temp_v7 + 0x868);
          FUN_00184310();
          if (temp_v10 != 0) {
            temp_v12 = (unsigned int)*(unsigned short *)(temp_v10 + 6);
          }
        }
        temp_v0 = *(char *)(param_1 + 0x860);
        temp_v15 = temp_v0 == '\x01';
        if (temp_v15) {
          temp_v0 = *(char *)(param_1 + 0x861);
        }
        if (temp_v15 && temp_v0 == '\x01') {
          temp_v7 = FUN_002a482c(param_1 + 0x20);
          temp_v7 = param_1 + (temp_v7 + temp_v9) * 0x20;
          temp_v10 = 0;
          if (!temp_v14) {
            temp_v10 = (unsigned int)*(unsigned short *)(temp_v7 + 0x874);
          }
          else {
            temp_v8 = (unsigned int)*(unsigned short *)(temp_v7 + 0x868);
            FUN_00184310();
            if (temp_v8 != 0) {
              temp_v10 = (unsigned int)*(unsigned short *)(temp_v8 + 6);
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
        *(unsigned int *)(temp_v9 * 4 + 0x5e1ca8) = temp_v12;
        *(unsigned int *)(temp_v9 * 4 + 0x5e1cd0) = temp_v13;
        temp_v14 = *(char *)(param_1 + 0x860) != '\0';
        temp_v7 = FUN_0018349c(param_1 + 200,temp_v9 + 0x42f);
        temp_v2 = *(short *)(temp_v7 + 8);
        temp_v3 = *(short *)(temp_v7 + 10);
        temp_v12 = (unsigned int)temp_v1;
        FUN_004a8750(temp_v12,*(unsigned char *)(param_1 + 0x861),temp_v14);
        if (*(char *)(param_1 + 0x860) == '\x01') {
          temp_v10 = (unsigned int)temp_v1;
          FUN_004a8750(temp_v10,0,temp_v14);
          if (temp_v12 < temp_v10) {
            temp_v11 = 0xdc0f14ff;
          }
          if (temp_v10 < temp_v12) {
            temp_v11 = 0x72e027ff;
          }
        }
        temp_v7 = FUN_0018349c(param_1 + 200,0x4c6);
        temp_v4 = *(short *)(temp_v7 + 10);
        *(int *)(temp_v9 * 4 + 0x5e1cf8) = (int)*(short *)(temp_v7 + 8) + (int)temp_v2;
        *(int *)(temp_v9 * 4 + 0x5e1d20) = (int)temp_v4 + (int)temp_v3;
        FUN_00100388(temp_v9 * 0x20 + 0x5e1d48,&LAB_004a4088,temp_v12);
        (&DAT_005e1e88)[temp_v9] = temp_v11;
        temp_v9 = temp_v9 + 1;
      } while (temp_v9 < temp_v6);
    }
  }
  return;
}

} /* extern "C" */
