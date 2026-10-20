/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026812c` (_code @ 0x26812c, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100854(unsigned short *, unsigned int, unsigned int, int, unsigned char *);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char LAB_002321f8; /* 0x2321f8 */

/* Supplied declaration required: FUN_00100854. */
extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern unsigned int FUN_00192798(void);


unsigned int FUN_0026812c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  unsigned short temp_v2 [2];
  
  if ((0 < param_1) && (param_1 < 0x40)) {
    temp_v0 = FUN_00187180(0x47,0);
    temp_v1 = FUN_00192798();
    temp_v0 = FUN_00192748(temp_v0);
    puVar3 = temp_v2;
    temp_v2[0] = (unsigned short)param_1;
    FUN_00100854(puVar3,temp_v1,temp_v0,4,&LAB_002321f8);
    if ((puVar3 != (unsigned short *)0x0) && (-1 < (short)puVar3[1])) {
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
