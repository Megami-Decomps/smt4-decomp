/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ed404` (_code @ 0x2ed404, 0x70 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_0043e190; /* 0x43e190 */

extern unsigned int FUN_0028fde4(void);
/* Supplied declaration required: FUN_002b90e0. */
/* Supplied declaration required: FUN_002bdb2c. */
/* Supplied declaration required: FUN_002bf030. */


unsigned int FUN_002ed404(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = DAT_0043e190;
  *(unsigned char *)(DAT_0043e190 + 0x7e) = 1;
  *(unsigned char *)(temp_v0 + 0x7c) = 1;
  *(unsigned int *)(temp_v0 + 0x68) = param_1;
  temp_v1 = FUN_0028fde4();
  *(unsigned int *)(temp_v0 + 0x6c) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x78) = temp_v1;
  temp_v2 = temp_v0 + 0x754;
  FUN_002bdb2c(temp_v2,0xe,0xffffffff,temp_v0 + 0xa4,0xb);
  FUN_002b90e0(temp_v2,10);
  FUN_002bf030(temp_v2,6);
  return 1;
}
