/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035e9fc` (_code @ 0x35e9fc, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003fd63c(int, int);

extern unsigned int DAT_005702e0; /* 0x5702e0 */
extern unsigned int DAT_005702e4; /* 0x5702e4 */
extern unsigned int DAT_005702e8; /* 0x5702e8 */
extern unsigned int DAT_005702ec; /* 0x5702ec */
extern unsigned int DAT_0057113c; /* 0x57113c */

extern int FUN_0014aa78(void);
extern int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003fd63c. */
extern int FUN_004ee568(unsigned int);


unsigned int FUN_0035e9fc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_004ee568(DAT_0057113c);
  temp_v1 = *(int *)(temp_v1 + 0x28);
  *(unsigned short *)(temp_v1 + 0x1be) = 2;
  *(short *)(temp_v1 + 0x1c0) = (short)temp_v0;
  if (*(short *)(temp_v1 + 2) == 0x323 && temp_v0 == 0x80) {
    temp_v0 = FUN_004ee568(DAT_0057113c);
    *(int *)(*(int *)(temp_v0 + 0x20) + 0x3b4) = *(int *)(*(int *)(temp_v0 + 0x20) + 0x3b4) + 1;
  }
  temp_v0 = FUN_0014aa78();
  if (((((DAT_005702e0 & *(unsigned int *)(temp_v0 + 0x45a0)) != 0 ||
         (DAT_005702e4 & *(unsigned int *)(temp_v0 + 0x45a4)) != 0) &&
       ((*(unsigned int *)(temp_v0 + 0x45a4) & DAT_005702ec) == 0 &&
        (DAT_005702e8 & *(unsigned int *)(temp_v0 + 0x45a0)) == 0)) && (*(short *)(temp_v1 + 2) == 0x1b6)) &&
     (((*(unsigned short *)(temp_v1 + 0x110) & 0x10) != 0 && (*(short *)(temp_v1 + 0x1c0) == 0x9b)))) {
    FUN_003fd63c(0x596,1);
  }
  return 1;
}

} /* extern "C" */
