/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bc95c` (_code @ 0x4bc95c, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00162e8c(void);
int dataTable2ECount(void);
int FUN_003fd63c(int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int FUN_00152978(int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00162e8c. */
extern int FUN_0018719c(void);
extern int dataTable2EGetEntry(int);
/* Supplied declaration required: dataTable2ECount. */
/* Supplied declaration required: FUN_003fd63c. */


void FUN_004bc95c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_lr; 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int unaff_r4;
  int temp_v2;
  unsigned int in_lr;
  
  temp_v2 = 0;
  temp_v0 = param_1;
  dataTable2ECount();
  if (0 < temp_v0) {
    while( 1 ) {
      temp_v0 = dataTable2EGetEntry(temp_v2);
      temp_v1 = (int)*(short *)(temp_v0 + 0x20);
      if (temp_v1 == -1) break;
      if (temp_v1 == param_1) {
        if ((*(short *)(temp_v0 + 0x22) != 0) && (temp_v2 = FUN_0018719c(), temp_v2 == 0)) {
          FUN_003fd63c((int)*(short *)(temp_v0 + 0x22),1);
        }
        break;
      }
      temp_v2 = temp_v2 + 1;
      dataTable2ECount();
      if (temp_v1 <= temp_v2) break;
    }
  }
  FUN_00162e8c();
  temp_v0 = FUN_00152978(param_1,param_2,1,param_4,unaff_r4,in_lr);
  *(unsigned char *)(temp_v0 + 3) = (*(unsigned char *)(temp_v0 + 3) & 0xbf) | 0x40;
  return;
}

} /* extern "C" */
