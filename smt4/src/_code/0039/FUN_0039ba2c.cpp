/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039ba2c` (_code @ 0x39ba2c, 0x190 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00231bb8(int, float *);
int FUN_0028f4b4(unsigned char [64], int);
int FUN_002be5a4(int, unsigned int, unsigned char [64]);
int FUN_002bed3c(void);
int FUN_002beda4(...);
int FUN_002bedb0(unsigned int, int);
int FUN_002bee04(unsigned int, int, unsigned int);
int FUN_002bf380(int, int, int, int, int, int);
int FUN_002bf538(void);
int FUN_002bf818(int);
int VectorSignedToFloat(...);
int rt_memcpy_w(unsigned char [64], unsigned char *, int);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_1_stack;

extern unsigned char DAT_00404c48; /* 0x404c48 */
extern unsigned int DAT_0044cdd4; /* 0x44cdd4 */
extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00231bb8. */
/* Supplied declaration required: FUN_0028f4b4. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002beda4. */
/* Supplied declaration required: FUN_002bedb0. */
/* Supplied declaration required: FUN_002bee04. */
/* Supplied declaration required: FUN_002bf380. */
extern int FUN_002bf4f8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf538. */
/* Supplied declaration required: FUN_002bf818. */
extern unsigned int FUN_002c5d80(unsigned int, unsigned int);
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0039ba2c(int param_1)

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
  
  FUN_00231bb8(param_1 + 0x164,&temp_v5);
  temp_v0 = FUN_002c5d80(1,0);
  FUN_002bee04(DAT_0044ea00,3,temp_v0);
  FUN_002bf538();
  FUN_002bed3c();
  temp_v0 = FUN_002beda4();
  temp_v3 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002bf380(2,0x1c,0x1c,(int)(temp_v3 + temp_v5),(int)temp_v6,0xd3);
  temp_v1 = FUN_002bf4f8(0x1c,0x111b);
  rt_memcpy_w(temp_v4,&DAT_00404c48,0x2d);
  temp_v3 = 0.0f;
  FUN_0028f4b4(temp_v4,2);
  VectorSignedToFloat(((int)**(short **)(temp_v1 + 0xc) - (int)temp_v3) / 2,(unsigned char)(in_fpscr >> 0x16) & 3
                     );
  temp_v2 = FUN_002beda4(param_1 + 0xa88,(int)temp_v3);
  VectorSignedToFloat(temp_v2 + *(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002be5a4(2,DAT_0044cdd4,temp_v4);
  FUN_002bedb0(DAT_0044ea00,3);
  FUN_002bf538();
  FUN_002bf818(param_1 + 0xa88);
  if ((*(char *)(param_1 + 0xa86) != '\0') && (*(char *)(param_1 + 0xb12) != '\0')) {
    *(unsigned char *)(param_1 + 0xa84) = 1;
  }
  return;
}

} /* extern "C" */
