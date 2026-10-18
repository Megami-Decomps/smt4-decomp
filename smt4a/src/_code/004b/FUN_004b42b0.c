/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b42b0` (_code @ 0x4b42b0, 0x2c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_4_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_001676b0. */
extern int FUN_001834a4(unsigned int, unsigned int);
extern int FUN_001ab854(int);
/* Supplied declaration required: FUN_0035ae58. */
/* Supplied declaration required: aeabi_idivmod. */


void FUN_004b42b0(int param_1,int param_2,int param_3,int param_4)

{
/* irregular: 5 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  short temp_v6;
  int *piVar6;
  int *piVar7;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int *piVar12;
  short temp_v11;
  unsigned char temp_v12;
  
  temp_v1 = FUN_001834a4(0x1d,300);
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v10 = 0;
  temp_v11 = 0;
  temp_v0 = 0;
  if (-1 < param_2) {
    temp_v2 = FUN_001ab854(param_2);
    temp_v7 = (unsigned int)*(unsigned short *)(temp_v2 + 0x60);
  }
  param_1 = param_1 + param_2 * 4;
  temp_v3 = 1;
  temp_v6 = 0;
  piVar12 = (int *)(param_1 + 0x7ecc);
  temp_v2 = 0xd;
  do {
    if ((temp_v7 & (1 << (temp_v3 & 0xff))) != 0) {
      temp_v12 = *piVar12 == temp_v8;
      temp_v9 = temp_v8 + 1;
      temp_v8 = temp_v8 + 1;
      if (temp_v12) {
        temp_v11 = temp_v6 + 1;
        temp_v8 = temp_v9;
      }
    }
    do {
      temp_v2 = temp_v2 - 1;
      temp_v3 = temp_v3 + 1;
      temp_v6 = temp_v6 + 1;
      if (temp_v2 == 0) {
        if (temp_v8 != 1) {
          if (temp_v8 < 2) {
            return;
          }
          piVar6 = (int *)(param_1 + 0x7e6c);
          temp_v2 = *piVar6;
          *piVar6 = temp_v2 + 1;
          if (temp_v2 + 1 >= 0x14) {
            temp_v3 = 1;
            temp_v6 = 0;
            temp_v2 = 0xd;
            do {
              if ((temp_v7 & (1 << (temp_v3 & 0xff))) != 0) {
                aeabi_idivmod(*piVar12 + 1,temp_v8);
                temp_v12 = temp_v4 == temp_v10;
                temp_v9 = temp_v10 + 1;
                temp_v10 = temp_v10 + 1;
                if (temp_v12) {
                  temp_v0 = temp_v6 + 1;
                  temp_v10 = temp_v9;
                }
              }
              do {
                temp_v9 = DAT_0059dbb4;
                temp_v2 = temp_v2 - 1;
                temp_v3 = temp_v3 + 1;
                temp_v6 = temp_v6 + 1;
                if (temp_v2 == 0) {
                  piVar7 = (int *)(DAT_0059dbb4 + 0x1318);
                  temp_v10 = piVar7[*piVar7 + 2];
                  piVar7[*piVar7 + 2] = 3;
                  if (*(char *)(temp_v9 + 0x1330) != '\0' || temp_v10 != 3) {
                    (**(romwright_code **)(temp_v9 + 0x1334))();
                    *(unsigned char *)(temp_v9 + 0x1330) = 0;
                  }
                  FUN_0035ae58(param_3 + *(short *)(temp_v1 + 8),*(short *)(temp_v1 + 10) + param_4,
                               (int)**(short **)(temp_v1 + 0xc),(int)(*(short **)(temp_v1 + 0xc))[1],1);
                  temp_v10 = (*piVar6 - 0x14) * -3;
                  FUN_001676b0((int)temp_v11,(int)*(short *)(temp_v1 + 8) + temp_v10 + param_3,
                               *(short *)(temp_v1 + 10) + param_4,0x7e);
                  FUN_001676b0((int)temp_v0,(int)*(short *)(temp_v1 + 8) + param_3 + temp_v10 + 0xd,
                               *(short *)(temp_v1 + 10) + param_4,0x7e);
                  temp_v10 = DAT_0059dbb4;
                  piVar7 = (int *)(DAT_0059dbb4 + 0x1318);
                  temp_v1 = piVar7[*piVar7 + 2];
                  piVar7[*piVar7 + 2] = 0;
                  if (*(char *)(temp_v10 + 0x1330) != '\0' || temp_v1 != 0) {
                    (**(romwright_code **)(temp_v10 + 0x1334))();
                    *(unsigned char *)(temp_v10 + 0x1330) = 0;
                  }
                  if (*piVar6 >= 0x18) {
                    aeabi_idivmod(*piVar12 + 1,temp_v8);
                    *piVar12 = temp_v5;
                    *piVar6 = 0;
                  }
                  return;
                }
              } while (temp_v3 == 2);
            } while( 1 );
          }
        }
        FUN_001676b0((int)temp_v11,*(short *)(temp_v1 + 8) + param_3,*(short *)(temp_v1 + 10) + param_4,
                     0x7e);
        return;
      }
    } while (temp_v3 == 2);
  } while( 1 );
}
