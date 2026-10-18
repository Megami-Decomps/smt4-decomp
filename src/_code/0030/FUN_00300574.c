/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00300574` (_code @ 0x300574, 0x1c8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 21 slot(s), 84 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
} void_stack;

extern unsigned int DAT_0043427c; /* 0x43427c */

/* Supplied declaration required: FUN_002505c0. */
/* Supplied declaration required: FUN_00250720. */
/* Supplied declaration required: FUN_002551ac. */
extern unsigned int FUN_0027e928(unsigned int);
/* Supplied declaration required: FUN_002939f4. */
extern int FUN_00296cc8(unsigned int);


unsigned int FUN_00300574(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int *puVar8;
  
  temp_v1 = FUN_00296cc8(0);
  temp_v2 = FUN_00296cc8(1);
  temp_v3 = FUN_0027e928(DAT_0043427c);
  temp_v6 = 0;
  do {
    temp_v4 = FUN_002939f4();
    puVar8 = (unsigned int *)(*(int *)(temp_v4 + 0x1fc0) + temp_v6 * 0x288);
    if ((((*puVar8 & 1) != 0) && ((*puVar8 & 0x40) == 0)) && (-1 < (short)puVar8[2])) {
      if (temp_v2 != 0) {
        if (temp_v2 != 1) {
          temp_v4 = 0;
          if (temp_v2 == 2) {
            temp_v4 = temp_v1;
          }
        }
        else {
          temp_v4 = ((short)puVar8[0x6d] * temp_v1) / 100;
        }
      }
      else {
        temp_v4 = (*(short *)((int)puVar8 + 0x1b6) * temp_v1) / 100;
      }
      if ((short)puVar8[0x6d] <= temp_v4) {
        temp_v4 = (short)puVar8[0x6d] - 1;
      }
      FUN_002939f4();
      FUN_00250720();
      temp_v5 = FUN_002939f4();
      temp_v0 = temp_v6 << 3;
      FUN_002551ac(0,temp_v3,*(int *)(temp_v5 + 0x1e98) + (short)puVar8[2] * 0x114,0,temp_v4,0xffffffff,
                   0xffffffff,(int)(short)puVar8[0x6d],(int)*(short *)((int)puVar8 + 0x1b6),0,0,0,0,
                   1,0,temp_v0,temp_v0,temp_v0,temp_v0,1,0,1,1,0,1);
      FUN_002505c0(0,temp_v3,0x1000185,0,0,0,0);
    }
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 4);
  return 1;
}
