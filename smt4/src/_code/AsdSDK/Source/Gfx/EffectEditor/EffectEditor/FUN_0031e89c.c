/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031e89c` (_code @ 0x31e89c, 0x16c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044ea8c; /* 0x44ea8c */
extern unsigned int DAT_0044ea94; /* 0x44ea94 */
extern unsigned int DAT_0044ea98; /* 0x44ea98 */
extern unsigned int DAT_0044ea9c; /* 0x44ea9c */
extern int DAT_0044eaa0; /* 0x44eaa0 */
extern int DAT_0044eaa4; /* 0x44eaa4 */
extern unsigned int DAT_0044eab8; /* 0x44eab8 */
extern unsigned int DAT_0044eacc; /* 0x44eacc */
extern unsigned int DAT_0044ead0; /* 0x44ead0 */
extern unsigned int DAT_0044ead4; /* 0x44ead4 */
extern unsigned int DAT_0044ead8; /* 0x44ead8 */
extern unsigned int DAT_0044eae0; /* 0x44eae0 */
extern unsigned int DAT_0044eae4; /* 0x44eae4 */
extern unsigned int DAT_0044eae8; /* 0x44eae8 */
extern unsigned char DAT_0044f858; /* 0x44f858 */
extern int DAT_0044f864; /* 0x44f864 */
extern unsigned char DAT_004d8b40; /* 0x4d8b40 */
extern unsigned char DAT_004d8ca0; /* 0x4d8ca0 */

/* Supplied declaration required: FUN_00246854. */
extern int FUN_002468e0(unsigned int, int);
/* Supplied declaration required: FUN_002495d4. */
extern unsigned int FUN_0024c3f8(unsigned int);
/* Supplied declaration required: FUN_0024fc18. */
/* Supplied declaration required: FUN_00250200. */
/* Supplied declaration required: FUN_002629a8. */
/* Supplied declaration required: rt_memcpy. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_0031e89c(void)

{
/* irregular: 1 goto(s); irregular input(s): in_r3; 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned int in_r3;
  unsigned short temp_v3;
  unsigned char temp_v4;
  
  temp_v0 = FUN_002468e0(DAT_0044ea94,DAT_0044ea8c + DAT_0044f864);
  DAT_0044eaa4 = temp_v0;
  rt_memcpy_w(&DAT_004d8b40,temp_v0,0x90);
  rt_memcpy_w(&DAT_004d8ca0,temp_v0,0x80);
  DAT_0044ea9c = *(unsigned int *)(temp_v0 + 0x90);
  temp_v1 = temp_v0;
  FUN_00246854();
  if (*(short *)(temp_v1 + 4) != 0x1b) {
    temp_v2 = FUN_0024c3f8(DAT_0044ea9c);
    in_r3 = *(unsigned int *)(temp_v1 + 0xc);
    rt_memcpy(in_r3,temp_v2,*(unsigned int *)(temp_v1 + 0x10));
  }
  if (*(int *)(temp_v1 + 0xc) != 0) {
    in_r3 = (unsigned int)*(unsigned short *)(temp_v1 + 8);
    FUN_002495d4(DAT_0044ea9c,*(int *)(temp_v1 + 0xc),*(unsigned int *)(temp_v1 + 0x10));
  }
  temp_v2 = DAT_0044ea9c;
  FUN_0024fc18();
  FUN_00250200();
  temp_v3 = 0;
  do {
    puVar4 = *(unsigned int **)(temp_v3 * 4 + 0x44f4d4);
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
          DAT_0044eab8 = puVar4[1];
          goto LAB_0031e9c0;
        }
        puVar4 = puVar4 + 7;
        in_r3 = *puVar4;
      } while (in_r3 != 0);
    }
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 0xd) {
      DAT_0044eab8 = 0;
LAB_0031e9c0:
      DAT_0044ea98 = temp_v2;
      *(unsigned char **)(DAT_0044eab8 + 0x34) = &DAT_0044f858;
      DAT_0044eacc = 0;
      DAT_0044ead0 = 0;
      DAT_0044ead4 = 1;
      DAT_0044ead8 = 0;
      DAT_0044eae0 = 0;
      DAT_0044eae4 = 0;
      DAT_0044eae8 = 0;
      if (DAT_0044eaa0 != 0) {
        FUN_002629a8(DAT_0044eaa0,3);
        DAT_0044eaa0 = 0;
      }
      return 0x800000;
    }
  } while( 1 );
}
