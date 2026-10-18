/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00480a54` (_code @ 0x480a54, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern unsigned char LAB_00167224; /* 0x167224 */
extern int DAT_00570280; /* 0x570280 */

/* Supplied declaration required: FUN_00100854. */
/* Supplied declaration required: FUN_001762d4. */
extern int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(int);
extern unsigned int FUN_00192798(void);
extern int FUN_0019c06c(void);


void FUN_00480a54(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [32];
  unsigned short temp_v4;
  
  if ((((param_1 != 0) && (temp_v0 = FUN_0019c06c(), temp_v0 != 0)) && (*(char *)(temp_v0 + 8) == '\t'))
     && (((temp_v4 = (unsigned short)param_1, *(int *)(DAT_00570280 + 0x3c4) == 0 ||
          (temp_v0 = DAT_00570280, FUN_001762d4(DAT_00570280,param_1), temp_v0 == 0)) &&
         (temp_v0 = FUN_00187180(8,3), temp_v0 != 0)))) {
    temp_v1 = FUN_00192798();
    temp_v2 = FUN_00192748(temp_v0);
    FUN_00100854(temp_v3,temp_v1,temp_v2,0x3c,&LAB_00167224);
  }
  return;
}
