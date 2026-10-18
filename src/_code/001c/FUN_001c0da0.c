/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c0da0` (_code @ 0x1c0da0, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int FUN_001ed720(void);
/* Supplied declaration required: FUN_002cc20c. */


unsigned int FUN_001c0da0(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *param_1;
  temp_v0 = FUN_001ed720();
  if ((temp_v0 == 0) && (*(char *)(temp_v1 + 0x124) != '\0')) {
    FUN_002cc20c(*(unsigned int *)(temp_v1 + 0x10),*(unsigned int *)(temp_v1 + 8),temp_v1 + 0x14,0,0,
                 (int)*(char *)(temp_v1 + 0x127));
  }
  return 0;
}
