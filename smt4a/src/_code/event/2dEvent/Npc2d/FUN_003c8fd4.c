/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c8fd4` (_code @ 0x3c8fd4, 0x1dc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int FUN_002897cc(); /* 0x2897cc */
extern int FUN_0034da3c(); /* 0x34da3c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0014afd0. */
/* Supplied declaration required: FUN_0014e38c. */
extern int FUN_00162ea4(void);
/* Supplied declaration required: FUN_00163060. */
extern int FUN_001834a4(unsigned int, unsigned char);
/* Supplied declaration required: FUN_00283498. */
/* Supplied declaration required: FUN_002e6354. */


void FUN_003c8fd4(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int in_fpscr;
  int temp_v2;
  unsigned long long temp_v3;
  
  piVar1 = (int *)0x100;
  FUN_00163060(0x100,0x100,0,0xbc,1);
  FUN_002e6354();
  temp_v3 = 0;
  piVar1[8] = 0x3f800000;
  piVar1[9] = 0x3f800000;
  piVar1[10] = 0;
  piVar1[0x12] = -1;
  piVar1[0x10] = 0x1c;
  piVar1[1] = 0x41;
  *piVar1 = param_1;
  *(unsigned char *)(piVar1 + 0x22) = 1;
  piVar1[0x23] = 0;
  piVar1[0x24] = 0;
  *(unsigned char *)(piVar1 + 0x25) = 0;
  *(unsigned char *)((int)piVar1 + 0x95) = 0;
  piVar1[0xd] = 0x3f800000;
  piVar1[0x1c] = 0;
  piVar1[0x1d] = 0;
  piVar1[0x1e] = 0;
  piVar1[0x1f] = 0;
  piVar1[0x20] = 0;
  piVar1[0x21] = 0;
  FUN_00283498();
  piVar1[0x16] = param_1;
  temp_v1 = 0;
  piVar1[0x11] = (unsigned int)*(unsigned short *)(param_1 + 0x24);
  do {
    while( 1 ) {
      temp_v0 = FUN_001834a4(0x27,*(unsigned char *)(temp_v1 + 0x52f4ec));
      temp_v2 = VectorSignedToFloat((int)*(short *)(temp_v0 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
      piVar1[temp_v1 * 2 + 0x26] = temp_v2;
      temp_v2 = VectorSignedToFloat((int)*(short *)(temp_v0 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
      piVar1[temp_v1 * 2 + 0x27] = temp_v2;
      if (temp_v1 != 0) break;
      if (*(short **)(temp_v0 + 0xc) != (short *)0x0) {
        temp_v2 = VectorSignedToFloat((int)**(short **)(temp_v0 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
        piVar1[0x2c] = temp_v2;
        temp_v0 = VectorSignedToFloat((int)*(short *)(*(int *)(temp_v0 + 0xc) + 2),
                                    (unsigned char)(in_fpscr >> 0x16) & 3);
        piVar1[0x2d] = temp_v0;
      }
      temp_v1 = 1;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 3);
  piVar1[0x28] = 0x42900000;
  piVar1[4] = 0x48;
  piVar1[10] = 0x3e87ae14;
  piVar1[7] = (int)temp_v3;
  piVar1[9] = (int)temp_v3;
  piVar1[0xf] = 5;
  piVar1[5] = (int)(float)piVar1[0x29];
  temp_v0 = FUN_00162ea4();
  if (temp_v0 != 0) {
    piVar1[3] = 1;
  }
  else {
    piVar1[3] = 0;
    FUN_0014afd0(piVar1[0x10],piVar1[0x11]);
    FUN_0014afd0(0x27,0);
  }
  piVar1[6] = 0x3e851eb8;
  FUN_0014e38c("EVE_2dTex",4,0,0,FUN_002897cc,FUN_0034da3c,piVar1);
  return;
}
