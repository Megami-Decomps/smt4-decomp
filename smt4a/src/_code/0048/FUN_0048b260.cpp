/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048b260` (_code @ 0x48b260, 0x1a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00162790(...);
int FUN_00163aa4(...);
int FUN_00164b5c(...);
int FUN_001654d8(...);
int FUN_001677c0(...);
int FUN_00168594(...);
int FUN_0016c69c(...);
int FUN_0016c6f0(...);
int FUN_00183bb0(...);
int FUN_0049359c(...);
int VectorSignedToFloat(...);
int rt_memcpy_w(...);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_1_stack;

extern unsigned int DAT_00587f1c; /* 0x587f1c */
extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: FUN_001654d8. */
/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_00168594. */
extern unsigned int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c69c. */
/* Supplied declaration required: FUN_0016c6f0. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_0049359c. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0048b260(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int in_fpscr;
  float temp_v3;
  unsigned char temp_v4 [80];
  float temp_v5;
  float temp_v6;
  
  FUN_0049359c(param_1 + 0x4d0,&temp_v5);
  temp_v0 = FUN_001692ac(1,0);
  FUN_0016c6f0(DAT_0059dbb4,3,temp_v0);
  FUN_001677c0();
  FUN_00183bb0();
  temp_v0 = FUN_001654d8();
  temp_v3 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00164b5c(2,0x13,0x1c,(int)(temp_v3 + temp_v5),(int)temp_v6,0xd3);
  temp_v1 = FUN_001834a4(0x13,0x111b);
  rt_memcpy_w(temp_v4,
              "沂膂邂邂薂銂䂁掂薂鎂钂覂躂膂钂覂辂躂䚁䂁璂躂讂躂辂鞂躂",
              0x37);
  temp_v3 = 0.0f;
  FUN_00168594(temp_v4,2);
  VectorSignedToFloat(((int)**(short **)(temp_v1 + 0xc) - (int)temp_v3) / 2,(unsigned char)(in_fpscr >> 0x16) & 3
                     );
  temp_v2 = FUN_001654d8(param_1 + 0x136c,(int)temp_v3);
  VectorSignedToFloat(temp_v2 + *(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(2,DAT_00587f1c,temp_v4);
  FUN_0016c69c(DAT_0059dbb4,3);
  FUN_001677c0();
  FUN_00163aa4(param_1 + 0x136c);
  if ((*(char *)(param_1 + 0x136a) != '\0') && (*(char *)(param_1 + 0x13f6) != '\0')) {
    *(unsigned char *)(param_1 + 0x1368) = 1;
  }
  return;
}

} /* extern "C" */
