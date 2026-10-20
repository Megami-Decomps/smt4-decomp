/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00478778` (_code @ 0x478778, 0x15c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_001641c4(void);
int FUN_0019a5a0(void);
int FUN_0019a7f4(int, int);
int FUN_0019c364(void);
int FUN_00237210(unsigned int);
int FUN_002e132c(int);
int FUN_0047314c(unsigned int *);
int FUN_0047b1e4(unsigned int *);
int FUN_004d06e4(unsigned int *);
int FUN_004d097c(unsigned int *);

typedef int romwright_code(...);
extern int DAT_00570260; /* 0x570260 */
extern int DAT_0057027c; /* 0x57027c */

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00163e40(unsigned int);
/* Supplied declaration required: FUN_001641c4. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_00237210. */
/* Supplied declaration required: FUN_002e132c. */
/* Supplied declaration required: FUN_0047314c. */
/* Supplied declaration required: FUN_0047b1e4. */
/* Supplied declaration required: FUN_004d06e4. */
/* Supplied declaration required: FUN_004d097c. */


void FUN_00478778(unsigned int *param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_00570260;
  *(unsigned int *)(DAT_00570260 + 0x754) = *(unsigned int *)(DAT_00570260 + 0x754) & 0xfffffeff;
  *(unsigned char *)(temp_v0 + 0xd50) = 1;
  *(unsigned char *)(temp_v0 + 0xb81) = 1;
  *(unsigned int *)(DAT_00570260 + 0x754) = *(unsigned int *)(DAT_00570260 + 0x754) & 0xffffff8f;
  *(unsigned char *)(DAT_0057027c + 0x450c) = 0;
  FUN_004d097c(param_1 + 0xba);
  FUN_004d06e4(param_1 + 0xad);
  FUN_0047314c(param_1 + 0x46c);
  FUN_0047b1e4(param_1);
  temp_v0 = FUN_00163e40(param_1[0x5e8]);
  if (temp_v0 != 0) {
    if (param_1[0x5eb] != 0xffffffff) {
      param_1[0x5eb] = 0xffffffff;
      FUN_001641c4();
    }
    *param_1 = *param_1 & 0xffffcfff;
    FUN_001631d0(param_1[0x5e8],0);
  }
  FUN_00237210(param_1[0x7bb]);
  param_1[0x7bb] = 0;
  if (param_1[0xd6] != 0) {
    FUN_0019c364();
    param_1[0xd6] = 0;
  }
  if (param_1[0xd4] != 0) {
    FUN_0019a5a0();
    param_1[0xd4] = 0;
  }
  temp_v0 = 0;
  do {
    FUN_0019a7f4(0x2f,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  FUN_002e132c(0x2f);
  *param_1 = *param_1 | 1;
  param_1[1] = 0x14;
  param_1[2] = 0;
  if ((int *)param_1[0x82] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x82] + 4))();
    param_1[0x82] = 0;
  }
  return;
}

} /* extern "C" */
