/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003802d4` (_code @ 0x3802d4, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019cac4(void);
int FUN_003283ac(unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int FUN_0014bef4(unsigned int);
/* Supplied declaration required: FUN_0019cac4. */
extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_003802d4(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4 [4];
  
  temp_v0 = FUN_00236038(0) & 0xffff;
  FUN_0019cac4();
  temp_v2 = (unsigned int)*(unsigned short *)(temp_v0 + 0x60);
  if (temp_v2 != 0x7b6) {
    temp_v4[0] = temp_v2;
  }
  temp_v3 = (unsigned int)*(unsigned short *)(temp_v0 + 0x66);
  temp_v2 = (unsigned int)(temp_v2 != 0x7b6 && temp_v2 != 0);
  if (temp_v3 != 0x7b6) {
    temp_v4[temp_v2] = temp_v3;
  }
  temp_v0 = (unsigned int)*(unsigned short *)(temp_v0 + 0x6c);
  if (temp_v3 != 0x7b6 && temp_v3 != 0) {
    temp_v2 = temp_v2 + 1;
  }
  if (temp_v0 != 0x7b6) {
    temp_v4[temp_v2] = temp_v0;
  }
  if (temp_v0 != 0x7b6 && temp_v0 != 0) {
    temp_v2 = temp_v2 + 1;
  }
  temp_v0 = 0xffffffff;
  if (temp_v2 != 0) {
    temp_v1 = FUN_0014bef4((temp_v2 - 1) & 0xffff);
    temp_v0 = temp_v4[temp_v1];
  }
  FUN_003283ac(temp_v0);
  return 1;
}

} /* extern "C" */
