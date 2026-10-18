/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00348c20` (_code @ 0x348c20, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_00287afc(int);
/* Supplied declaration required: FUN_0028f15c. */
extern int FUN_002adf14(void);


void FUN_00348c20(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002adf14();
  temp_v0 = temp_v0 + param_1 * 4;
  *(unsigned char *)(temp_v0 + 0x201) = 0;
  *(unsigned char *)(temp_v0 + 0x202) = *(unsigned char *)(temp_v0 + 0x202) & 0xfe;
  *(unsigned char *)(temp_v0 + 0x200) = (*(unsigned char *)(temp_v0 + 0x200) & 0x3f) | 0x21;
  temp_v0 = FUN_00287afc(param_1);
  if (temp_v0 == 0) {
    FUN_0028f15c(param_1);
    return;
  }
  return;
}
