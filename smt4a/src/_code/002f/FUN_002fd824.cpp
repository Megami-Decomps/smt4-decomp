/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fd824` (_code @ 0x2fd824, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable04FindById(void);
int FUN_00321a98(int *, int *);
int dataTable41FindById(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int idIsAbove400(int);
extern int gameGetSlotRecord(void);
/* Supplied declaration required: dataTable04FindById. */
/* Supplied declaration required: FUN_00321a98. */
/* Supplied declaration required: dataTable41FindById. */


void FUN_002fd824(int *param_1,int *param_2)

{
/* irregular: 3 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  short temp_v3;
  
  temp_v1 = idIsAbove400(*param_1);
  temp_v2 = *param_1;
  if (temp_v1 != 0) {
    dataTable41FindById();
    temp_v3 = *(short *)(temp_v2 + 0x22);
  }
  else {
    dataTable04FindById();
    temp_v3 = *(short *)(temp_v2 + 0x24);
  }
  temp_v1 = idIsAbove400(*param_2);
  temp_v2 = *param_2;
  if (temp_v1 != 0) {
    dataTable41FindById();
    temp_v0 = *(short *)(temp_v2 + 0x22);
  }
  else {
    dataTable04FindById();
    temp_v0 = *(short *)(temp_v2 + 0x24);
  }
  if (temp_v3 == temp_v0) {
    if (param_1[1] < 0) {
      temp_v3 = 0;
    }
    else {
      temp_v1 = gameGetSlotRecord();
      temp_v3 = *(short *)(temp_v1 + 0x62);
    }
    if (param_2[1] < 0) {
      temp_v0 = 0;
    }
    else {
      temp_v1 = gameGetSlotRecord();
      temp_v0 = *(short *)(temp_v1 + 0x62);
    }
    if (temp_v3 == temp_v0) {
      FUN_00321a98(param_1,param_2);
      return;
    }
  }
  return;
}

} /* extern "C" */
