/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a6c64` (_code @ 0x3a6c64, 0x16c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(unsigned char [68], unsigned char *);
int FUN_0017ffa8(...);
int FUN_00180310(...);
int FUN_001835b4(int, int, int, int, int, int);
int FUN_00183bb0(void);
int FUN_00184e64(unsigned int);

/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_5_stack;

extern unsigned char LAB_003a6dd0; /* 0x3a6dd0 */
extern unsigned char LAB_003a6dd8; /* 0x3a6dd8 */
extern unsigned char LAB_003a6de4; /* 0x3a6de4 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_0017ffa8. */
/* Supplied declaration required: FUN_00180310. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
extern unsigned int FUN_0018439c(void);
/* Supplied declaration required: FUN_00184e64. */


void FUN_003a6c64(int param_1,int param_2,int param_3,int param_4,int param_5)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [68];
  
  temp_v0 = FUN_0018439c();
  if (param_2 < 0) {
    FUN_00100388(temp_v3,&LAB_003a6dd0);
    temp_v2 = 0xdc0f14ff;
  }
  else {
    FUN_00100388(temp_v3,&LAB_003a6dd8);
    temp_v2 = 0x72e027ff;
  }
  if (param_1 != 0xe) {
    FUN_001835b4(2,0xb,0x3f5,param_3,param_4,param_5);
    FUN_0017ffa8(2,0xb,temp_v0,param_3,param_4,param_5);
    FUN_00184e64(temp_v2);
    temp_v1 = FUN_001834a4(0xb,0x402);
    FUN_00180310(2,*(short *)(temp_v1 + 8) + param_3,*(short *)(temp_v1 + 10) + param_4,0,1,param_5 + 1,
                 temp_v3);
    temp_v1 = FUN_001834a4(0xb,0x401);
    if (param_2 < 0) {
      param_2 = -param_2;
    }
    FUN_00180310(2,*(short *)(temp_v1 + 8) + param_3,*(short *)(temp_v1 + 10) + param_4,0,1,param_5 + 1,
                 &LAB_003a6de4,param_2);
  }
  else {
    FUN_00184e64(temp_v2);
    FUN_001835b4(2,0xb,0x3f5,param_3,param_4,param_5);
    FUN_0017ffa8(2,0xb,0x41e,param_3,param_4,param_5);
  }
  FUN_00183bb0();
  return;
}

} /* extern "C" */
