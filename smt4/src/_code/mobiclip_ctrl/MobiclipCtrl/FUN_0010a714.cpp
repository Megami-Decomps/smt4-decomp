/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010a714` (_code @ 0x10a714, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011b670(unsigned int);
int FUN_0011b788(unsigned char *);
int FUN_0011d100(void);
int FUN_00123750(int, int);
int FUN_002bf0dc(void);
int registerBlockRequestGroups(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_004c3b20; /* 0x4c3b20 */
extern unsigned int DAT_004c3ce0; /* 0x4c3ce0 */

/* Supplied declaration required: FUN_0011b670. */
/* Supplied declaration required: FUN_0011b788. */
/* Supplied declaration required: FUN_0011d100. */
/* Supplied declaration required: FUN_00123750. */
/* Supplied declaration required: FUN_002bf0dc. */
/* Supplied declaration required: registerBlockRequestGroups. */


void FUN_0010a714(int param_1)

{
/* irregular: 6 native warning(s); review required */
  if (param_1 != 2) {
    registerBlockRequestGroups(0x3fff);
    FUN_00123750(0x3fff,1);
    FUN_002bf0dc();
  }
  else {
    FUN_0011d100();
  }
  FUN_0011b788(&DAT_004c3b20);
  FUN_0011b670(DAT_004c3ce0);
  return;
}

} /* extern "C" */
