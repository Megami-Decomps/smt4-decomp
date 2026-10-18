/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004000a8` (_code @ 0x4000a8, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int DAT_00573cb8; /* 0x573cb8 */
extern unsigned int DAT_00573cbc; /* 0x573cbc */

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_00192550. */
extern unsigned int FUN_00400164(int);
/* Supplied declaration required: FUN_00400284. */


unsigned int FUN_004000a8(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if ((param_2 == 0) || (FUN_00192550(), param_2 == 0)) {
    return 1;
  }
  if ((!(*(char *)(param_2 + 0x41) == '\x02' || *(char *)(param_2 + 0x41) == '\x03')) ||
     (!(*(char *)(param_2 + 0x3b) == '\x01' || *(char *)(param_2 + 0x3b) == '\f'))) {
    temp_v0 = 2;
  }
  else {
    if (*(short *)(param_2 + 0x32) != 0) {
      temp_v0 = FUN_00400164(param_1);
      return temp_v0;
    }
    temp_v1 = FUN_0014aa78();
    if ((*(unsigned int *)(temp_v1 + 0x45ac) & DAT_00573cbc) == 0 &&
        (DAT_00573cb8 & *(unsigned int *)(temp_v1 + 0x45a8)) == 0) {
      FUN_00400284(param_1,1,param_2);
      temp_v0 = 0;
      if (param_1 != 0) {
        temp_v0 = 3;
      }
      return temp_v0;
    }
    temp_v0 = 0;
  }
  return temp_v0;
}
