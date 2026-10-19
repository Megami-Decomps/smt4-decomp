/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014fbec` (_code @ 0x14fbec, 0xe0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_4_stack;

extern unsigned char LAB_001525f8; /* 0x1525f8 */
extern unsigned char LAB_00152604; /* 0x152604 */
extern int FUN_00153400(); /* 0x153400 */
extern unsigned char LAB_001559dc; /* 0x1559dc */

/* Supplied declaration required: FUN_002bcc60. */
/* Supplied declaration required: FUN_002c526c. */
extern void nn_os_LightEvent_Initialize(unsigned int, unsigned char);


unsigned int FUN_0014fbec(int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char *temp_v2;
  unsigned char *temp_v3;
  unsigned char *temp_v4;
  int temp_v5;
  
  temp_v0 = 0xe0e0abee;
  if (*(char *)(param_1 + 0xc) != '\0') {
    if (*(char *)(param_1 + 0xe) != '\0') {
      temp_v0 = 0x820abf9;
    }
    else if (*(char *)(param_1 + 0x30) == '\x01') {
      nn_os_LightEvent_Initialize(param_1 + 0x48,0);
      nn_os_LightEvent_Initialize(param_1 + 0x40,0);
      temp_v1 = 4;
      temp_v5 = 0;
      temp_v2 = &LAB_001559dc;
      temp_v3 = &LAB_00152604;
      temp_v0 = param_1 + 0x18;
      temp_v4 = &LAB_001525f8;
      FUN_002bcc60(temp_v0,&temp_v1,FUN_00153400,&temp_v5,param_2 + param_3,param_4,0,0);
      if (((temp_v0 & 0x7e00000) != 0x600000) && ((int)temp_v0 < 0)) {
        FUN_002c526c(temp_v0);
      }
      *(unsigned char *)(param_1 + 0xe) = (unsigned char)(temp_v0 >> 0x1f) ^ 1;
    }
  }
  return temp_v0;
}
