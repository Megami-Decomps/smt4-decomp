/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00287c34` (_code @ 0x287c34, 0x474 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0049f91c; /* 0x49f91c */
extern unsigned int DAT_0049f920; /* 0x49f920 */
extern unsigned int DAT_0049f924; /* 0x49f924 */
extern unsigned char DAT_0049f934; /* 0x49f934 */
extern unsigned int DAT_0049f938; /* 0x49f938 */
extern unsigned char DAT_0049f93c; /* 0x49f93c */
extern unsigned char DAT_0049f93e; /* 0x49f93e */
extern unsigned char DAT_0049f93f; /* 0x49f93f */
extern unsigned char DAT_0049f942; /* 0x49f942 */
extern unsigned char DAT_0049f943; /* 0x49f943 */
extern unsigned int DAT_0049f944; /* 0x49f944 */
extern unsigned short DAT_0049f948; /* 0x49f948 */
extern unsigned char DAT_0049f94a; /* 0x49f94a */
extern unsigned char DAT_0049f94b; /* 0x49f94b */
extern unsigned char DAT_0049f94c; /* 0x49f94c */
extern unsigned char DAT_0049f94d; /* 0x49f94d */
extern unsigned char DAT_0049f94e; /* 0x49f94e */
extern unsigned char DAT_0049f94f; /* 0x49f94f */
extern unsigned char DAT_0049f950; /* 0x49f950 */
extern unsigned int DAT_0049f954; /* 0x49f954 */
extern unsigned int DAT_0049f958; /* 0x49f958 */
extern unsigned int DAT_0049f95c; /* 0x49f95c */
extern unsigned int DAT_0049f960; /* 0x49f960 */
extern unsigned int DAT_0049f964; /* 0x49f964 */
extern unsigned int DAT_0049f968; /* 0x49f968 */
extern unsigned int DAT_0049f96c; /* 0x49f96c */
extern unsigned int DAT_0049f970; /* 0x49f970 */
extern unsigned int DAT_0049f974; /* 0x49f974 */
#ifndef ROMWRIGHT_STORAGE_DAT_0049f978_4_4_DEFINED
#define ROMWRIGHT_STORAGE_DAT_0049f978_4_4_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_DAT_0049f978_4_4 {
    unsigned int whole;
    unsigned char u1[4];
    signed char s1[4];
    unsigned short u2[2];
    short s2[2];
    unsigned int u4[1];
    int s4[1];
    float f4[1];
};
typedef char romwright_storage_DAT_0049f978_4_4_size_check[(sizeof(union romwright_storage_DAT_0049f978_4_4) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_0049f978_4_4_u1_width_check[(sizeof(((union romwright_storage_DAT_0049f978_4_4 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_0049f978_4_4_s1_width_check[(sizeof(((union romwright_storage_DAT_0049f978_4_4 *)0)->s1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_0049f978_4_4_u2_width_check[(sizeof(((union romwright_storage_DAT_0049f978_4_4 *)0)->u2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_0049f978_4_4_s2_width_check[(sizeof(((union romwright_storage_DAT_0049f978_4_4 *)0)->s2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_0049f978_4_4_u4_width_check[(sizeof(((union romwright_storage_DAT_0049f978_4_4 *)0)->u4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_0049f978_4_4_s4_width_check[(sizeof(((union romwright_storage_DAT_0049f978_4_4 *)0)->s4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_0049f978_4_4_f4_width_check[(sizeof(((union romwright_storage_DAT_0049f978_4_4 *)0)->f4[0]) == 4) ? 1 : -1];
#endif
extern union romwright_storage_DAT_0049f978_4_4 DAT_0049f978; /* 0x49f978 */
extern unsigned int DAT_0049f9a0; /* 0x49f9a0 */
extern unsigned int DAT_0049f9a4; /* 0x49f9a4 */
extern unsigned int DAT_0049f9a8; /* 0x49f9a8 */
extern unsigned int DAT_0049f9ac; /* 0x49f9ac */
extern unsigned int DAT_0049f9b0; /* 0x49f9b0 */
extern unsigned int DAT_0049f9b4; /* 0x49f9b4 */
extern unsigned int DAT_0049f9b8; /* 0x49f9b8 */
extern unsigned int DAT_0049f9bc; /* 0x49f9bc */
extern unsigned int DAT_0049f9c0; /* 0x49f9c0 */
extern unsigned int DAT_0049f9c4; /* 0x49f9c4 */
extern unsigned char DAT_0049f9c8; /* 0x49f9c8 */
extern unsigned int DAT_0049f9d0; /* 0x49f9d0 */
extern unsigned char DAT_0049f9d4; /* 0x49f9d4 */
extern unsigned char DAT_0049f9d5; /* 0x49f9d5 */
extern unsigned char DAT_0049f9d6; /* 0x49f9d6 */
extern unsigned char DAT_0049f9d7; /* 0x49f9d7 */
extern unsigned char DAT_0049f9d8; /* 0x49f9d8 */
extern unsigned short DAT_0049f9da; /* 0x49f9da */
extern unsigned short DAT_0049f9dc; /* 0x49f9dc */
extern unsigned int DAT_0049f9e0; /* 0x49f9e0 */
extern unsigned int DAT_0049f9e4; /* 0x49f9e4 */
extern unsigned int DAT_0049f9e8; /* 0x49f9e8 */
extern unsigned int DAT_0049f9ec; /* 0x49f9ec */
extern unsigned int DAT_0049f9f0; /* 0x49f9f0 */
extern unsigned int DAT_0049f9f4; /* 0x49f9f4 */
extern unsigned int DAT_0049f9f8; /* 0x49f9f8 */
extern unsigned char DAT_0049fa14; /* 0x49fa14 */
extern unsigned char DAT_0049fa15; /* 0x49fa15 */
extern unsigned char DAT_0049fa16; /* 0x49fa16 */
extern unsigned char DAT_0049fa17; /* 0x49fa17 */
extern unsigned char DAT_0049fa18; /* 0x49fa18 */
extern unsigned char DAT_0049fa19; /* 0x49fa19 */
extern unsigned char DAT_0049fa1a; /* 0x49fa1a */
extern unsigned short DAT_0049fa1c; /* 0x49fa1c */
extern unsigned short DAT_0049fa1e; /* 0x49fa1e */
extern unsigned char DAT_0049fa20; /* 0x49fa20 */
extern unsigned char DAT_0049fa38; /* 0x49fa38 */
extern unsigned char DAT_0049fa39; /* 0x49fa39 */
extern unsigned char DAT_0049fa3a; /* 0x49fa3a */
extern unsigned int DAT_0049fa3c; /* 0x49fa3c */
extern unsigned char DAT_0049fa40; /* 0x49fa40 */
extern unsigned char DAT_0049fa58; /* 0x49fa58 */
extern unsigned int DAT_0049fa5c; /* 0x49fa5c */
extern unsigned char DAT_0049fa60; /* 0x49fa60 */
extern unsigned char DAT_0049fa61; /* 0x49fa61 */
extern unsigned int DAT_0049fa64; /* 0x49fa64 */
extern unsigned char DAT_0049fa68; /* 0x49fa68 */
extern unsigned short DAT_0049fa80; /* 0x49fa80 */
extern unsigned short DAT_0049fa82; /* 0x49fa82 */
extern unsigned char DAT_0049fa84; /* 0x49fa84 */
extern unsigned short DAT_0049fa94; /* 0x49fa94 */
extern unsigned short DAT_0049fa96; /* 0x49fa96 */
extern unsigned char DAT_0049fa98; /* 0x49fa98 */
extern unsigned int DAT_0049fa9c; /* 0x49fa9c */
extern unsigned int DAT_0049faa0; /* 0x49faa0 */
extern unsigned int DAT_0049faa4; /* 0x49faa4 */
extern unsigned int DAT_0049faa8; /* 0x49faa8 */
extern unsigned short DAT_0049fab0; /* 0x49fab0 */
extern unsigned short DAT_0049fab2; /* 0x49fab2 */
extern unsigned char DAT_0049fab4; /* 0x49fab4 */
extern unsigned char DAT_0049fab5; /* 0x49fab5 */
extern unsigned char DAT_0049fab6; /* 0x49fab6 */
extern unsigned char DAT_0049fabc; /* 0x49fabc */
extern unsigned int DAT_0049fac0; /* 0x49fac0 */
extern unsigned int DAT_0049fac4; /* 0x49fac4 */
extern unsigned int DAT_0049fac8; /* 0x49fac8 */
extern unsigned int DAT_0049facc; /* 0x49facc */
extern unsigned int DAT_0049fad0; /* 0x49fad0 */
extern unsigned int DAT_0049fad4; /* 0x49fad4 */
extern unsigned int DAT_0049fad8; /* 0x49fad8 */
extern unsigned int DAT_0049fadc; /* 0x49fadc */
extern unsigned int DAT_0049fae0; /* 0x49fae0 */
extern unsigned int DAT_0049fae4; /* 0x49fae4 */
extern unsigned int DAT_0049fae8; /* 0x49fae8 */
extern unsigned int DAT_0049faec; /* 0x49faec */
extern unsigned int DAT_0049faf0; /* 0x49faf0 */
extern unsigned int DAT_0049faf4; /* 0x49faf4 */
extern unsigned int DAT_0049faf8; /* 0x49faf8 */
extern unsigned int DAT_0049fafc; /* 0x49fafc */
extern unsigned int DAT_0049fb00; /* 0x49fb00 */
extern unsigned int DAT_0049fb04; /* 0x49fb04 */
extern unsigned int DAT_0049fb08; /* 0x49fb08 */
extern unsigned int DAT_0049fb0c; /* 0x49fb0c */
extern unsigned int DAT_0049fb10; /* 0x49fb10 */
extern unsigned int DAT_0049fb14; /* 0x49fb14 */
extern unsigned int DAT_0049fb18; /* 0x49fb18 */
extern unsigned int DAT_0049fb1c; /* 0x49fb1c */
extern unsigned int DAT_0049fb20; /* 0x49fb20 */
extern unsigned int DAT_0049fb24; /* 0x49fb24 */
extern unsigned int DAT_0049fb28; /* 0x49fb28 */
extern unsigned int DAT_0049fb2c; /* 0x49fb2c */
extern unsigned int DAT_0049fb30; /* 0x49fb30 */
extern unsigned int DAT_0049fb34; /* 0x49fb34 */
extern unsigned int DAT_0049fb38; /* 0x49fb38 */
extern unsigned int DAT_0049fb3c; /* 0x49fb3c */
extern unsigned short DAT_0049fb40; /* 0x49fb40 */
extern unsigned short DAT_0049fb42; /* 0x49fb42 */
extern unsigned char DAT_0049fb44; /* 0x49fb44 */
extern unsigned char DAT_0049fb45; /* 0x49fb45 */
extern unsigned char DAT_0049fb46; /* 0x49fb46 */
extern unsigned char DAT_0049fb47; /* 0x49fb47 */
extern unsigned char DAT_0049fb48; /* 0x49fb48 */
extern unsigned char DAT_0049fb49; /* 0x49fb49 */
extern unsigned int DAT_0049fb4c; /* 0x49fb4c */
extern unsigned int DAT_0049fb50; /* 0x49fb50 */
extern unsigned int DAT_0049fb54; /* 0x49fb54 */
extern unsigned int DAT_0049fb58; /* 0x49fb58 */
extern unsigned int DAT_0049fb5c; /* 0x49fb5c */
extern unsigned short DAT_0049fb60; /* 0x49fb60 */
extern unsigned int DAT_0049fb64; /* 0x49fb64 */
extern unsigned char DAT_0049fb68; /* 0x49fb68 */
extern unsigned char DAT_0049fb69; /* 0x49fb69 */
extern unsigned char DAT_0049fb6a; /* 0x49fb6a */
extern unsigned char DAT_0049fb6b; /* 0x49fb6b */
extern unsigned char DAT_0049fb6c; /* 0x49fb6c */
extern unsigned char DAT_0049fb6d; /* 0x49fb6d */
extern unsigned int DAT_0049fb7c; /* 0x49fb7c */
extern unsigned int DAT_0049fb80; /* 0x49fb80 */
extern unsigned int DAT_0049fb84; /* 0x49fb84 */
extern unsigned int DAT_0049fb88; /* 0x49fb88 */
extern unsigned int DAT_0049fb8c; /* 0x49fb8c */
extern unsigned int DAT_0049fb90; /* 0x49fb90 */
extern unsigned short DAT_0049fb94; /* 0x49fb94 */
extern unsigned short DAT_0049fb96; /* 0x49fb96 */
extern unsigned short DAT_0049fb98; /* 0x49fb98 */
extern unsigned short DAT_0049fb9a; /* 0x49fb9a */
extern unsigned int DAT_0049fb9c; /* 0x49fb9c */
extern unsigned char DAT_0049fba0; /* 0x49fba0 */
extern unsigned char DAT_0049fc14; /* 0x49fc14 */
extern unsigned int DAT_0049fc18; /* 0x49fc18 */
extern unsigned int DAT_0049fc1c; /* 0x49fc1c */
extern unsigned int DAT_0049fc20; /* 0x49fc20 */
extern unsigned int DAT_0049fc24; /* 0x49fc24 */
extern unsigned int DAT_0049fc28; /* 0x49fc28 */
extern unsigned int DAT_0049fc2c; /* 0x49fc2c */
extern unsigned int DAT_0049fc30; /* 0x49fc30 */
extern unsigned int DAT_0049fc54; /* 0x49fc54 */
extern unsigned int DAT_0049fc58; /* 0x49fc58 */
extern unsigned int DAT_0049fc5c; /* 0x49fc5c */
extern unsigned int DAT_0049fc60; /* 0x49fc60 */
extern unsigned char DAT_0049fc64; /* 0x49fc64 */
extern unsigned int DAT_0049fc68; /* 0x49fc68 */
extern unsigned int DAT_0049fc6c; /* 0x49fc6c */
extern unsigned int DAT_0049fc70; /* 0x49fc70 */
extern unsigned int DAT_0049fc74; /* 0x49fc74 */
extern unsigned int DAT_0049fc78; /* 0x49fc78 */
extern unsigned int DAT_0049fc7c; /* 0x49fc7c */
extern unsigned int DAT_0049fc80; /* 0x49fc80 */
extern unsigned int DAT_0049fc84; /* 0x49fc84 */
extern unsigned int DAT_0049fc88; /* 0x49fc88 */
extern unsigned int DAT_0049fc8c; /* 0x49fc8c */
extern unsigned int DAT_0049fc90; /* 0x49fc90 */
extern unsigned int DAT_0049fc94; /* 0x49fc94 */
extern unsigned int DAT_0049fc98; /* 0x49fc98 */
extern unsigned int DAT_0049fc9c; /* 0x49fc9c */
extern unsigned int DAT_0049fca0; /* 0x49fca0 */
extern unsigned int DAT_0049fca4; /* 0x49fca4 */
extern unsigned char DAT_0049fca8; /* 0x49fca8 */
extern unsigned int DAT_0049fcac; /* 0x49fcac */
extern unsigned int DAT_0049fcb0; /* 0x49fcb0 */
extern unsigned int DAT_0049fcb4; /* 0x49fcb4 */
extern unsigned int DAT_0049fcb8; /* 0x49fcb8 */
extern unsigned int DAT_0049fcbc; /* 0x49fcbc */
extern unsigned int DAT_0049fcc0; /* 0x49fcc0 */
extern unsigned int DAT_0049fcc4; /* 0x49fcc4 */
extern unsigned int DAT_0049fcc8; /* 0x49fcc8 */
extern unsigned int DAT_0049fccc; /* 0x49fccc */
extern unsigned int DAT_0049fcd0; /* 0x49fcd0 */
extern unsigned int DAT_0049fcd4; /* 0x49fcd4 */
extern unsigned int DAT_0049fcd8; /* 0x49fcd8 */
extern unsigned int DAT_0049fcdc; /* 0x49fcdc */
extern unsigned int DAT_0049fce0; /* 0x49fce0 */
extern unsigned int DAT_0049fce4; /* 0x49fce4 */
extern unsigned char DAT_0049fce8; /* 0x49fce8 */
extern unsigned int DAT_0049fcec; /* 0x49fcec */
extern unsigned int DAT_0049fcf0; /* 0x49fcf0 */
extern unsigned char DAT_0049fcf4; /* 0x49fcf4 */
extern unsigned int DAT_0049fcf8; /* 0x49fcf8 */
extern unsigned int DAT_0049fcfc; /* 0x49fcfc */
extern unsigned char DAT_0049fd00; /* 0x49fd00 */
extern unsigned char DAT_0049fd01; /* 0x49fd01 */
extern unsigned int DAT_0049fd04; /* 0x49fd04 */
extern unsigned int DAT_0049fd08; /* 0x49fd08 */
extern unsigned int DAT_0049fd0c; /* 0x49fd0c */
extern unsigned char DAT_0049fd10; /* 0x49fd10 */
extern unsigned char DAT_0049fd11; /* 0x49fd11 */
extern unsigned int DAT_0049fd14; /* 0x49fd14 */
extern unsigned int DAT_0049fd18; /* 0x49fd18 */
extern unsigned int DAT_0049fd1c; /* 0x49fd1c */
extern unsigned int DAT_0049fd20; /* 0x49fd20 */

/* Supplied declaration required: FUN_001954b0. */
/* Supplied declaration required: FUN_0026faa4. */
extern unsigned long long FUN_00270384(int);
/* Supplied declaration required: FUN_0027d908. */
extern int FUN_002c2950(void);


void FUN_00287c34(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned long long temp_v3;
  
  DAT_0049f924 = 0xffffffff;
  DAT_0049f91c = 0;
  DAT_0049f920 = 3;
  DAT_0049f934 = 0;
  DAT_0049f938 = 0;
  DAT_0049f93c = 0;
  DAT_0049f958 = 0;
  DAT_0049f954 = 0xffffffff;
  DAT_0049f95c = 0;
  DAT_0049f960 = 0;
  DAT_0049f964 = 0;
  DAT_0049f968 = 0;
  DAT_0049f96c = 0;
  DAT_0049f970 = 0;
  DAT_0049f974 = 0xffffffff;
  DAT_0049f978.u1[0] = 0;
  DAT_0049f9d0 = 0;
  if (param_1 == 0) {
    DAT_0049f950 = 0;
  }
  DAT_0049f944 = 0;
  DAT_0049f948 = 0;
  DAT_0049f94a = 0;
  DAT_0049f94b = 0xff;
  DAT_0049f94c = 0xff;
  DAT_0049f94d = 0xff;
  DAT_0049f94e = 0xff;
  DAT_0049f94f = 0xff;
  DAT_0049f93e = 0;
  DAT_0049f93f = 0;
  DAT_0049f9a0 = 0;
  DAT_0049f9a4 = 0;
  DAT_0049f9a8 = 0;
  DAT_0049f9ac = 0;
  DAT_0049f9b0 = 0;
  DAT_0049f9b4 = 0;
  DAT_0049f9b8 = 0;
  DAT_0049f9bc = 0;
  DAT_0049f9c0 = 0;
  DAT_0049f9c4 = 0;
  DAT_0049f9c8 = 0;
  DAT_0049f9d4 = 0;
  DAT_0049f9d5 = 0;
  DAT_0049f9d6 = 0;
  DAT_0049f9d7 = 0;
  DAT_0049f9d8 = 0;
  DAT_0049f9da = 0;
  DAT_0049f9dc = 0xffff;
  DAT_0049f9e0 = 0;
  DAT_0049f9e4 = 0x42c80000;
  DAT_0049f9e8 = 0;
  DAT_0049f9ec = 0;
  DAT_0049f9f0 = 0x42c80000;
  DAT_0049f9f4 = 0x42c80000;
  DAT_0049f9f8 = 0x42200000;
  DAT_0049fa14 = 0;
  DAT_0049fa15 = 0;
  DAT_0049fa16 = 0;
  DAT_0049fa17 = 0;
  DAT_0049fa18 = 0;
  DAT_0049fa19 = 0;
  DAT_0049fa1a = 0;
  DAT_0049fa1c = 0;
  DAT_0049fa1e = 0;
  DAT_0049fa20 = 0;
  DAT_0049fa38 = 1;
  DAT_0049fa39 = 1;
  DAT_0049fa3a = 0;
  DAT_0049fa3c = 0;
  DAT_0049fa40 = 0;
  DAT_0049fa60 = 0;
  DAT_0049fa58 = 0;
  DAT_0049fa5c = 0;
  DAT_0049fa61 = 0;
  DAT_0049fa64 = 0;
  DAT_0049fa68 = 0;
  DAT_0049fa80 = 0;
  DAT_0049fa82 = 0;
  DAT_0049fa84 = 0;
  DAT_0049fa94 = 0;
  DAT_0049fa96 = 0;
  DAT_0049fa98 = 0;
  DAT_0049fa9c = 0;
  DAT_0049faa0 = 0;
  DAT_0049faa4 = 0;
  DAT_0049faa8 = 0;
  DAT_0049fab0 = 0;
  DAT_0049fab2 = 0;
  DAT_0049fab4 = 0;
  DAT_0049fab5 = 0;
  DAT_0049fab6 = 0;
  DAT_0049fabc = 0;
  DAT_0049fac0 = 0;
  DAT_0049fac4 = 0;
  DAT_0049fac8 = 0;
  DAT_0049facc = 0;
  DAT_0049fad0 = 0;
  DAT_0049fad4 = 0;
  DAT_0049fad8 = 0;
  DAT_0049f942 = 0;
  DAT_0049f943 = 0;
  DAT_0049fc14 = 0;
  DAT_0049fc18 = 0;
  DAT_0049fc20 = 0xffffffff;
  DAT_0049fc1c = 0;
  DAT_0049fc24 = 0;
  DAT_0049fc28 = 0;
  DAT_0049fc2c = 0;
  DAT_0049fc30 = 0;
  DAT_0049fae4 = 0;
  DAT_0049fae8 = 0;
  DAT_0049faec = 0;
  DAT_0049faf0 = 0;
  DAT_0049faf4 = 0;
  DAT_0049faf8 = 0;
  DAT_0049fafc = 0;
  DAT_0049fb00 = 0;
  DAT_0049fb04 = 0;
  DAT_0049fb08 = 0;
  DAT_0049fb0c = 0;
  DAT_0049fb10 = 0;
  DAT_0049fb14 = 0;
  DAT_0049fb18 = 0;
  DAT_0049fb1c = 0;
  DAT_0049fb20 = 0;
  DAT_0049fb24 = 0;
  DAT_0049fb28 = 0;
  DAT_0049fb2c = 0;
  DAT_0049fb30 = 0;
  DAT_0049fb34 = 0;
  DAT_0049fb38 = 0;
  DAT_0049fadc = 0x3c;
  DAT_0049fae0 = 8;
  DAT_0049fb40 = 0;
  DAT_0049fb42 = 0;
  DAT_0049fb44 = 0;
  DAT_0049fb48 = 0;
  DAT_0049fb45 = 1;
  DAT_0049fb46 = 1;
  DAT_0049fb47 = 0;
  DAT_0049fb49 = 0;
  DAT_0049fb4c = 0;
  DAT_0049fb50 = 0;
  DAT_0049fb54 = 0;
  DAT_0049fb58 = 0;
  DAT_0049fb5c = 0;
  DAT_0049fb60 = 0;
  DAT_0049fb64 = 0;
  DAT_0049fb68 = 0;
  DAT_0049fb69 = 0;
  DAT_0049fb6a = 0;
  DAT_0049fb6b = 0;
  DAT_0049fb6c = 0;
  DAT_0049fb6d = 0;
  DAT_0049fc54 = 1;
  DAT_0049fc5c = 0;
  DAT_0049fc58 = 1;
  DAT_0049fc60 = 0;
  DAT_0049fb7c = 0x1e;
  DAT_0049fb3c = 0;
  DAT_0049fb80 = 0x455ac000;
  DAT_0049fb84 = 0x44fa0000;
  DAT_0049fb88 = 0x43fa0000;
  DAT_0049fb8c = 0x43160000;
  DAT_0049fb90 = 0x447a0000;
  DAT_0049fb94 = 0x46;
  DAT_0049fb96 = 8;
  DAT_0049fb98 = 4;
  DAT_0049fb9a = 4;
  DAT_0049fb9c = 0;
  DAT_0049fba0 = 0;
  DAT_0049fc64 = 0;
  DAT_0049fc68 = 0;
  DAT_0049fc6c = 0;
  DAT_0049fc70 = 0;
  DAT_0049fc74 = 0;
  DAT_0049fc78 = 0;
  DAT_0049fc7c = 0;
  DAT_0049fc80 = 0;
  DAT_0049fc84 = 0;
  if (param_1 == 0) {
    DAT_0049fc88 = 0;
  }
  DAT_0049fc8c = 0;
  DAT_0049fc90 = 0;
  DAT_0049fc94 = 0;
  DAT_0049fc98 = 0;
  DAT_0049fc9c = 1;
  DAT_0049fca0 = 0;
  DAT_0049fca4 = 0;
  DAT_0049fca8 = 0;
  DAT_0049fcac = 0;
  DAT_0049fcb0 = 1;
  DAT_0049fcb4 = 0;
  DAT_0049fcb8 = 0;
  DAT_0049fcbc = 0;
  DAT_0049fcc0 = 1;
  DAT_0049fcdc = 0xff;
  DAT_0049fcc4 = 0;
  DAT_0049fcd0 = 1;
  DAT_0049fce0 = 0xff;
  DAT_0049fce4 = 0xff;
  DAT_0049fcc8 = 5;
  DAT_0049fccc = 3;
  DAT_0049fcd4 = 0x80;
  DAT_0049fcd8 = 1;
  DAT_0049fce8 = 0;
  DAT_0049fcec = 0xffffffff;
  DAT_0049fcf0 = 0xffffffff;
  DAT_0049fcf4 = 0;
  DAT_0049fcf8 = 0;
  DAT_0049fcfc = 0;
  DAT_0049fd00 = 0;
  DAT_0049fd01 = 0;
  DAT_0049fd04 = 0;
  DAT_0049fd08 = 0xffffffff;
  DAT_0049fd0c = 0xffffffff;
  DAT_0049fd10 = 0;
  DAT_0049fd11 = 1;
  DAT_0049fd14 = 0xffffffff;
  DAT_0049fd18 = 0xffffffff;
  DAT_0049fd1c = 0xffffffff;
  DAT_0049fd20 = 0xffffffff;
  FUN_001954b0();
  if (param_1 == 0) {
    FUN_0027d908();
    FUN_0026faa4();
  }
  temp_v0 = FUN_002c2950();
  temp_v2 = 0;
  do {
    temp_v3 = FUN_00270384(temp_v2);
    temp_v2 = (int)((unsigned long long)temp_v3 >> 0x20);
    temp_v1 = (int)temp_v3;
    if (temp_v1 == 0) {
      *(unsigned char *)(temp_v0 + temp_v2 + 0xe14) = 0;
    }
    else if ((temp_v1 == 1 || temp_v1 == 2) || temp_v1 == 3) {
      if (param_1 == 2) {
        *(unsigned char *)(temp_v0 + temp_v2 + 0xe14) = 3;
      }
      else if (param_1 == 0) {
        *(unsigned char *)(temp_v0 + temp_v2 + 0xe14) = 1;
      }
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x40);
  return;
}
