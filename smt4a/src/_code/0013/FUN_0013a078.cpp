/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a078` (_code @ 0x13a078, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013f030(void);
int FUN_00140074(void);
int FUN_00144f1c(int, unsigned int);
int FUN_0016117c(void);
int FUN_00161a10(void);
int FUN_0017cdb0(void);
int FUN_0017cfe8(unsigned char *, int);
int FUN_0017dd80(void);
int FUN_0018b19c(unsigned int, unsigned int);
int nngxRunCmdlist(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_0063fec4; /* 0x63fec4 */
extern int DAT_0063fed8; /* 0x63fed8 */
extern int DAT_0063ff7c; /* 0x63ff7c */

/* Supplied declaration required: FUN_0013f030. */
/* Supplied declaration required: FUN_00140074. */
/* Supplied declaration required: FUN_00144f1c. */
/* Supplied declaration required: FUN_0016117c. */
/* Supplied declaration required: FUN_00161a10. */
/* Supplied declaration required: FUN_0017cdb0. */
/* Supplied declaration required: FUN_0017cfe8. */
/* Supplied declaration required: FUN_0017dd80. */
extern unsigned int FUN_00188c94(void);
extern unsigned int FUN_00188ca4(void);
/* Supplied declaration required: FUN_0018b19c. */
/* Supplied declaration required: nngxRunCmdlist. */


void FUN_0013a078(unsigned int param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  FUN_0017dd80();
  FUN_0017cfe8(&DAT_0063fec4,DAT_0063fed8 == 0);
  FUN_00161a10();
  FUN_0016117c();
  FUN_00140074();
  temp_v0 = FUN_00188c94();
  temp_v1 = FUN_00188ca4();
  FUN_0018b19c(temp_v1,temp_v0);
  FUN_0017cfe8(&DAT_0063fec4,DAT_0063fed8);
  FUN_0017cdb0();
  nngxRunCmdlist();
  DAT_0063fed8 = 1 - DAT_0063fed8;
  FUN_0013f030();
  FUN_0017cfe8(&DAT_0063fec4,DAT_0063fed8);
  if (DAT_0063ff7c == 0) {
    FUN_00144f1c(0,param_1);
    return;
  }
  FUN_00144f1c(1,param_1);
  return;
}

} /* extern "C" */
