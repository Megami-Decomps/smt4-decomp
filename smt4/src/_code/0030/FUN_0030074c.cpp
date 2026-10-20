/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030074c` (_code @ 0x30074c, 0x1a8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002505c0(...);
int FUN_00250720(int);
int FUN_002551ac(int, unsigned int, int, int, unsigned int, int, unsigned int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int);

/* stack frame of void: 20 slot(s), 80 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
} void_stack;

extern unsigned int DAT_0043427c; /* 0x43427c */

/* Supplied declaration required: FUN_002505c0. */
/* Supplied declaration required: FUN_00250720. */
/* Supplied declaration required: FUN_002551ac. */
extern unsigned int FUN_0027e928(unsigned int);
extern int FUN_002939f4(void);
extern int FUN_00296cc8(unsigned int);


unsigned int FUN_0030074c(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int *puVar7;
  int temp_v6;
  
  temp_v1 = FUN_00296cc8(0);
  temp_v2 = FUN_00296cc8(1);
  temp_v3 = FUN_002939f4();
  temp_v4 = FUN_0027e928(DAT_0043427c);
  temp_v5 = 0;
  do {
    puVar7 = (unsigned int *)(*(int *)(temp_v3 + 0x1fc0) + temp_v5 * 0x288);
    if ((((*puVar7 & 1) != 0) && ((*puVar7 & 0x40) == 0)) && (-1 < (short)puVar7[2])) {
      if (temp_v2 != 0) {
        if (temp_v2 != 1) {
          temp_v6 = 0;
          if (temp_v2 == 2) {
            temp_v6 = temp_v1;
          }
        }
        else {
          temp_v6 = ((short)puVar7[0x6e] * temp_v1) / 100;
        }
      }
      else {
        temp_v6 = (*(short *)((int)puVar7 + 0x1ba) * temp_v1) / 100;
      }
      FUN_00250720(temp_v3);
      temp_v0 = temp_v5 << 3;
      FUN_002551ac(0,temp_v4,*(int *)(temp_v3 + 0x1e98) + (short)puVar7[2] * 0x114,0,0xffffffff,temp_v6,
                   0xffffffff,(int)(short)puVar7[0x6d],(int)*(short *)((int)puVar7 + 0x1b6),0,0,0,0,
                   1,0,temp_v0,temp_v0,temp_v0,temp_v0,1,0,1,1,0,1);
      FUN_002505c0(0,temp_v4,0x10001b5,0,0,0,0);
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 4);
  return 1;
}

} /* extern "C" */
