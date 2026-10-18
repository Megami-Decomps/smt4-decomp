/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ab94` (_code @ 0x30ab94, 0x88 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 6 byte(s) */
typedef struct {
    unsigned char sp1B; /* 0x1b: local_1b */
    unsigned char sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char LAB_002d0474; /* 0x2d0474 */

/* Supplied declaration required: FUN_002b48dc. */
extern unsigned int FUN_002c0e4c(unsigned int);
extern unsigned int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);


void FUN_0030ab94(unsigned char param_1,unsigned char param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char *puVar3;
  unsigned char temp_v2;
  unsigned char temp_v3;
  
  temp_v0 = FUN_002c0ec4(5,1);
  temp_v1 = FUN_002c0e9c();
  temp_v0 = FUN_002c0e4c(temp_v0);
  puVar3 = &temp_v2;
  temp_v2 = param_1;
  temp_v3 = param_2;
  FUN_002b48dc(puVar3,temp_v1,temp_v0,4,&LAB_002d0474);
  if (puVar3 == (unsigned char *)0x0) {
    temp_v2 = param_2;
    temp_v3 = param_1;
    FUN_002b48dc(&temp_v2,temp_v1,temp_v0,4,&LAB_002d0474);
  }
  return;
}
