/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00151340` (_code @ 0x151340, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char DAT_0063e1e8; /* 0x63e1e8 */
extern unsigned char DAT_0063e4a0; /* 0x63e4a0 */
extern int DAT_0063f500; /* 0x63f500 */

/* Supplied declaration required: FUN_001753d4. */
/* Supplied declaration required: FUN_00178400. */
/* Supplied declaration required: FUN_00178458. */
/* Supplied declaration required: FUN_001787a8. */


unsigned char * FUN_00151340(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [4];
  unsigned int temp_v4;
  
  temp_v0 = DAT_0063f500;
  puVar2 = (unsigned char *)0x0;
  temp_v1 = 0;
  temp_v2 = 0;
  FUN_00178400(&DAT_0063e1e8,param_1,temp_v3);
  FUN_00178458(&DAT_0063e1e8,temp_v4,&temp_v1);
  if (temp_v2 != 0) {
    return (unsigned char *)0x1;
  }
  if (temp_v0 != 0) {
    puVar2 = &DAT_0063e4a0;
    FUN_001787a8(&DAT_0063e4a0,param_1,0xffffffff);
    if (puVar2 != (unsigned char *)0x0) {
      return (unsigned char *)0x1;
    }
    puVar2 = &DAT_0063e4a0;
    FUN_001753d4(&DAT_0063e4a0,param_1,temp_v0,0xffffffff,0);
  }
  return puVar2;
}
