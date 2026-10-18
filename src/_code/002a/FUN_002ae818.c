/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ae818` (_code @ 0x2ae818, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp30; /* 0x30: local_30 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

extern unsigned char LAB_001455dc; /* 0x1455dc */

/* Supplied declaration required: FUN_002b48dc. */
extern unsigned int FUN_002c0e4c(int);
extern unsigned int FUN_002c0e9c(void);
extern int FUN_002c0ec4(unsigned int, unsigned int);


void FUN_002ae818(unsigned short param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [32];
  unsigned short temp_v4;
  
  temp_v0 = FUN_002c0ec4(0xb,0);
  if (temp_v0 != 0) {
    temp_v1 = FUN_002c0e9c();
    temp_v2 = FUN_002c0e4c(temp_v0);
    temp_v4 = param_1;
    FUN_002b48dc(temp_v3,temp_v1,temp_v2,0x40,&LAB_001455dc);
  }
  return;
}
