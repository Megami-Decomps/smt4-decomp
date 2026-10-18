/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031c00c` (_code @ 0x31c00c, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

/* Supplied declaration required: FUN_00244f88. */
/* Supplied declaration required: FUN_0028df54. */
extern unsigned int FUN_00296f60(unsigned int);
extern int FUN_002c1f28(void);
extern int FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


unsigned int FUN_0031c00c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00296f60(0);
  temp_v2 = 0;
  temp_v1 = FUN_002c1f28();
  if (temp_v1 == 0) {
    temp_v2 = FUN_002c4b84(0x100,0x100,0,8,1);
    FUN_00244f88(temp_v0,temp_v2,0,1);
    *(unsigned int *)(temp_v2 + 4) = temp_v0;
  }
  FUN_0028df54(temp_v2);
  return 1;
}
