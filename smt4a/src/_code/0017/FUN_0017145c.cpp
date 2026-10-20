/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017145c` (_code @ 0x17145c, 0x160 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00170474(int);
int FUN_00170f68(int, int, int);
int FUN_00171624(void);
int FUN_00189a38(int, int);
int FUN_0018b868(void);
int FUN_0018b964(void);
int FUN_001bcd48(int, int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned int DAT_005891c8; /* 0x5891c8 */
extern unsigned int DAT_005891cc; /* 0x5891cc */

extern int FUN_001703e8(void);
/* Supplied declaration required: FUN_00170474. */
/* Supplied declaration required: FUN_00170f68. */
/* Supplied declaration required: FUN_00171624. */
/* Supplied declaration required: FUN_00189a38. */
extern int FUN_0018b65c(void);
/* Supplied declaration required: FUN_0018b868. */
/* Supplied declaration required: FUN_0018b964. */
extern int FUN_0018ba70(unsigned int, unsigned int *);
/* Supplied declaration required: FUN_001bcd48. */


int FUN_0017145c(int param_1,unsigned char *param_2)

{
/* irregular: 7 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2 [2];
  unsigned int temp_v3;
  unsigned int uStack_24;
  
  if (param_2 != (unsigned char *)0x0) {
    *param_2 = 0;
  }
  temp_v1 = FUN_001703e8();
  if (temp_v1 != 0) {
    FUN_0018b868();
    temp_v1 = FUN_0018ba70(0x400,temp_v2);
    if (temp_v1 < 0) {
      FUN_00189a38(temp_v1,0x1714a0);
    }
    FUN_0018b964();
    if ((temp_v2[0] & 0xff) == 0) {
      return 0;
    }
  }
  temp_v1 = FUN_0018b65c();
  if (temp_v1 != 0) {
    FUN_0018b868();
    temp_v1 = FUN_0018ba70(0x200,temp_v2);
    if (temp_v1 < 0) {
      FUN_00189a38(temp_v1,0x1714e4);
    }
    FUN_0018b964();
    if ((char)temp_v2[0] == '\0') {
      return 0;
    }
  }
  FUN_00170474(3);
  while( 1 ) {
    FUN_0018b868();
    temp_v1 = param_1;
    FUN_00171624();
    FUN_0018b964();
    if ((temp_v1 != -0x375f3010 && temp_v1 != -0x1f5f33f8) && temp_v1 != -0x375f33fe) break;
    FUN_001bcd48(10000000,0);
  }
  if (temp_v1 == 0) {
    temp_v3 = DAT_005891c8;
    uStack_24 = DAT_005891cc;
    temp_v2[0] = 0;
    temp_v0 = 0;
    FUN_00170f68(0,0,0);
    if (param_2 != (unsigned char *)0x0) {
      *param_2 = temp_v0;
    }
  }
  return temp_v1;
}

} /* extern "C" */
