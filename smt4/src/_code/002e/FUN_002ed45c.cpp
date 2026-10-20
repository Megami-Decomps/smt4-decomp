/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ed45c` (_code @ 0x2ed45c, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b8da0(int, int);
int FUN_002bd954(int, int, unsigned int, int, int);
int FUN_002bee58(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_0043e188; /* 0x43e188 */

extern unsigned int FUN_0028fb40(void);
/* Supplied declaration required: FUN_002b8da0. */
/* Supplied declaration required: FUN_002bd954. */
/* Supplied declaration required: FUN_002bee58. */


unsigned int FUN_002ed45c(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0043e188 + 0x8));
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_0043e188 + 0x8)) + 0x7e) = 1;
  *(unsigned char *)(temp_v0 + 0x7c) = 1;
  *(unsigned int *)(temp_v0 + 0x68) = param_1;
  temp_v1 = FUN_0028fb40();
  *(unsigned int *)(temp_v0 + 0x6c) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x78) = temp_v1;
  temp_v2 = temp_v0 + 0x754;
  FUN_002bd954(temp_v2,0xe,0xffffffff,temp_v0 + 0xa4,0xb);
  FUN_002b8da0(temp_v2,10);
  FUN_002bee58(temp_v2,6);
  return 1;
}

} /* extern "C" */
