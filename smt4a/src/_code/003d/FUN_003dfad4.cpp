/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dfad4` (_code @ 0x3dfad4, 0x234 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int affinityShouldReplaceState(int, int);
int dataTable41FindById(void);
int FUN_0047ffd4(unsigned int, int);

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

extern int gameGetPlayerData(void);
/* Supplied declaration required: affinityShouldReplaceState. */
/* Supplied declaration required: dataTable41FindById. */
/* Supplied declaration required: FUN_0047ffd4. */


void FUN_003dfad4(int param_1,unsigned int param_2)

{
/* irregular: 4 goto(s); 3 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned short temp_v5;
  unsigned short *puVar7;
  short temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  
  temp_v2 = 0;
  do {
    temp_v4 = temp_v2 * 2;
    temp_v2 = temp_v2 + 1;
    *(unsigned short *)(param_1 + temp_v4) = 100;
  } while (temp_v2 < 0x15);
  FUN_0047ffd4(param_2,param_1);
  temp_v0 = *(unsigned short *)(param_1 + 0xc);
  temp_v5 = 2;
  temp_v8 = temp_v0 >> 10 != 2;
  if (temp_v8) {
    temp_v5 = 3;
  }
  if (temp_v8 && temp_v5 != temp_v0 >> 10) {
    *(unsigned short *)(param_1 + 0xc) = (temp_v0 & 0x3ff) | 0x400;
  }
  temp_v2 = gameGetPlayerData();
  temp_v7 = 0;
  temp_v9 = *(unsigned int *)(temp_v2 + 0x34);
  temp_v10 = *(unsigned int *)(temp_v2 + 0x38);
  temp_v11 = *(unsigned int *)(temp_v2 + 0x3c);
  temp_v12 = *(unsigned int *)(temp_v2 + 0x40);
  do {
    temp_v6 = 0;
    temp_v2 = 0;
    do {
      temp_v3 = (unsigned int)*(unsigned short *)((int)&temp_v9 + temp_v2 * 2);
      if (((temp_v3 != 0) && (dataTable41FindById(), temp_v3 != 0)) &&
         (temp_v3 = *(unsigned int *)(temp_v3 + 0x44), (temp_v3 & 0x7ff) >> 6 == 5)) {
        if ((temp_v3 & 0xf0000) != 0) {
          if ((temp_v7 & 0xff) == (temp_v3 & 0xffff) >> 0xb) {
            temp_v1 = 0;
            switch((temp_v3 & 0xfffff) >> 0x10) {
            case 1:
              temp_v1 = 5;
              break;
            case 2:
              temp_v1 = 1;
              break;
            case 3:
              temp_v1 = 3;
              break;
            case 4:
              temp_v1 = 4;
            }
            temp_v4 = affinityShouldReplaceState(temp_v6,temp_v1);
            if (temp_v4 != 0) {
              temp_v6 = temp_v1;
            }
          }
        }
        else {
          switch(temp_v7 & 0xff) {
          case 6:
          case 7:
            temp_v3 = temp_v3 & 0x100000;
            break;
          default:
            goto LAB_003dfca0;
          case 0xb:
            temp_v3 = temp_v3 & 0x400000;
            goto joined_r0x003dfc40;
          case 0xc:
            temp_v3 = temp_v3 & 0x800000;
joined_r0x003dfc40:
            if (temp_v3 == 0) goto LAB_003dfca0;
            goto LAB_003dfc74;
          case 0xd:
            temp_v3 = temp_v3 & 0x1000000;
            break;
          case 0xe:
            temp_v3 = temp_v3 & 0x2000000;
            break;
          case 0xf:
            temp_v3 = temp_v3 & 0x4000000;
            break;
          case 0x10:
            temp_v3 = temp_v3 & 0x8000000;
          }
          if (temp_v3 != 0) {
LAB_003dfc74:
            temp_v6 = 1;
            break;
          }
        }
      }
LAB_003dfca0:
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 8);
    puVar7 = (unsigned short *)(param_1 + temp_v7 * 2);
    temp_v2 = affinityShouldReplaceState(*puVar7 >> 10,temp_v6);
    if (temp_v2 != 0) {
      *puVar7 = (temp_v6 << 10) | (*puVar7 & 0x3ff);
    }
    temp_v7 = temp_v7 + 1;
    if ((int)temp_v7 >= 0x15) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
