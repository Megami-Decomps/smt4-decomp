/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f6314` (_code @ 0x2f6314, 0x19c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00298d50(...);
int FUN_002a09b4(...);
int FUN_002c159c(...);
int FUN_002c1d5c(...);
int FUN_002c1e30(...);
int FUN_002c1edc(...);
int FUN_002c2044(...);
int FUN_002c4938(...);
int FUN_002c498c(...);
int FUN_002c5788(...);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int FUN_00205184(...); /* 0x205184 */
extern int FUN_002eff7c(...); /* 0x2eff7c */
extern unsigned char LAB_002f6514; /* 0x2f6514 */
extern unsigned int *DAT_0043df98; /* 0x43df98 */

extern unsigned int FUN_00263c1c(char *);
/* Supplied declaration required: FUN_00298d50. */
extern unsigned int FUN_0029a034(char *, unsigned int);
/* Supplied declaration required: FUN_002a09b4. */
/* Supplied declaration required: FUN_002c159c. */
/* Supplied declaration required: FUN_002c1d5c. */
/* Supplied declaration required: FUN_002c1e30. */
/* Supplied declaration required: FUN_002c1edc. */
/* Supplied declaration required: FUN_002c2044. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c5788. */


unsigned int FUN_002f6314(void)

{
/* irregular: 12 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned int temp_v0;
  
  if (DAT_0043df98 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    FUN_002c498c(0x100,0x100,0,0x574,1);
    DAT_0043df98 = puVar1;
    FUN_002c4938();
    FUN_002c2044(puVar1 + 1,1);
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
    FUN_002c159c(puVar1 + 1);
    FUN_002c1edc(puVar1 + 1,puVar1 + 0x143,puVar1 + 0x146,puVar1 + 0x149);
    FUN_002c1e30(puVar1 + 1,1);
    FUN_00298d50(puVar1 + 1);
    puVar2 = &LAB_002f6514;
    FUN_002c5788(&LAB_002f6514,2,0,0,FUN_00205184,FUN_002eff7c,puVar1);
    *puVar1 = (unsigned int)puVar2;
    FUN_002c1d5c();
    puVar1[0x159] = 1;
    puVar1[0x15a] = 0;
    FUN_002a09b4("event/oc/oc_loop.bcenv",0);
    puVar1[0x156] = 0;
    temp_v0 = FUN_00263c1c("event/oc/oc_loop.bccam");
    puVar1[0x157] = temp_v0;
    temp_v0 = FUN_00263c1c("event/oc/oc_start.bccam");
    puVar1[0x158] = temp_v0;
    temp_v0 = FUN_0029a034("event/oc/oc_loop.bam",0x38);
    puVar1[0x155] = temp_v0;
    puVar1[0x15c] = 1;
  }
  return *DAT_0043df98;
}

} /* extern "C" */
