/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a91a8` (_code @ 0x3a91a8, 0x1e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern unsigned int DAT_0057113c; /* 0x57113c */
extern unsigned int DAT_005712f0; /* 0x5712f0 */
extern int DAT_00573808; /* 0x573808 */
extern unsigned int DAT_00573898; /* 0x573898 */

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_002419c4. */
/* Supplied declaration required: FUN_002980e4. */
extern int FUN_0040de1c(unsigned int);
extern int FUN_004d84e8(unsigned int);
/* Supplied declaration required: FUN_004ee568. */
/* Supplied declaration required: FUN_004f5a78. */
/* Supplied declaration required: FUN_004fb6f4. */


unsigned char FUN_003a91a8(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_00236038(2);
  temp_v3 = FUN_004d84e8(DAT_00573898);
  if ((temp_v3 != 0) && (temp_v3 = DAT_00573808, FUN_004f5a78(), temp_v3 == 0)) {
    return 0;
  }
  FUN_004ee568(DAT_0057113c);
  temp_v3 = FUN_0014aa78();
  if (!(*(int *)(temp_v3 + 0xf0) == 0x167 || *(int *)(temp_v3 + 0xf0) == 0x168)) {
    if (temp_v2 != 0) {
      FUN_002980e4(temp_v2,0);
      temp_v4 = FUN_004ee568(DAT_0057113c);
      temp_v3 = FUN_0014aa78();
      FUN_004fb6f4(0,0,*(int *)(temp_v3 + 0x1ed4) + temp_v0 * 0x1d0,temp_v1,temp_v2,0,0xffffffff);
      FUN_002419c4(temp_v2,temp_v4,*(unsigned int *)(DAT_00573808 + 0x1f54),0,temp_v0,temp_v0);
    }
  }
  else if (temp_v2 != 0) {
    temp_v3 = FUN_004ee568(DAT_0057113c);
    if (*(int *)(temp_v3 + 0x1250) != 0) {
      temp_v0 = FUN_0040de1c(DAT_005712f0);
      if (temp_v0 < 1) {
        *(unsigned int *)(temp_v3 + 0x1250) = 0;
      }
      return temp_v0 < 1;
    }
    FUN_002980e4(temp_v2,0);
    temp_v5 = FUN_0014aa78();
    FUN_004fb6f4(0,0,*(int *)(temp_v5 + 0x1ed4) + temp_v0 * 0x1d0,temp_v1,temp_v2,0,0xffffffff);
    FUN_002419c4(temp_v2,temp_v3,*(unsigned int *)(DAT_00573808 + 0x1f54),0,temp_v0,temp_v0);
    *(int *)(temp_v3 + 0x1250) = *(int *)(temp_v3 + 0x1250) + 1;
    return 0;
  }
  return 1;
}
