/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00150618` (_code @ 0x150618, 0x158 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */
extern signed char DAT_005b3bf4; /* 0x5b3bf4 */
extern unsigned int DAT_005b3c04; /* 0x5b3c04 */
extern unsigned int DAT_005b3c14; /* 0x5b3c14 */
extern unsigned int DAT_005b3c18; /* 0x5b3c18 */
extern unsigned int DAT_005b3c1c; /* 0x5b3c1c */
extern unsigned int DAT_005b3c78; /* 0x5b3c78 */
extern unsigned int DAT_005b3c80; /* 0x5b3c80 */
extern int DAT_005b3c88; /* 0x5b3c88 */
extern unsigned int DAT_005b3c90; /* 0x5b3c90 */
extern int DAT_005b3cb8; /* 0x5b3cb8 */
extern unsigned int DAT_005b3cc0; /* 0x5b3cc0 */
extern int DAT_00636e00; /* 0x636e00 */
extern signed char DAT_00636e04; /* 0x636e04 */
extern signed char DAT_00636e05; /* 0x636e05 */
extern signed char DAT_00636e14; /* 0x636e14 */

/* Supplied declaration required: FUN_001575cc. */
extern int FUN_001696f4(void);
/* Supplied declaration required: FUN_00176800. */
/* Supplied declaration required: FUN_00176e84. */
/* Supplied declaration required: FUN_0017712c. */
/* Supplied declaration required: FUN_0017721c. */
/* Supplied declaration required: FUN_0018cfe4. */
/* Supplied declaration required: FUN_0018e9d8. */
/* Supplied declaration required: FUN_00197eb0. */
/* Supplied declaration required: nw_gfx_RenderContext_ResetState_2B7478. */


/* WARNING: Removing unreachable block (ram,0x00150730) */
/* WARNING: Removing unreachable block (ram,0x00150734) */

void FUN_00150618(void)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if ((DAT_005b3bf4 != '\0') && ((0 < DAT_00636e00 || ((DAT_005b3c78 & 1) != 0)))) {
    temp_v1 = *(unsigned int *)(DAT_005b3cb8 + 4);
    FUN_0017712c(DAT_005b3cb8,DAT_005b3c80,DAT_005b3c14,DAT_005b3cc0);
    if ((DAT_00636e04 != '\0') && (DAT_00636e05 == '\0')) {
      FUN_00197eb0(DAT_005b3c88 + 0x10,DAT_005b3c90);
      FUN_0018cfe4(DAT_005b3c80,DAT_005b3c88);
    }
    if (DAT_00636e14 == '\0') {
      FUN_00176800(DAT_005b3cb8,DAT_005b3c80,DAT_005b3cc0);
    }
    if ((DAT_00636e04 != '\0') && (DAT_00636e05 == '\0')) {
      FUN_0018e9d8(DAT_005b3c88,DAT_005b3c90);
      FUN_0018cfe4(DAT_005b3c80,DAT_005b3c88);
    }
    temp_v0 = FUN_001696f4();
    if (temp_v0 != 1) {
      FUN_00176e84(DAT_005b3cb8,DAT_005b3c14,1);
    }
    else {
      FUN_0017721c(DAT_005b3cb8,DAT_005b3c18,DAT_005b3c1c,0);
      nw_gfx_RenderContext_ResetState_2B7478(temp_v1);
    }
    FUN_001575cc(DAT_0059dbb4);
    DAT_005b3c04 = 0;
  }
  return;
}
