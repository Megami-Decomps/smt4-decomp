/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d8d60` (_code @ 0x3d8d60, 0x130 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern unsigned char DAT_0040064c; /* 0x40064c */

/* Supplied declaration required: FUN_002272d0. */
/* Supplied declaration required: FUN_0022737c. */
/* Supplied declaration required: FUN_00227394. */
/* Supplied declaration required: FUN_0022a4ec. */
/* Supplied declaration required: FUN_0022a53c. */
/* Supplied declaration required: FUN_0025c524. */
/* Supplied declaration required: FUN_00262b40. */
/* Supplied declaration required: FUN_00263408. */
/* Supplied declaration required: FUN_0027dca0. */


void FUN_003d8d60(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 9 native warning(s); review required */
  FUN_00263408(param_3,0xeb,0x10,0x20,4);
  *(unsigned int *)(param_1 + 0xc) = param_3;
  FUN_00227394();
  FUN_0022737c(param_3,0xc,0x10);
  FUN_00262b40(param_3,"ENEMY EDIT");
  FUN_002272d0(param_3,"窔疒ꮈ芖");
  FUN_002272d0(param_3,"瞂窔疒쪈疒쾕墍");
  FUN_002272d0(param_3,"碂窔疒쪈疒쾕墍");
  FUN_002272d0(param_3,&DAT_0040064c);
  FUN_0027dca0();
  FUN_0022a53c(param_3,0,*(unsigned short *)(param_2 + 2),1,999,0);
  FUN_0022a4ec(param_3,1,0xfffffc18);
  FUN_0022a4ec(param_3,2,0xfffffc18,1000);
  FUN_0022a4ec(param_3,3,0xfffffc18,1000);
  FUN_0025c524(param_3,1);
  return;
}
