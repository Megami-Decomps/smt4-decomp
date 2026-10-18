/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023a55c` (_code @ 0x23a55c, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 10 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned short sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char LAB_002321f8; /* 0x2321f8 */

/* Supplied declaration required: FUN_00100854. */
extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern unsigned int FUN_00192798(void);
/* Supplied declaration required: FUN_0019a7f4. */


void FUN_0023a55c(unsigned short param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  unsigned short temp_v2 [2];
  
  temp_v0 = FUN_00187180(0x47,0);
  temp_v1 = FUN_00192798();
  temp_v0 = FUN_00192748(temp_v0);
  puVar3 = temp_v2;
  temp_v2[0] = param_1;
  FUN_00100854(puVar3,temp_v1,temp_v0,4,&LAB_002321f8);
  if ((puVar3 != (unsigned short *)0x0) && (-1 < (short)puVar3[1])) {
    FUN_0019a7f4(0x34);
    return;
  }
  return;
}
