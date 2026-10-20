/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_applet_CTR_detail_CloseApplication` (_code @ 0x2c5454, 0x150 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011d888(void);
int FUN_002bb140(int);
int FUN_002bb150(int, int);
int FUN_002bb180(void);
int FUN_002bb194(int);
int nn_applet_CTR_detail_CloseSession(void);
int FUN_002bb378(void);
int FUN_002bbb2c(...);
int FUN_002c1148(int, int);
int software_interrupt(int);

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern int FUN_0011d1fc(void);
extern unsigned int FUN_0011d744(unsigned char *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0011d888. */
/* Supplied declaration required: FUN_002bb140. */
/* Supplied declaration required: FUN_002bb150. */
/* Supplied declaration required: FUN_002bb180. */
/* Supplied declaration required: FUN_002bb194. */
/* Supplied declaration required: nn_applet_CTR_detail_CloseSession. */
/* Supplied declaration required: FUN_002bb378. */
/* Supplied declaration required: FUN_002bbb2c. */
/* Supplied declaration required: FUN_002c1148. */
extern void nn_applet_CTR_CloseAppletHook(void);


unsigned int nn_applet_CTR_detail_CloseApplication(unsigned char *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0011d1fc();
  if (temp_v0 != 9) {
    FUN_002c1148(0,0);
    FUN_002bb140(9);
    while( 1 ) {
      FUN_002bb378();
      temp_v0 = 1;
      FUN_0011d888();
      nn_applet_CTR_detail_CloseSession();
      if ((temp_v0 != -0x375f3010 && temp_v0 != -0x1f5f33f8) && temp_v0 != -0x375f33fe) break;
      FUN_002bb150(10000000,0);
    }
    if (temp_v0 < 0) {
      FUN_002bbb2c(temp_v0,0x2c54d0);
    }
  }
  nn_applet_CTR_CloseAppletHook();
  FUN_002bb194(0);
  while( 1 ) {
    FUN_002bb378();
    temp_v1 = FUN_0011d744(param_1,param_2,param_3);
    nn_applet_CTR_detail_CloseSession();
    if ((temp_v1 != 0xc8a0cff0 && temp_v1 != 0xe0a0cc08) && temp_v1 != 0xc8a0cc02) break;
    FUN_002bb150(10000000,0);
  }
  if ((int)temp_v1 < 0) {
    FUN_002bbb2c(temp_v1,0x2c5528);
  }
  FUN_002bb180();
  software_interrupt(3);
  return temp_v1;
}

} /* extern "C" */
