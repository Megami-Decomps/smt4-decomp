/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f62d0` (_code @ 0x2f62d0, 0x19c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int FUN_00205020(); /* 0x205020 */
extern int FUN_002eff30(); /* 0x2eff30 */
extern unsigned char LAB_002f64d4; /* 0x2f64d4 */
extern unsigned int *DAT_0043df98; /* 0x43df98 */

extern unsigned int FUN_00263e48(char *);
/* Supplied declaration required: FUN_00298fec. */
extern unsigned int FUN_0029a2d0(char *, unsigned int);
/* Supplied declaration required: FUN_002a0c54. */
/* Supplied declaration required: FUN_002c1774. */
/* Supplied declaration required: FUN_002c1f28. */
/* Supplied declaration required: FUN_002c1ffc. */
/* Supplied declaration required: FUN_002c20a8. */
/* Supplied declaration required: FUN_002c2210. */
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c5978. */


unsigned int FUN_002f62d0(void)

{
/* irregular: 11 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned int temp_v0;
  
  if (DAT_0043df98 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x574,1);
    DAT_0043df98 = puVar1;
    FUN_002c4b30(puVar1,0x574);
    FUN_002c2210(puVar1 + 1,1);
    puVar1[0x143] = 0;
    puVar1[0x144] = 0;
    puVar1[0x145] = 0;
    puVar1[0x146] = 0;
    puVar1[0x147] = 0;
    puVar1[0x148] = 0x40a00000;
    puVar1[0x14c] = 0x41f00000;
    puVar1[0x14d] = 0x3f800000;
    puVar1[0x14e] = 0x461c4000;
    puVar1[0x149] = 0;
    puVar1[0x14a] = 0x3f800000;
    puVar1[0x14b] = 0;
    puVar1[0x14f] = 0x3fd55555;
    puVar1[0x154] = 0x40a00000;
    FUN_002c1774(puVar1 + 1);
    FUN_002c20a8(puVar1 + 1,puVar1 + 0x143,puVar1 + 0x146,puVar1 + 0x149);
    FUN_002c1ffc(puVar1 + 1,1);
    FUN_00298fec(puVar1 + 1);
    puVar2 = &LAB_002f64d4;
    FUN_002c5978(&LAB_002f64d4,2,0,0,FUN_00205020,FUN_002eff30,puVar1);
    *puVar1 = (unsigned int)puVar2;
    FUN_002c1f28();
    puVar1[0x159] = 1;
    puVar1[0x15a] = 0;
    FUN_002a0c54("event/oc/oc_loop.bcenv",0);
    puVar1[0x156] = 0;
    temp_v0 = FUN_00263e48("event/oc/oc_loop.bccam");
    puVar1[0x157] = temp_v0;
    temp_v0 = FUN_00263e48("event/oc/oc_start.bccam");
    puVar1[0x158] = temp_v0;
    temp_v0 = FUN_0029a2d0("event/oc/oc_loop.bam",0x38);
    puVar1[0x155] = temp_v0;
    puVar1[0x15c] = 1;
  }
  return *DAT_0043df98;
}
