/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00510084` (_code @ 0x510084, 0x2a8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int emptyStub_002f4370(...);
int FUN_00423a3c(...);
int FUN_00425e74(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int FUN_001585e4(...); /* 0x1585e4 */
extern unsigned char LAB_00423cdc; /* 0x423cdc */
extern unsigned char DAT_005583c0; /* 0x5583c0 */
extern unsigned char DAT_005583d8; /* 0x5583d8 */
extern unsigned int DAT_00588024; /* 0x588024 */
extern char *DAT_00588030; /* 0x588030 */
extern unsigned char DAT_00588034; /* 0x588034 */
extern unsigned char *DAT_00617c48; /* 0x617c48 */
extern unsigned int DAT_00617c4c; /* 0x617c4c */
extern unsigned int DAT_00617c50; /* 0x617c50 */
extern unsigned int DAT_00617c54; /* 0x617c54 */
extern unsigned int DAT_00617c58; /* 0x617c58 */
extern unsigned int DAT_00617c5c; /* 0x617c5c */
extern unsigned int DAT_00617c60; /* 0x617c60 */
extern unsigned int DAT_00617c9c; /* 0x617c9c */
extern unsigned char *DAT_00617ca0; /* 0x617ca0 */
extern unsigned int DAT_00617ca4; /* 0x617ca4 */
extern unsigned int DAT_00617ca8; /* 0x617ca8 */
extern unsigned int DAT_00617cac; /* 0x617cac */
extern unsigned int DAT_00617cb0; /* 0x617cb0 */
extern unsigned int DAT_00617cb4; /* 0x617cb4 */
extern unsigned int DAT_00617cb8; /* 0x617cb8 */
extern unsigned int DAT_00617cf4; /* 0x617cf4 */
extern unsigned char *DAT_00617cf8; /* 0x617cf8 */
extern unsigned int DAT_00617cfc; /* 0x617cfc */
extern unsigned int DAT_00617d00; /* 0x617d00 */
extern unsigned int DAT_00617d04; /* 0x617d04 */
extern unsigned int DAT_00617d08; /* 0x617d08 */
extern unsigned int DAT_00617d0c; /* 0x617d0c */
extern unsigned int DAT_00617d10; /* 0x617d10 */
extern unsigned int DAT_00617d4c; /* 0x617d4c */
extern unsigned char *DAT_00617d50; /* 0x617d50 */
extern unsigned int DAT_00617d54; /* 0x617d54 */
extern unsigned int DAT_00617d58; /* 0x617d58 */
extern unsigned int DAT_00617d5c; /* 0x617d5c */
extern unsigned int DAT_00617d60; /* 0x617d60 */
extern unsigned int DAT_00617d64; /* 0x617d64 */
extern unsigned int DAT_00617d68; /* 0x617d68 */
extern unsigned int DAT_00617da4; /* 0x617da4 */
extern unsigned char *DAT_00617da8; /* 0x617da8 */
extern unsigned int DAT_00617dac; /* 0x617dac */
extern unsigned int DAT_00617db0; /* 0x617db0 */
extern unsigned int DAT_00617db4; /* 0x617db4 */
extern unsigned int DAT_00617db8; /* 0x617db8 */
extern unsigned int DAT_00617dbc; /* 0x617dbc */
extern unsigned int DAT_00617dc0; /* 0x617dc0 */
extern unsigned int DAT_00617dfc; /* 0x617dfc */
extern unsigned char *DAT_00617e00; /* 0x617e00 */
extern unsigned int DAT_00617e04; /* 0x617e04 */
extern unsigned int DAT_00617e08; /* 0x617e08 */
extern unsigned int DAT_00617e0c; /* 0x617e0c */
extern unsigned int DAT_00617e10; /* 0x617e10 */
extern unsigned int DAT_00617e14; /* 0x617e14 */
extern unsigned int DAT_00617e18; /* 0x617e18 */
extern unsigned int DAT_00617e54; /* 0x617e54 */
extern unsigned char *DAT_00617e58; /* 0x617e58 */
extern unsigned int *DAT_00617e5c; /* 0x617e5c */
extern unsigned char DAT_00617e60; /* 0x617e60 */
extern unsigned char DAT_00617e61; /* 0x617e61 */
extern unsigned char DAT_00617e62; /* 0x617e62 */
extern unsigned char *DAT_00617e64; /* 0x617e64 */
extern unsigned int *DAT_00617e68; /* 0x617e68 */
extern unsigned char DAT_00617e6c; /* 0x617e6c */
extern unsigned char DAT_00617e6d; /* 0x617e6d */
extern unsigned char DAT_00617e6e; /* 0x617e6e */
extern unsigned char DAT_00617e70; /* 0x617e70 */
extern char *DAT_00617f18; /* 0x617f18 */
extern unsigned int DAT_00617f1c; /* 0x617f1c */
extern unsigned int DAT_00617f20; /* 0x617f20 */
extern unsigned int DAT_00617f24; /* 0x617f24 */
extern unsigned int DAT_00617f28; /* 0x617f28 */
extern unsigned char DAT_00617f3c; /* 0x617f3c */
extern unsigned char DAT_00617f3d; /* 0x617f3d */
extern unsigned char DAT_00617f40; /* 0x617f40 */
extern unsigned int DAT_006184a0; /* 0x6184a0 */
extern unsigned int DAT_006184a4; /* 0x6184a4 */
extern unsigned int DAT_006184a8; /* 0x6184a8 */
extern unsigned int DAT_006184ac; /* 0x6184ac */
extern unsigned int DAT_006184b0; /* 0x6184b0 */
extern unsigned int DAT_006184b4; /* 0x6184b4 */
extern unsigned int DAT_006184c0; /* 0x6184c0 */
extern unsigned int DAT_006184c4; /* 0x6184c4 */
extern unsigned int DAT_006184c8; /* 0x6184c8 */
extern unsigned int DAT_006184cc; /* 0x6184cc */
extern unsigned int DAT_006184d0; /* 0x6184d0 */
extern unsigned char DAT_006184d4; /* 0x6184d4 */
extern unsigned int DAT_006184d8; /* 0x6184d8 */
extern unsigned int DAT_006184dc; /* 0x6184dc */
extern unsigned int DAT_006184e0; /* 0x6184e0 */
extern unsigned int DAT_006184e4; /* 0x6184e4 */
extern unsigned int DAT_006184e8; /* 0x6184e8 */
extern unsigned int DAT_006184ec; /* 0x6184ec */
extern unsigned int DAT_006184f0; /* 0x6184f0 */
#ifndef ROMWRIGHT_STORAGE_DAT_00618500_4_4_DEFINED
#define ROMWRIGHT_STORAGE_DAT_00618500_4_4_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_DAT_00618500_4_4 {
    unsigned int whole;
    unsigned char u1[4];
    signed char s1[4];
    unsigned short u2[2];
    short s2[2];
    unsigned int u4[1];
    int s4[1];
    float f4[1];
};
typedef char romwright_storage_DAT_00618500_4_4_size_check[(sizeof(union romwright_storage_DAT_00618500_4_4) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_00618500_4_4_u1_width_check[(sizeof(((union romwright_storage_DAT_00618500_4_4 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_00618500_4_4_s1_width_check[(sizeof(((union romwright_storage_DAT_00618500_4_4 *)0)->s1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_00618500_4_4_u2_width_check[(sizeof(((union romwright_storage_DAT_00618500_4_4 *)0)->u2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_00618500_4_4_s2_width_check[(sizeof(((union romwright_storage_DAT_00618500_4_4 *)0)->s2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_00618500_4_4_u4_width_check[(sizeof(((union romwright_storage_DAT_00618500_4_4 *)0)->u4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_00618500_4_4_s4_width_check[(sizeof(((union romwright_storage_DAT_00618500_4_4 *)0)->s4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_00618500_4_4_f4_width_check[(sizeof(((union romwright_storage_DAT_00618500_4_4 *)0)->f4[0]) == 4) ? 1 : -1];
#endif
extern union romwright_storage_DAT_00618500_4_4 DAT_00618500; /* 0x618500 */
extern unsigned int DAT_00618504; /* 0x618504 */
extern unsigned int DAT_00618508; /* 0x618508 */
extern unsigned int DAT_0061850c; /* 0x61850c */
extern unsigned int DAT_00618510; /* 0x618510 */
extern unsigned int DAT_00618514; /* 0x618514 */

/* Supplied declaration required: emptyStub_002f4370. */
/* Supplied declaration required: FUN_00423a3c. */
/* Supplied declaration required: FUN_00425e74. */


void FUN_00510084(void)

{
/* irregular: 4 native warning(s); review required */
  DAT_00617c4c = 0;
  DAT_00617c50 = 0;
  DAT_00617c54 = 0;
  DAT_00617c58 = 0;
  DAT_00617c5c = 0;
  DAT_00617c60 = 0;
  DAT_00617c48 = &DAT_005583d8;
  DAT_00617c9c = 0;
  DAT_00617ca4 = 0;
  DAT_00617ca8 = 0;
  DAT_00617cac = 0;
  DAT_00617cb0 = 0;
  DAT_00617cb4 = 0;
  DAT_00617cb8 = 0;
  DAT_00617ca0 = &DAT_005583d8;
  DAT_00617cf4 = 0;
  DAT_00617cfc = 0;
  DAT_00617d00 = 0;
  DAT_00617d04 = 0;
  DAT_00617d08 = 0;
  DAT_00617d0c = 0;
  DAT_00617d10 = 0;
  DAT_00617cf8 = &DAT_005583d8;
  DAT_00617d4c = 0;
  DAT_00617d54 = 0;
  DAT_00617d58 = 0;
  DAT_00617d5c = 0;
  DAT_00617d60 = 0;
  DAT_00617d64 = 0;
  DAT_00617d68 = 0;
  DAT_00617d50 = &DAT_005583d8;
  DAT_00617da4 = 0;
  DAT_00617dac = 0;
  DAT_00617db0 = 0;
  DAT_00617db4 = 0;
  DAT_00617db8 = 0;
  DAT_00617dbc = 0;
  DAT_00617dc0 = 0;
  DAT_00617da8 = &DAT_005583d8;
  DAT_00617dfc = 0;
  DAT_00617e04 = 0;
  DAT_00617e08 = 0;
  DAT_00617e0c = 0;
  DAT_00617e10 = 0;
  DAT_00617e14 = 0;
  DAT_00617e18 = 0;
  DAT_00617e00 = &DAT_005583d8;
  DAT_00617e54 = 0;
  DAT_00617e5c = (unsigned int *)&DAT_00617da8;
  DAT_00617e58 = &DAT_005583c0;
  DAT_00617e60 = 0;
  DAT_00617e61 = 0;
  DAT_00617e62 = 0;
  DAT_00617e68 = (unsigned int *)&DAT_00617e00;
  DAT_00617e64 = &DAT_005583c0;
  DAT_00617e6c = 0;
  DAT_00617e6d = 0;
  DAT_00617e6e = 0;
  DAT_00588024 = 0;
  DAT_00588030 = "㻼B㿜B㸔B㾠B";
  DAT_00588034 = 0;
  FUN_00423a3c(&DAT_00617e70,"㻼B㿜B㸔B㾠B",0x100000);
  DAT_00617f1c = 0;
  DAT_00617f18 = "㪌B㳼B㭈B";
  DAT_00617f20 = 0;
  DAT_00617f24 = 0xffffffff;
  DAT_00617f28 = 0;
  DAT_00617f3c = 0;
  DAT_00617f3d = 0;
  FUN_00425e74(&DAT_00617f40,&LAB_00423cdc,0x100000);
  DAT_006184a0 = 0;
  DAT_006184a4 = 0;
  DAT_006184a8 = 0;
  DAT_006184ac = 0;
  DAT_006184b0 = 0;
  DAT_006184c0 = 0;
  DAT_006184b4 = 0;
  DAT_006184c4 = 0;
  DAT_006184c8 = 0;
  DAT_006184cc = 0x1000;
  DAT_006184d0 = 0;
  DAT_006184d4 = 1;
  DAT_006184d8 = 0;
  DAT_006184dc = 0;
  DAT_006184e0 = 0;
  DAT_006184e8 = 0xffffffff;
  DAT_006184e4 = 0;
  DAT_006184ec = 0;
  DAT_006184f0 = 0;
  DAT_00618504 = 0;
  DAT_00618508 = 0;
  DAT_0061850c = 0;
  DAT_00618510 = 0;
  DAT_00618514 = 0;
  DAT_00618500.s1[0] = 'D';
  DAT_00618500.s1[1] = -0x7f;
  DAT_00618500.s1[2] = 'U';
  DAT_00618500.s1[3] = '\0';
  emptyStub_002f4370(&DAT_00618500.whole,FUN_001585e4,0x100000);
  return;
}

} /* extern "C" */
