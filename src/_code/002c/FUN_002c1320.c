/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1320` (_code @ 0x2c1320, 0x15c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned short uRam0000003e; /* 0x3e */
extern unsigned int DAT_0044e370; /* 0x44e370 */
extern unsigned int DAT_0044e374; /* 0x44e374 */

/* Supplied declaration required: FUN_0012a69c. */
extern int FUN_002bb420(void);
/* Supplied declaration required: FUN_002bb480. */
/* Supplied declaration required: FUN_002bb490. */
extern int FUN_002bb5c4(unsigned int, unsigned int *);
extern int FUN_002bb608(void);
/* Supplied declaration required: FUN_002bb648. */
/* Supplied declaration required: FUN_002bb6b8. */
/* Supplied declaration required: FUN_002c0f28. */
/* Supplied declaration required: FUN_002c14f4. */


void FUN_002c1320(int param_1,unsigned char *param_2)

{
/* irregular: 7 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3 [2];
  unsigned int temp_v4;
  unsigned int uStack_24;
  
  temp_v2 = 0;
  if (param_2 != (unsigned char *)0x0) {
    *param_2 = 0;
  }
  temp_v1 = FUN_002bb608();
  if (temp_v1 != 0) {
    FUN_002bb6b8();
    temp_v1 = FUN_002bb5c4(0x400,temp_v3);
    if (temp_v1 < 0) {
      FUN_002c14f4(temp_v1,0x2c1364);
    }
    FUN_002bb648();
    if ((temp_v3[0] & 0xff) == 0) {
      uRam0000003e = (short)temp_v2;
      return;
    }
  }
  temp_v1 = FUN_002bb420();
  if (temp_v1 != 0) {
    FUN_002bb6b8();
    temp_v1 = FUN_002bb5c4(0x200,temp_v3);
    if (temp_v1 < 0) {
      FUN_002c14f4(temp_v1,0x2c13a8);
    }
    FUN_002bb648();
    if ((char)temp_v3[0] == '\0') {
      uRam0000003e = (short)temp_v2;
      return;
    }
  }
  FUN_002bb480(3);
  while( 1 ) {
    FUN_002bb6b8();
    temp_v2 = param_1;
    FUN_0012a69c();
    FUN_002bb648();
    if ((temp_v2 != -0x375f3010 && temp_v2 != -0x1f5f33f8) && temp_v2 != -0x375f33fe) break;
    FUN_002bb490(10000000,0);
  }
  if (temp_v2 == 0) {
    temp_v4 = DAT_0044e370;
    uStack_24 = DAT_0044e374;
    temp_v3[0] = 0;
    temp_v0 = 0;
    FUN_002c0f28(0,0,0);
    if (param_2 != (unsigned char *)0x0) {
      *param_2 = temp_v0;
    }
  }
  uRam0000003e = (short)temp_v2;
  return;
}
