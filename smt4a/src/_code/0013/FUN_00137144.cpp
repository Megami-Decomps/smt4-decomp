/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00137144` (_code @ 0x137144, 0x20c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013f1b8(...);
int FUN_0013f578(...);
int FUN_001402d0(...);
int FUN_001409e4(...);
int FUN_0014384c(...);
int FUN_001445a0(...);
int FUN_00144efc(...);
int FUN_00145280(...);
int FUN_0014bf2c(...);
int FUN_0015155c(...);
int FUN_001527d8(...);

typedef int romwright_code(...);
/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char LAB_00137338; /* 0x137338 */
extern int FUN_0013f7c4(...); /* 0x13f7c4 */
extern int FUN_00145534(...); /* 0x145534 */
extern int FUN_001456fc(...); /* 0x1456fc */
extern int FUN_001457b0(...); /* 0x1457b0 */
extern unsigned int *DAT_0057f58c; /* 0x57f58c */
extern unsigned int *DAT_0057f590; /* 0x57f590 */
extern unsigned int *DAT_0057f594; /* 0x57f594 */
extern romwright_code *pcRam005b3d84; /* 0x5b3d84 */

/* Supplied declaration required: FUN_0013f1b8. */
/* Supplied declaration required: FUN_0013f578. */
/* Supplied declaration required: FUN_001402d0. */
/* Supplied declaration required: FUN_001409e4. */
/* Supplied declaration required: FUN_0014384c. */
/* Supplied declaration required: FUN_001445a0. */
/* Supplied declaration required: FUN_00144efc. */
/* Supplied declaration required: FUN_00145280. */
extern unsigned int *FUN_0014afd0(unsigned int, int);
/* Supplied declaration required: FUN_0014bf2c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_001527d8. */


void FUN_00137144(void)

{
/* irregular: 15 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  
  FUN_0013f1b8(3,0);
  FUN_0014384c(8);
  temp_v2 = 0;
  do {
    puVar3 = (unsigned int *)FUN_0014afd0(8,temp_v2);
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 3);
  FUN_00145280();
  DAT_0057f58c = puVar3;
  FUN_00145280();
  DAT_0057f590 = puVar3;
  FUN_00145280();
  temp_v2 = 0;
  DAT_0057f594 = puVar3;
  do {
    FUN_00145280();
    *(unsigned int **)(temp_v2 * 4 + 0x5e2010) = puVar3;
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0xc);
  *(unsigned char *)((int)DAT_0057f58c + 9) = 1;
  *(unsigned char *)((int)DAT_0057f590 + 9) = 6;
  puVar3 = DAT_0057f594;
  *(unsigned char *)((int)DAT_0057f594 + 9) = 0xc;
  FUN_001527d8(puVar3[1],0xff);
  temp_v2 = 0;
  do {
    temp_v1 = temp_v2 * 4;
    temp_v0 = temp_v2 * 4;
    temp_v2 = temp_v2 + 2;
    *(unsigned char *)(*(int *)(temp_v1 + 0x5e2010) + 9) = 0xd;
    *(unsigned char *)(*(int *)(temp_v0 + 0x5e2014) + 9) = 0xd;
  } while (temp_v2 < 0xc);
  FUN_001402d0();
  FUN_0013f578();
  FUN_001409e4();
  FUN_0015155c(&LAB_00137338,0xef,0,0,FUN_0013f7c4,0,DAT_0057f58c,*DAT_0057f58c);
  puVar3 = DAT_0057f58c;
  *(unsigned char *)(DAT_0057f58c + 0x671) = 1;
  *(unsigned char *)(DAT_0057f590 + 0x671) = 0;
  *(unsigned char *)(DAT_0057f594 + 0x671) = 0;
  temp_v2 = 0;
  do {
    temp_v1 = temp_v2 * 4;
    temp_v0 = temp_v2 * 4;
    temp_v2 = temp_v2 + 2;
    *(unsigned char *)(*(int *)(temp_v1 + 0x5e2010) + 0x19c4) = 0;
    *(unsigned char *)(*(int *)(temp_v0 + 0x5e2014) + 0x19c4) = 0;
  } while (temp_v2 < 0xc);
  FUN_0014bf2c(puVar3[1],0x100);
  FUN_0014bf2c(DAT_0057f590[1],0x200);
  FUN_0014bf2c(DAT_0057f594[1],0x100);
  temp_v2 = 0;
  do {
    FUN_0014bf2c(*(unsigned int *)(*(int *)(temp_v2 * 4 + 0x5e2010) + 4),0x100);
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0xc);
  FUN_00144efc(FUN_001456fc);
  FUN_001445a0(FUN_00145534);
  pcRam005b3d84 = FUN_001457b0;
  return;
}

} /* extern "C" */
