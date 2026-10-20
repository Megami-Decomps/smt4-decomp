/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bae40` (_code @ 0x3bae40, 0x16c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00243c24(void);
int FUN_002b30e4(void);
int FUN_002b41e4(unsigned int, int, unsigned int);
int FUN_00350a8c(void);
int FUN_00399768(int, int);
int rt_memcpy(unsigned int, unsigned int, unsigned int);
int rt_memcpy_w(unsigned char *, int, int);

extern int DAT_0059dbec; /* 0x59dbec */
extern unsigned int DAT_0059dbf4; /* 0x59dbf4 */
extern unsigned int DAT_0059dbf8; /* 0x59dbf8 */
extern unsigned int DAT_0059dbfc; /* 0x59dbfc */
extern int DAT_0059dc00; /* 0x59dc00 */
extern int DAT_0059dc04; /* 0x59dc04 */
extern unsigned int DAT_0059dc18; /* 0x59dc18 */
extern unsigned int DAT_0059dc2c; /* 0x59dc2c */
extern unsigned int DAT_0059dc30; /* 0x59dc30 */
extern unsigned int DAT_0059dc34; /* 0x59dc34 */
extern unsigned int DAT_0059dc38; /* 0x59dc38 */
extern unsigned int DAT_0059dc40; /* 0x59dc40 */
extern unsigned int DAT_0059dc44; /* 0x59dc44 */
extern unsigned int DAT_0059dc48; /* 0x59dc48 */
extern unsigned char DAT_0059e9a8; /* 0x59e9a8 */
extern int DAT_0059e9b4; /* 0x59e9b4 */
extern unsigned char DAT_00634bc0; /* 0x634bc0 */
extern unsigned char DAT_00634d20; /* 0x634d20 */

/* Supplied declaration required: FUN_00243c24. */
/* Supplied declaration required: FUN_002b30e4. */
extern unsigned int FUN_002b41c4(unsigned int);
/* Supplied declaration required: FUN_002b41e4. */
extern int FUN_00300778(unsigned int, int);
/* Supplied declaration required: FUN_00350a8c. */
/* Supplied declaration required: FUN_00399768. */
/* Supplied declaration required: rt_memcpy. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_003bae40(void)

{
/* irregular: 1 goto(s); irregular input(s): in_r3; 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned int in_r3;
  unsigned short temp_v3;
  unsigned char temp_v4;
  
  temp_v0 = FUN_00300778(DAT_0059dbf4,DAT_0059dbec + DAT_0059e9b4);
  DAT_0059dc04 = temp_v0;
  rt_memcpy_w(&DAT_00634bc0,temp_v0,0x90);
  rt_memcpy_w(&DAT_00634d20,temp_v0,0x80);
  DAT_0059dbfc = *(unsigned int *)(temp_v0 + 0x90);
  temp_v1 = temp_v0;
  FUN_002b30e4();
  if (*(short *)(temp_v1 + 4) != 0x1b) {
    temp_v2 = FUN_002b41c4(DAT_0059dbfc);
    in_r3 = *(unsigned int *)(temp_v1 + 0xc);
    rt_memcpy(in_r3,temp_v2,*(unsigned int *)(temp_v1 + 0x10));
  }
  if (*(int *)(temp_v1 + 0xc) != 0) {
    in_r3 = (unsigned int)*(unsigned short *)(temp_v1 + 8);
    FUN_002b41e4(DAT_0059dbfc,*(int *)(temp_v1 + 0xc),*(unsigned int *)(temp_v1 + 0x10));
  }
  temp_v2 = DAT_0059dbfc;
  FUN_00243c24();
  FUN_00350a8c();
  temp_v3 = 0;
  do {
    puVar4 = *(unsigned int **)(temp_v3 * 4 + 0x59e624);
    if (puVar4 != (unsigned int *)0x0) {
      in_r3 = *puVar4;
    }
    if (puVar4 != (unsigned int *)0x0 && in_r3 != 0) {
      do {
        temp_v4 = *(short *)(in_r3 + 4) == *(short *)(*(int *)(temp_v0 + 0x90) + 4);
        if (temp_v4) {
          in_r3 = (unsigned int)*(unsigned short *)(in_r3 + 8);
        }
        if (temp_v4 && in_r3 == *(unsigned short *)(*(int *)(temp_v0 + 0x90) + 0xc)) {
          DAT_0059dc18 = puVar4[1];
          goto LAB_003baf64;
        }
        puVar4 = puVar4 + 7;
        in_r3 = *puVar4;
      } while (in_r3 != 0);
    }
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 0xd) {
      DAT_0059dc18 = 0;
LAB_003baf64:
      DAT_0059dbf8 = temp_v2;
      *(unsigned char **)(DAT_0059dc18 + 0x34) = &DAT_0059e9a8;
      DAT_0059dc2c = 0;
      DAT_0059dc30 = 0;
      DAT_0059dc34 = 1;
      DAT_0059dc38 = 0;
      DAT_0059dc40 = 0;
      DAT_0059dc44 = 0;
      DAT_0059dc48 = 0;
      if (DAT_0059dc00 != 0) {
        FUN_00399768(DAT_0059dc00,3);
        DAT_0059dc00 = 0;
      }
      return 0x800000;
    }
  } while( 1 );
}

} /* extern "C" */
