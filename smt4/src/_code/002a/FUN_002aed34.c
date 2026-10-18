/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002aed34` (_code @ 0x2aed34, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002aed34_arg1 fn_002aed34_arg1;
struct fn_002aed34_arg1 {
    undefined4 field_0x0; /* +0x0 */
    undefined4 field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x5];
    undefined1 field_0xd; /* +0xd */
    unsigned char pad_0xe[0x66];
    undefined4 field_0x74; /* +0x74 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int DAT_00464a7c; /* 0x464a7c */

/* Supplied declaration required: FUN_002b2b88. */
extern int FUN_002c30c4(fn_002aed34_arg1 *);


void FUN_002aed34(unsigned int param_1,fn_002aed34_arg1 *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if ((param_1 < 9) && (temp_v0 = FUN_002c30c4(param_2), temp_v0 != 0)) {
    FUN_002b2b88(*(unsigned int *)(param_1 * 4 + 0x4093bc),DAT_00464a7c,param_2);
    return;
  }
  return;
}
