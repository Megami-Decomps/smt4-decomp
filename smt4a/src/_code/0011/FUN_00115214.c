/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00115214` (_code @ 0x115214, 0x76 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_6: 6 slot(s), 22 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned short sp2A; /* 0x2a: local_2a */
    unsigned int sp30; /* 0x30: local_30 */
} param_6_stack;

extern unsigned char LAB_00115290; /* 0x115290 */
extern romwright_code *DAT_00594ac8; /* 0x594ac8 */
extern int DAT_0062d884; /* 0x62d884 */
extern int DAT_0062d888; /* 0x62d888 */

/* Supplied declaration required: FUN_00300c10. */
/* Supplied declaration required: FUN_00300d58. */
extern unsigned int FUN_00300d90(int, unsigned char *);


unsigned int
FUN_00115214(int param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4,int *param_5,
            unsigned int param_6)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [2];
  unsigned short temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int *puStack_18;
  
  temp_v5 = param_1;
  temp_v6 = param_2;
  temp_v7 = param_3;
  puStack_18 = param_4;
  FUN_00300c10(temp_v2);
  temp_v1 = 0;
  if ((param_6 & 1) != 0) {
    temp_v1 = 4;
  }
  DAT_0062d888 = DAT_0062d888 + 1;
  temp_v0 = *(int *)(temp_v5 + 4);
  FUN_00300d58(temp_v0,temp_v6,temp_v7,temp_v1,temp_v2);
  temp_v1 = 0;
  if (temp_v0 < 0) {
    temp_v1 = FUN_00300d90(temp_v5,&LAB_00115290);
  }
  else {
    DAT_0062d884 = DAT_0062d884 + 1;
    if (param_4 != (unsigned int *)0x0) {
      *param_4 = (temp_v4 << 0x18) | (((temp_v4 >> 8) & 0xff) << 0x10) |
                 (((temp_v4 >> 0x10) & 0xff) << 8) | (temp_v4 >> 0x18);
      *(unsigned short *)(param_4 + 1) = (temp_v3 << 8) | (temp_v3 >> 8);
    }
    if (param_5 != (int *)0x0) {
      *param_5 = temp_v0;
    }
  }
  (*DAT_00594ac8)(temp_v1,temp_v6,temp_v7,param_4,param_5);
  return temp_v1;
}
