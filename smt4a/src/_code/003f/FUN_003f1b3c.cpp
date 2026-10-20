/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f1b3c` (_code @ 0x3f1b3c, 0x230 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010063a(int, int, int, unsigned char *);
int FUN_002e3d04(void);
int FUN_002e6354(void);
int FUN_002e6490(int);

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
} param_5_stack;

extern unsigned char LAB_00221c14; /* 0x221c14 */
extern unsigned int DAT_00573a50; /* 0x573a50 */
extern unsigned int DAT_00573a54; /* 0x573a54 */

/* Supplied declaration required: FUN_0010063a. */
extern int FUN_001633a0(unsigned int);
extern unsigned int FUN_00187180(unsigned int);
extern int FUN_0018719c(unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern int FUN_00192798(void);
/* Supplied declaration required: FUN_002e3d04. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_002e6490. */
extern unsigned int FUN_0047f2d8(unsigned int);


void FUN_003f1b3c(int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int *param_5)

{
/* irregular: 4 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  short *psVar8;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  short temp_v11;
  
  *param_4 = 0;
  *param_5 = 0;
  if ((param_2 < 1) || (param_2 >= 9)) {
    return;
  }
  temp_v1 = FUN_00187180(10);
  temp_v2 = FUN_00192798();
  temp_v3 = FUN_00192748(temp_v1);
  temp_v4 = temp_v3 << 2;
  FUN_002e3d04();
  FUN_002e6354();
  temp_v10 = 0;
  temp_v5 = 0;
  if (temp_v3 != 0) {
    do {
      psVar8 = (short *)(temp_v2 + temp_v5 * 0x10);
      temp_v7 = (int)*psVar8;
      if ((temp_v7 != 0) && (temp_v7 == param_3)) {
        *(short **)(temp_v4 + temp_v10 * 4) = psVar8;
        temp_v10 = temp_v10 + 1;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < temp_v3);
    if (temp_v10 != 0) {
      FUN_0010063a(temp_v4,temp_v10,4,&LAB_00221c14);
      temp_v2 = temp_v10 << 2;
      FUN_002e3d04();
      FUN_002e6354();
      temp_v7 = 0;
      if (0 < temp_v10) {
        param_1 = param_1 + 0x4000;
      }
      temp_v11 = 1;
      temp_v8 = 0;
      if (0 < temp_v10) {
        do {
          temp_v9 = *(int *)(temp_v4 + temp_v8 * 4);
          temp_v0 = *(short *)(temp_v9 + 2);
          if (temp_v0 != 0) {
            if (temp_v0 != 99) {
              if (((((DAT_00573a54 & *(unsigned int *)(param_1 + 0x5a4)) == 0 &&
                     (*(unsigned int *)(param_1 + 0x5a0) & DAT_00573a50) == 0) && (temp_v11 != 99)) &&
                  (temp_v11 <= temp_v0)) &&
                 ((temp_v0 == 1 || (temp_v6 = FUN_0018719c(*(unsigned int *)(temp_v9 + 0xc)), temp_v6 != 0)))
                 ) {
                *(int *)(temp_v2 + temp_v7 * 4) = temp_v9;
                temp_v11 = *(short *)(temp_v9 + 2);
                temp_v7 = temp_v7 + 1;
              }
            }
            else if (((*(unsigned int *)(param_1 + 0x5a4) & DAT_00573a54) == 0 &&
                      (*(unsigned int *)(param_1 + 0x5a0) & DAT_00573a50) == 0) &&
                    (temp_v6 = FUN_0018719c(*(unsigned int *)(temp_v9 + 0xc)), temp_v6 != 0)) {
              *(int *)(temp_v2 + temp_v7 * 4) = temp_v9;
              temp_v11 = 99;
              temp_v7 = temp_v7 + 1;
            }
          }
          else if (temp_v11 != 99) {
            *(int *)(temp_v2 + temp_v7 * 4) = temp_v9;
            temp_v11 = 0;
            temp_v7 = temp_v7 + 1;
          }
          temp_v8 = temp_v8 + 1;
        } while (temp_v8 < temp_v10);
        if (temp_v7 != 0) {
          temp_v10 = FUN_001633a0((temp_v7 - 1U) & 0xffff);
          temp_v10 = *(int *)(temp_v2 + temp_v10 * 4);
          *param_4 = *(unsigned int *)(temp_v10 + 4);
          temp_v1 = FUN_0047f2d8(*(unsigned int *)(temp_v10 + 8));
          *param_5 = temp_v1;
        }
      }
      FUN_002e6490(temp_v2);
      FUN_002e6490(temp_v4);
      return;
    }
  }
  FUN_002e6490(temp_v4);
  return;
}

} /* extern "C" */
