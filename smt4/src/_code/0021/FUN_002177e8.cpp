/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002177e8` (_code @ 0x2177e8, 0x160 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002505c0(...);
int FUN_00250680(...);
int FUN_00250720(void);
int FUN_002551ac(int, unsigned int, int, int, int, unsigned int, unsigned int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0026e61c(...);
int FUN_00282924(int, int);
int FUN_002939f4(void);
int FUN_003ddbcc(...);
int FUN_003ddc70(...);

/* stack frame of void: 17 slot(s), 68 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} void_stack;

extern unsigned int DAT_0043427c; /* 0x43427c */

/* Supplied declaration required: FUN_002505c0. */
/* Supplied declaration required: FUN_00250680. */
/* Supplied declaration required: FUN_00250720. */
/* Supplied declaration required: FUN_002551ac. */
/* Supplied declaration required: FUN_0026e61c. */
extern unsigned int FUN_0027e928(unsigned int);
/* Supplied declaration required: FUN_00282924. */
/* Supplied declaration required: FUN_002939f4. */
extern int FUN_00296cc8(unsigned int);
extern int FUN_002a8740(int);
/* Supplied declaration required: FUN_003ddbcc. */
/* Supplied declaration required: FUN_003ddc70. */


unsigned int FUN_002177e8(void)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_0027e928(DAT_0043427c);
  if (temp_v0 < 0x6d) {
    temp_v2 = FUN_002939f4();
    temp_v3 = *(int *)(temp_v2 + 0x1e98) + temp_v0 * 0x114;
    temp_v2 = FUN_002939f4();
    FUN_00282924(temp_v2,temp_v0);
    FUN_002939f4();
    FUN_00250720();
    FUN_002551ac(0,temp_v1,temp_v3,0,(int)*(short *)(temp_v2 + 0x1b6),0xffffffff,0xffffffff,
                 (int)*(short *)(temp_v2 + 0x1b4),(int)*(short *)(temp_v2 + 0x1b6),0,0,1,0,0,0,0,0,0,0,1
                 ,0,1,1,0,1);
    FUN_00250680(0x19,temp_v1,temp_v3,0);
  }
  else {
    temp_v0 = FUN_002a8740(temp_v0 - 0x6d);
    *(unsigned short *)(temp_v0 + 0x2a) = 0;
    FUN_0026e61c(temp_v0,1);
    FUN_003ddc70(0,temp_v1,0xf);
  }
  FUN_002505c0(0,temp_v1,0x1000178,0,0,0,0);
  FUN_003ddbcc(0,temp_v1,0,1,2,0xb4,3);
  return 1;
}

} /* extern "C" */
