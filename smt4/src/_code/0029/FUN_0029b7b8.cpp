/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029b7b8` (_code @ 0x29b7b8, 0x134 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029cde0(unsigned int *, int, int);
int FUN_0029f7d4(void);

/* Supplied declaration required: FUN_0029cde0. */
extern int FUN_0029ea68(unsigned short);
extern int flagWordTestBit(int, unsigned int);
/* Supplied declaration required: FUN_0029f7d4. */
extern int FUN_002a8740(void);
extern int FUN_002a8764(void);
extern int FUN_002a8778(void);


void FUN_0029b7b8(unsigned int param_1,int param_2,unsigned int *param_3)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  short *psVar5;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v6 = 0;
  temp_v0 = FUN_002a8764();
  FUN_0029f7d4();
  if (param_2 != 0) {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    temp_v4 = 0;
    param_3[5] = 0;
    do {
      temp_v5 = param_2 + temp_v4 * 2;
      if (*(short *)(temp_v5 + 2) != 0) {
        temp_v3 = 0;
        temp_v1 = FUN_002a8778();
        if (0 < temp_v1) {
          do {
            if (-1 < *(char *)(temp_v0 + temp_v3 + 0x90f0)) {
              temp_v1 = FUN_002a8740();
              temp_v2 = flagWordTestBit(temp_v1,10);
              if (((temp_v2 == 0) && (temp_v2 = flagWordTestBit(temp_v1,2), temp_v2 == 0)) &&
                 (*(short *)(temp_v1 + 0x46) == *(short *)(temp_v5 + 2))) {
                *(unsigned short *)((int)param_3 + temp_v4 * 2) = 1;
                goto LAB_0029b8c4;
              }
            }
            temp_v3 = temp_v3 + 1;
            temp_v1 = FUN_002a8778();
          } while (temp_v3 < temp_v1);
        }
        psVar5 = (short *)((int)param_3 + temp_v4 * 2);
        if ((*psVar5 == 0) && (temp_v5 = FUN_0029ea68(*(unsigned short *)(temp_v5 + 2)), temp_v5 != 0)) {
          *psVar5 = 2;
        }
LAB_0029b8c4:
        temp_v6 = temp_v6 + 1;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0xc);
    FUN_0029cde0(param_3,temp_v6,0);
  }
  return;
}

} /* extern "C" */
