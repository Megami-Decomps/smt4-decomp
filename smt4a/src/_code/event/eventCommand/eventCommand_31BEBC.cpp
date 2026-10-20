/* NON_MATCHING: romwright 0.5.0 decompilation of `eventCommand_31BEBC` (_code @ 0x3b6a7c, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemoryAllocTracked(int, int, int, int, int);
int FUN_0031ba34(int, int, int, int);
int scrSetResult(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int FUN_00162ea4(void);
/* Supplied declaration required: asdMemoryAllocTracked. */
extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: FUN_0031ba34. */
/* Supplied declaration required: scrSetResult. */


unsigned int eventCommand_31BEBC(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = scrGetArg(0);
  temp_v2 = 0;
  temp_v1 = FUN_00162ea4();
  if (temp_v1 == 0) {
    temp_v2 = 0x100;
    asdMemoryAllocTracked(0x100,0x100,0,8,1);
    FUN_0031ba34(temp_v0,temp_v2,0,1);
    *(unsigned int *)(temp_v2 + 4) = temp_v0;
  }
  scrSetResult(temp_v2);
  return 1;
}

} /* extern "C" */
