/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048a1b8` (_code @ 0x48a1b8, 0x1a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00162790(int, unsigned int, unsigned char [64]);
int FUN_00163aa4(int);
int FUN_00164b5c(int, int, int, int, int, int);
int vec2GetXInt(...);
int efctSetSpeed(void);
int FUN_00168594(unsigned char [64], int);
int FUN_0016c69c(unsigned int, int);
int FUN_0016c6f0(unsigned int, int, unsigned int);
int FUN_00183bb0(void);
int words2Copy(int, float *);
int VectorSignedToFloat(...);
int rt_memcpy_w(unsigned char [64], unsigned char *, int);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_1_stack;

extern unsigned char DAT_005326f8; /* 0x5326f8 */
extern unsigned char DAT_00587f10; /* 0x587f10 */
extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: vec2GetXInt. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_00168594. */
extern unsigned int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c69c. */
/* Supplied declaration required: FUN_0016c6f0. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: words2Copy. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0048a1b8(int param_1)

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
  
  words2Copy(param_1 + 0x4d0,&temp_v5);
  temp_v0 = FUN_001692ac(1,0);
  FUN_0016c6f0(g_renderCtx,3,temp_v0);
  efctSetSpeed();
  FUN_00183bb0();
  temp_v0 = vec2GetXInt();
  temp_v3 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00164b5c(2,0x13,0x1c,(int)(temp_v3 + temp_v5),(int)temp_v6,0xd3);
  temp_v1 = FUN_001834a4(0x13,0x111b);
  rt_memcpy_w(temp_v4,&DAT_005326f8,0x2d);
  temp_v3 = 0.0f;
  FUN_00168594(temp_v4,2);
  VectorSignedToFloat(((int)**(short **)(temp_v1 + 0xc) - (int)temp_v3) / 2,(unsigned char)(in_fpscr >> 0x16) & 3
                     );
  temp_v2 = vec2GetXInt(param_1 + 0x136c,(int)temp_v3);
  VectorSignedToFloat(temp_v2 + *(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(2,(*(unsigned int *)((unsigned char *)&DAT_00587f10 + 0xc)),temp_v4);
  FUN_0016c69c(g_renderCtx,3);
  efctSetSpeed();
  FUN_00163aa4(param_1 + 0x136c);
  if ((*(char *)(param_1 + 0x136a) != '\0') && (*(char *)(param_1 + 0x13f6) != '\0')) {
    *(unsigned char *)(param_1 + 0x1368) = 1;
  }
  return;
}

} /* extern "C" */
