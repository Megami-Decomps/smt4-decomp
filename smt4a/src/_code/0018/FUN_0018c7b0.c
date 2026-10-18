/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018c7b0` (_code @ 0x18c7b0, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned int DAT_005891bc; /* 0x5891bc */
extern unsigned int DAT_005891c8; /* 0x5891c8 */
extern unsigned int DAT_005891cc; /* 0x5891cc */

/* Supplied declaration required: FUN_00170f68. */
/* Supplied declaration required: FUN_00195fc8. */
/* Supplied declaration required: FUN_001a2d04. */
extern int FUN_001a324c(unsigned int);


void FUN_0018c7b0(unsigned char *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int uStack_1c;
  int temp_v4;
  
  temp_v2 = 0;
  temp_v4 = 0;
  temp_v0 = FUN_001a324c(0x406);
  temp_v1 = 0;
  if (temp_v0 < 0) {
    temp_v1 = -0x375f3004;
  }
  if (temp_v0 < 0 && temp_v0 != temp_v1) {
    FUN_00195fc8();
  }
  FUN_001a2d04(0x406,param_2,0xf80,DAT_005891bc);
  temp_v3 = DAT_005891c8;
  uStack_1c = DAT_005891cc;
  puVar2 = (unsigned int *)&temp_v4;
  FUN_00170f68(puVar2,param_2,0xf80,&temp_v2,0);
  *param_1 = (char)puVar2;
  return;
}
