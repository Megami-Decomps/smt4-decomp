/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00107190` (_code @ 0x107190, 0x62 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6354(unsigned char [1028], int);
int FUN_002e98ea(int, unsigned char [1028], int);
int FUN_002ee7f2(unsigned char [1028], unsigned char *);

extern unsigned char LAB_001071f4; /* 0x1071f4 */
extern unsigned char LAB_0010720c; /* 0x10720c */
extern unsigned char LAB_00107220; /* 0x107220 */

/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_002e98ea. */
/* Supplied declaration required: FUN_002ee7f2. */


unsigned int FUN_00107190(int param_1,int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0 [1028];
  
  FUN_002e6354(temp_v0,0x400);
  if ((*(unsigned int *)(param_1 + 0xc) & 1) != 0) {
    FUN_002ee7f2(temp_v0,&LAB_001071f4);
  }
  if (*(int *)(param_1 + 0xc) << 0x1d < 0) {
    FUN_002ee7f2(temp_v0,&LAB_0010720c);
  }
  if (*(int *)(param_1 + 0xc) << 0x1e < 0) {
    FUN_002ee7f2(temp_v0,&LAB_00107220);
  }
  FUN_002e98ea(param_2,temp_v0,param_3);
  *(unsigned short *)((param_3 * 2 + param_2) - 2) = 0;
  return 1;
}

} /* extern "C" */
