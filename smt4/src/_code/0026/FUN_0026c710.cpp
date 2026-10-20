/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026c710` (_code @ 0x26c710, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00232b68(int, int, int, int, int);
int FUN_00250d84(int, int);
int dataTable08Sub1GetRecord(void);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

/* Supplied declaration required: FUN_00232b68. */
/* Supplied declaration required: FUN_00250d84. */
/* Supplied declaration required: dataTable08Sub1GetRecord. */


void FUN_0026c710(int param_1,int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_2;
  dataTable08Sub1GetRecord();
  if (((temp_v0 != 0) && (FUN_00232b68(param_1,temp_v0,param_3,0,0), param_1 == 0 && param_3 == 0)) &&
     ((*(unsigned char *)(temp_v0 + 0x6e) & 1) == 0)) {
    FUN_00250d84(param_2,1);
  }
  return;
}

} /* extern "C" */
