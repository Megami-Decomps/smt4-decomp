/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004db07c` (_code @ 0x4db07c, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0032fea0(unsigned int *, int, int);
int FUN_0035dd74(void);

extern int gameGetSlotRecord(void);
extern int gameGetSlotTable(void);
extern int gameSlotTableFindFree(void);
extern int FUN_002a4b28(unsigned short);
/* Supplied declaration required: FUN_0032fea0. */
/* Supplied declaration required: FUN_0035dd74. */
extern int bitsAt60Test(int, unsigned int);


void FUN_004db07c(unsigned int param_1,int param_2,unsigned int *param_3)

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
  temp_v0 = gameGetSlotTable();
  FUN_0035dd74();
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
        temp_v1 = gameSlotTableFindFree();
        if (0 < temp_v1) {
          do {
            if (-1 < *(char *)(temp_v0 + temp_v3 + 0x1c88)) {
              temp_v1 = gameGetSlotRecord();
              temp_v2 = bitsAt60Test(temp_v1,10);
              if ((temp_v2 == 0) && (*(short *)(temp_v1 + 0x62) == *(short *)(temp_v5 + 2))) {
                *(unsigned short *)((int)param_3 + temp_v4 * 2) = 1;
                goto LAB_004db170;
              }
            }
            temp_v3 = temp_v3 + 1;
            temp_v1 = gameSlotTableFindFree();
          } while (temp_v3 < temp_v1);
        }
        psVar5 = (short *)((int)param_3 + temp_v4 * 2);
        if ((*psVar5 == 0) && (temp_v5 = FUN_002a4b28(*(unsigned short *)(temp_v5 + 2)), temp_v5 != 0)) {
          *psVar5 = 2;
        }
LAB_004db170:
        temp_v6 = temp_v6 + 1;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0xc);
    FUN_0032fea0(param_3,temp_v6,0);
  }
  return;
}

} /* extern "C" */
