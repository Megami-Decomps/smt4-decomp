/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a171c` (_code @ 0x1a171c, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a08d8(int);
int FUN_001a0d08(int);
int FUN_002e3140(void);
int coproc_moveto_Data_Synchronization(int);
int software_interrupt(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_0064497c; /* 0x64497c */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coproc_moveto_Data_Synchronization (CALLOTHER). */
/* Supplied declaration required: FUN_001a08d8. */
/* Supplied declaration required: FUN_001a0d08. */
extern int FUN_001afa44(void);
/* Supplied declaration required: FUN_002e3140. */


void FUN_001a171c(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_001afa44();
  if (*(char *)(temp_v0 + 0xe) != '\0') {
    *(unsigned char *)(temp_v0 + 0xf) = 0;
    software_interrupt(0x24);
    if (*(int *)(temp_v0 + 0x18) < 0) {
      FUN_002e3140();
    }
    *(unsigned char *)(temp_v0 + 0x1c) = 1;
    FUN_001a0d08(temp_v0 + 0x18);
    if (*(int *)(temp_v0 + 0x18) != 0) {
      software_interrupt(0x23);
      *(unsigned int *)(temp_v0 + 0x18) = 0;
    }
    *(unsigned char *)(temp_v0 + 0xe) = 0;
    coproc_moveto_Data_Synchronization(0);
    FUN_001a08d8(temp_v0 + 0x48);
  }
  if (*(char *)(temp_v0 + 0xc) != '\0') {
    *(unsigned char *)(temp_v0 + 0xd) = 0;
    software_interrupt(0x24);
    if (*(int *)(temp_v0 + 0x10) < 0) {
      FUN_002e3140();
    }
    *(unsigned char *)(temp_v0 + 0x14) = 1;
    FUN_001a0d08(temp_v0 + 0x10);
    if (*(int *)(temp_v0 + 0x10) != 0) {
      software_interrupt(0x23);
      *(unsigned int *)(temp_v0 + 0x10) = 0;
    }
    *(unsigned int *)(temp_v0 + 0x20) = 0;
    *(unsigned int *)(temp_v0 + 0x28) = 0;
    *(unsigned char *)(temp_v0 + 0x30) = 0;
    *(unsigned int *)(temp_v0 + 0x3c) = 0xffffffff;
    DAT_0064497c = 1;
    *(unsigned char *)(temp_v0 + 0xc) = 0;
  }
  return;
}

} /* extern "C" */
