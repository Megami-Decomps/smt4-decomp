/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00283498` (_code @ 0x283498, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100854(unsigned char [32], unsigned int, unsigned int, int, unsigned char *);
int FUN_00175f90(int, unsigned int);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp18; /* 0x18: local_18 */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char LAB_001628b0; /* 0x1628b0 */
extern int DAT_00570280; /* 0x570280 */

/* Supplied declaration required: FUN_00100854. */
/* Supplied declaration required: FUN_00175f90. */
extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern unsigned int FUN_00192798(void);


void FUN_00283498(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [32];
  unsigned short temp_v4;
  
  temp_v0 = DAT_00570280;
  FUN_00175f90(DAT_00570280,param_1);
  if (temp_v0 == 0) {
    temp_v1 = FUN_00187180(0x19,0);
    temp_v2 = FUN_00192798();
    temp_v1 = FUN_00192748(temp_v1);
    temp_v4 = (unsigned short)param_1;
    FUN_00100854(temp_v3,temp_v2,temp_v1,0x28,&LAB_001628b0);
  }
  return;
}

} /* extern "C" */
