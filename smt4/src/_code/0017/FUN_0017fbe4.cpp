/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017fbe4` (_code @ 0x17fbe4, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00241c58(int);
int FUN_002c1e30(int, int);
int FUN_002c1edc(int, int, int, int *);
int FUN_002ee56c(void);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: FUN_00241c58. */
extern int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c1e30. */
/* Supplied declaration required: FUN_002c1edc. */
/* Supplied declaration required: FUN_002ee56c. */


unsigned int FUN_0017fbe4(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int uStack_14;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002c08f0();
  FUN_002ee56c();
  temp_v1 = 0;
  uStack_14 = 0x3f800000;
  temp_v2 = 0;
  FUN_002c1edc(temp_v0,temp_v0 + 0x508,temp_v0 + 0x514,&temp_v1);
  FUN_002c1e30(temp_v0,1);
  FUN_00241c58(0);
  return 0;
}

} /* extern "C" */
