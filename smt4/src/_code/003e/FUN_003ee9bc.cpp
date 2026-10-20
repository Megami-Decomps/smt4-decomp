/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ee9bc` (_code @ 0x3ee9bc, 0x21c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ad314(float *, float [2], int);
int __aeabi_vec_ctor_nocookie_nodtor(unsigned char *, unsigned char *, int, int);
int hasExclusiveAccess(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char LAB_00361934; /* 0x361934 */
extern unsigned char DAT_00420fd8; /* 0x420fd8 */
extern int DAT_004738a8; /* 0x4738a8 */
extern unsigned int DAT_004738ac; /* 0x4738ac */
extern unsigned char DAT_004738b0; /* 0x4738b0 */
extern unsigned int DAT_004738b4; /* 0x4738b4 */
extern unsigned int DAT_004738b8; /* 0x4738b8 */
extern unsigned int DAT_004738c0; /* 0x4738c0 */
extern unsigned int DAT_004738c4; /* 0x4738c4 */
extern unsigned int DAT_004738c8; /* 0x4738c8 */
extern unsigned int DAT_004738cc; /* 0x4738cc */
extern unsigned int DAT_004738d0; /* 0x4738d0 */
extern unsigned int DAT_004738d4; /* 0x4738d4 */
extern unsigned int DAT_004738d8; /* 0x4738d8 */
extern unsigned int DAT_004738dc; /* 0x4738dc */
extern unsigned int DAT_004738e0; /* 0x4738e0 */
extern unsigned int DAT_004738e4; /* 0x4738e4 */
extern unsigned int DAT_004738e8; /* 0x4738e8 */
extern unsigned int DAT_004738ec; /* 0x4738ec */
extern unsigned int DAT_004738f0; /* 0x4738f0 */
extern unsigned int DAT_004738f4; /* 0x4738f4 */
extern unsigned int DAT_004ef430; /* 0x4ef430 */
extern unsigned int DAT_004ef434; /* 0x4ef434 */
extern unsigned int DAT_004ef438; /* 0x4ef438 */
extern unsigned int DAT_004ef43c; /* 0x4ef43c */
#ifndef ROMWRIGHT_STORAGE_DAT_004ef440_4_4_DEFINED
#define ROMWRIGHT_STORAGE_DAT_004ef440_4_4_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_DAT_004ef440_4_4 {
    unsigned int whole;
    unsigned char u1[4];
    signed char s1[4];
    unsigned short u2[2];
    short s2[2];
    unsigned int u4[1];
    int s4[1];
    float f4[1];
};
typedef char romwright_storage_DAT_004ef440_4_4_size_check[(sizeof(union romwright_storage_DAT_004ef440_4_4) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_004ef440_4_4_u1_width_check[(sizeof(((union romwright_storage_DAT_004ef440_4_4 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_004ef440_4_4_s1_width_check[(sizeof(((union romwright_storage_DAT_004ef440_4_4 *)0)->s1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_004ef440_4_4_u2_width_check[(sizeof(((union romwright_storage_DAT_004ef440_4_4 *)0)->u2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_004ef440_4_4_s2_width_check[(sizeof(((union romwright_storage_DAT_004ef440_4_4 *)0)->s2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_004ef440_4_4_u4_width_check[(sizeof(((union romwright_storage_DAT_004ef440_4_4 *)0)->u4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_004ef440_4_4_s4_width_check[(sizeof(((union romwright_storage_DAT_004ef440_4_4 *)0)->s4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_004ef440_4_4_f4_width_check[(sizeof(((union romwright_storage_DAT_004ef440_4_4 *)0)->f4[0]) == 4) ? 1 : -1];
#endif
extern union romwright_storage_DAT_004ef440_4_4 DAT_004ef440; /* 0x4ef440 */
extern unsigned int DAT_004ef444; /* 0x4ef444 */
extern unsigned int DAT_004ef448; /* 0x4ef448 */
extern unsigned int DAT_004ef44c; /* 0x4ef44c */
extern unsigned int DAT_004ef450; /* 0x4ef450 */
extern unsigned int DAT_004ef454; /* 0x4ef454 */
extern unsigned int DAT_004ef858; /* 0x4ef858 */
extern unsigned int DAT_004ef85c; /* 0x4ef85c */
extern unsigned int DAT_004ef860; /* 0x4ef860 */
extern unsigned int DAT_004ef864; /* 0x4ef864 */
extern unsigned int DAT_004ef868; /* 0x4ef868 */
extern unsigned int DAT_004ef870; /* 0x4ef870 */
extern unsigned int DAT_004ef874; /* 0x4ef874 */
extern unsigned int DAT_004ef878; /* 0x4ef878 */
extern unsigned char DAT_004ef87c; /* 0x4ef87c */
extern unsigned char DAT_004ef87d; /* 0x4ef87d */
extern unsigned short DAT_004ef880; /* 0x4ef880 */
extern unsigned short DAT_004ef882; /* 0x4ef882 */
extern unsigned short DAT_004ef884; /* 0x4ef884 */
extern unsigned short DAT_004ef886; /* 0x4ef886 */
extern unsigned char DAT_004ef888; /* 0x4ef888 */
extern unsigned char *DAT_004ef960; /* 0x4ef960 */
extern unsigned int DAT_004ef964; /* 0x4ef964 */
extern unsigned int DAT_004ef968; /* 0x4ef968 */
extern unsigned int DAT_004ef96c; /* 0x4ef96c */
extern unsigned int DAT_004ef970; /* 0x4ef970 */
extern unsigned char *DAT_004ef974; /* 0x4ef974 */
extern unsigned int DAT_004ef978; /* 0x4ef978 */
extern unsigned int DAT_004ef97c; /* 0x4ef97c */
extern unsigned int DAT_004ef980; /* 0x4ef980 */
extern unsigned int DAT_004ef984; /* 0x4ef984 */

#ifndef ROMWRIGHT_PIECE_1_3_DEFINED
#define ROMWRIGHT_PIECE_1_3_DEFINED
#define romwright_piece_1_3(upper, lower) ((unsigned int)(((unsigned int)(unsigned char)(upper) << 24) | ((unsigned int)(lower) & 0xffffffULL)))
#endif
/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_002ad314. */
/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */


void FUN_003ee9bc(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  float temp_v1;
  float afStack_24 [2];
  
  DAT_004738e8 = 0xffffffff;
  DAT_004738ec = 0xffffffff;
  DAT_004738f0 = 0;
  DAT_004738f4 = 0;
  DAT_004ef430 = 0x20a0887;
  DAT_004ef434 = 10;
  DAT_004ef438 = 0xe;
  DAT_004ef43c = 4;
  DAT_004ef440.whole = romwright_piece_1_3(DAT_004ef440.u1[3],0xa6404);
  DAT_004ef444 = 0x20a0887;
  DAT_004ef448 = 10;
  DAT_004ef44c = 0xe;
  DAT_004ef450 = 4;
  DAT_004ef454 = DAT_004ef440.whole;
  DAT_004738ac = 0;
  DAT_004738b0 = 1;
  do {
    temp_v0 = (unsigned char)hasExclusiveAccess(0x4ef858);
  } while (!temp_v0);
  DAT_004ef858 = 0xffffffff;
  DAT_004ef85c = 0xffffffff;
  do {
    temp_v0 = (unsigned char)hasExclusiveAccess(0x4ef860);
  } while (!temp_v0);
  DAT_004ef860 = 0xffffffff;
  DAT_004ef864 = 0xffffffff;
  do {
    temp_v0 = (unsigned char)hasExclusiveAccess(0x4ef868);
  } while (!temp_v0);
  DAT_004ef868 = 0xffffffff;
  DAT_004ef870 = 0;
  DAT_004ef874 = 0;
  DAT_004ef878 = 0;
  DAT_004ef87c = 0;
  DAT_004ef87d = 0;
  DAT_004ef880 = 0;
  DAT_004ef882 = 0;
  DAT_004ef884 = 0;
  DAT_004ef886 = 0;
  __aeabi_vec_ctor_nocookie_nodtor(&DAT_004ef888,&LAB_00361934,0x18,8);
  DAT_004ef964 = 0;
  DAT_004ef968 = 0;
  DAT_004ef96c = 0;
  DAT_004ef960 = &DAT_00420fd8;
  DAT_004ef970 = 0;
  DAT_004ef978 = 0;
  DAT_004ef97c = 0;
  DAT_004ef980 = 0;
  DAT_004ef974 = &DAT_00420fd8;
  DAT_004ef984 = 0;
  DAT_004738b4 = 0;
  DAT_004738b8 = 0;
  DAT_004738c0 = 1000000000;
  DAT_004738c4 = 0;
  DAT_004738c8 = 20000000;
  DAT_004738cc = 0;
  DAT_004738d0 = 450000000;
  DAT_004738d4 = 0;
  DAT_004738d8 = 2000000000;
  DAT_004738dc = 0;
  DAT_004738e0 = 100000000;
  DAT_004738e4 = 0;
  FUN_002ad314(&temp_v1,afStack_24,0x100000);
  DAT_004738a8 = (int)((temp_v1 / afStack_24[0]) * 256.0f);
  return;
}

} /* extern "C" */
