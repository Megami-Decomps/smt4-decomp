/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002830cc` (_code @ 0x2830cc, 0x148 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int randomStateSeed(int, int);
int FUN_0013c884(unsigned char *, int);
int FUN_0014f0dc(unsigned char *, unsigned int *, unsigned int *);
int FUN_001523b8(unsigned char *, int);
int FUN_0036b824(unsigned char *);
int FUN_00387454(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_0059dbe1; /* 0x59dbe1 */
extern unsigned char DAT_0059dbe7; /* 0x59dbe7 */
extern unsigned char DAT_0059dbe8; /* 0x59dbe8 */
extern unsigned char DAT_0059dbe9; /* 0x59dbe9 */
extern unsigned int DAT_0059dbec; /* 0x59dbec */
extern unsigned char *DAT_0059dc08; /* 0x59dc08 */
extern unsigned char DAT_0059e970; /* 0x59e970 */
extern unsigned int g_uiDrawOffset; /* 0x5c10c4 */
extern unsigned int DAT_005c10c8; /* 0x5c10c8 */
extern unsigned char DAT_00634c50; /* 0x634c50 */
extern unsigned int DAT_00634c90; /* 0x634c90 */
extern unsigned int DAT_00634c94; /* 0x634c94 */
extern unsigned int DAT_00634c98; /* 0x634c98 */
extern unsigned int DAT_00634c9c; /* 0x634c9c */
extern unsigned char DAT_00634da0; /* 0x634da0 */
extern unsigned int DAT_006352ac; /* 0x6352ac */
extern unsigned int DAT_006352b0; /* 0x6352b0 */
extern unsigned int DAT_006352b4; /* 0x6352b4 */
extern unsigned int DAT_006352b8; /* 0x6352b8 */
extern unsigned int DAT_006352bc; /* 0x6352bc */
extern unsigned int DAT_006352c0; /* 0x6352c0 */
extern unsigned int DAT_006352c4; /* 0x6352c4 */
extern unsigned int DAT_006352c8; /* 0x6352c8 */
extern unsigned int DAT_006352cc; /* 0x6352cc */
extern unsigned int DAT_006352d0; /* 0x6352d0 */
extern unsigned int DAT_006352d4; /* 0x6352d4 */
extern unsigned int DAT_006352d8; /* 0x6352d8 */
extern unsigned int DAT_006352dc; /* 0x6352dc */
extern unsigned int DAT_006352e0; /* 0x6352e0 */
extern unsigned int DAT_006352e4; /* 0x6352e4 */

/* Supplied declaration required: randomStateSeed. */
/* Supplied declaration required: FUN_0013c884. */
/* Supplied declaration required: FUN_0014f0dc. */
/* Supplied declaration required: FUN_001523b8. */
/* Supplied declaration required: FUN_0036b824. */
/* Supplied declaration required: FUN_00387454. */


void FUN_002830cc(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  randomStateSeed(0,0x12345678);
  FUN_00387454();
  temp_v0 = 0;
  DAT_006352ac = 0;
  DAT_006352b0 = 0x42c80000;
  DAT_006352b4 = 0x44160000;
  temp_v1 = 0x3f800000;
  DAT_006352b8 = 0;
  DAT_006352bc = 0x3f800000;
  DAT_006352c0 = 0;
  DAT_006352c4 = 0;
  DAT_006352c8 = 0;
  DAT_006352cc = 0;
  DAT_006352d0 = 0;
  DAT_006352d4 = 0;
  DAT_006352d8 = 0;
  DAT_006352dc = 0;
  DAT_006352e0 = 0;
  DAT_006352e4 = 0;
  FUN_0013c884(&DAT_00634da0,1);
  FUN_0014f0dc(&DAT_00634da0,&DAT_006352ac,&DAT_006352c4);
  FUN_001523b8(&DAT_00634da0,1);
  FUN_0036b824(&DAT_00634da0);
  DAT_0059dc08 = &DAT_0059e970;
  DAT_0059dbec = 0;
  DAT_00634c50 = 0;
  DAT_0059dbe8 = 0;
  DAT_0059dbe7 = 0;
  DAT_0059dbe9 = 0;
  DAT_0059dbe1 = 0;
  DAT_00634c90 = 0;
  DAT_00634c94 = 0;
  DAT_00634c98 = 0;
  DAT_00634c9c = temp_v1;
  g_uiDrawOffset = temp_v0;
  DAT_005c10c8 = temp_v0;
  return;
}

} /* extern "C" */
