/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100b64` (_code @ 0x100b64, 0x20 bytes) from smt4.cxi.
 * It reads the retail function; it does not reproduce its bytes. build.py only checks that it compiles. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern int DAT_00100b84; /* 0x100b84 */

/* Supplied declaration required: FUN_002c6a1a. */
/* Supplied declaration required: FUN_002c6a2e. */


unsigned int FUN_00100b64(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int uStack_c;
  
  temp_v0 = param_1;
  uStack_c = param_4;
  FUN_002c6a2e(param_2,&temp_v0,param_3,DAT_00100b84 + 0x100b6e);
  FUN_002c6a1a(0,&temp_v0);
  return param_2;
}
