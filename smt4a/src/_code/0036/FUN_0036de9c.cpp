/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036de9c` (_code @ 0x36de9c, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016431c(unsigned int);
int FUN_0021bdac(unsigned int, unsigned int, unsigned int, int, int, int);
int FUN_002deb84(void);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_0016431c. */
/* Supplied declaration required: FUN_0021bdac. */
extern unsigned int scrGetArg(unsigned int);
extern unsigned int FUN_002ba85c(void);
/* Supplied declaration required: FUN_002deb84. */


unsigned int FUN_0036de9c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v4 = *(int *)(param_1 + 4);
  temp_v0 = FUN_002ba85c();
  temp_v1 = scrGetArg(0);
  temp_v2 = FUN_002deb84();
  FUN_0021bdac(temp_v0,temp_v1,temp_v2,5,0,0);
  temp_v3 = FUN_002deb84();
  if (temp_v3 == 0) {
    FUN_0016431c(*(unsigned int *)(temp_v4 + 4));
    *(unsigned char *)(temp_v4 + 0x19c4) = 0;
    *(unsigned int *)(temp_v4 + 0xc) = *(unsigned int *)(temp_v4 + 0xc) | 0x20;
  }
  return temp_v0;
}

} /* extern "C" */
