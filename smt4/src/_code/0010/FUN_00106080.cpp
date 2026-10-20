/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106080` (_code @ 0x106080, 0xc0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001096ec(unsigned int, int, int);
int FUN_0010b9e4(void);
int FUN_0010c650(int);
int FUN_0010d3f8(int);
int FUN_0010d494(int);
int FUN_00119da8(int);
int FUN_002c1c1c(...);
int FUN_002c3940(unsigned int *, int);

extern unsigned char LAB_00220000; /* 0x220000 */
extern unsigned char LAB_00280000; /* 0x280000 */
extern unsigned int DAT_0044e09c; /* 0x44e09c */
extern unsigned int DAT_004c53c4; /* 0x4c53c4 */
extern unsigned int DAT_004c53e4; /* 0x4c53e4 */

/* Supplied declaration required: FUN_001096ec. */
/* Supplied declaration required: FUN_0010b9e4. */
/* Supplied declaration required: FUN_0010c650. */
/* Supplied declaration required: FUN_0010d3f8. */
/* Supplied declaration required: FUN_0010d494. */
/* Supplied declaration required: FUN_00119da8. */
/* Supplied declaration required: FUN_002c1c1c. */
/* Supplied declaration required: FUN_002c3940. */
extern int FUN_002c564c(unsigned int);


void FUN_00106080(void)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002c564c(1);
  if (temp_v0 == 0) {
    FUN_0010d494(0);
    temp_v0 = FUN_002c564c(0);
    if (temp_v0 == 0) {
      temp_v1 = 0x10616c;
    }
    else {
      temp_v1 = 0x106140;
    }
    FUN_001096ec(temp_v1,1,0);
    FUN_0010b9e4();
    FUN_0010d3f8(0);
    FUN_0010d3f8(1);
    FUN_002c1c1c(0,0xd0000);
    FUN_002c1c1c(1,&LAB_00220000);
    FUN_002c1c1c(2,0x80000);
    FUN_002c1c1c(3,&LAB_00280000);
    FUN_0010c650(0);
    FUN_00119da8(0);
    FUN_002c3940(&DAT_004c53c4,0x40);
    DAT_0044e09c = 0;
    DAT_004c53c4 = 0;
    DAT_004c53e4 = 1;
  }
  return;
}

} /* extern "C" */
