/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ed878` (_code @ 0x3ed878, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003eaf20(void);
int FUN_004abba8(unsigned int, unsigned int);
int FUN_004ec93c(unsigned int);

extern unsigned int DAT_0057113c; /* 0x57113c */
extern int DAT_00573920; /* 0x573920 */
extern unsigned int DAT_00573a28; /* 0x573a28 */
extern unsigned int DAT_00573a2c; /* 0x573a2c */
extern unsigned int DAT_00573ab0; /* 0x573ab0 */
extern unsigned int DAT_00573ab4; /* 0x573ab4 */
extern int DAT_00573c50; /* 0x573c50 */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_003eaf20. */
/* Supplied declaration required: FUN_004abba8. */
/* Supplied declaration required: FUN_004ec93c. */
extern int FUN_004ee568(unsigned int);


unsigned int FUN_003ed878(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  
  temp_v0 = DAT_00573920;
  puVar3 = (unsigned int *)(param_1 + 0x45a0);
  if (!((DAT_00573ab0 & *puVar3) == 0 && (DAT_00573ab4 & *(unsigned int *)(param_1 + 0x45a4)) == 0)) {
    if (*(int *)(DAT_00573c50 + 0x18) != 2) {
      *(int *)(DAT_00573c50 + 0x18) = *(int *)(DAT_00573c50 + 0x18) + 1;
      temp_v1 = 0xf;
    }
    else {
      temp_v1 = 0x11;
    }
  }
  else {
    if ((*puVar3 & DAT_00573a28) != 0 || (*(unsigned int *)(param_1 + 0x45a4) & DAT_00573a2c) != 0) {
      return 0;
    }
    temp_v0 = param_1;
    FUN_003eaf20();
    *(unsigned int *)(param_1 + 0x4d68) = *(unsigned int *)(temp_v0 + 0x400);
    temp_v0 = FUN_004ee568(DAT_0057113c);
    temp_v2 = 0;
    if ((temp_v0 != 0) && (temp_v0 = FUN_004ec93c(DAT_0057113c), temp_v0 != 0)) {
      temp_v2 = 1;
    }
    FUN_004abba8(DAT_0057a9c8,temp_v2 ^ 1);
    temp_v0 = FUN_004ee568(DAT_0057113c);
    if (temp_v0 != 0) {
      FUN_004ec93c(DAT_0057113c);
    }
    temp_v2 = *(unsigned int *)(param_1 + 0x45a4) | DAT_00573a2c;
    *puVar3 = *puVar3 | DAT_00573a28;
    *(unsigned int *)(param_1 + 0x45a4) = temp_v2;
    temp_v1 = 0xe;
    temp_v0 = DAT_00573920;
  }
  if (temp_v0 != 0) {
    *(unsigned int *)(temp_v0 + 0x8c) = temp_v1;
  }
  return 1;
}

} /* extern "C" */
