/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f4b44` (_code @ 0x3f4b44, 0x17c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003f3e64(int *, int *, int [2]);
int __aeabi_idivmod(int, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int gameGetPlayerData(void);
extern int gameGetSlotRecord(void);
extern int btlMainGetUnk14(void);
/* Supplied declaration required: FUN_003f3e64. */
/* Supplied declaration required: __aeabi_idivmod. */


void FUN_003f4b44(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6 [2];
  
  if (*param_1 != 0) {
    if (*param_1 == 1) {
      temp_v1 = param_1[4];
      temp_v3 = param_1[5];
      param_1[5] = temp_v3 + param_1[3];
      param_1[4] = param_1[2] + temp_v1;
      param_1[0xb] = (param_1[2] + temp_v1) >> 0xc;
      param_1[0xc] = (temp_v3 + param_1[3]) >> 0xc;
      if (param_1[1] >= 8) {
        temp_v5 = 0;
        temp_v6[0] = 0;
        FUN_003f3e64(param_1,&temp_v5,temp_v6);
        param_1[0xb] = temp_v5;
        param_1[0xc] = temp_v6[0];
        *param_1 = 0;
      }
    }
    if (((char)param_1[0x12] != '\0') &&
       (temp_v1 = param_1[0x14], param_1[0x14] = temp_v1 + 1, temp_v1 + 1 >= 0xe)) {
      *(unsigned char *)(param_1 + 0x12) = 0;
    }
    param_1[1] = param_1[1] + 1;
    return;
  }
  temp_v1 = param_1[0xd];
  temp_v4 = 0;
  temp_v3 = 0;
  if (temp_v1 != -1) {
    if (temp_v1 != -2) {
      if (-1 < temp_v1) {
        temp_v1 = gameGetSlotRecord();
        temp_v4 = (unsigned int)*(unsigned short *)(temp_v1 + 0x60);
      }
    }
    else {
      temp_v1 = btlMainGetUnk14();
      if (temp_v1 != 0) {
        temp_v4 = (unsigned int)*(unsigned short *)(temp_v1 + 0x60);
      }
    }
  }
  else {
    temp_v1 = gameGetPlayerData();
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v1 + 0x5e);
  }
  temp_v0 = 1;
  temp_v1 = 0xd;
  do {
    if ((temp_v4 & (1 << (temp_v0 & 0xff))) != 0) {
      temp_v3 = temp_v3 + 1;
    }
    do {
      temp_v1 = temp_v1 - 1;
      temp_v0 = temp_v0 + 1;
      if (temp_v1 == 0) {
        if ((temp_v3 >= 2) && (temp_v1 = param_1[6], param_1[6] = temp_v1 + 1, temp_v1 + 1 >= 0x18)) {
          __aeabi_idivmod(param_1[7] + 1,temp_v3);
          param_1[7] = temp_v2;
          param_1[6] = 0;
        }
        if (((char)param_1[0x12] != '\0') &&
           (temp_v1 = param_1[0x14], param_1[0x14] = temp_v1 + 1, temp_v1 + 1 >= 0xe)) {
          *(unsigned char *)(param_1 + 0x12) = 0;
        }
        param_1[1] = param_1[1] + 1;
        return;
      }
    } while (temp_v0 == 2);
  } while( 1 );
}

} /* extern "C" */
