/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b1944` (_code @ 0x1b1944, 0x130 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_6_stack;

extern unsigned char DAT_0040048c; /* 0x40048c */
extern unsigned int DAT_00435d18; /* 0x435d18 */

/* Supplied declaration required: FUN_00282a90. */
/* Supplied declaration required: FUN_00282b94. */
extern int FUN_00282c0c(unsigned int);
extern unsigned int *FUN_00293c98(void);
/* Supplied declaration required: FUN_002aa7f4. */
extern int FUN_002c3290(int);


void FUN_001b1944(int param_1,unsigned int param_2,int param_3,int param_4,unsigned int param_5,
                 int param_6)

{
/* irregular: 3 native warning(s); review required */
  short temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int *puVar4;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  
  puVar2 = (unsigned int *)FUN_00293c98();
  temp_v3 = 0;
  do {
    temp_v2 = param_3 + temp_v3 * 0x16;
    temp_v4 = temp_v2 + 0x58;
    temp_v1 = FUN_002c3290(temp_v4);
    if ((temp_v1 != 0) && (FUN_002aa7f4(temp_v4,&DAT_0040048c), temp_v4 != 0)) {
      temp_v0 = *(short *)(temp_v2 + 0x6a);
      temp_v1 = FUN_00282c0c(DAT_00435d18);
      temp_v5 = 2;
      if (param_1 < 0) {
        temp_v5 = 3;
      }
      switch(temp_v0) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 0xc:
        if ((((temp_v0 != 0xc) || (param_6 < 0)) ||
            (puVar4 = puVar2, FUN_00282b94(puVar2,param_6), puVar4 == (unsigned int *)0x0)) ||
           ((*puVar4 & 2) != 0)) {
          FUN_00282a90((int)*(short *)(temp_v2 + 0x68) + temp_v1 * param_4,param_2,param_5,param_6,6,
                       temp_v5,temp_v0,temp_v2 + 0x58);
        }
      }
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 4);
  return;
}
