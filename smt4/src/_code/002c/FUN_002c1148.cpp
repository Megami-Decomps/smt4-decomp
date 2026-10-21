/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1148` (_code @ 0x2c1148, 0x160 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012a778(void);
int FUN_002bb140(int);
int threadSleepDuration(int, int);
int nn_applet_CTR_detail_CloseSession(void);
int FUN_002bb378(void);
int FUN_002c0d50(int, int, int);
int FUN_002c131c(int, int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned int DAT_0044e370; /* 0x44e370 */
extern unsigned int DAT_0044e374; /* 0x44e374 */

/* Supplied declaration required: FUN_0012a778. */
extern int FUN_002bb0e0(void);
/* Supplied declaration required: FUN_002bb140. */
/* Supplied declaration required: threadSleepDuration. */
extern int FUN_002bb284(unsigned int, unsigned int *);
extern int FUN_002bb2c8(void);
/* Supplied declaration required: nn_applet_CTR_detail_CloseSession. */
/* Supplied declaration required: FUN_002bb378. */
/* Supplied declaration required: FUN_002c0d50. */
/* Supplied declaration required: FUN_002c131c. */


int FUN_002c1148(int param_1,unsigned char *param_2)

{
/* irregular: 7 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2 [2];
  unsigned int temp_v3;
  unsigned int uStack_24;
  
  if (param_2 != (unsigned char *)0x0) {
    *param_2 = 0;
  }
  temp_v1 = FUN_002bb2c8();
  if (temp_v1 != 0) {
    FUN_002bb378();
    temp_v1 = FUN_002bb284(0x400,temp_v2);
    if (temp_v1 < 0) {
      FUN_002c131c(temp_v1,0x2c118c);
    }
    nn_applet_CTR_detail_CloseSession();
    if ((temp_v2[0] & 0xff) == 0) {
      return 0;
    }
  }
  temp_v1 = FUN_002bb0e0();
  if (temp_v1 != 0) {
    FUN_002bb378();
    temp_v1 = FUN_002bb284(0x200,temp_v2);
    if (temp_v1 < 0) {
      FUN_002c131c(temp_v1,0x2c11d0);
    }
    nn_applet_CTR_detail_CloseSession();
    if ((char)temp_v2[0] == '\0') {
      return 0;
    }
  }
  FUN_002bb140(3);
  while( 1 ) {
    FUN_002bb378();
    temp_v1 = param_1;
    FUN_0012a778();
    nn_applet_CTR_detail_CloseSession();
    if ((temp_v1 != -0x375f3010 && temp_v1 != -0x1f5f33f8) && temp_v1 != -0x375f33fe) break;
    threadSleepDuration(10000000,0);
  }
  if (temp_v1 == 0) {
    temp_v3 = DAT_0044e370;
    uStack_24 = DAT_0044e374;
    temp_v2[0] = 0;
    temp_v0 = 0;
    FUN_002c0d50(0,0,0);
    if (param_2 != (unsigned char *)0x0) {
      *param_2 = temp_v0;
    }
  }
  return temp_v1;
}

} /* extern "C" */
