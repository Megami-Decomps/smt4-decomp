/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00471d94` (_code @ 0x471d94, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_00570260; /* 0x570260 */

extern int FUN_001d109c(void);
extern int FUN_002e3494(void);
/* Supplied declaration required: FUN_002f5020. */
/* Supplied declaration required: FUN_0030cb44. */
/* Supplied declaration required: FUN_00429f38. */
extern int FUN_0046bc7c(int, unsigned int);
/* Supplied declaration required: FUN_00471468. */


void FUN_00471d94(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  if (*(int *)(param_1 + 0x450) != 0) {
    temp_v0 = FUN_002e3494();
    *(unsigned int *)(param_1 + 0x450) = 0;
  }
  *(unsigned int *)(param_1 + 0x448) = 0;
  FUN_00429f38();
  if (temp_v0 != 0) {
    temp_v0 = FUN_001d109c();
    if (temp_v0 != 0) {
      temp_v0 = FUN_0046bc7c(param_1,0x34);
      *(int *)(param_1 + 0x448) = temp_v0;
      if (0 < *(int *)(param_1 + 0x448)) {
        temp_v0 = temp_v0 << 4;
        FUN_0030cb44();
        if (temp_v0 != 0) {
          FUN_002f5020();
        }
        *(int *)(param_1 + 0x450) = temp_v0;
        FUN_00471468(param_1,0x34,*(unsigned int *)(param_1 + 0x448),temp_v0);
        return;
      }
    }
  }
  else {
    *(unsigned int *)(DAT_00570260 + 0x754) = *(unsigned int *)(DAT_00570260 + 0x754) & 0xfffeffff;
  }
  return;
}
