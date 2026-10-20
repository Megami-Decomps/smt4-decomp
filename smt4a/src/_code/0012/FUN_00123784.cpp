/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123784` (_code @ 0x123784, 0x56 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012369c(unsigned char [20], unsigned int, unsigned char [128], int);

/* stack frame of param_1: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp98; /* 0x98: local_98 */
} param_1_stack;

extern unsigned char LAB_001237dc; /* 0x1237dc */
extern unsigned char LAB_001237e0; /* 0x1237e0 */
extern unsigned char LAB_001237e8; /* 0x1237e8 */

/* Supplied declaration required: FUN_0012369c. */
extern int wstrcmpU16(unsigned char *, unsigned char *);
extern int FUN_002ea6fc(unsigned char *);


unsigned int FUN_00123784(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [128];
  unsigned char temp_v2 [20];
  
  FUN_0012369c(temp_v2,param_1,temp_v1,0x40);
  temp_v0 = FUN_002ea6fc(temp_v2);
  if (temp_v0 != 0) {
    temp_v0 = wstrcmpU16(temp_v1,&LAB_001237dc);
    if (temp_v0 == 0) {
      return 1;
    }
    temp_v0 = wstrcmpU16(temp_v1,&LAB_001237e8);
    if (temp_v0 == 0) {
      return 2;
    }
    temp_v0 = wstrcmpU16(temp_v1,&LAB_001237e0);
    if (temp_v0 == 0) {
      return 3;
    }
  }
  return 0;
}

} /* extern "C" */
