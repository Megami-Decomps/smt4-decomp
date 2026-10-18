/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037c808` (_code @ 0x37c808, 0x1d8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp48; /* 0x48: local_48 */
} param_2_stack;

extern int *DAT_00473544; /* 0x473544 */

extern int FUN_002c6c10(int, int);


unsigned int FUN_0037c808(int param_1,int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8 [5];
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  
  temp_v3 = 0;
  if (DAT_00473544 != (int *)0x0) {
    temp_v0 = (**(romwright_code **)(*DAT_00473544 + 8))(DAT_00473544,*(unsigned int *)(param_1 + 0x14),&temp_v9)
    ;
    temp_v3 = 0;
    if (temp_v0 != 0) {
      *(unsigned int *)(param_2 + 0x10) = *(unsigned int *)(param_1 + 0x10);
      *(unsigned short *)(param_2 + 0x80) = *(unsigned short *)(param_1 + 0x30);
      *(unsigned int *)(param_2 + 0x40) = 1;
      *(unsigned int *)(param_2 + 0x3c) = temp_v9;
      *(unsigned char *)(param_2 + 0x18) = 1;
      *(unsigned int *)(param_2 + 0x1c) = temp_v10;
      *(unsigned char *)(param_2 + 0x20) = *(unsigned char *)(param_1 + 0x24);
      *(unsigned int *)(param_2 + 0x24) = *(unsigned int *)(param_1 + 0x28);
      *(unsigned int *)(param_2 + 0x28) = *(unsigned int *)(param_1 + 0x2c);
      *(unsigned int *)(param_2 + 0x30) = 0x800;
      *(unsigned int *)(param_2 + 0x2c) = temp_v11;
      *(unsigned int *)(param_2 + 0x34) = 0x800;
      if (temp_v9 != 0) {
        temp_v1 = temp_v9 & 1;
        temp_v4 = (unsigned int)(temp_v1 == 1);
        if (temp_v1 == 1) {
          *(unsigned int *)(param_2 + 0x60) = 0;
        }
        for (; temp_v1 < temp_v9; temp_v1 = temp_v1 + 2) {
          temp_v0 = temp_v4 + 1;
          *(unsigned int *)(param_2 + temp_v4 * 4 + 0x60) = 0;
          temp_v4 = temp_v4 + 2;
          *(unsigned int *)(param_2 + temp_v0 * 4 + 0x60) = 0;
        }
      }
      temp_v5 = *(int *)(param_2 + 0x2c);
      temp_v6 = *(int *)(param_2 + 0x24);
      temp_v0 = FUN_002c6c10(temp_v6,temp_v5);
      temp_v7 = *(int *)(param_2 + 0x28);
      temp_v2 = FUN_002c6c10(temp_v7 - 1,temp_v5);
      if (*(char *)(param_2 + 0x20) != '\0') {
        temp_v7 = temp_v7 - temp_v5 * temp_v2;
      }
      else {
        temp_v7 = 0x400;
      }
      *(int *)(param_2 + 0x38) = temp_v7;
      *(unsigned char *)(param_2 + 0x44) = 0x7f;
      *(unsigned char *)(param_2 + 0x45) = 0x40;
      *(unsigned char *)(param_2 + 0x46) = 0;
      *(unsigned char *)(param_2 + 0x47) = 3;
      *(char *)(param_2 + 0x48) = (char)temp_v9;
      temp_v1 = 0;
      if (temp_v9 != 0) {
        do {
          temp_v4 = temp_v1 + 1;
          *(char *)(param_2 + temp_v1 + 0x49) = (char)temp_v1;
          temp_v1 = temp_v4;
        } while (temp_v4 < temp_v9);
      }
      *(int *)(param_1 + 0x48) = temp_v6 - temp_v5 * temp_v0;
      *(int *)(param_1 + 0x38) = temp_v2;
      *(int *)(param_1 + 0x3c) = temp_v0;
      if (*(romwright_code **)(param_1 + 0xc24) != (romwright_code *)0x0) {
        temp_v8[0] = 0;
        temp_v0 = (**(romwright_code **)(param_1 + 0xc24))(temp_v8,*(unsigned int *)(param_1 + 0xc28));
        if (temp_v0 == 0) {
          return 0;
        }
        *(unsigned int *)(param_1 + 0x50) = temp_v8[0];
        *(unsigned int *)(param_1 + 0x5c) = *(unsigned int *)(*(int *)(param_1 + 0x18) + 0x10);
        *(unsigned int *)(param_1 + 0x58) = 0;
      }
      else {
        *(unsigned int *)(param_1 + 0x5c) = *(unsigned int *)(param_1 + 0x2c);
        *(unsigned int *)(param_1 + 0x58) = 0;
      }
      temp_v3 = 1;
      *(unsigned int *)(param_1 + 0x54) = 0;
    }
  }
  return temp_v3;
}
