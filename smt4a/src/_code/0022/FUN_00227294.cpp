/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00227294` (_code @ 0x227294, 0x174 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int FUN_001835b4(int, int, int, int, int, int);
int jobGetScalarValue(void);
int FUN_00281000(...);
int FUN_0032cdc8(...);
int VectorSignedToFloat(unsigned int, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

extern int g_camp; /* 0x57f108 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: jobGetScalarValue. */
/* Supplied declaration required: FUN_00281000. */
/* Supplied declaration required: FUN_0032cdc8. */


void FUN_00227294(int param_1,int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int in_fpscr;
  unsigned char temp_v2 [24];
  
  if ((g_camp != 0) &&
     (*(char *)(g_camp + 0x1b20) != '\0' && *(char *)(g_camp + 0x1b20) != '\x04')) {
    jobGetScalarValue();
    VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    efctSetSpeed();
    FUN_001835b4(2,0x14,0x5ca,param_1,param_2,0xb);
    FUN_001835b4(2,0x14,0x5cb,param_1,param_2,0xb);
    FUN_001835b4(2,0x14,0x5cc,param_1,param_2,0xb);
    FUN_001835b4(2,0x14,0x5cd,param_1,param_2,0xb);
    temp_v0 = FUN_001834a4(0x14,0x5ca);
    temp_v1 = FUN_001834a4(0x14,0x5ce);
    FUN_00281000(temp_v2,3,3,(int)*(short *)(temp_v1 + 8),
                 (int)(short)(*(short *)(temp_v1 + 10) + (*(unsigned short *)(temp_v0 + 6) & 0x7fff)));
    FUN_0032cdc8(2,0x14,0x5ca,
                 ((*(short *)(temp_v1 + 8) + param_1) - (int)*(short *)(temp_v0 + 8)) -
                 (*(unsigned short *)(temp_v0 + 6) & 0xffff7fff),
                 (*(short *)(temp_v1 + 10) + param_2) - (int)*(short *)(temp_v0 + 10),0xb,temp_v2);
    efctSetSpeed();
  }
  return;
}

} /* extern "C" */
