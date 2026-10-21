/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048053c` (_code @ 0x48053c, 0x1f8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192608(void);
int FUN_001a90f0(int *, int);
int FUN_0047fc38(void);
int equipmentGetCappedUpgradeBonuses(int, short [4]);

/* stack frame of param_2: 6 slot(s), 16 byte(s) */
typedef struct {
    unsigned short sp20; /* 0x20: local_20 */
    unsigned short sp22; /* 0x22: local_22 */
    unsigned short sp24; /* 0x24: local_24 */
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
} param_2_stack;

/* Supplied declaration required: FUN_00192608. */
extern int FUN_0019c06c(int);
/* Supplied declaration required: FUN_001a90f0. */
/* Supplied declaration required: FUN_0047fc38. */
/* Supplied declaration required: equipmentGetCappedUpgradeBonuses. */


void FUN_0048053c(int param_1,unsigned short *param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  char temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  short temp_v5 [4];
  short temp_v6;
  short temp_v7;
  short temp_v8;
  
  temp_v0 = param_1;
  FUN_0047fc38();
  if (temp_v0 == 0) {
    temp_v0 = FUN_0019c06c(param_1);
    if (temp_v0 != 0) {
      temp_v2 = *(char *)(temp_v0 + 8);
    }
    else {
      temp_v2 = '\0';
    }
    equipmentGetCappedUpgradeBonuses(param_1,temp_v5);
    temp_v0 = param_1;
    FUN_00192608();
    temp_v1 = 0;
    temp_v3 = 0;
    temp_v4 = 0;
    if (temp_v0 != 0) {
      temp_v1 = (int)*(short *)(temp_v0 + 0x36);
      FUN_001a90f0(&temp_v3,temp_v0 + 0x31);
    }
    if (temp_v2 != '\x04') {
      if (temp_v2 != '\x05') {
        if (((temp_v2 == '\x06') && (-1 < (int)(param_1 - 0x21dU))) && (param_1 - 0x21dU < 0x78)) {
          *param_2 = 0x14;
          param_2[5] = 6;
          if (temp_v5[0] + temp_v1 + 0x14 >= 0x3e7) {
            temp_v0 = 999 - (temp_v5[0] + temp_v1);
            if (temp_v0 < 1) {
              temp_v0 = 0;
            }
            *param_2 = (short)temp_v0;
          }
          if (temp_v7 + 6 + (int)(*(signed char *)((unsigned char *)&temp_v3 + 3)) >= 0x63) {
            temp_v0 = 99 - ((int)temp_v7 + (int)(*(signed char *)((unsigned char *)&temp_v3 + 3)));
            if (temp_v0 < 1) {
              temp_v0 = 0;
            }
            param_2[5] = (short)temp_v0;
          }
        }
      }
      else if ((-1 < (int)(param_1 - 0x1a5U)) && (param_1 - 0x1a5U < 0x78)) {
        *param_2 = 0x1e;
        if (temp_v5[0] + temp_v1 + 0x1e >= 0x3e7) {
          temp_v0 = 999 - (temp_v5[0] + temp_v1);
          if (temp_v0 < 1) {
            temp_v0 = 0;
          }
          *param_2 = (short)temp_v0;
          return;
        }
      }
    }
    else if ((-1 < (int)(param_1 - 0x12dU)) && (param_1 - 0x12dU < 0x78)) {
      *param_2 = 0xf;
      param_2[4] = 3;
      param_2[6] = 3;
      if (temp_v5[0] + temp_v1 + 0xf >= 0x3e7) {
        temp_v0 = 999 - (temp_v5[0] + temp_v1);
        if (temp_v0 < 1) {
          temp_v0 = 0;
        }
        *param_2 = (short)temp_v0;
      }
      if (temp_v6 + 3 + (int)(*(signed char *)((unsigned char *)&temp_v3 + 2)) >= 0x63) {
        temp_v0 = 99 - ((int)temp_v6 + (int)(*(signed char *)((unsigned char *)&temp_v3 + 2)));
        if (temp_v0 < 1) {
          temp_v0 = 0;
        }
        param_2[4] = (short)temp_v0;
      }
      if (temp_v8 + 3 + (int)(char)temp_v4 >= 0x63) {
        temp_v0 = 99 - ((int)temp_v8 + (int)(char)temp_v4);
        if (temp_v0 < 1) {
          temp_v0 = 0;
        }
        param_2[6] = (short)temp_v0;
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
