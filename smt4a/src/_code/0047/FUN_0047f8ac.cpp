/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047f8ac` (_code @ 0x47f8ac, 0xdc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int saveSlotFindById(unsigned int);
int FUN_0047f7c0(int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int DAT_00573cd8; /* 0x573cd8 */
extern int DAT_00573cdc; /* 0x573cdc */

/* Supplied declaration required: saveSlotFindById. */
extern int FUN_00187168(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
extern int FUN_0019acdc(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0047f7c0. */


void FUN_0047f8ac(unsigned int param_1,short *param_2)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  short *psVar7;
  
  saveSlotFindById(param_1 & 0xffff);
  temp_v1 = FUN_00187168();
  if (((temp_v1 != 0) && (temp_v1 = FUN_0019acdc(param_1,1), temp_v1 == 4)) && (DAT_00573cd8 != 0)) {
    temp_v2 = dataTableGet(10,4);
    temp_v1 = dataTableGetEntries();
    temp_v3 = dataTableGetCount(temp_v2);
    temp_v4 = 0;
    if (temp_v4 < temp_v3) {
      do {
        psVar7 = (short *)(temp_v1 + temp_v4 * 0x10);
        temp_v0 = *psVar7;
        if (temp_v0 == 0xb) {
          psVar7 = *(short **)(psVar7 + 2);
        }
        if (temp_v0 == 0xb && psVar7 == param_2) {
          FUN_0047f7c0(0);
          break;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < temp_v3);
    }
  }
  saveSlotFindById(param_1 & 0xffff);
  temp_v5 = FUN_00187168();
  temp_v1 = 0;
  if (temp_v5 != 0) {
    temp_v1 = DAT_00573cdc;
  }
  if (temp_v5 == 0 || temp_v1 == 0) {
    return;
  }
  FUN_0047f7c0(1);
  return;
}

} /* extern "C" */
