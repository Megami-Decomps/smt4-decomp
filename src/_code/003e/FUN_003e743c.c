/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e743c` (_code @ 0x3e743c, 0x174 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 15 slot(s), 27 byte(s) */
typedef struct {
    unsigned char sp1A; /* 0x1a: local_1a */
    unsigned char sp1B; /* 0x1b: local_1b */
    unsigned char sp1C; /* 0x1c: local_1c */
    unsigned char sp1D; /* 0x1d: local_1d */
    unsigned char sp1E; /* 0x1e: local_1e */
    unsigned char sp1F; /* 0x1f: local_1f */
    unsigned char sp20; /* 0x20: local_20 */
    unsigned char sp21; /* 0x21: local_21 */
    unsigned char sp22; /* 0x22: local_22 */
    unsigned char sp23; /* 0x23: local_23 */
    unsigned char sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spB0; /* 0xb0: local_b0 */
} param_4_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00235a4c. */
extern unsigned int FUN_002a7d80(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00379e08. */
/* Supplied declaration required: FUN_00379e28. */
/* Supplied declaration required: FUN_00379ea0. */
/* Supplied declaration required: FUN_0037b384. */
/* Supplied declaration required: FUN_0037fce8. */
/* Supplied declaration required: FUN_0037ffec. */
extern int FUN_003e6560(unsigned int, unsigned char *, unsigned int, unsigned int, unsigned int);
extern int FUN_003e66ec(unsigned char *, unsigned char *, unsigned int);


void FUN_003e743c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int in_fpscr;
  float temp_v2;
  unsigned char temp_v3 [4];
  int temp_v4;
  unsigned char temp_v5 [8];
  unsigned char temp_v6 [4];
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  unsigned char temp_v11;
  unsigned char temp_v12;
  unsigned char temp_v13;
  unsigned char temp_v14;
  unsigned char temp_v15;
  unsigned char temp_v16;
  unsigned char temp_v17;
  unsigned char temp_v18;
  unsigned char temp_v19;
  
  temp_v9 = 0;
  temp_v10 = 0;
  temp_v11 = 0;
  temp_v12 = 0;
  temp_v13 = 0;
  temp_v0 = FUN_003e6560(param_2,temp_v6,*param_4,param_4[1],param_4[2]);
  if (temp_v0 != 0) {
    temp_v1 = FUN_002a7d80(param_3,temp_v7);
    FUN_0037b384(temp_v5,temp_v1);
    temp_v0 = FUN_003e66ec(temp_v5,temp_v3,0);
    if (temp_v0 != 0) {
      temp_v0 = temp_v4;
      if (temp_v4 >= 3) {
        temp_v0 = 2;
      }
      FUN_0037fce8(temp_v0,param_4[5],param_4[6],param_4[7]);
      if (temp_v0 != 0) {
        *(char *)(temp_v0 + 0x126) = (char)param_4[1];
        *(unsigned char *)(temp_v0 + 0x127) = temp_v14;
        temp_v2 = (float)VectorSignedToFloat((unsigned int)temp_v15 * param_4[2] * param_4[2],
                                           (unsigned char)(in_fpscr >> 0x16) & 3);
        *(float *)(temp_v0 + 0x100) = temp_v2 * 4.881899e-07f;
        *(unsigned int *)(temp_v0 + 0x10c) = temp_v8;
        FUN_00379ea0(temp_v0 + 0x90,temp_v9);
        FUN_00379e08(temp_v0 + 0x90,temp_v12);
        FUN_00379e28(temp_v0 + 0x90,temp_v10);
        *(unsigned char *)(temp_v0 + 0xa8) = temp_v11;
        FUN_00235a4c(temp_v0 + 0x90,temp_v13);
        temp_v2 = (float)VectorSignedToFloat(((unsigned int)temp_v16 + param_4[4]) - 0x40,
                                           (unsigned char)(in_fpscr >> 0x16) & 3);
        *(float *)(temp_v0 + 0x104) = temp_v2 * 0.015873017f;
        *(unsigned char *)(temp_v0 + 0x128) = temp_v18;
        *(unsigned char *)(temp_v0 + 0xca) = temp_v17;
        *(unsigned char *)(temp_v0 + 0x129) = temp_v19;
        FUN_0037ffec(temp_v0,temp_v3,param_4[3],0);
      }
    }
  }
  return;
}
