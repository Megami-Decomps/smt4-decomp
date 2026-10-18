/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013c5f4` (_code @ 0x13c5f4, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned int DAT_0044e368; /* 0x44e368 */
extern unsigned int DAT_0044e620; /* 0x44e620 */
extern unsigned int DAT_0044e624; /* 0x44e624 */

/* Supplied declaration required: FUN_002a7f28. */
extern int FUN_002a808c(unsigned int);
/* Supplied declaration required: FUN_002c0d50. */
/* Supplied declaration required: FUN_002c52f8. */


void FUN_0013c5f4(unsigned char *param_1,unsigned int param_2)

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
  temp_v0 = FUN_002a808c(0x406);
  temp_v1 = 0;
  if (temp_v0 < 0) {
    temp_v1 = -0x375f3004;
  }
  if (temp_v0 < 0 && temp_v0 != temp_v1) {
    FUN_002c52f8();
  }
  FUN_002a7f28(0x406,param_2,0xf80,DAT_0044e368);
  temp_v3 = DAT_0044e620;
  uStack_1c = DAT_0044e624;
  puVar2 = (unsigned int *)&temp_v4;
  FUN_002c0d50(puVar2,param_2,0xf80,&temp_v2,0);
  *param_1 = (char)puVar2;
  return;
}
