/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001471a0` (_code @ 0x1471a0, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern unsigned char LAB_00158e68; /* 0x158e68 */
extern unsigned char LAB_00159e68; /* 0x159e68 */
extern unsigned char LAB_00161d54; /* 0x161d54 */
extern unsigned char LAB_00161d64; /* 0x161d64 */
extern unsigned char LAB_00161d70; /* 0x161d70 */
extern unsigned int *DAT_00646084; /* 0x646084 */
extern unsigned char DAT_00646088; /* 0x646088 */
extern unsigned int DAT_006462a0; /* 0x6462a0 */

extern unsigned int FUN_00159f64(unsigned int **);
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_002fb0d4. */


unsigned int FUN_001471a0(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char *puVar2;
  unsigned int *temp_v1;
  unsigned int uStack_44;
  unsigned int temp_v2;
  unsigned int uStack_3c;
  unsigned char *temp_v3;
  int temp_v4;
  unsigned char *temp_v5;
  unsigned char *temp_v6;
  unsigned char *temp_v7;
  
  temp_v1 = (unsigned int *)0x0;
  temp_v0 = FUN_00159f64(&temp_v1);
  if ((temp_v0 & 0x80000000) == 0) {
    DAT_00646084 = temp_v1;
  }
  if (-1 < (int)temp_v0) {
    puVar2 = &DAT_00646088;
    temp_v4 = 4;
    temp_v5 = &LAB_00161d54;
    temp_v1 = &DAT_006462a0;
    temp_v3 = &LAB_00159e68;
    temp_v6 = &LAB_00161d70;
    temp_v7 = &LAB_00161d64;
    uStack_44 = 0x5109d500;
    temp_v2 = 0xfffffffe;
    uStack_3c = 0;
    FUN_002fb0d4(&DAT_00646088,&temp_v4,&LAB_00158e68,&temp_v3);
    if ((int)puVar2 < 0) {
      FUN_002e3140();
    }
  }
  return temp_v0;
}
