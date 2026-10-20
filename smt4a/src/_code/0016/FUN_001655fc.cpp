/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001655fc` (_code @ 0x1655fc, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100348(unsigned char *, int, unsigned int, int *);
int FUN_00181ae0(unsigned int, unsigned int, unsigned char *);
int FUN_002e6dd4(unsigned char *, int);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned int DAT_005b3bcc; /* 0x5b3bcc */
extern unsigned int DAT_005b3bd0; /* 0x5b3bd0 */
extern unsigned char DAT_00635800; /* 0x635800 */

/* Supplied declaration required: FUN_00100348. */
/* Supplied declaration required: FUN_00181ae0. */
/* Supplied declaration required: FUN_002e6dd4. */


void FUN_001655fc(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned char *puVar1;
  int uStack_4;
  
  uStack_4 = param_4;
  FUN_002e6dd4(&DAT_00635800,0x100);
  puVar1 = &DAT_00635800;
  FUN_00100348(&DAT_00635800,0x100,param_3,&uStack_4);
  if (puVar1 != (unsigned char *)0x0) {
    FUN_00181ae0(DAT_005b3bd0,DAT_005b3bcc,&DAT_00635800);
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
