/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039bc48` (_code @ 0x39bc48, 0x190 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_1_stack;

extern unsigned char DAT_00404cf0; /* 0x404cf0 */
extern unsigned int DAT_0044cdd4; /* 0x44cdd4 */
extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00231d4c. */
/* Supplied declaration required: FUN_0028f758. */
/* Supplied declaration required: FUN_002bcf58. */
/* Supplied declaration required: FUN_002be77c. */
/* Supplied declaration required: FUN_002bef14. */
/* Supplied declaration required: FUN_002bef7c. */
/* Supplied declaration required: FUN_002bef88. */
/* Supplied declaration required: FUN_002befdc. */
/* Supplied declaration required: FUN_002bf558. */
extern int FUN_002bf6d0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf710. */
/* Supplied declaration required: FUN_002bf9f0. */
extern unsigned int FUN_002c5f7c(unsigned int, unsigned int);


void FUN_0039bc48(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int in_fpscr;
  float temp_v3;
  unsigned char temp_v4 [64];
  float temp_v5;
  float temp_v6;
  
  FUN_00231d4c(param_1 + 0x164,&temp_v5);
  temp_v0 = FUN_002c5f7c(1,0);
  FUN_002befdc(DAT_0044ea00,3,temp_v0);
  FUN_002bf710();
  FUN_002bef14();
  temp_v0 = FUN_002bef7c();
  temp_v3 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002bf558(2,0x1c,0x1c,(int)(temp_v3 + temp_v5),(int)temp_v6,0xd3);
  temp_v1 = FUN_002bf6d0(0x1c,0x111b);
  FUN_002bcf58(temp_v4,&DAT_00404cf0,0x2d);
  temp_v3 = 0.0f;
  FUN_0028f758(temp_v4,2);
  VectorSignedToFloat(((int)**(short **)(temp_v1 + 0xc) - (int)temp_v3) / 2,(unsigned char)(in_fpscr >> 0x16) & 3
                     );
  temp_v2 = FUN_002bef7c(param_1 + 0xa88,(int)temp_v3);
  VectorSignedToFloat(temp_v2 + *(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002be77c(2,DAT_0044cdd4,temp_v4);
  FUN_002bef88(DAT_0044ea00,3);
  FUN_002bf710();
  FUN_002bf9f0(param_1 + 0xa88);
  if ((*(char *)(param_1 + 0xa86) != '\0') && (*(char *)(param_1 + 0xb12) != '\0')) {
    *(unsigned char *)(param_1 + 0xa84) = 1;
  }
  return;
}
