/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bda84` (_code @ 0x4bda84, 0x254 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001676b0(int, int, int, int);
int FUN_001677c0(void);
int FUN_0035ae58(int, int, int, int, int);
int aeabi_idivmod(int, int);

typedef int romwright_code(...);
/* stack frame of param_5: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_5_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_001676b0. */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0035ae58. */
/* Supplied declaration required: aeabi_idivmod. */


void FUN_004bda84(int param_1,int param_2,int param_3,int param_4,int param_5)

{
/* irregular: 5 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  short temp_v5;
  short temp_v6;
  int *piVar7;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned char temp_v11;
  
  temp_v2 = FUN_001834a4(0x11,0x12);
  temp_v5 = 0;
  temp_v1 = 0;
  temp_v0 = *(unsigned short *)(param_2 + 0x60);
  temp_v7 = 0;
  temp_v9 = 0;
  FUN_001677c0();
  temp_v3 = 1;
  temp_v6 = 0;
  temp_v10 = 0xd;
  param_1 = param_1 + param_3 * 4;
  do {
    if (((unsigned int)temp_v0 & (1 << (temp_v3 & 0xff))) != 0) {
      temp_v11 = *(int *)(param_1 + 0x378) == temp_v7;
      temp_v8 = temp_v7 + 1;
      temp_v7 = temp_v7 + 1;
      if (temp_v11) {
        temp_v5 = temp_v6 + 1;
        temp_v7 = temp_v8;
      }
    }
    temp_v10 = temp_v10 - 1;
    temp_v3 = temp_v3 + 1;
    temp_v6 = temp_v6 + 1;
  } while (temp_v10 != 0);
  if (temp_v7 != 1) {
    if (temp_v7 < 2) {
      FUN_001677c0();
      return;
    }
    if (*(int *)(param_1 + 0x348) >= 0x14) {
      temp_v3 = 1;
      temp_v6 = 0;
      temp_v10 = 0xd;
      do {
        if (((unsigned int)temp_v0 & (1 << (temp_v3 & 0xff))) != 0) {
          aeabi_idivmod(*(int *)(param_1 + 0x378) + 1,temp_v7);
          temp_v11 = temp_v4 == temp_v9;
          temp_v8 = temp_v9 + 1;
          temp_v9 = temp_v9 + 1;
          if (temp_v11) {
            temp_v1 = temp_v6 + 1;
            temp_v9 = temp_v8;
          }
        }
        temp_v8 = DAT_0059dbb4;
        temp_v10 = temp_v10 - 1;
        temp_v3 = temp_v3 + 1;
        temp_v6 = temp_v6 + 1;
      } while (temp_v10 != 0);
      piVar7 = (int *)(DAT_0059dbb4 + 0x1318);
      temp_v7 = piVar7[*piVar7 + 2];
      piVar7[*piVar7 + 2] = 3;
      if (*(char *)(temp_v8 + 0x1330) != '\0' || temp_v7 != 3) {
        (**(romwright_code **)(temp_v8 + 0x1334))();
        *(unsigned char *)(temp_v8 + 0x1330) = 0;
      }
      FUN_0035ae58((int)*(short *)(temp_v2 + 8),(int)*(short *)(temp_v2 + 10),
                   (int)**(short **)(temp_v2 + 0xc),(int)(*(short **)(temp_v2 + 0xc))[1],1);
      temp_v7 = (*(int *)(param_1 + 0x348) - 0x14) * -3;
      FUN_001676b0((int)temp_v5,(int)*(short *)(temp_v2 + 8) + temp_v7 + param_4,
                   *(short *)(temp_v2 + 10) + param_5,0x7e);
      FUN_001676b0((int)temp_v1,(int)*(short *)(temp_v2 + 8) + param_4 + temp_v7 + 0xd,
                   *(short *)(temp_v2 + 10) + param_5,0x7e);
      temp_v7 = DAT_0059dbb4;
      piVar7 = (int *)(DAT_0059dbb4 + 0x1318);
      temp_v9 = piVar7[*piVar7 + 2];
      piVar7[*piVar7 + 2] = 0;
      if (*(char *)(temp_v7 + 0x1330) != '\0' || temp_v9 != 0) {
        (**(romwright_code **)(temp_v7 + 0x1334))();
        *(unsigned char *)(temp_v7 + 0x1330) = 0;
      }
      FUN_001677c0();
      return;
    }
  }
  FUN_001676b0((int)temp_v5,*(short *)(temp_v2 + 8) + param_4,*(short *)(temp_v2 + 10) + param_5,0x7e);
  FUN_001677c0();
  return;
}

} /* extern "C" */
