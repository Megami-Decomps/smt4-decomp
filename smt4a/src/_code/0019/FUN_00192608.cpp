/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00192608` (_code @ 0x192608, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100854(unsigned char [32], unsigned int, unsigned int, int, unsigned char *);
int FUN_00192360(int, unsigned int);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp70; /* 0x70: local_70 */
    unsigned int sp98; /* 0x98: local_98 */
} param_1_stack;

extern unsigned char LAB_00183d90; /* 0x183d90 */
extern int DAT_00570280; /* 0x570280 */

/* Supplied declaration required: FUN_00100854. */
extern int FUN_00187180(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00192360. */
extern unsigned int FUN_00192748(int);
extern unsigned int FUN_00192798(void);


void FUN_00192608(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [32];
  unsigned short temp_v4;
  
  temp_v4 = (unsigned short)param_1;
  if (((*(int *)(DAT_00570280 + 0x3b8) == 0) ||
      (temp_v0 = DAT_00570280, FUN_00192360(DAT_00570280,param_1), temp_v0 == 0)) &&
     (temp_v0 = FUN_00187180(8,2), temp_v0 != 0)) {
    temp_v1 = FUN_00192798();
    temp_v2 = FUN_00192748(temp_v0);
    FUN_00100854(temp_v3,temp_v1,temp_v2,0x80,&LAB_00183d90);
  }
  return;
}

} /* extern "C" */
