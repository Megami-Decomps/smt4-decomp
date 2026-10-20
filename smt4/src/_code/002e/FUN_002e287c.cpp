/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e287c` (_code @ 0x2e287c, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028529c(int, int, int, int, int, int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

/* Supplied declaration required: FUN_0028529c. */
extern unsigned char scrGetArg(unsigned int);


unsigned int FUN_002e287c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  FUN_0028529c(temp_v0,temp_v1,0,0,0,0);
  return 1;
}

} /* extern "C" */
