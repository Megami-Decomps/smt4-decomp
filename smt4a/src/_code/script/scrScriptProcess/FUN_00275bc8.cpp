/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00275bc8` (_code @ 0x275bc8, 0x338 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001630d4(int, int, int, int, int);
int FUN_002e6354(...);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern int DAT_00588e30; /* 0x588e30 */
extern int DAT_00588e34; /* 0x588e34 */
extern int DAT_00588e38; /* 0x588e38 */

/* Supplied declaration required: FUN_001630d4. */
/* Supplied declaration required: FUN_002e6354. */


int FUN_00275bc8(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  char temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned char temp_v11;
  
  temp_v6 = param_1 + 0x20;
  temp_v5 = 0;
  temp_v3 = *(char *)(param_1 + 8);
  temp_v7 = 0;
  temp_v9 = 0;
  temp_v11 = temp_v3 == 'F';
  if (temp_v11) {
    temp_v3 = *(char *)(param_1 + 9);
  }
  temp_v8 = 0;
  temp_v10 = 0;
  if (temp_v11 && temp_v3 == 'L') {
    temp_v3 = *(char *)(param_1 + 10);
    temp_v11 = temp_v3 == 'W';
    if (temp_v11) {
      temp_v3 = *(char *)(param_1 + 0xb);
    }
    if (temp_v11 && temp_v3 == '0') {
      temp_v4 = 0;
      if (temp_v4 < *(int *)(param_1 + 0x10)) {
        do {
          puVar6 = (unsigned int *)(temp_v6 + temp_v4 * 0x10);
          switch(*puVar6) {
          case 0:
            temp_v7 = puVar6[3] + param_1;
            break;
          case 1:
            temp_v9 = puVar6[3] + param_1;
            break;
          case 2:
            temp_v8 = puVar6[3] + param_1;
            break;
          case 3:
            break;
          case 4:
            temp_v10 = puVar6[3] + param_1;
            break;
          default:
            return temp_v5;
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < *(int *)(param_1 + 0x10));
      }
      if (param_1 != 0 && temp_v6 != 0) {
        temp_v11 = temp_v7 != 0;
        temp_v4 = 0;
        if (temp_v11) {
          temp_v4 = temp_v8;
        }
        temp_v0 = param_1;
        if (temp_v11 && temp_v8 != 0) {
          temp_v4 = *(int *)(param_1 + 0x28);
          temp_v0 = temp_v4;
        }
        if (((temp_v11 && temp_v8 != 0) && temp_v0 != 0) && -1 < temp_v4) {
          temp_v5 = 0x100;
          FUN_001630d4(0x100,0x100,0,0x10c,0);
          FUN_002e6354();
          if (temp_v5 == 0) {
            temp_v5 = 0;
          }
          else {
            for (temp_v4 = 0; temp_v3 = *(char *)(temp_v7 + temp_v4), *(char *)(temp_v5 + temp_v4) = temp_v3,
                temp_v3 != '\0'; temp_v4 = temp_v4 + 1) {
            }
            *(unsigned int *)(temp_v5 + 0x18) = *(unsigned int *)(temp_v7 + 0x18);
            *(unsigned int *)(temp_v5 + 0x1c) = 0;
            *(unsigned int *)(temp_v5 + 0x20) = 0;
            *(unsigned int *)(temp_v5 + 0x24) = 0;
            *(unsigned int *)(temp_v5 + 0x28) = 0;
            *(unsigned int *)(temp_v5 + 0x2c) = 0;
            *(unsigned int *)(temp_v5 + 0x30) = 0;
            *(unsigned int *)(temp_v5 + 0x34) = 0;
            *(unsigned int *)(temp_v5 + 0x38) = 0;
            FUN_002e6354(temp_v5 + 0x3c,0x70);
            *(int *)(temp_v5 + 0xbc) = temp_v8;
            *(int *)(temp_v5 + 0xac) = param_1;
            *(int *)(temp_v5 + 0xb0) = temp_v6;
            *(int *)(temp_v5 + 0xb4) = temp_v7;
            *(int *)(temp_v5 + 0xb8) = temp_v9;
            *(unsigned int *)(temp_v5 + 0xc0) = param_2;
            *(int *)(temp_v5 + 0xc4) = temp_v10;
            *(unsigned int *)(temp_v5 + 200) = 0;
            *(unsigned int *)(temp_v5 + 0xcc) = 0;
            *(unsigned int *)(temp_v5 + 0xd0) = 0;
            *(unsigned int *)(temp_v5 + 0xe8) = 0;
            *(unsigned int *)(temp_v5 + 0xec) = 0;
            *(unsigned int *)(temp_v5 + 0xf0) = 0;
            *(unsigned int *)(temp_v5 + 0xf4) = 0;
            *(unsigned int *)(temp_v5 + 0xf8) = 0;
            *(unsigned int *)(temp_v5 + 0xe4) = 0;
            *(unsigned int *)(temp_v5 + 0xe0) = 0;
            *(unsigned int *)(temp_v5 + 0xdc) = 0;
            *(unsigned int *)(temp_v5 + 0xd8) = 0;
            if (0 < *(short *)(param_1 + 0x14)) {
              puVar6 = (unsigned int *)0x100;
              FUN_001630d4(0x100,0x100,0,(int)*(short *)(param_1 + 0x14) << 2,0);
              *(unsigned int **)(temp_v5 + 0xe8) = puVar6;
              if (0 < *(short *)(param_1 + 0x14)) {
                temp_v1 = (int)*(short *)(param_1 + 0x14) & 1;
                if (temp_v1 == 1) {
                  *puVar6 = 0;
                }
                temp_v2 = (unsigned int)(temp_v1 == 1);
                if ((int)temp_v1 < (int)*(short *)(param_1 + 0x14)) {
                  do {
                    temp_v1 = temp_v1 + 2;
                    *(unsigned int *)(*(int *)(temp_v5 + 0xe8) + temp_v2 * 4) = 0;
                    *(unsigned int *)(*(int *)(temp_v5 + 0xe8) + (temp_v2 + 1) * 4) = 0;
                    temp_v2 = temp_v2 + 2;
                  } while ((int)temp_v1 < (int)*(short *)(param_1 + 0x14));
                }
              }
            }
            if (*(short *)(param_1 + 0x16) < 1) {
              *(unsigned int *)(temp_v5 + 0xec) = 0;
            }
            else {
              puVar6 = (unsigned int *)0x100;
              FUN_001630d4(0x100,0x100,0,(int)*(short *)(param_1 + 0x16) << 2,0);
              *(unsigned int **)(temp_v5 + 0xec) = puVar6;
              if (0 < *(short *)(param_1 + 0x16)) {
                temp_v1 = (int)*(short *)(param_1 + 0x16) & 1;
                if (temp_v1 == 1) {
                  *puVar6 = 0;
                }
                temp_v2 = (unsigned int)(temp_v1 == 1);
                if ((int)temp_v1 < (int)*(short *)(param_1 + 0x16)) {
                  do {
                    temp_v1 = temp_v1 + 2;
                    temp_v6 = temp_v2 + 1;
                    *(unsigned int *)(*(int *)(temp_v5 + 0xec) + temp_v2 * 4) = 0;
                    temp_v2 = temp_v2 + 2;
                    *(unsigned int *)(*(int *)(temp_v5 + 0xec) + temp_v6 * 4) = 0;
                  } while ((int)temp_v1 < (int)*(short *)(param_1 + 0x16));
                }
              }
            }
            if (DAT_00588e38 != 0) {
              *(int *)(temp_v5 + 0xf0) = DAT_00588e38;
              *(int *)(DAT_00588e38 + 0xf4) = temp_v5;
              *(unsigned int *)(temp_v5 + 0xf4) = 0;
              DAT_00588e38 = temp_v5;
            }
            else {
              DAT_00588e34 = temp_v5;
              DAT_00588e38 = temp_v5;
              *(unsigned int *)(temp_v5 + 0xf0) = 0;
              *(unsigned int *)(temp_v5 + 0xf4) = 0;
            }
            DAT_00588e30 = DAT_00588e30 + 1;
          }
        }
      }
    }
  }
  return temp_v5;
}

} /* extern "C" */
