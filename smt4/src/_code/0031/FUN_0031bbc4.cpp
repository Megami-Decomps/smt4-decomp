/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031bbc4` (_code @ 0x31bbc4, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b46f8(...);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short spC0; /* 0xc0: local_c0 */
    unsigned int spC8; /* 0xc8: local_c8 */
} param_1_stack;

extern unsigned char LAB_00144ff8; /* 0x144ff8 */
extern int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_002b46f8. */
extern unsigned int FUN_002c0c74(unsigned int);
extern unsigned int FUN_002c0cc4(void);
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);
extern int FUN_0038971c(int, unsigned int);


void FUN_0031bbc4(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned short temp_v3 [86];
  
  temp_v3[0] = (unsigned short)param_1;
  if (*(int *)(DAT_00433158 + 0x368) != 0) {
    puVar1 = temp_v3;
    FUN_002b46f8(puVar1,*(int *)(DAT_00433158 + 0x368),*(unsigned int *)(DAT_00433158 + 0x364),0xa8,
                 &LAB_00144ff8);
    if ((puVar1 != (unsigned short *)0x0) && (temp_v0 = FUN_0038971c(DAT_00433158,param_1), temp_v0 != 0)) {
      return;
    }
  }
  temp_v1 = FUN_002c0cec(0,1);
  temp_v2 = FUN_002c0cc4();
  temp_v1 = FUN_002c0c74(temp_v1);
  FUN_002b46f8(temp_v3,temp_v2,temp_v1,0xa8,&LAB_00144ff8);
  return;
}

} /* extern "C" */
