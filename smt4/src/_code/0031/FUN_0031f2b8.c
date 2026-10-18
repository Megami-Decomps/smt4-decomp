/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031f2b8` (_code @ 0x31f2b8, 0xb0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int DAT_0043427c; /* 0x43427c */

/* Supplied declaration required: FUN_0026beb4. */
extern unsigned int FUN_0027e928(unsigned int);
extern unsigned int FUN_00296cc8(unsigned int);


unsigned int FUN_0031f2b8(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = 0;
  switch(temp_v0) {
  case 1:
    temp_v1 = 0x10;
    break;
  case 2:
    temp_v1 = 0x11;
    break;
  case 3:
    temp_v1 = 0x12;
    break;
  case 4:
    temp_v1 = 0x13;
    break;
  case 0xfffffffc:
    temp_v1 = 0x17;
    break;
  case 0xfffffffd:
    temp_v1 = 0x16;
    break;
  case 0xfffffffe:
    temp_v1 = 0x15;
    break;
  case 0xffffffff:
    temp_v1 = 0x14;
  }
  temp_v0 = FUN_0027e928(DAT_0043427c);
  FUN_0026beb4(0,temp_v0,temp_v1,0,1);
  return 1;
}
