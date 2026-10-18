/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00147384` (_code @ 0x147384, 0x140 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern unsigned char DAT_005891b1; /* 0x5891b1 */
extern unsigned char DAT_005891b4; /* 0x5891b4 */

/* Supplied declaration required: FUN_0015a964. */
extern int FUN_0015aadc(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0015ab30. */
/* Supplied declaration required: FUN_0016e758. */
/* Supplied declaration required: FUN_00170198. */
extern int FUN_001703e8(void);
/* Supplied declaration required: FUN_00170e58. */
/* Supplied declaration required: FUN_00170ebc. */
/* Supplied declaration required: FUN_001716c0. */
/* Supplied declaration required: FUN_00189a38. */
/* Supplied declaration required: FUN_0018b868. */
/* Supplied declaration required: FUN_0018b964. */
extern int FUN_0018ba70(unsigned int, unsigned char **);
/* Supplied declaration required: FUN_001bcd48. */
extern int FUN_001c6e20(void);


int FUN_00147384(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  unsigned char *temp_v1;
  int temp_v2;
  unsigned char temp_v3 [4];
  unsigned char temp_v4 [4];
  unsigned char temp_v5 [4];
  
  FUN_0018b868();
  temp_v1 = temp_v5;
  temp_v0 = -1;
  FUN_0015ab30(0xffffffff,temp_v3,temp_v4,&temp_v2);
  if (temp_v0 < 0) {
    FUN_00189a38();
  }
  FUN_0018b964();
  temp_v0 = FUN_001703e8();
  if (temp_v0 != 0) {
    while( 1 ) {
      FUN_0018b868();
      temp_v0 = FUN_0018ba70(temp_v2,&temp_v1);
      if (temp_v0 < 0) {
        FUN_00189a38(temp_v0,0x1473fc);
      }
      FUN_0018b964();
      if (((unsigned int)temp_v1 & 0xff) != 0) break;
      FUN_001bcd48(10000000,0);
    }
    DAT_005891b1 = 1;
    FUN_00170198();
    FUN_0015a964(temp_v2);
  }
  temp_v0 = FUN_001c6e20();
  if (temp_v0 != 0) {
    FUN_0016e758();
    DAT_005891b4 = 1;
  }
  FUN_00170ebc(0);
  FUN_001716c0();
  FUN_0018b868();
  temp_v0 = FUN_0015aadc(param_1,param_2,param_3);
  if (temp_v0 < 0) {
    FUN_00189a38(temp_v0,0x147484);
  }
  FUN_0018b964();
  FUN_00170e58();
  return temp_v0;
}
