/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f5e6c` (_code @ 0x4f5e6c, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(void);
int FUN_002e6354(int, int);
int FUN_0035bb70(void);
int FUN_0035bbc4(void);
int FUN_0040223c(int);
int FUN_004f612c(int);
int FUN_004f6e68(int);
int FUN_004f7590(int);
int FUN_004f7f08(void);
int FUN_004f8fa0(int);

typedef int romwright_code(...);
extern int DAT_00571508; /* 0x571508 */

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_0035bb70. */
/* Supplied declaration required: FUN_0035bbc4. */
/* Supplied declaration required: FUN_0040223c. */
/* Supplied declaration required: FUN_004f612c. */
/* Supplied declaration required: FUN_004f6e68. */
/* Supplied declaration required: FUN_004f7590. */
/* Supplied declaration required: FUN_004f7f08. */
/* Supplied declaration required: FUN_004f8fa0. */


void FUN_004f5e6c(int param_1)

{
/* irregular: 10 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  
  *(unsigned int *)(param_1 + 0x33bc) = 0;
  FUN_004f7f08();
  FUN_004f6e68(param_1);
  temp_v1 = 0;
  do {
    temp_v0 = param_1 + temp_v1 * 0x8c;
    *(unsigned char *)(temp_v0 + 0x281c) = 0xff;
    FUN_002e6354(temp_v0 + 0x2824,0x80);
    if (*(int *)(temp_v0 + 0x2820) != 0) {
      FUN_0019a5a0();
      *(unsigned int *)(temp_v0 + 0x2820) = 0;
    }
    temp_v1 = temp_v1 + 1;
    *(unsigned char *)(temp_v0 + 0x28a4) = 0;
  } while (temp_v1 < 0xb);
  piVar1 = *(int **)(param_1 + 0x1f50);
  if (piVar1 != (int *)0x0) {
    (**(romwright_code **)(*piVar1 + 4))();
    *(int *)(param_1 + 0x1f50) = 0;
  }
  FUN_004f612c(param_1);
  *(unsigned int *)(param_1 + 0x3050) = 0;
  FUN_0035bbc4();
  FUN_0035bb70();
  if (DAT_00571508 != 0) {
    *(unsigned int *)(DAT_00571508 + 0x64c) = *(unsigned int *)(DAT_00571508 + 0x64c) & 0xf7ffffff;
  }
  FUN_004f8fa0(param_1);
  FUN_004f7590(param_1);
  temp_v1 = 0;
  do {
    temp_v0 = param_1 + temp_v1 * 0x3c;
    *(unsigned int *)(temp_v0 + 0x1398) = 0xffffffff;
    *(unsigned int *)(temp_v0 + 0x139c) = 0;
    FUN_0040223c(temp_v0 + 0x13a0);
    temp_v1 = temp_v1 + 1;
    *(unsigned int *)(temp_v0 + 0x13d0) = 0;
  } while (temp_v1 < 0x32);
  return;
}

} /* extern "C" */
