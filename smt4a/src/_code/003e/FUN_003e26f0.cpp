/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e26f0` (_code @ 0x3e26f0, 0x144 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003e0cd4(unsigned int *, int);
int FUN_003ed6e8(int);
int FUN_003eebf4(int, int);
int FUN_003f26d4(int);
int FUN_0047f444(int);
int FUN_004aa2e0(unsigned int, int);
int FUN_004f1c5c(...);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int DAT_00571508; /* 0x571508 */
extern unsigned int DAT_00573858; /* 0x573858 */
extern unsigned int DAT_0057385c; /* 0x57385c */
extern unsigned int DAT_00573878; /* 0x573878 */
extern unsigned int DAT_0057387c; /* 0x57387c */
extern unsigned int DAT_00573890; /* 0x573890 */
extern unsigned int DAT_00573894; /* 0x573894 */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_003e0cd4. */
/* Supplied declaration required: FUN_003ed6e8. */
/* Supplied declaration required: FUN_003eebf4. */
/* Supplied declaration required: FUN_003f26d4. */
/* Supplied declaration required: FUN_0047f444. */
/* Supplied declaration required: FUN_004aa2e0. */
/* Supplied declaration required: FUN_004f1c5c. */


void FUN_003e26f0(unsigned int *param_1,int param_2)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  
  if (*(int *)(DAT_00571508 + 0x34) != 0) {
    FUN_004f1c5c();
  }
  else {
    FUN_004f1c5c(DAT_00571508,0x78);
  }
  puVar4 = (unsigned int *)(param_2 + 0x45a0);
  if ((DAT_00573858 & *puVar4) == 0 && (DAT_0057385c & *(unsigned int *)(param_2 + 0x45a4)) == 0) {
    FUN_003ed6e8(param_2);
    FUN_003f26d4(param_2);
    temp_v0 = DAT_00573890;
    temp_v2 = *puVar4 | DAT_00573878;
    *(unsigned int *)(param_2 + 0x45a4) = *(unsigned int *)(param_2 + 0x45a4) | DAT_0057387c | DAT_00573894;
    *puVar4 = temp_v2 | temp_v0;
    FUN_004aa2e0(DAT_0057a9c8,0);
  }
  else {
    FUN_003ed6e8(param_2);
    FUN_003f26d4(param_2);
    temp_v0 = DAT_00573890;
    temp_v2 = DAT_00573878 | *puVar4;
    *(unsigned int *)(param_2 + 0x45a4) = DAT_0057387c | *(unsigned int *)(param_2 + 0x45a4) | DAT_00573894;
    *puVar4 = temp_v2 | temp_v0;
    temp_v1 = param_2;
    FUN_003eebf4(param_2,1);
    if ((temp_v1 < 0) && ((*(unsigned int *)(param_2 + 0x110) & 0x20) == 0)) {
      FUN_0047f444(3);
    }
  }
  param_1[4] = 0;
  param_1[3] = 0;
  *param_1 = 0x19;
  FUN_003e0cd4(param_1,param_2);
  return;
}

} /* extern "C" */
