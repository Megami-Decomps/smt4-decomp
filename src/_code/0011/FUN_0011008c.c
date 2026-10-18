/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011008c` (_code @ 0x11008c, 0x140 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern unsigned char LAB_00110104; /* 0x110104 */
extern unsigned char DAT_0044e361; /* 0x44e361 */
extern unsigned char DAT_0044e364; /* 0x44e364 */

/* Supplied declaration required: FUN_0011d4ac. */
extern int FUN_0011d610(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0011d6b8. */
/* Supplied declaration required: FUN_00129af4. */
/* Supplied declaration required: FUN_0012a6ec. */
/* Supplied declaration required: FUN_002bb490. */
/* Supplied declaration required: FUN_002bb4c0. */
/* Supplied declaration required: FUN_002bb4d4. */
/* Supplied declaration required: FUN_002bb54c. */
extern int FUN_002bb5b4(void);
extern int FUN_002bb5c4(unsigned int, unsigned char **);
extern int FUN_002bb608(void);
/* Supplied declaration required: FUN_002bb648. */
/* Supplied declaration required: FUN_002bb6b8. */
/* Supplied declaration required: FUN_002c14f4. */


int FUN_0011008c(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  unsigned char *temp_v1;
  int temp_v2;
  unsigned char temp_v3 [4];
  unsigned char temp_v4 [4];
  unsigned char temp_v5 [4];
  
  FUN_002bb6b8();
  temp_v1 = temp_v5;
  temp_v0 = -1;
  FUN_0011d6b8(0xffffffff,temp_v3,temp_v4,&temp_v2);
  if (temp_v0 < 0) {
    FUN_002c14f4();
  }
  FUN_002bb648();
  temp_v0 = FUN_002bb608();
  if (temp_v0 != 0) {
    while( 1 ) {
      FUN_002bb6b8();
      temp_v0 = FUN_002bb5c4(temp_v2,&temp_v1);
      if (temp_v0 < 0) {
        FUN_002c14f4(temp_v0,&LAB_00110104);
      }
      FUN_002bb648();
      if (((unsigned int)temp_v1 & 0xff) != 0) break;
      FUN_002bb490(10000000,0);
    }
    DAT_0044e361 = 1;
    FUN_00129af4();
    FUN_0011d4ac(temp_v2);
  }
  temp_v0 = FUN_002bb5b4();
  if (temp_v0 != 0) {
    FUN_002bb54c();
    DAT_0044e364 = 1;
  }
  FUN_002bb4d4(0);
  FUN_0012a6ec();
  FUN_002bb6b8();
  temp_v0 = FUN_0011d610(param_1,param_2,param_3);
  if (temp_v0 < 0) {
    FUN_002c14f4(temp_v0,0x11018c);
  }
  FUN_002bb648();
  FUN_002bb4c0();
  return temp_v0;
}
