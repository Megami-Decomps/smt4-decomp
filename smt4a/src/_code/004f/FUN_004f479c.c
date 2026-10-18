/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f479c` (_code @ 0x4f479c, 0x178 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char DAT_00528144; /* 0x528144 */
extern unsigned int *DAT_00571508; /* 0x571508 */

/* Supplied declaration required: FUN_0028033c. */
/* Supplied declaration required: FUN_002a1b00. */
/* Supplied declaration required: FUN_002e0898. */
/* Supplied declaration required: FUN_002ea508. */
/* Supplied declaration required: FUN_00317464. */
/* Supplied declaration required: FUN_00317508. */
/* Supplied declaration required: FUN_00340edc. */
/* Supplied declaration required: FUN_0037a854. */


void FUN_004f479c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 8 native warning(s); review required */
  unsigned int *puVar1;
  
  *(short *)(param_1 + 0x14) = (short)param_4;
  FUN_0028033c(param_3,0xf0,0x10,0x20,4);
  *(unsigned int *)(param_1 + 0xc) = param_3;
  FUN_0037a854();
  FUN_002e0898(param_3,0xc);
  puVar1 = DAT_00571508;
  if (param_4 >= 2) {
    if (param_4 == 2) {
      DAT_00571508[0xd] = 0;
      FUN_002ea508(param_3,"CAMERA EDIT");
      FUN_002a1b00(param_3,&DAT_00528144);
      FUN_00317464(param_3,0,DAT_00571508[0xd],0,1000,0);
    }
  }
  else {
    DAT_00571508[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    FUN_002ea508(param_3,"CAMERA EDIT");
    FUN_002a1b00(param_3,"瞂삍垕쾕墍");
    FUN_002a1b00(param_3,"碂삍垕쾕墍");
    FUN_002a1b00(param_3,"禂삍垕쾕墍");
    FUN_00340edc(param_3,0,0xfffffc18);
    FUN_00340edc(param_3,1,0xfffffc18,1000);
    FUN_00340edc(param_3,2,0xfffffc18,1000);
  }
  FUN_00317508(param_3,1);
  return;
}
