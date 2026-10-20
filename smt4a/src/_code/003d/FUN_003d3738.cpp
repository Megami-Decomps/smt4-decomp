/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d3738` (_code @ 0x3d3738, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001517b4(int, int);
int FUN_00184c00(int, int, int);
int FUN_0019e330(int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0057f57c; /* 0x57f57c */

/* Supplied declaration required: FUN_001517b4. */
extern int FUN_00163fd4(unsigned int);
/* Supplied declaration required: FUN_00184c00. */
/* Supplied declaration required: FUN_0019e330. */


void FUN_003d3738(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0057f57c;
  if (*(int *)(DAT_0057f57c + 8) == 0) {
    return;
  }
  *(unsigned int *)(DAT_0057f57c + 8) = 3;
  *(unsigned int *)(temp_v0 + 0xc) = 0;
  temp_v1 = 9;
  FUN_001517b4(9,2);
  if ((temp_v1 == 0) && (temp_v1 = FUN_00163fd4(6), temp_v1 == 0)) {
    FUN_00184c00(temp_v0 + 0x48,1,0);
    FUN_0019e330(temp_v0 + 0x48,1,0);
    return;
  }
  *(unsigned char *)(temp_v0 + 0xcd) = 0;
  return;
}

} /* extern "C" */
