/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d92f4` (_code @ 0x4d92f4, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char LAB_004d95c4; /* 0x4d95c4 */
extern unsigned char LAB_004d95d4; /* 0x4d95d4 */
extern unsigned int DAT_0058811c; /* 0x58811c */
extern unsigned char *DAT_005949a4; /* 0x5949a4 */
extern unsigned char *DAT_005949a8; /* 0x5949a8 */
extern unsigned char DAT_00618888; /* 0x618888 */

/* Supplied declaration required: FUN_00163060. */
extern int FUN_002a1bac(void);
extern int FUN_00359334(void);
/* Supplied declaration required: FUN_004d93e8. */


void FUN_004d92f4(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002a1bac();
  temp_v1 = FUN_00359334();
  if (temp_v0 >= temp_v1) {
    temp_v2 = 0x100;
    FUN_00163060(0x100,0x100,0,0xe4000,1);
  }
  else {
    temp_v2 = 0x10000;
    FUN_00163060(0x10000,0x100,0,0xe4000,1);
  }
  DAT_0058811c = temp_v2;
  FUN_004d93e8(&DAT_00618888,temp_v2,0xe4000,0x64000);
  DAT_005949a4 = &LAB_004d95d4;
  DAT_005949a8 = &LAB_004d95c4;
  return;
}
