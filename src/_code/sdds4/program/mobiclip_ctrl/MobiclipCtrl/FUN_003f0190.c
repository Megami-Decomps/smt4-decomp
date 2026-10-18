/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f0190` (_code @ 0x3f0190, 0x2c4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern unsigned char LAB_0034f8d8; /* 0x34f8d8 */
extern unsigned char DAT_00420b3c; /* 0x420b3c */
extern unsigned int DAT_0044d024; /* 0x44d024 */
extern char *DAT_0044d030; /* 0x44d030 */
extern unsigned char DAT_0044d034; /* 0x44d034 */
extern unsigned int DAT_0044d040; /* 0x44d040 */
extern unsigned int DAT_0044d044; /* 0x44d044 */
extern unsigned char *DAT_004c3828; /* 0x4c3828 */
extern unsigned int DAT_004c382c; /* 0x4c382c */
extern unsigned int DAT_004c3830; /* 0x4c3830 */
extern unsigned int DAT_004c3834; /* 0x4c3834 */
extern unsigned int DAT_004c3838; /* 0x4c3838 */
extern unsigned int DAT_004c383c; /* 0x4c383c */
extern unsigned int DAT_004c3840; /* 0x4c3840 */
extern unsigned int DAT_004c387c; /* 0x4c387c */
extern unsigned char *DAT_004c3880; /* 0x4c3880 */
extern unsigned int DAT_004c3884; /* 0x4c3884 */
extern unsigned int DAT_004c3888; /* 0x4c3888 */
extern unsigned int DAT_004c388c; /* 0x4c388c */
extern unsigned int DAT_004c3890; /* 0x4c3890 */
extern unsigned int DAT_004c3894; /* 0x4c3894 */
extern unsigned int DAT_004c3898; /* 0x4c3898 */
extern unsigned int DAT_004c38d4; /* 0x4c38d4 */
extern unsigned char *DAT_004c38d8; /* 0x4c38d8 */
extern unsigned int DAT_004c38dc; /* 0x4c38dc */
extern unsigned int DAT_004c38e0; /* 0x4c38e0 */
extern unsigned int DAT_004c38e4; /* 0x4c38e4 */
extern unsigned int DAT_004c38e8; /* 0x4c38e8 */
extern unsigned int DAT_004c38ec; /* 0x4c38ec */
extern unsigned int DAT_004c38f0; /* 0x4c38f0 */
extern unsigned int DAT_004c392c; /* 0x4c392c */
extern unsigned char *DAT_004c3930; /* 0x4c3930 */
extern unsigned int DAT_004c3934; /* 0x4c3934 */
extern unsigned int DAT_004c3938; /* 0x4c3938 */
extern unsigned int DAT_004c393c; /* 0x4c393c */
extern unsigned int DAT_004c3940; /* 0x4c3940 */
extern unsigned int DAT_004c3944; /* 0x4c3944 */
extern unsigned int DAT_004c3948; /* 0x4c3948 */
extern unsigned int DAT_004c3984; /* 0x4c3984 */
extern unsigned char *DAT_004c3988; /* 0x4c3988 */
extern unsigned int DAT_004c398c; /* 0x4c398c */
extern unsigned int DAT_004c3990; /* 0x4c3990 */
extern unsigned int DAT_004c3994; /* 0x4c3994 */
extern unsigned int DAT_004c3998; /* 0x4c3998 */
extern unsigned int DAT_004c399c; /* 0x4c399c */
extern unsigned int DAT_004c39a0; /* 0x4c39a0 */
extern unsigned int DAT_004c39dc; /* 0x4c39dc */
extern unsigned char *DAT_004c39e0; /* 0x4c39e0 */
extern unsigned int DAT_004c39e4; /* 0x4c39e4 */
extern unsigned int DAT_004c39e8; /* 0x4c39e8 */
extern unsigned int DAT_004c39ec; /* 0x4c39ec */
extern unsigned int DAT_004c39f0; /* 0x4c39f0 */
extern unsigned int DAT_004c39f4; /* 0x4c39f4 */
extern unsigned int DAT_004c39f8; /* 0x4c39f8 */
extern unsigned int DAT_004c3a34; /* 0x4c3a34 */
extern char *DAT_004c3a38; /* 0x4c3a38 */
extern unsigned int *DAT_004c3a3c; /* 0x4c3a3c */
extern unsigned char DAT_004c3a40; /* 0x4c3a40 */
extern unsigned char DAT_004c3a41; /* 0x4c3a41 */
extern unsigned char DAT_004c3a42; /* 0x4c3a42 */
extern char *DAT_004c3a44; /* 0x4c3a44 */
extern unsigned int *DAT_004c3a48; /* 0x4c3a48 */
extern unsigned char DAT_004c3a4c; /* 0x4c3a4c */
extern unsigned char DAT_004c3a4d; /* 0x4c3a4d */
extern unsigned char DAT_004c3a4e; /* 0x4c3a4e */
extern unsigned char DAT_004c3a50; /* 0x4c3a50 */
extern char *DAT_004c3af8; /* 0x4c3af8 */
extern unsigned int DAT_004c3afc; /* 0x4c3afc */
extern unsigned int DAT_004c3b00; /* 0x4c3b00 */
extern unsigned int DAT_004c3b04; /* 0x4c3b04 */
extern unsigned int DAT_004c3b08; /* 0x4c3b08 */
extern unsigned char DAT_004c3b1c; /* 0x4c3b1c */
extern unsigned char DAT_004c3b1d; /* 0x4c3b1d */
extern unsigned char DAT_004c3b20; /* 0x4c3b20 */
extern unsigned int DAT_004c4080; /* 0x4c4080 */
extern unsigned int DAT_004c4084; /* 0x4c4084 */
extern unsigned int DAT_004c4088; /* 0x4c4088 */
extern unsigned int DAT_004c408c; /* 0x4c408c */
extern unsigned int DAT_004c4090; /* 0x4c4090 */
extern unsigned int DAT_004c4094; /* 0x4c4094 */
extern unsigned int DAT_004c40a0; /* 0x4c40a0 */
extern unsigned int DAT_004c40a4; /* 0x4c40a4 */
extern unsigned int DAT_004c40a8; /* 0x4c40a8 */
extern unsigned int DAT_004c40ac; /* 0x4c40ac */
extern unsigned int DAT_004c40b0; /* 0x4c40b0 */
extern unsigned char DAT_004c40b4; /* 0x4c40b4 */
extern unsigned int DAT_004c40b8; /* 0x4c40b8 */
extern unsigned int DAT_004c40bc; /* 0x4c40bc */
extern unsigned int DAT_004c40c0; /* 0x4c40c0 */
extern unsigned int DAT_004c40c4; /* 0x4c40c4 */
extern unsigned int DAT_004c40c8; /* 0x4c40c8 */
extern unsigned int DAT_004c40cc; /* 0x4c40cc */
extern unsigned int DAT_004c40d0; /* 0x4c40d0 */
#ifndef ROMWRIGHT_STORAGE_DAT_004c40e0_4_4_DEFINED
#define ROMWRIGHT_STORAGE_DAT_004c40e0_4_4_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_DAT_004c40e0_4_4 {
    unsigned int whole;
    unsigned char u1[4];
    signed char s1[4];
    unsigned short u2[2];
    short s2[2];
    unsigned int u4[1];
    int s4[1];
    float f4[1];
};
typedef char romwright_storage_DAT_004c40e0_4_4_size_check[(sizeof(union romwright_storage_DAT_004c40e0_4_4) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_004c40e0_4_4_u1_width_check[(sizeof(((union romwright_storage_DAT_004c40e0_4_4 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_004c40e0_4_4_s1_width_check[(sizeof(((union romwright_storage_DAT_004c40e0_4_4 *)0)->s1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_004c40e0_4_4_u2_width_check[(sizeof(((union romwright_storage_DAT_004c40e0_4_4 *)0)->u2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_004c40e0_4_4_s2_width_check[(sizeof(((union romwright_storage_DAT_004c40e0_4_4 *)0)->s2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_004c40e0_4_4_u4_width_check[(sizeof(((union romwright_storage_DAT_004c40e0_4_4 *)0)->u4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_004c40e0_4_4_s4_width_check[(sizeof(((union romwright_storage_DAT_004c40e0_4_4 *)0)->s4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_004c40e0_4_4_f4_width_check[(sizeof(((union romwright_storage_DAT_004c40e0_4_4 *)0)->f4[0]) == 4) ? 1 : -1];
#endif
extern union romwright_storage_DAT_004c40e0_4_4 DAT_004c40e0; /* 0x4c40e0 */
extern unsigned int DAT_004c40e4; /* 0x4c40e4 */
extern unsigned int DAT_004c40e8; /* 0x4c40e8 */
extern unsigned int DAT_004c40ec; /* 0x4c40ec */
extern unsigned int DAT_004c40f0; /* 0x4c40f0 */
extern unsigned int DAT_004c40f4; /* 0x4c40f4 */

/* Supplied declaration required: FUN_0034f648. */
/* Supplied declaration required: FUN_00351a88. */


void FUN_003f0190(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  *(unsigned int *)(param_3 + 0x18) = 0xffffffff;
  *(unsigned int *)(param_3 + 0x1c) = 0xffffffff;
  DAT_0044d040 = 0;
  DAT_0044d044 = 0;
  DAT_004c3830 = 0;
  DAT_004c382c = 0;
  DAT_004c3834 = 0;
  DAT_004c3838 = 0;
  DAT_004c383c = 0;
  DAT_004c3840 = 0;
  DAT_004c387c = 0;
  DAT_004c3828 = &DAT_00420b3c;
  DAT_004c3884 = 0;
  DAT_004c3888 = 0;
  DAT_004c388c = 0;
  DAT_004c3890 = 0;
  DAT_004c3894 = 0;
  DAT_004c3898 = 0;
  DAT_004c3880 = &DAT_00420b3c;
  DAT_004c38d4 = 0;
  DAT_004c38dc = 0;
  DAT_004c38e0 = 0;
  DAT_004c38e4 = 0;
  DAT_004c38e8 = 0;
  DAT_004c38ec = 0;
  DAT_004c38f0 = 0;
  DAT_004c38d8 = &DAT_00420b3c;
  DAT_004c392c = 0;
  DAT_004c3934 = 0;
  DAT_004c3938 = 0;
  DAT_004c393c = 0;
  DAT_004c3940 = 0;
  DAT_004c3944 = 0;
  DAT_004c3948 = 0;
  DAT_004c3930 = &DAT_00420b3c;
  DAT_004c3984 = 0;
  DAT_004c398c = 0;
  DAT_004c3990 = 0;
  DAT_004c3994 = 0;
  DAT_004c3998 = 0;
  DAT_004c399c = 0;
  DAT_004c39a0 = 0;
  DAT_004c3988 = &DAT_00420b3c;
  DAT_004c39dc = 0;
  DAT_004c39e4 = 0;
  DAT_004c39e8 = 0;
  DAT_004c39ec = 0;
  DAT_004c39f0 = 0;
  DAT_004c39f4 = 0;
  DAT_004c39f8 = 0;
  DAT_004c39e0 = &DAT_00420b3c;
  DAT_004c3a34 = 0;
  DAT_004c3a3c = (unsigned int *)&DAT_004c3988;
  DAT_004c3a38 = "牀?㍰+김5";
  DAT_004c3a40 = 0;
  DAT_004c3a41 = 0;
  DAT_004c3a42 = 0;
  DAT_004c3a48 = (unsigned int *)&DAT_004c39e0;
  DAT_004c3a44 = "牀?㍰+김5";
  DAT_004c3a4c = 0;
  DAT_004c3a4d = 0;
  DAT_004c3a4e = 0;
  DAT_0044d024 = 0;
  DAT_0044d030 = "﫸4ﯘ4塚4ﮜ4";
  DAT_0044d034 = 0;
  FUN_0034f648(&DAT_004c3a50,"﫸4ﯘ4塚4ﮜ4",0x100000);
  DAT_004c3afc = 0;
  DAT_004c3af8 = "\xf8dc4\xf8f84\xf7444\xf6984";
  DAT_004c3b00 = 0;
  DAT_004c3b04 = 0xffffffff;
  DAT_004c3b08 = 0;
  DAT_004c3b1c = 0;
  DAT_004c3b1d = 0;
  FUN_00351a88(&DAT_004c3b20,&LAB_0034f8d8,0x100000);
  DAT_004c4080 = 0;
  DAT_004c4084 = 0;
  DAT_004c4088 = 0;
  DAT_004c408c = 0;
  DAT_004c4090 = 0;
  DAT_004c40a0 = 0;
  DAT_004c4094 = 0;
  DAT_004c40a4 = 0;
  DAT_004c40a8 = 0;
  DAT_004c40ac = 0x1000;
  DAT_004c40b0 = 0;
  DAT_004c40b4 = 1;
  DAT_004c40b8 = 0;
  DAT_004c40bc = 0;
  DAT_004c40c0 = 0;
  DAT_004c40c8 = 0xffffffff;
  DAT_004c40c4 = 0;
  DAT_004c40cc = 0;
  DAT_004c40d0 = 0;
  DAT_004c40e4 = 0;
  DAT_004c40e8 = 0;
  DAT_004c40ec = 0;
  DAT_004c40f0 = 0;
  DAT_004c40f4 = 0;
  DAT_004c40e0.s1[0] = -0x50;
  DAT_004c40e0.s1[1] = '\b';
  DAT_004c40e0.s1[2] = 'B';
  DAT_004c40e0.s1[3] = '\0';
  return;
}
