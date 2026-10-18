/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010368c` (_code @ 0x10368c, 0xa0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int DAT_0044e0e0; /* 0x44e0e0 */
extern unsigned char DAT_004c5484; /* 0x4c5484 */
extern unsigned int DAT_004c54e4; /* 0x4c54e4 */
extern unsigned int DAT_004c54e8; /* 0x4c54e8 */
extern unsigned int DAT_004c54ec; /* 0x4c54ec */
extern unsigned char DAT_004c54f0; /* 0x4c54f0 */

/* Supplied declaration required: FUN_00109524. */
/* Supplied declaration required: FUN_00110c2c. */
extern unsigned int FUN_00110c44(unsigned char *);
/* Supplied declaration required: FUN_00110c60. */
/* Supplied declaration required: FUN_00120ce4. */
/* Supplied declaration required: FUN_002c54f0. */
extern int FUN_002c583c(unsigned int);


void FUN_0010368c(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002c583c(1);
  if (temp_v0 == 0) {
    DAT_004c54e4 = 0x96;
    DAT_004c54e8 = 0x3dcccccd;
    DAT_004c54ec = 0x3f333333;
    DAT_004c54f0 = 1;
    FUN_00110c60(&DAT_004c5484);
    temp_v1 = FUN_00110c44(&DAT_004c5484);
    temp_v2 = 0x10000;
    FUN_002c54f0(0x10000,0x100,0,temp_v1);
    DAT_0044e0e0 = temp_v2;
    FUN_00110c2c(&DAT_004c5484,temp_v2,temp_v1);
    FUN_00120ce4(0,&DAT_004c5484);
  }
  FUN_00109524();
  return;
}
