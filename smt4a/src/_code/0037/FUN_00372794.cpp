/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00372794` (_code @ 0x372794, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable04FindById(void);

extern int gameGetSlotRecord(void);
/* Supplied declaration required: dataTable04FindById. */
extern int btlMainGetUnk14(void);
extern int playerHasFlagBit(unsigned int);
extern int FUN_004bd098(int, int);
extern int bitsAt60Test(int, unsigned int);


unsigned int FUN_00372794(int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = *(short *)(param_1 + *(int *)(param_1 + 0x3890) * 2 + 0x4210);
  if (temp_v0 != -1) {
    if (param_3 == 0) {
      return 0;
    }
    if (temp_v0 != -2) {
      param_3 = gameGetSlotRecord();
    }
    else {
      param_3 = btlMainGetUnk14();
    }
    temp_v1 = bitsAt60Test(param_3,4);
  }
  else {
    temp_v1 = playerHasFlagBit(4);
  }
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v1 = param_2;
    dataTable04FindById();
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = *(short *)(temp_v1 + 0x86);
    }
    if ((temp_v1 != 0 && temp_v0 != 0) &&
       ((param_3 == 0 || (temp_v1 = FUN_004bd098(param_3,param_2), -1 < temp_v1)))) {
      temp_v2 = 1;
    }
  }
  return temp_v2;
}

} /* extern "C" */
