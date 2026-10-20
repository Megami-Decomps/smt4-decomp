/* NON_MATCHING: romwright 0.5.0 decompilation of `eventCommand_31BEBC` (_code @ 0x31bebc, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00244e1c(int, int, int, int);
int FUN_0028dcb0(int);
int FUN_002c498c(int, int, int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

/* Supplied declaration required: FUN_00244e1c. */
/* Supplied declaration required: FUN_0028dcb0. */
extern unsigned int FUN_00296cc8(unsigned int);
extern int FUN_002c1d5c(void);
/* Supplied declaration required: FUN_002c498c. */


unsigned int eventCommand_31BEBC(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v2 = 0;
  temp_v1 = FUN_002c1d5c();
  if (temp_v1 == 0) {
    temp_v2 = 0x100;
    FUN_002c498c(0x100,0x100,0,8,1);
    FUN_00244e1c(temp_v0,temp_v2,0,1);
    *(unsigned int *)(temp_v2 + 4) = temp_v0;
  }
  FUN_0028dcb0(temp_v2);
  return 1;
}

} /* extern "C" */
