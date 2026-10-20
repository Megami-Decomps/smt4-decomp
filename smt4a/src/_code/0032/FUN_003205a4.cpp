/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003205a4` (_code @ 0x3205a4, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019c0e0(unsigned int);
int FUN_001abbc4(void);
int FUN_001ac8ec(unsigned int);
int FUN_001b4eb8(void);

extern int jobGetWork(void);
/* Supplied declaration required: FUN_0019c0e0. */
/* Supplied declaration required: FUN_001abbc4. */
/* Supplied declaration required: FUN_001ac8ec. */
/* Supplied declaration required: FUN_001b4eb8. */
extern unsigned int FUN_0030061c(unsigned int);
extern int FUN_00376498(unsigned int);


unsigned int FUN_003205a4(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = jobGetWork();
  if (*(int *)(temp_v0 + 4) != 0) {
    if (*(int *)(temp_v0 + 4) == 1) {
      FUN_0019c0e0(*(unsigned int *)(temp_v0 + 0xc));
      temp_v0 = FUN_00376498(*(unsigned int *)(temp_v0 + 0xc));
      if (temp_v0 != 0) {
        return 0xffffffff;
      }
    }
  }
  else {
    temp_v1 = *(int *)(temp_v0 + 8);
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v0 + 4) = 1;
      FUN_001abbc4();
      *(int *)(temp_v0 + 0xc) = temp_v1;
      FUN_001b4eb8();
      FUN_001ac8ec(*(unsigned int *)(temp_v0 + 0xc));
      temp_v2 = FUN_0030061c(*(unsigned int *)(temp_v0 + 0xc));
      *(unsigned int *)(temp_v0 + 0x18) = temp_v2;
      *(unsigned char *)(temp_v0 + 0x10) = 1;
    }
  }
  return 0;
}

} /* extern "C" */
