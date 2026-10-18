/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003489c8` (_code @ 0x3489c8, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_00287894(int);
/* Supplied declaration required: FUN_0028eeb8. */
extern int FUN_002adc88(void);


void FUN_003489c8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002adc88();
  temp_v0 = temp_v0 + param_1 * 4;
  *(unsigned char *)(temp_v0 + 0x201) = 0;
  *(unsigned char *)(temp_v0 + 0x202) = *(unsigned char *)(temp_v0 + 0x202) & 0xfe;
  *(unsigned char *)(temp_v0 + 0x200) = (*(unsigned char *)(temp_v0 + 0x200) & 0x3f) | 0x21;
  temp_v0 = FUN_00287894(param_1);
  if (temp_v0 == 0) {
    FUN_0028eeb8(param_1);
    return;
  }
  return;
}
