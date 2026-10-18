/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103924` (_code @ 0x103924, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

extern unsigned char LAB_001039cc; /* 0x1039cc */

/* Supplied declaration required: FUN_00103afc. */
/* Supplied declaration required: FUN_002e92dc. */
extern int FUN_002e92e4(unsigned short *, char *);
extern unsigned int FUN_002e9300(unsigned char *, unsigned short *);
/* Supplied declaration required: FUN_002e9318. */
extern unsigned int FUN_002e9334(unsigned int, unsigned short *);
/* Supplied declaration required: FUN_002e934e. */
/* Supplied declaration required: FUN_002e93c2. */


unsigned int FUN_00103924(unsigned int param_1,unsigned short *param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  unsigned short *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned short *puVar5;
  unsigned int temp_v3;
  unsigned char temp_v4 [8];
  unsigned char temp_v5 [8];
  unsigned int temp_v6;
  unsigned short *puStack_1c;
  int temp_v7;
  
  temp_v6 = param_1;
  puStack_1c = param_2;
  temp_v7 = param_3;
  puVar1 = (unsigned short *)FUN_002e92dc(param_2,&LAB_001039cc);
  if ((((puVar1 == (unsigned short *)0x0) || (param_2 == puVar1)) ||
      (puVar5 = puVar1 + 1, puVar1[1] == 0)) ||
     (temp_v0 = FUN_002e92dc(puVar5,&LAB_001039cc), temp_v0 != 0)) {
    return 0;
  }
  temp_v3 = 1;
  *puVar1 = 0;
  if (temp_v7 == 0) {
    temp_v0 = FUN_002e92e4(param_2,"address");
    if (temp_v0 == 0) {
      temp_v3 = FUN_002e9334(temp_v6,puVar5);
      *puVar1 = 0x3d;
      return temp_v3;
    }
    temp_v0 = FUN_002e92e4(param_2,"port");
    if (temp_v0 == 0) {
      FUN_002e934e(puVar5,0,10);
      FUN_002e93c2(temp_v6,(unsigned int)puVar5 & 0xffff);
      *puVar1 = 0x3d;
      return temp_v3;
    }
  }
  temp_v1 = FUN_002e9300(temp_v5,puVar5);
  temp_v2 = FUN_002e9300(temp_v4,param_2);
  FUN_00103afc(temp_v6,temp_v2,temp_v1,temp_v7);
  FUN_002e9318(temp_v4);
  FUN_002e9318(temp_v5);
  *puVar1 = 0x3d;
  return temp_v3;
}
