/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029e8e8` (_code @ 0x29e8e8, 0xa0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int DAT_0043e190; /* 0x43e190 */

extern unsigned int *FUN_002a8a08(void);
/* Supplied declaration required: FUN_002b90e0. */
/* Supplied declaration required: FUN_002bdb2c. */
/* Supplied declaration required: FUN_002bf030. */
extern unsigned int FUN_002d8bc0(void);


unsigned int FUN_0029e8e8(unsigned char param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  
  temp_v0 = DAT_0043e190;
  *(unsigned char *)(DAT_0043e190 + 0x7d) = 1;
  *(unsigned char *)(temp_v0 + 0x7c) = 1;
  if (param_2 != 0) {
    temp_v1 = FUN_002d8bc0();
    *(unsigned int *)(temp_v0 + 0x6c) = temp_v1;
    *(unsigned int *)(temp_v0 + 0x78) = temp_v1;
  }
  else {
    puVar4 = (unsigned int *)FUN_002a8a08();
    temp_v1 = *puVar4;
    *(unsigned int *)(temp_v0 + 0x6c) = temp_v1;
    *(unsigned int *)(temp_v0 + 0x78) = temp_v1;
  }
  *(unsigned char *)(temp_v0 + 0x80) = 0;
  *(unsigned char *)(temp_v0 + 0x7f) = param_1;
  *(unsigned char *)(temp_v0 + 0xa1) = 0;
  temp_v2 = temp_v0 + 0x754;
  FUN_002bdb2c(temp_v2,0xe,0xffffffff,temp_v0 + 0xa4,0xb);
  FUN_002b90e0(temp_v2,0);
  FUN_002bf030(temp_v2,6);
  return 1;
}
