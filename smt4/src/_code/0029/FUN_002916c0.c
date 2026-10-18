/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002916c0` (_code @ 0x2916c0, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002916c0_arg1 fn_002916c0_arg1;
struct fn_002916c0_arg1 {
    unsigned char pad_0x0[0x4];
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

extern unsigned int DAT_00464a78; /* 0x464a78 */

/* Supplied declaration required: FUN_002b2b88. */
extern unsigned int FUN_002c30c4(fn_002916c0_arg1 *);


void FUN_002916c0(unsigned int param_1,fn_002916c0_arg1 *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002c30c4(param_2);
  FUN_002b2b88(param_1,DAT_00464a78,param_2,temp_v0);
  return;
}
