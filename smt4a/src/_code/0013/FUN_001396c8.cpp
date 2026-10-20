/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001396c8` (_code @ 0x1396c8, 0x154 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001400ac(void);
int FUN_00146898(void);
int addressBlockAllocate(unsigned int *, int);
int FUN_00146910(int);
int FUN_00146ac0(void);
int FUN_00146b14(int);
int nnosInitAddressSpaceOnce(int, unsigned int);
int FUN_00146c28(void);
int FUN_00159110(unsigned int *, unsigned int, unsigned int, int);
int nn_os_CriticalSection_Initialize(unsigned int *);
int sysMemClear(unsigned int *, int);
int rt_memclr(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char DAT_00558414; /* 0x558414 */
extern unsigned int *DAT_005b4070; /* 0x5b4070 */
extern unsigned int DAT_00640414; /* 0x640414 */
extern unsigned int DAT_00640418; /* 0x640418 */
extern unsigned int DAT_0064041c; /* 0x64041c */
extern unsigned int DAT_00640420; /* 0x640420 */
extern unsigned char DAT_00640424; /* 0x640424 */
extern unsigned char *DAT_00640430; /* 0x640430 */
extern unsigned int DAT_00640434; /* 0x640434 */
extern unsigned int DAT_00640438; /* 0x640438 */
extern unsigned int DAT_0064043c; /* 0x64043c */
extern unsigned int DAT_00640440; /* 0x640440 */
extern unsigned int DAT_00640444; /* 0x640444 */
extern unsigned int DAT_00640448; /* 0x640448 */
extern unsigned int DAT_00640484; /* 0x640484 */
extern unsigned int DAT_00640488; /* 0x640488 */
extern unsigned int DAT_0064048c; /* 0x64048c */
extern unsigned int DAT_00640490; /* 0x640490 */
extern unsigned char *DAT_0064049c; /* 0x64049c */
extern unsigned int DAT_006404a0; /* 0x6404a0 */
extern unsigned int DAT_006404a4; /* 0x6404a4 */
extern unsigned int DAT_006404a8; /* 0x6404a8 */
extern unsigned int DAT_006404ac; /* 0x6404ac */
extern unsigned int DAT_006404b0; /* 0x6404b0 */
extern unsigned int DAT_006404b4; /* 0x6404b4 */
extern unsigned int DAT_006404f0; /* 0x6404f0 */
extern unsigned int DAT_006404f4; /* 0x6404f4 */
extern unsigned int DAT_006404f8; /* 0x6404f8 */
extern unsigned int DAT_006404fc; /* 0x6404fc */

/* Supplied declaration required: FUN_001400ac. */
/* Supplied declaration required: FUN_00146898. */
/* Supplied declaration required: addressBlockAllocate. */
/* Supplied declaration required: FUN_00146910. */
extern int nnosGetAppMemAlloc(void);
/* Supplied declaration required: FUN_00146ac0. */
/* Supplied declaration required: FUN_00146b14. */
/* Supplied declaration required: nnosInitAddressSpaceOnce. */
/* Supplied declaration required: FUN_00146c28. */
/* Supplied declaration required: FUN_00159110. */
/* Supplied declaration required: nn_os_CriticalSection_Initialize. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: rt_memclr. */
extern void nn_init_InitializeAllocator(unsigned int);


void FUN_001396c8(void)

{
/* irregular: 12 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = nnosGetAppMemAlloc();
  temp_v2 = temp_v0;
  FUN_00146ac0();
  FUN_00146910((temp_v0 - temp_v2) - 0x3000000);
  FUN_00146b14(0x3000000);
  temp_v1 = FUN_00146898();
  nnosInitAddressSpaceOnce(0x8000000,temp_v1);
  FUN_00146c28();
  nn_init_InitializeAllocator(0x100000);
  FUN_001400ac();
  sysMemClear(&DAT_00640414,0x104);
  DAT_00640414 = 0;
  DAT_00640418 = 0;
  DAT_0064041c = 0;
  DAT_00640420 = 0;
  DAT_00640424 = 0;
  DAT_00640434 = 0;
  DAT_00640438 = 0;
  DAT_0064043c = 0;
  DAT_00640440 = 0;
  DAT_00640444 = 0;
  DAT_00640448 = 0;
  DAT_00640484 = 0;
  DAT_00640488 = 0;
  DAT_0064048c = 0;
  DAT_00640490 = 0xffffffff;
  DAT_006404a0 = 0;
  DAT_00640430 = &DAT_00558414;
  DAT_006404a4 = 0;
  DAT_006404a8 = 0;
  DAT_006404ac = 0;
  DAT_006404b0 = 0;
  DAT_006404b4 = 0;
  DAT_006404f0 = 0;
  DAT_006404f4 = 0;
  DAT_006404f8 = 0;
  DAT_006404fc = 0xffffffff;
  DAT_0064049c = &DAT_00558414;
  DAT_005b4070 = &DAT_00640414;
  temp_v2 = FUN_00146898();
  addressBlockAllocate(DAT_005b4070,temp_v2 - 0x200000);
  puVar1 = DAT_005b4070;
  DAT_005b4070[5] = DAT_005b4070[2];
  puVar1[6] = puVar1[3];
  rt_memclr();
  puVar1 = DAT_005b4070;
  FUN_00159110(DAT_005b4070 + 7,DAT_005b4070[5],DAT_005b4070[6],0x100);
  nn_os_CriticalSection_Initialize(puVar1 + 0x1d);
  return;
}

} /* extern "C" */
