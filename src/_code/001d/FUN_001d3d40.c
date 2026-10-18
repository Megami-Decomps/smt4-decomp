/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d3d40` (_code @ 0x1d3d40, 0x5448 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 14 slot(s), 56 byte(s) */
typedef struct {
    unsigned int sp140; /* 0x140: local_140 */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp14C; /* 0x14c: local_14c */
    unsigned int sp150; /* 0x150: local_150 */
    unsigned int sp154; /* 0x154: local_154 */
    unsigned int sp158; /* 0x158: local_158 */
    unsigned int sp15C; /* 0x15c: local_15c */
    unsigned int sp160; /* 0x160: local_160 */
    unsigned int sp164; /* 0x164: local_164 */
    unsigned int sp168; /* 0x168: local_168 */
    unsigned int sp16C; /* 0x16c: local_16c */
    unsigned int sp170; /* 0x170: local_170 */
    unsigned int sp174; /* 0x174: local_174 */
    unsigned int sp178; /* 0x178: local_178 */
} void_stack;

extern unsigned char LAB_001d46f8; /* 0x1d46f8 */
extern unsigned char LAB_001d4710; /* 0x1d4710 */
extern unsigned char LAB_001d472c; /* 0x1d472c */
extern unsigned char LAB_001d4748; /* 0x1d4748 */
extern unsigned char LAB_001d475c; /* 0x1d475c */
extern unsigned char LAB_001d4770; /* 0x1d4770 */
extern unsigned char LAB_001d4788; /* 0x1d4788 */
extern unsigned char LAB_001d4f44; /* 0x1d4f44 */
extern unsigned char LAB_001d57f4; /* 0x1d57f4 */
extern unsigned char LAB_001d5d08; /* 0x1d5d08 */
extern unsigned char LAB_001d6eb0; /* 0x1d6eb0 */
extern unsigned char LAB_001d72d0; /* 0x1d72d0 */
extern unsigned char LAB_001d72e0; /* 0x1d72e0 */
extern unsigned char LAB_001d72f4; /* 0x1d72f4 */
extern unsigned char LAB_001d730c; /* 0x1d730c */
extern unsigned char LAB_001d7324; /* 0x1d7324 */
extern unsigned char LAB_001d733c; /* 0x1d733c */
extern unsigned char LAB_001d787c; /* 0x1d787c */
extern unsigned char LAB_00305f61; /* 0x305f61 */
extern unsigned char LAB_0031305f; /* 0x31305f */
extern unsigned char LAB_00315f61; /* 0x315f61 */
extern unsigned char LAB_00325f61; /* 0x325f61 */
extern unsigned char DAT_00404460; /* 0x404460 */
extern int DAT_00432fc8; /* 0x432fc8 */
extern int DAT_00433158; /* 0x433158 */
extern unsigned int *DAT_00447060; /* 0x447060 */
extern int DAT_004474f4; /* 0x4474f4 */
extern int DAT_00447e58; /* 0x447e58 */
extern int DAT_00447e88; /* 0x447e88 */
extern unsigned char DAT_0049f3f0; /* 0x49f3f0 */
extern int DAT_0049f91c; /* 0x49f91c */
extern int DAT_0049f920; /* 0x49f920 */
extern unsigned int DAT_0049f924; /* 0x49f924 */
extern unsigned int DAT_0049f928; /* 0x49f928 */
extern unsigned int DAT_0049f92c; /* 0x49f92c */
extern unsigned int DAT_0049f930; /* 0x49f930 */
extern signed char DAT_0049f934; /* 0x49f934 */
extern unsigned char DAT_0049f93c; /* 0x49f93c */
extern unsigned char DAT_0049f93e; /* 0x49f93e */
extern unsigned char DAT_0049f940; /* 0x49f940 */
extern unsigned char DAT_0049f941; /* 0x49f941 */
extern unsigned char DAT_0049f942; /* 0x49f942 */
extern signed char DAT_0049f950; /* 0x49f950 */
extern int DAT_0049f954; /* 0x49f954 */
extern unsigned int DAT_0049f958; /* 0x49f958 */
extern unsigned int DAT_0049f970; /* 0x49f970 */
extern int DAT_0049f974; /* 0x49f974 */
extern unsigned int DAT_0049f978; /* 0x49f978 */
extern unsigned int DAT_0049f97c; /* 0x49f97c */
extern unsigned char *DAT_0049f980; /* 0x49f980 */
extern unsigned int uRam0049f984; /* 0x49f984 */
extern unsigned int uRam0049f988; /* 0x49f988 */
extern int DAT_0049f990; /* 0x49f990 */
extern int DAT_0049f994; /* 0x49f994 */
extern unsigned int DAT_0049f998; /* 0x49f998 */
extern unsigned int DAT_0049f9a0; /* 0x49f9a0 */
extern unsigned int DAT_0049f9a4; /* 0x49f9a4 */
extern float DAT_0049f9a8; /* 0x49f9a8 */
extern unsigned int DAT_0049f9ac; /* 0x49f9ac */
extern unsigned int DAT_0049f9b0; /* 0x49f9b0 */
extern unsigned int DAT_0049f9b4; /* 0x49f9b4 */
extern unsigned int DAT_0049f9b8; /* 0x49f9b8 */
extern int DAT_0049f9c0; /* 0x49f9c0 */
extern unsigned int DAT_0049f9c4; /* 0x49f9c4 */
extern unsigned char DAT_0049f9c8; /* 0x49f9c8 */
extern unsigned int DAT_0049f9cc; /* 0x49f9cc */
extern int DAT_0049f9d0; /* 0x49f9d0 */
extern signed char DAT_0049f9d4; /* 0x49f9d4 */
extern signed char DAT_0049f9d5; /* 0x49f9d5 */
extern signed char DAT_0049f9d6; /* 0x49f9d6 */
extern unsigned char DAT_0049f9d7; /* 0x49f9d7 */
extern unsigned char DAT_0049f9d8; /* 0x49f9d8 */
extern short DAT_0049f9dc; /* 0x49f9dc */
extern unsigned char DAT_0049fa14; /* 0x49fa14 */
extern unsigned char DAT_0049fa15; /* 0x49fa15 */
extern unsigned char DAT_0049fa16; /* 0x49fa16 */
extern unsigned char DAT_0049fa17; /* 0x49fa17 */
extern unsigned char DAT_0049fa18; /* 0x49fa18 */
extern unsigned char DAT_0049fa19; /* 0x49fa19 */
extern signed char DAT_0049fa1a; /* 0x49fa1a */
extern unsigned char DAT_0049fa20; /* 0x49fa20 */
extern signed char DAT_0049fa38; /* 0x49fa38 */
extern signed char DAT_0049fa58; /* 0x49fa58 */
extern unsigned int DAT_0049fa5c; /* 0x49fa5c */
extern signed char DAT_0049fa61; /* 0x49fa61 */
extern unsigned int DAT_0049fa64; /* 0x49fa64 */
extern unsigned char DAT_0049fa68; /* 0x49fa68 */
extern short DAT_0049fa80; /* 0x49fa80 */
extern short DAT_0049fa82; /* 0x49fa82 */
extern unsigned char DAT_0049fa84; /* 0x49fa84 */
extern short DAT_0049fa94; /* 0x49fa94 */
extern short DAT_0049fa96; /* 0x49fa96 */
extern signed char DAT_0049fab5; /* 0x49fab5 */
extern int DAT_0049fad4; /* 0x49fad4 */
extern unsigned int DAT_0049fad8; /* 0x49fad8 */
extern unsigned char DAT_0049fb45; /* 0x49fb45 */
extern unsigned char DAT_0049fb46; /* 0x49fb46 */
extern unsigned char DAT_0049fb47; /* 0x49fb47 */
extern unsigned char DAT_0049fb48; /* 0x49fb48 */
extern unsigned char DAT_0049fb49; /* 0x49fb49 */
extern unsigned int DAT_0049fb70; /* 0x49fb70 */
extern unsigned int DAT_0049fb74; /* 0x49fb74 */
extern unsigned int DAT_0049fb78; /* 0x49fb78 */
extern int DAT_0049fb9c; /* 0x49fb9c */
extern unsigned char DAT_0049fba0; /* 0x49fba0 */
extern int DAT_0049fba4; /* 0x49fba4 */
extern unsigned int DAT_0049fba8; /* 0x49fba8 */
extern signed char DAT_0049fc14; /* 0x49fc14 */
extern int DAT_0049fc18; /* 0x49fc18 */
extern unsigned int DAT_0049fc1c; /* 0x49fc1c */
extern unsigned int DAT_0049fc20; /* 0x49fc20 */
extern unsigned int DAT_0049fc24; /* 0x49fc24 */
extern unsigned int DAT_0049fc28; /* 0x49fc28 */
extern unsigned int DAT_0049fc2c; /* 0x49fc2c */
extern unsigned int DAT_0049fc30; /* 0x49fc30 */
extern signed char DAT_0049fc64; /* 0x49fc64 */
extern unsigned int DAT_0049fc84; /* 0x49fc84 */
extern int DAT_0049fc88; /* 0x49fc88 */
extern int DAT_0049fd14; /* 0x49fd14 */
extern int DAT_0049fd18; /* 0x49fd18 */
extern int DAT_0049fd1c; /* 0x49fd1c */
extern unsigned int DAT_0049fd20; /* 0x49fd20 */
extern unsigned int DAT_0049fd24; /* 0x49fd24 */
extern unsigned int DAT_0049fd28; /* 0x49fd28 */
extern unsigned int DAT_0049fd2c; /* 0x49fd2c */

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_1_1_DEFINED
#define ROMWRIGHT_PIECE_1_1_DEFINED
#define romwright_piece_1_1(upper, lower) ((unsigned short)(((unsigned short)(unsigned char)(upper) << 8) | (unsigned char)(lower)))
#endif
#ifndef ROMWRIGHT_PIECE_1_2_DEFINED
#define ROMWRIGHT_PIECE_1_2_DEFINED
#define romwright_piece_1_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned char)(upper) << 16) | (unsigned short)(lower)))
#endif
#ifndef ROMWRIGHT_PIECE_1_3_DEFINED
#define ROMWRIGHT_PIECE_1_3_DEFINED
#define romwright_piece_1_3(upper, lower) ((unsigned int)(((unsigned int)(unsigned char)(upper) << 24) | ((unsigned int)(lower) & 0xffffffULL)))
#endif
/* Supplied declaration required: FUN_00152af8. */
/* Supplied declaration required: FUN_0018aba8. */
extern int FUN_0019dfbc(unsigned int);
/* Supplied declaration required: FUN_001a8ffc. */
/* Supplied declaration required: FUN_001d33ac. */
/* Supplied declaration required: FUN_001e446c. */
/* Supplied declaration required: FUN_001fa75c. */
/* Supplied declaration required: FUN_001fb2fc. */
/* Supplied declaration required: FUN_0021bb08. */
/* Supplied declaration required: FUN_0021e8b0. */
/* Supplied declaration required: FUN_00263eac. */
/* Supplied declaration required: FUN_00263ee4. */
/* Supplied declaration required: FUN_0026407c. */
/* Supplied declaration required: FUN_002642d0. */
/* Supplied declaration required: FUN_00264368. */
/* Supplied declaration required: FUN_00264670. */
/* Supplied declaration required: FUN_002646d4. */
extern int FUN_00264774(void);
/* Supplied declaration required: FUN_00264900. */
/* Supplied declaration required: FUN_002649c0. */
/* Supplied declaration required: FUN_00264a48. */
/* Supplied declaration required: FUN_00264b14. */
/* Supplied declaration required: FUN_00264b68. */
/* Supplied declaration required: FUN_0026533c. */
/* Supplied declaration required: FUN_002653ac. */
/* Supplied declaration required: FUN_00265da4. */
/* Supplied declaration required: FUN_00265e24. */
/* Supplied declaration required: FUN_0026617c. */
/* Supplied declaration required: FUN_00266704. */
/* Supplied declaration required: FUN_002667b0. */
/* Supplied declaration required: FUN_002668cc. */
/* Supplied declaration required: FUN_002668dc. */
/* Supplied declaration required: FUN_00266c58. */
/* Supplied declaration required: FUN_0026fbc0. */
/* Supplied declaration required: FUN_0026fbd0. */
/* Supplied declaration required: FUN_0026fc24. */
/* Supplied declaration required: FUN_0026fca0. */
/* Supplied declaration required: FUN_0026fd14. */
/* Supplied declaration required: FUN_0027007c. */
/* Supplied declaration required: FUN_002701c4. */
/* Supplied declaration required: FUN_00270250. */
/* Supplied declaration required: FUN_00270298. */
/* Supplied declaration required: FUN_00270340. */
/* Supplied declaration required: FUN_00270404. */
/* Supplied declaration required: FUN_00270458. */
/* Supplied declaration required: FUN_00270514. */
/* Supplied declaration required: FUN_0027054c. */
/* Supplied declaration required: FUN_00270770. */
/* Supplied declaration required: FUN_0027079c. */
/* Supplied declaration required: FUN_0027368c. */
/* Supplied declaration required: FUN_002736fc. */
extern int FUN_0027375c(int);
extern int FUN_00273760(int);
/* Supplied declaration required: FUN_002738b4. */
/* Supplied declaration required: FUN_0027390c. */
extern int FUN_00273958(int);
extern int FUN_00273a78(void);
/* Supplied declaration required: FUN_00273a98. */
/* Supplied declaration required: FUN_00273ab0. */
/* Supplied declaration required: FUN_00273bdc. */
extern int FUN_00273bfc(int);
/* Supplied declaration required: FUN_00273ec4. */
/* Supplied declaration required: FUN_00273fa4. */
/* Supplied declaration required: FUN_002741cc. */
extern unsigned int FUN_002741f4(void);
/* Supplied declaration required: FUN_00274a08. */
/* Supplied declaration required: FUN_002755d4. */
/* Supplied declaration required: FUN_00275a18. */
/* Supplied declaration required: FUN_00275b48. */
/* Supplied declaration required: FUN_00275c2c. */
/* Supplied declaration required: FUN_00275e38. */
/* Supplied declaration required: FUN_00275e58. */
/* Supplied declaration required: FUN_00276034. */
/* Supplied declaration required: FUN_0027605c. */
/* Supplied declaration required: FUN_00276170. */
extern int FUN_002762d0(unsigned int);
extern int FUN_0027636c(int);
/* Supplied declaration required: FUN_00276488. */
/* Supplied declaration required: FUN_002764a8. */
extern int FUN_002764d4(void);
/* Supplied declaration required: FUN_00276580. */
extern int FUN_002765b8(unsigned int);
/* Supplied declaration required: FUN_00276718. */
/* Supplied declaration required: FUN_00276b74. */
/* Supplied declaration required: FUN_00276ba4. */
/* Supplied declaration required: FUN_00276bd8. */
/* Supplied declaration required: FUN_00276c24. */
/* Supplied declaration required: FUN_00277dcc. */
/* Supplied declaration required: FUN_00277f9c. */
/* Supplied declaration required: FUN_0027b524. */
/* Supplied declaration required: FUN_0027c640. */
/* Supplied declaration required: FUN_0027ceb8. */
/* Supplied declaration required: FUN_0027cedc. */
extern int FUN_0027d334(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0027d67c. */
/* Supplied declaration required: FUN_0027d6e4. */
/* Supplied declaration required: FUN_0027d700. */
/* Supplied declaration required: FUN_0027d77c. */
/* Supplied declaration required: FUN_0027d81c. */
/* Supplied declaration required: FUN_0027d830. */
/* Supplied declaration required: FUN_0027d9b8. */
/* Supplied declaration required: FUN_0027da20. */
/* Supplied declaration required: FUN_0027db00. */
/* Supplied declaration required: FUN_0027db24. */
extern int FUN_0027db38(void);
/* Supplied declaration required: FUN_0027db78. */
/* Supplied declaration required: FUN_0027dbb8. */
/* Supplied declaration required: FUN_0027dbd8. */
/* Supplied declaration required: FUN_0027dbfc. */
/* Supplied declaration required: FUN_0027dd94. */
/* Supplied declaration required: FUN_0027de00. */
/* Supplied declaration required: FUN_0027de14. */
extern int FUN_0027ee10(void);
/* Supplied declaration required: FUN_0027ee6c. */
extern int FUN_0027f10c(void);
/* Supplied declaration required: FUN_0027fd08. */
/* Supplied declaration required: FUN_00280d30. */
/* Supplied declaration required: FUN_00280f3c. */
/* Supplied declaration required: FUN_002819f4. */
/* Supplied declaration required: FUN_002819f8. */
/* Supplied declaration required: FUN_002854ec. */
/* Supplied declaration required: FUN_0028550c. */
/* Supplied declaration required: FUN_00285f14. */
extern int FUN_00287a68(void);
extern int FUN_00287afc(void);
/* Supplied declaration required: FUN_00287e9c. */
/* Supplied declaration required: FUN_00289654. */
/* Supplied declaration required: FUN_00289770. */
/* Supplied declaration required: FUN_00289810. */
/* Supplied declaration required: FUN_00289870. */
extern int FUN_00289924(void);
/* Supplied declaration required: FUN_002899c4. */
/* Supplied declaration required: FUN_00289a58. */
extern unsigned int FUN_00289ac0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0028a688. */
/* Supplied declaration required: FUN_0028d908. */
extern int FUN_0029066c(void);
extern int FUN_00290694(void);
/* Supplied declaration required: FUN_00291018. */
/* Supplied declaration required: FUN_00291a08. */
/* Supplied declaration required: FUN_00291cac. */
/* Supplied declaration required: FUN_00295904. */
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_002972f8. */
extern int FUN_00297674(void);
/* Supplied declaration required: FUN_00297704. */
/* Supplied declaration required: FUN_00297c9c. */
/* Supplied declaration required: FUN_00298fec. */
extern unsigned int FUN_0029a2d0(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_0029bddc. */
/* Supplied declaration required: FUN_0029c650. */
/* Supplied declaration required: FUN_0029c660. */
/* Supplied declaration required: FUN_002a06c8. */
/* Supplied declaration required: FUN_002a0790. */
/* Supplied declaration required: FUN_002a0c54. */
/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002a7604. */
/* Supplied declaration required: FUN_002a7aa0. */
extern int FUN_002ae16c(void);
/* Supplied declaration required: FUN_002b01a0. */
/* Supplied declaration required: FUN_002b6700. */
extern int FUN_002b6e44(void);
extern int FUN_002b89d4(void);
/* Supplied declaration required: FUN_002b8b70. */
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002b91c4. */
/* Supplied declaration required: FUN_002bcf58. */
/* Supplied declaration required: FUN_002bd348. */
/* Supplied declaration required: FUN_002be7fc. */
extern unsigned int FUN_002be828(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf86c. */
/* Supplied declaration required: FUN_002bf9e8. */
/* Supplied declaration required: FUN_002c0128. */
extern int FUN_002c0b94(void);
extern int FUN_002c0ba8(unsigned int);
extern unsigned int FUN_002c0bcc(unsigned int);
/* Supplied declaration required: FUN_002c1ffc. */
/* Supplied declaration required: FUN_002c20a8. */
/* Supplied declaration required: FUN_002c2210. */
extern int FUN_002c2b1c(void);
/* Supplied declaration required: FUN_002c2ba4. */
extern int FUN_002c2bd0(unsigned int);
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */
/* Supplied declaration required: FUN_002c59b8. */
extern unsigned int FUN_002c5e2c(unsigned char *);
extern int FUN_002c8630(unsigned int);
extern int FUN_002c9c1c(void);
/* Supplied declaration required: FUN_002d5780. */
/* Supplied declaration required: FUN_002d78bc. */
/* Supplied declaration required: FUN_002e11bc. */
extern int FUN_002eb0f4(void);
/* Supplied declaration required: FUN_002f364c. */
extern unsigned short FUN_002faf3c(void);
/* Supplied declaration required: FUN_002fb090. */
extern char FUN_002fb7a0(void);
/* Supplied declaration required: FUN_00316f2c. */
/* Supplied declaration required: FUN_0032b5a0. */
/* Supplied declaration required: FUN_003338b4. */
/* Supplied declaration required: FUN_0039658c. */
/* Supplied declaration required: FUN_003968c0. */
/* Supplied declaration required: FUN_00396cb4. */
/* Supplied declaration required: FUN_00397090. */
/* Supplied declaration required: FUN_00397120. */


/* WARNING: Type propagation algorithm not settling */

unsigned int FUN_001d3d40(void)

{
/* irregular: 20 goto(s); irregular input(s): in_fpscr; 167 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  unsigned short temp_v2;
  short temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int *puVar7;
  unsigned char *puVar8;
  char *pcVar9;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int *puVar13;
  unsigned int *puVar14;
  unsigned int temp_v9;
  unsigned int temp_v10;
  int unaff_r5;
  unsigned int *puVar17;
  int *piVar18;
  int unaff_r7;
  unsigned char temp_v11;
  unsigned char temp_v12;
  unsigned int in_fpscr;
  float temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  int temp_v19;
  unsigned int temp_v20;
  float temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  unsigned int temp_v27;
  unsigned int uStack_144;
  unsigned int temp_v28;
  unsigned char temp_v29 [128];
  unsigned char temp_v30 [148];
  
  puVar7 = DAT_00447060;
  puVar14 = &temp_v15;
  temp_v4 = FUN_002c2b1c();
  temp_v6 = DAT_0049f994;
  puVar17 = DAT_00447060;
  temp_v5 = puVar7[3];
  switch(temp_v5) {
  case 0:
    DAT_0049f940 = 1;
    DAT_0049f941 = 1;
    DAT_0049fba0 = 0;
    FUN_002819f8();
    FUN_0018aba8(*puVar7,1);
    *(unsigned char *)((int)puVar7 + 0x99a) = 0;
    *(unsigned char *)(temp_v4 + 0x792) = 0;
    *(unsigned char *)(puVar7 + 5) = 1;
    *(unsigned char *)(puVar7 + 0x266) = 0;
    *(unsigned char *)((int)puVar7 + 0x999) = 0;
    temp_v6 = DAT_0049fd14;
    DAT_0049fb70 = 0x44160000;
    DAT_0049fb74 = 0x41a00000;
    DAT_0049fb78 = 0x3c;
    DAT_0049f930 = 2;
    if ((DAT_0049fc14 != '\0') && (DAT_0049fc18 >= 100)) {
      temp_v12 = 0;
      temp_v7 = FUN_0027dbfc();
      switch(temp_v7) {
      case 0:
      case 3:
        temp_v6 = FUN_00290694();
        if ((temp_v6 != 0) && (temp_v6 = FUN_00287afc(), temp_v6 == 6)) {
          puVar7[0x265] = 1;
        }
        if (*(short *)(temp_v4 + 0x22) != 0) {
          temp_v6 = FUN_0027dbd8();
          if (temp_v6 != -1) {
            FUN_002899c4((int)*(short *)(temp_v4 + 0x22),1);
          }
          else {
            FUN_0027dbb8();
            FUN_0027db78();
          }
        }
        temp_v6 = FUN_0027dd94(0);
        temp_v12 = 1;
        FUN_001fb2fc();
        if (temp_v6 == 3) {
          *(unsigned char *)((int)puVar7 + 0x999) = 1;
        }
        break;
      case 1:
        temp_v6 = FUN_0027db38();
        if (temp_v6 != 0) {
          *(unsigned char *)(puVar7 + 0x264) = 1;
        }
      case 5:
        FUN_00285f14(1);
        FUN_0027dd94(0);
        DAT_0049fb9c = 0;
        break;
      case 2:
        FUN_0027dd94(0);
        break;
      case 4:
        puVar7[0x265] = 2;
        break;
      case 6:
        FUN_00285f14(2);
        FUN_0027dd94(0);
      }
      *(unsigned short *)(temp_v4 + 0x22) = 0;
      temp_v6 = FUN_00287a68();
      if ((temp_v6 != 0) || (!temp_v12)) {
        DAT_0049fa61 = '\0';
        DAT_0049f9c8 = 0;
        FUN_0027de00();
        FUN_0027db24(0);
        DAT_0049fa1a = '\0';
      }
      DAT_0049f91c = DAT_0049fc18;
      puVar7[0x10] = DAT_0049fc18;
      DAT_0049f920 = DAT_0049fc1c;
      puVar7[0x12] = DAT_0049fc1c;
      temp_v9 = DAT_0049fc2c;
      temp_v10 = DAT_0049fc28;
      temp_v7 = DAT_0049fc24;
      temp_v6 = DAT_00447e88;
      DAT_0049f924 = DAT_0049fc20;
      puVar17 = (unsigned int *)(DAT_00447e88 + 0x20);
      *(unsigned int *)(DAT_00447e88 + 0x1c) = DAT_0049fc24;
      *(unsigned int *)(temp_v6 + 0x28) = temp_v7;
      *puVar17 = temp_v10;
      *(unsigned int *)(temp_v6 + 0x24) = temp_v9;
      *(unsigned int *)(temp_v6 + 0x2c) = temp_v10;
      *(unsigned int *)(temp_v6 + 0x30) = temp_v9;
      temp_v7 = DAT_0049fc30;
      *(unsigned int *)(temp_v6 + 0x4c) = DAT_0049fc30;
      *(unsigned int *)(temp_v6 + 0x50) = temp_v7;
      DAT_0049fc14 = 0;
      DAT_0049fd14 = 0;
      FUN_0027db00();
      puVar7[3] = 2;
      FUN_0027d830();
      return 0;
    }
    if (DAT_0049fd14 != -1) {
      DAT_0049fb9c = 0;
      puVar7[0x10] = DAT_0049fd14;
      DAT_0049f920 = DAT_0049fd18;
      DAT_0049f91c = temp_v6;
      puVar7[0x12] = DAT_0049fd18;
      temp_v6 = DAT_00447e88;
      DAT_0049f924 = DAT_0049fd20;
      if (DAT_0049fd1c != -1) {
        temp_v6 = puVar7[0x10];
        FUN_0027da20(temp_v6,puVar7[0x12]);
        if (temp_v6 != -1) {
          temp_v4 = FUN_0027d9b8();
          temp_v6 = DAT_00447e88;
          temp_v7 = VectorSignedToFloat((int)*(short *)(temp_v4 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(DAT_00447e88 + 0x1c) = temp_v7;
          temp_v7 = VectorSignedToFloat((int)*(short *)(temp_v4 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v6 + 0x20) = temp_v7;
          temp_v7 = VectorSignedToFloat((int)*(short *)(temp_v4 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v6 + 0x24) = temp_v7;
          *(unsigned int *)(temp_v6 + 0x28) = *(unsigned int *)(temp_v6 + 0x1c);
          *(unsigned int *)(temp_v6 + 0x2c) = *(unsigned int *)(temp_v6 + 0x20);
          *(unsigned int *)(temp_v6 + 0x30) = temp_v7;
          temp_v7 = VectorSignedToFloat((int)*(short *)(temp_v4 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v6 + 0x4c) = temp_v7;
          *(unsigned int *)(temp_v6 + 0x50) = temp_v7;
          temp_v7 = VectorSignedToFloat((int)*(short *)(temp_v4 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(DAT_004474f4 + 0x18) = temp_v7;
        }
      }
      else {
        *(unsigned int *)(DAT_00447e88 + 0x1c) = DAT_0049fd24;
        temp_v7 = DAT_0049fd28;
        *(unsigned int *)(temp_v6 + 0x20) = DAT_0049fd28;
        *(unsigned int *)(temp_v6 + 0x24) = DAT_0049fd2c;
        *(unsigned int *)(temp_v6 + 0x28) = *(unsigned int *)(temp_v6 + 0x1c);
        *(unsigned int *)(temp_v6 + 0x2c) = temp_v7;
        *(unsigned int *)(temp_v6 + 0x30) = *(unsigned int *)(temp_v6 + 0x24);
        *(unsigned char *)(puVar7 + 5) = 0;
      }
      FUN_0027db00();
      if (((((*(char *)(puVar7 + 0x264) == '\0') && (puVar7[0x265] != 1)) && (puVar7[0x265] != 2))
          && ((DAT_0049fa61 == '\0' && (DAT_0049fa1a == '\0')))) &&
         ((temp_v6 = FUN_002c0ba8(0x529), temp_v6 != 0 &&
          (temp_v6 = FUN_002c8630(puVar7[0x10]), temp_v6 != 0)))) {
        *(unsigned char *)(puVar7 + 0x266) = 1;
      }
      puVar7[3] = 2;
      FUN_0027d830();
      return 0;
    }
    *(unsigned short *)((int)puVar7 + 0x4e) = 1;
    temp_v6 = puVar7[3] + 1;
    puVar7[3] = temp_v6;
    break;
  case 1:
    temp_v6 = 2;
    puVar7[3] = temp_v6;
    break;
  case 2:
    FUN_0021bb08(puVar7[0x10],puVar7[0x12]);
    FUN_002f364c();
    FUN_002be7fc(temp_v29,&LAB_001d46f8,puVar7[0x10] - 100);
    FUN_002a0c54(temp_v29,0);
    DAT_0049f942 = 0;
    FUN_0027d81c();
    FUN_002854ec(0);
    DAT_0049f928 = puVar7[0x10];
    DAT_0049f92c = puVar7[0x12];
    FUN_00291cac(0);
    FUN_0021e8b0(puVar7[0x10]);
    FUN_0027d6e4(puVar7[0x10],puVar7[0x12],DAT_0049f924);
    if ((DAT_0049f950 != '\0') || (*(char *)(puVar7 + 0x266) != '\0')) {
      FUN_00277dcc(DAT_0049f91c,DAT_0049f920);
    }
    temp_v6 = puVar7[3] + 1;
    puVar7[3] = temp_v6;
    break;
  case 3:
    if (DAT_00447060[0x10] == 100) {
      return 0;
    }
    FUN_002be7fc(temp_v29,&LAB_001d4710,puVar7[0x10] - 100,puVar7[0x10] - 100);
    FUN_00297704(temp_v29,puVar7 + 0x2a6,1);
    temp_v6 = 0;
    if (0 < *(int *)(puVar7[0x10] * 4 + 0x446ee8)) {
      do {
        if (puVar7[0x10] != 0x65 || temp_v6 != 3) {
          temp_v15 = temp_v6;
          FUN_002be7fc(temp_v29,&LAB_001d472c,puVar7[0x10] - 100);
          puVar17 = DAT_00447060;
          if (DAT_00447060 != (unsigned int *)0x0) {
            temp_v7 = FUN_0029a2d0(temp_v29,0x1c0);
            puVar17[*(unsigned char *)(puVar17 + 0x2a4) + 0x284] = temp_v7;
            *(char *)(puVar17 + 0x2a4) = *(char *)(puVar17 + 0x2a4) + '\x01';
          }
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < *(int *)(puVar7[0x10] * 4 + 0x446ee8));
    }
    temp_v6 = puVar7[3] + 1;
    puVar7[3] = temp_v6;
    break;
  case 4:
    if (DAT_00447060[0x10] != 100) {
      if (puVar7[0x2a6] == 0) {
        return 0;
      }
      if (DAT_00447060 != (unsigned int *)0x0) {
        temp_v6 = 0;
        do {
          if ((puVar17[temp_v6 + 0x284] != 0) && (temp_v4 = FUN_002ae16c(), temp_v4 == 0)) {
            return 0;
          }
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 0x20);
      }
      if (DAT_0049fb9c != 0) {
        FUN_00266c58();
      }
      FUN_002668dc();
      puVar17 = DAT_00447060;
      if (DAT_00447060 != (unsigned int *)0x0) {
        temp_v6 = 0;
        do {
          piVar18 = (int *)(puVar17 + temp_v6 + 0x284);
          if (*piVar18 != 0) {
            FUN_002a06c8(*piVar18,1);
            FUN_002e11bc(*piVar18,1);
            *(unsigned char *)(*(int *)(*(int *)(*piVar18 + 8) + 0x2c) + 500) = 0;
          }
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 0x20);
      }
      puVar7[3] = puVar7[3] + 1;
    }
  case 5:
    temp_v6 = FUN_0027d334(puVar7[0x10],puVar7[0x12]);
    if (temp_v6 == 0) {
      return 0;
    }
    puVar7[3] = puVar7[3] + 1;
  case 6:
    goto LAB_001d459c;
  case 7:
    goto LAB_001d45bc;
  case 8:
    goto LAB_001d45d8;
  case 9:
    goto LAB_001d4678;
  case 10:
    FUN_00266704(puVar7 + 0x3b);
    puVar7[4] = puVar7[4] + 1;
    FUN_002a0790(0);
    puVar7[3] = puVar7[3] + 1;
    *(unsigned char *)(puVar7 + 0x25) = 1;
    FUN_0027079c();
    FUN_0026617c(puVar7);
    FUN_00265e24(puVar7);
    FUN_002755d4();
    DAT_0049f934 = '\0';
    DAT_0049fb45 = 1;
    DAT_0049fb46 = 1;
    if ((puVar7[0x2a7] != 0) && (temp_v6 = 0, 0 < *(int *)(puVar7[0x2a7] + 4))) {
      do {
        FUN_00265da4(temp_v6,0);
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < *(int *)(puVar7[0x2a7] + 4));
    }
    if (((DAT_0049fa61 == '\0') && (DAT_0049fa38 != '\0')) &&
       (*(char *)((int)puVar7 + 0x999) == '\0')) {
      temp_v6 = FUN_002c2bd0(0);
      if (temp_v6 == 3) {
        FUN_002c2ba4(0,10,0xff);
      }
      temp_v6 = FUN_002c2bd0(1);
      if (temp_v6 == 3) {
        FUN_002c2ba4(1,10,0xff);
      }
    }
    DAT_0049fa38 = '\x01';
    DAT_0049f940 = 0;
    DAT_0049f941 = 0;
    if (DAT_00447060[0x10] != 100) {
      FUN_002653ac();
    }
    puVar17 = DAT_00447060;
    if (*(char *)(puVar7 + 5) != '\0') {
      temp_v7 = 3;
      if (DAT_00447060[0x33] != 3) {
        DAT_00447060[0x33] = temp_v7;
        puVar17[0x34] = 0;
        puVar17[0x35] = 0;
      }
    }
    else {
      temp_v7 = 1;
      if (DAT_00447060[0x33] != 1) {
        DAT_00447060[0x33] = temp_v7;
        puVar17[0x34] = 0;
        puVar17[0x35] = 0;
      }
    }
    if ((DAT_0049f950 != '\0') || (*(char *)(puVar7 + 0x266) != '\0')) {
      *(unsigned char *)(puVar7 + 0x266) = 0;
      FUN_00276b74();
    }
    DAT_0049f950 = '\0';
    temp_v12 = DAT_0049f91c == 0x65;
    temp_v6 = DAT_0049f91c;
    if (temp_v12) {
      temp_v6 = DAT_0049f920;
    }
    temp_v11 = temp_v12 && temp_v6 == 1;
    if (temp_v12 && temp_v6 == 1) {
      temp_v11 = *(short *)((int)puVar7 + 0x4e) == 0;
    }
    if ((!temp_v11) || (temp_v6 = FUN_002c0ba8(0x529), temp_v6 != 0)) {
      if (*(char *)(puVar7 + 0x264) != '\0') {
        DAT_0049fa1a = '\0';
        DAT_0049f934 = '\x01';
      }
      if (puVar7[0x265] == 1 || puVar7[0x265] == 2) {
        DAT_0049fa1a = '\0';
        DAT_0049f934 = '\x01';
      }
      if (DAT_0049fa61 != '\0') {
        DAT_0049fa61 = '\0';
        DAT_0049f934 = '\x01';
        puVar7[3] = 0x1d;
        puVar7[4] = 0;
        DAT_0049f970 = DAT_0049fa64;
        FUN_002be7fc(&DAT_0049f978,&DAT_0049fa68);
      }
      else if (DAT_0049fa1a != '\0') {
        DAT_0049fa1a = '\0';
        DAT_0049f934 = '\x01';
        FUN_002be7fc(&DAT_0049f978,&DAT_0049fa20);
        puVar7[3] = 0x23;
        puVar7[4] = 0;
      }
    }
    else {
      puVar7[3] = 0x39;
      puVar7[4] = 0;
      temp_v6 = DAT_00447e88;
      DAT_0049f934 = '\x01';
      DAT_0049fb45 = 0;
      DAT_0049fb46 = 0;
      puVar7 = (unsigned int *)(DAT_00447e88 + 0x28);
      *(unsigned int *)(DAT_00447e88 + 0x1c) = 0xc40d4000;
      *(unsigned int *)(temp_v6 + 0x20) = 0;
      *(unsigned int *)(temp_v6 + 0x24) = 0xc5932800;
      *puVar7 = 0xc40d4000;
      *(unsigned int *)(temp_v6 + 0x2c) = 0;
      *(unsigned int *)(temp_v6 + 0x30) = 0xc5932800;
    }
    break;
  case 0xb:
    *(unsigned char *)((int)puVar7 + 0xe1) = 0;
    FUN_001a8ffc();
    if (temp_v5 == 1) {
      puVar7[3] = 0x28;
      DAT_0049f934 = 1;
      puVar7[4] = 0;
      return 0;
    }
    if (temp_v5 == 2) {
      puVar7[3] = 0x2a;
      DAT_0049f934 = 1;
      puVar7[4] = 0;
      return 0;
    }
    if (temp_v5 == 3) {
      puVar7[3] = 0x2c;
      DAT_0049f934 = 1;
      puVar7[4] = 0;
      return 0;
    }
    if (temp_v5 == 4) {
      puVar7[3] = 0x25;
      puVar7[4] = 0;
      DAT_0049f934 = 1;
      temp_v7 = FUN_002be828(DAT_0049f9cc,1);
      FUN_002bd348(temp_v7,temp_v30);
      FUN_00295904(0,temp_v30);
      FUN_002bcf58(&DAT_0049f978,&LAB_001d4f44,0x17);
      return 0;
    }
    if (DAT_0049fa80 != 0) {
      puVar7[3] = 0x2c;
      DAT_0049f93c = 1;
      DAT_0049f934 = 1;
      puVar7[4] = 0;
      return 0;
    }
    if (*(char *)(DAT_00432fc8 + 0xc1) != '\0') {
      *(unsigned char *)(DAT_00432fc8 + 0xc1) = 0;
      puVar7[3] = 0x12;
      puVar7[4] = 0;
      DAT_0049f934 = '\x01';
      DAT_0049f93c = 1;
    }
    else if (DAT_0049fa96 != 0) {
      DAT_0049fa96 = 0;
      puVar7[3] = 0x11;
      puVar7[4] = 0;
      DAT_0049f934 = '\x01';
      DAT_0049f93c = 1;
    }
    else if (DAT_0049fa94 != 0) {
      DAT_0049fa94 = 0;
      puVar7[3] = 0x10;
      puVar7[4] = 0;
      DAT_0049f934 = '\x01';
      DAT_0049f93c = 1;
    }
    else {
      temp_v6 = DAT_00433158;
      FUN_00276718();
      if (temp_v6 == 0) {
        temp_v0 = DAT_0049fc64;
        if (DAT_0049fc64 == '\0') {
          if (*(char *)((int)puVar7 + 0xb) != '\0') {
            temp_v0 = FUN_002fb7a0();
          }
          else {
            puVar17 = puVar7;
            FUN_00264b68();
            temp_v0 = (char)puVar17;
          }
        }
        FUN_0027079c();
        *(char *)(puVar7 + 0x268) = temp_v0;
        FUN_0026617c(puVar7);
        FUN_00265e24(puVar7);
        FUN_002755d4();
        FUN_0027d6e4(puVar7[0x10],puVar7[0x12],DAT_0049f924);
        if (*(char *)(puVar7 + 0x268) != '\0') {
          *(unsigned char *)(puVar7 + 0x268) = 0;
          DAT_0049f934 = 1;
          puVar7[3] = 0x36;
          puVar7[4] = 0;
          return 0;
        }
        FUN_00280f3c();
        if (*(char *)((int)puVar7 + 0xb) == '\0') {
          FUN_00264b14(puVar7 + 0x3b);
        }
        FUN_00274a08();
        if (DAT_00447060[0x10] != 100) {
          FUN_002653ac();
        }
        if (*(char *)(puVar7 + 0x264) != '\0') {
          DAT_0049fa1a = '\0';
          DAT_0049f934 = 1;
          puVar7[3] = 0x30;
          puVar7[4] = 0;
          temp_v6 = FUN_002c2bd0(0);
          if (temp_v6 == 3) {
            FUN_002c2ba4(0,10,0xff);
          }
          temp_v6 = FUN_002c2bd0(1);
          if (temp_v6 == 3) {
            FUN_002c2ba4(1,10,0xff);
            return 0;
          }
          return 0;
        }
        if ((puVar7[0x265] == 1) || (puVar7[0x265] == 2)) {
          DAT_0049fa1a = 0;
          DAT_0049f934 = 1;
          puVar7[3] = 0x2e;
          puVar7[4] = 0;
          return 0;
        }
        if (DAT_0049fc64 != '\0') {
          return 0;
        }
        if (DAT_0049f934 != '\0') {
          return 0;
        }
        if (DAT_0049f954 != 0x2e) {
          if (DAT_0049f954 != 0x2f) {
            if (DAT_0049f954 != 0x30) {
              if (DAT_0049f954 == 0x31) {
                temp_v6 = FUN_0027f10c();
                if ((temp_v6 == 0) || (*(char *)(DAT_004474f4 + 0xb0) != '\0')) goto LAB_001d57a4;
                DAT_0049f934 = '\x01';
                temp_v16 = (unsigned int)DAT_0049fa19;
                temp_v15 = (unsigned int)DAT_0049fa18;
                FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
                FUN_00264a48(DAT_0049fa14,DAT_0049fa15);
                FUN_00264a48(DAT_0049fa16,DAT_0049fa17);
                FUN_00264a48(DAT_0049fa18,DAT_0049fa19);
                if (DAT_0049f9dc == -1) {
                  puVar7[3] = 0x1f;
                  puVar7[4] = 0;
                  return 0;
                }
                temp_v6 = FUN_002764d4();
                if (*(short *)(temp_v6 + 0x28) == 0) {
                  DAT_0049f978 = 0x5f726373;
                  DAT_0049f97c = 0x73757566;
                  DAT_0049f980 = &LAB_00305f61;
                }
                if (*(short *)(temp_v6 + 0x28) == 1) {
                  DAT_0049f980 = &LAB_00315f61;
                  DAT_0049f978 = 0x5f726373;
                  DAT_0049f97c = 0x73757566;
                }
                FUN_00295904(0,temp_v6);
                puVar7[3] = 0x25;
                puVar7[4] = 0;
                FUN_002764a8();
                return 0;
              }
              if (DAT_0049f954 == 0x32) {
                DAT_0049f934 = 1;
                FUN_00276488();
                FUN_002649c0();
                puVar7[3] = 0x5e;
                puVar7[4] = 0;
                *(unsigned char *)((int)puVar7 + 10) = 1;
                return 0;
              }
              if (DAT_0049f954 != 0x33) {
                if (DAT_0049f954 == 0x34) {
                  DAT_0049f934 = 1;
                  puVar7[3] = 0x1f;
                  puVar7[4] = 0;
                  return 0;
                }
                if (DAT_0049f954 != 0x35) {
                  if (DAT_0049f954 != 0x36) {
                    if (DAT_0049f954 != 0x37) {
                      if (DAT_0049f954 == 0x3c) {
                        *(unsigned char *)((int)puVar7 + 0xe1) = 1;
                        temp_v6 = FUN_0027f10c();
                        if ((temp_v6 != 0) && (*(char *)(DAT_004474f4 + 0xb0) == '\0')) {
                          FUN_002764a8();
                          temp_v16 = (unsigned int)DAT_0049fa19;
                          temp_v15 = (unsigned int)DAT_0049fa18;
                          FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
                          FUN_00264a48(DAT_0049fa14,DAT_0049fa15);
                          FUN_00264a48(DAT_0049fa16,DAT_0049fa17);
                          FUN_00264a48(DAT_0049fa18,DAT_0049fa19);
                          temp_v6 = DAT_0049f994;
                          DAT_0049f934 = 1;
                          DAT_0049fb46 = 0;
                          if (*(char *)((int)puVar7 + 0xb) == '\0') {
                            FUN_002b8b70();
                            puVar7[3] = 0x3b;
                            puVar7[4] = 0;
                            FUN_002c0128();
                            FUN_002971e4(puVar7[0x26e],0);
                            return 0;
                          }
                          puVar7[0x12] = DAT_0049f994;
                          DAT_0049f920 = temp_v6;
                          puVar7[3] = 0x49;
                          puVar7[4] = 0;
                          FUN_002c0128();
                          return 0;
                        }
                      }
LAB_001d57a4:
                      FUN_001fa75c();
                      if ((*(char *)(DAT_00447e58 + 0xe0c) != '\0') &&
                         ((temp_v6 = FUN_0027f10c(), temp_v6 != 0 &&
                          (*(char *)(DAT_004474f4 + 0xb0) == '\0')))) {
                        DAT_0049f934 = '\x01';
                        DAT_0049f974 = -1;
                        FUN_002bf86c(&DAT_0049f978,DAT_00447e58 + 0xe1c);
                        puVar7[3] = 0x21;
                        puVar7[4] = 0;
                        FUN_002b91c4(0x100016c);
                      }
                      temp_v8 = DAT_0049fc84;
                      if (DAT_0049fc84 == 0) {
                        temp_v8 = (unsigned int)*(unsigned char *)((int)puVar7 + 0xb);
                      }
                      if ((DAT_0049fc84 == 0 && temp_v8 == 0) &&
                         (temp_v6 = FUN_002c9c1c(), temp_v6 != 0)) {
                        DAT_0049f934 = 1;
                        puVar7[3] = 0xc;
                        puVar7[4] = 0;
                        return 0;
                      }
                      if (*(char *)((int)puVar7 + 0x99a) == '\0') {
                        FUN_001d33ac(puVar7[0x10],puVar7[0x12]);
                        *(unsigned char *)((int)puVar7 + 0x99a) = 1;
                      }
                      if (*(char *)(temp_v4 + 0xdc8) != '\0') {
                        *(unsigned char *)(temp_v4 + 0xdc8) = 0;
                        DAT_0049f934 = 1;
                        FUN_002bcf58(&DAT_0049f978,&LAB_001d5d08,0xe);
                        puVar7[3] = 0x25;
                        puVar7[4] = 0;
                        FUN_002764a8();
                        return 0;
                      }
                      puVar17 = puVar7 + 0x3b;
                      FUN_0039658c();
                      if (puVar17 == (unsigned int *)0xffffffff) {
                        return 0;
                      }
                      if ((DAT_0049fab5 == '\0') && (DAT_0049fc88 != 0)) {
                        FUN_002b91c4(0x1000184);
                        FUN_0027605c();
                        FUN_00276488();
                        FUN_002649c0();
                        *(unsigned char *)((int)puVar7 + 9) = 1;
                        puVar7[0x11] = (unsigned int)puVar17;
                        puVar7[3] = 0x5f;
                        puVar7[4] = 0;
                        if (DAT_0049fad4 != 0) {
                          puVar7[3] = 0x32;
                          puVar7[0x26f] = DAT_0049fad4;
                          puVar7[0x278] = DAT_0049fad8;
                          return 0;
                        }
                        return 0;
                      }
                      DAT_0049fb70 = 0x44160000;
                      DAT_0049fb74 = 0x41a00000;
                      return 0;
                    }
                    temp_v6 = FUN_0027f10c();
                    if ((temp_v6 == 0) || (*(char *)(DAT_004474f4 + 0xb0) != '\0'))
                    goto LAB_001d57a4;
                    DAT_0049f934 = '\x01';
                    if (DAT_0049f9c0 != 5) {
                      temp_v6 = FUN_002762d0(DAT_0049f9c4);
                      if (temp_v6 != 0xff) {
                        FUN_002fb090(DAT_0049f9c4,1);
                        DAT_0049f934 = 1;
                        DAT_0049fb46 = 0;
                        puVar7[3] = 0x34;
                        puVar7[4] = 0;
                        return 0;
                      }
                      DAT_0049f980 = &LAB_00325f61;
                      DAT_0049f978 = 0x5f726373;
                      DAT_0049f97c = 0x73757566;
                      puVar7[3] = 0x25;
                      puVar7[4] = 0;
                    }
                    else {
                      uRam0049f984 = 0x746f6e5f;
                      uRam0049f988 = 0x6e6e69;
                      DAT_0049f978 = 0x5f726373;
                      DAT_0049f97c = 0x646e6172;
                      DAT_0049f980 = (unsigned char *)0x657a616d;
                      puVar7[3] = 0x25;
                      puVar7[4] = 0;
                    }
                    FUN_002764a8();
                    break;
                  }
                  temp_v6 = FUN_0027f10c();
                  if ((temp_v6 == 0) || (*(char *)(DAT_004474f4 + 0xb0) != '\0')) goto LAB_001d57a4;
                  DAT_0049f934 = '\x01';
                  if (DAT_0049f9dc == -1) {
                    puVar7[3] = 0x34;
                    puVar7[4] = 0;
                    temp_v6 = FUN_002765b8(DAT_0049f958);
                    if (temp_v6 != -1) {
                      FUN_00316f2c(temp_v6,1);
                      FUN_00276580();
                      return 0;
                    }
                    return 0;
                  }
                  temp_v6 = FUN_002764d4();
                  if (*(short *)(temp_v6 + 0x28) == 0) {
                    DAT_0049f978 = 0x5f726373;
                    DAT_0049f97c = 0x73757566;
                    DAT_0049f980 = &LAB_00305f61;
                  }
                  if (*(short *)(temp_v6 + 0x28) == 1) {
                    DAT_0049f980 = &LAB_00315f61;
                    DAT_0049f978 = 0x5f726373;
                    DAT_0049f97c = 0x73757566;
                  }
                }
                else {
                  temp_v6 = FUN_0027f10c();
                  if ((temp_v6 == 0) || (*(char *)(DAT_004474f4 + 0xb0) != '\0')) goto LAB_001d57a4;
                  DAT_0049f934 = '\x01';
                  DAT_0049fb45 = 1;
                  DAT_0049fb46 = 0;
                  temp_v16 = (unsigned int)DAT_0049fa19;
                  temp_v15 = (unsigned int)DAT_0049fa18;
                  FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
                  FUN_00264a48(DAT_0049fa14,DAT_0049fa15);
                  FUN_00264a48(DAT_0049fa16,DAT_0049fa17);
                  FUN_00264a48(DAT_0049fa18,DAT_0049fa19);
                  if (DAT_0049f9dc == -1) {
                    puVar7[3] = 0x23;
                    puVar7[4] = 0;
                    return 0;
                  }
                  temp_v6 = FUN_002764d4();
                  if (*(short *)(temp_v6 + 0x28) == 0) {
                    DAT_0049f978 = 0x5f726373;
                    DAT_0049f97c = 0x73757566;
                    DAT_0049f980 = &LAB_00305f61;
                  }
                  if (*(short *)(temp_v6 + 0x28) == 1) {
                    DAT_0049f978 = 0x5f726373;
                    DAT_0049f97c = 0x73757566;
                    DAT_0049f980 = &LAB_00315f61;
                  }
                }
                FUN_00295904(0,temp_v6);
                puVar7[3] = 0x25;
                puVar7[4] = 0;
                FUN_002764a8();
                break;
              }
              DAT_0049f934 = '\x01';
            }
            else {
              temp_v6 = FUN_0027f10c();
              if ((temp_v6 == 0) || (*(char *)(DAT_004474f4 + 0xb0) != '\0')) goto LAB_001d57a4;
              DAT_0049f934 = '\x01';
              temp_v16 = (unsigned int)DAT_0049fa19;
              temp_v15 = (unsigned int)DAT_0049fa18;
              FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
              FUN_00264a48(DAT_0049fa14,DAT_0049fa15);
              FUN_00264a48(DAT_0049fa16,DAT_0049fa17);
              FUN_00264a48(DAT_0049fa18,DAT_0049fa19);
              if (DAT_0049f9dc != -1) {
                temp_v6 = FUN_002764d4();
                if (*(short *)(temp_v6 + 0x28) == 0) {
                  DAT_0049f978 = 0x5f726373;
                  DAT_0049f97c = 0x73757566;
                  DAT_0049f980 = &LAB_00305f61;
                }
                temp_v3 = *(short *)(temp_v6 + 0x28);
                goto joined_r0x001d5260;
              }
            }
            if (DAT_0049f9d4 == '\0') {
              puVar7[3] = 0x1d;
              puVar7[4] = 0;
              return 0;
            }
          }
          else {
            temp_v6 = FUN_0027f10c();
            if ((temp_v6 == 0) || (*(char *)(DAT_004474f4 + 0xb0) != '\0')) goto LAB_001d57a4;
            DAT_0049f934 = '\x01';
            temp_v16 = (unsigned int)DAT_0049fa19;
            temp_v15 = (unsigned int)DAT_0049fa18;
            FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
            FUN_00264a48(DAT_0049fa14,DAT_0049fa15);
            FUN_00264a48(DAT_0049fa16,DAT_0049fa17);
            FUN_00264a48(DAT_0049fa18,DAT_0049fa19);
            if (DAT_0049f9dc != -1) {
              temp_v6 = FUN_002764d4();
              if (*(short *)(temp_v6 + 0x28) == 0) {
                DAT_0049f978 = 0x5f726373;
                DAT_0049f97c = 0x73757566;
                DAT_0049f980 = &LAB_00305f61;
              }
              temp_v3 = *(short *)(temp_v6 + 0x28);
              goto joined_r0x001d5260;
            }
            if (DAT_0049f9d4 == '\0') {
              FUN_00276488();
              FUN_002649c0();
              puVar7[3] = 0x5d;
              puVar7[4] = 0;
              *(unsigned char *)((int)puVar7 + 10) = 1;
              return 0;
            }
          }
        }
        else {
          temp_v6 = FUN_0027f10c();
          if ((temp_v6 == 0) || (*(char *)(DAT_004474f4 + 0xb0) != '\0')) goto LAB_001d57a4;
          DAT_0049f934 = '\x01';
          if (DAT_0049f9dc != -1) {
            temp_v6 = FUN_002764d4();
            if (*(short *)(temp_v6 + 0x28) == 0) {
              DAT_0049f978 = 0x5f726373;
              DAT_0049f97c = 0x73757566;
              DAT_0049f980 = &LAB_00305f61;
            }
            temp_v3 = *(short *)(temp_v6 + 0x28);
joined_r0x001d5260:
            if (temp_v3 == 1) {
              DAT_0049f980 = &LAB_00315f61;
              DAT_0049f978 = 0x5f726373;
              DAT_0049f97c = 0x73757566;
            }
            FUN_00295904(0,temp_v6);
            puVar7[3] = 0x25;
            puVar7[4] = 0;
            FUN_002764a8();
            return 0;
          }
          if (DAT_0049f9d4 == '\0') {
            temp_v16 = (unsigned int)DAT_0049fa19;
            temp_v15 = (unsigned int)DAT_0049fa18;
            FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
            FUN_00264a48(DAT_0049fa14,DAT_0049fa15);
            FUN_00264a48(DAT_0049fa16,DAT_0049fa17);
            FUN_00264a48(DAT_0049fa18,DAT_0049fa19);
            puVar7[3] = 0x56;
            puVar7[4] = 0;
            return 0;
          }
        }
        FUN_002bcf58(&DAT_0049f978,&LAB_001d57f4,0x11);
        puVar7[3] = 0x25;
        puVar7[4] = 0;
        FUN_002764a8();
        break;
      }
      puVar7[3] = 0x14;
      puVar7[4] = 0;
      DAT_0049f934 = '\x01';
      DAT_0049f93c = 1;
    }
    FUN_0026533c();
    break;
  case 0xc:
    if (puVar7[4] == 1) {
      DAT_0049fb48 = 1;
      FUN_00276034();
      FUN_00275e58(1);
      FUN_00275e38();
    }
    puVar17 = DAT_00447060;
    if (puVar7[4] == 2) {
      DAT_0049f93e = 1;
      if ((DAT_00447060[0x2a7] != 0) && (temp_v6 = 0, 0 < *(int *)(DAT_00447060[0x2a7] + 4))) {
        do {
          FUN_00265da4(temp_v6,0);
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < *(int *)(puVar17[0x2a7] + 4));
      }
      temp_v6 = 0;
      do {
        puVar13 = (unsigned int *)puVar17[temp_v6 + 0x284];
        if ((puVar13 != (unsigned int *)0x0) && ((*puVar13 & 2) == 0)) {
          *puVar13 = *puVar13 | 2;
          *(unsigned char *)(*(int *)(puVar13[2] + 0x2c) + 0x1f6) = 0;
          FUN_002d5780(puVar17[temp_v6 + 0x284]);
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 0x20);
      DAT_0049f93e = 1;
      FUN_00265e24(puVar17);
      FUN_00264b14(puVar17 + 0x3b);
      FUN_002755d4();
      FUN_00274a08();
      FUN_0027de14();
    }
    temp_v6 = puVar7[4];
    puVar7[4] = temp_v6 + 1;
    if (temp_v6 + 1 < 4) {
      return 0;
    }
    FUN_00275c2c();
    FUN_00275b48();
    FUN_0028a688(0);
    temp_v6 = 0xd;
    puVar7[3] = temp_v6;
    puVar7[4] = 0;
    break;
  case 0xd:
    temp_v6 = FUN_002b89d4();
    if (temp_v6 != 0) {
      return 0;
    }
    DAT_0049fb48 = 0;
    FUN_00280d30(1);
    DAT_0049f93e = 0;
    FUN_0026617c(puVar7);
    FUN_00275a18();
    FUN_0027d700(1);
    puVar17 = DAT_00447060;
    if (DAT_00447060[0x10] != 100) {
      FUN_002653ac();
    }
    temp_v6 = 0;
    do {
      puVar13 = (unsigned int *)puVar17[temp_v6 + 0x284];
      if ((puVar13 != (unsigned int *)0x0) && ((*puVar13 & 2) != 0)) {
        *puVar13 = *puVar13 & 0xfffffffd;
        *(unsigned char *)(*(int *)(puVar13[2] + 0x2c) + 0x1f6) = 1;
        FUN_002d5780(puVar17[temp_v6 + 0x284]);
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 0x20);
    DAT_0049f93e = 0;
    FUN_00265e24(puVar17);
    FUN_00264b14(puVar17 + 0x3b);
    FUN_002755d4();
    FUN_00274a08();
    puVar7[3] = 0xe;
    puVar7[4] = 0;
    pcVar9 = (char *)FUN_002741f4();
    if (pcVar9[4] == '\0') {
      return 0;
    }
    if (pcVar9[1] != '\0') {
      temp_v8 = (unsigned int)*(unsigned short *)(pcVar9 + 8);
      FUN_002b6700();
      DAT_0049fa82 = *(short *)(temp_v8 + 2);
      FUN_002bf86c(&DAT_0049fa84,temp_v8 + 0x138);
      DAT_0049fa80 = 1;
    }
    else if (pcVar9[3] != '\0') {
      DAT_0049fa96 = 1;
    }
    *(unsigned short *)(temp_v4 + 0x22) = 0;
    FUN_002741cc();
    FUN_0027dbb8();
    FUN_0027db78();
    if (pcVar9[2] != '\0') {
      DAT_0049fa94 = 1;
    }
    if (*pcVar9 != '\0') {
      puVar7[3] = 0xf;
      puVar7[4] = 0;
      return 0;
    }
    *(unsigned short *)(temp_v4 + 0x1e) = *(unsigned short *)(pcVar9 + 6);
    FUN_00273fa4();
    FUN_00273ec4();
    FUN_00396cb4(puVar7 + 0x3b);
    FUN_002668cc(puVar7 + 0x3b,puVar7[0x10] - 100,puVar7[0x12]);
    FUN_003968c0(puVar7 + 0x3b);
    puVar7 = DAT_00447060;
    FUN_002819f4();
    FUN_002667b0(puVar7[0x10]);
    FUN_00264900(1);
    FUN_00266c58();
    break;
  case 0xe:
    temp_v6 = puVar7[4];
    puVar7[4] = temp_v6 + 1;
    if (temp_v6 + 1 < 2) {
      return 0;
    }
    FUN_00275e58(0);
    if (DAT_0049f950 == '\0') {
      *(unsigned short *)(DAT_004474f4 + 0xb2) = 0xd;
      DAT_0049f934 = 0;
      puVar7[3] = 0xb;
      puVar7[4] = 0;
      return 0;
    }
    temp_v6 = 0x60;
    puVar7[3] = temp_v6;
    puVar7[4] = 0;
    break;
  case 0xf:
    temp_v6 = puVar7[4];
    puVar7[4] = temp_v6 + 1;
    if (temp_v6 + 1 == 2) {
      FUN_00275e58(0);
    }
    if ((int)puVar7[4] >= 7) {
      if (puVar7[4] != 7) {
        return 0;
      }
      FUN_002b91c4(0x1000184);
      FUN_0027605c();
      FUN_00276488();
      FUN_002649c0();
      temp_v6 = 0x5f;
      *(unsigned char *)((int)puVar7 + 9) = 1;
      puVar7[3] = temp_v6;
      puVar7[4] = 0;
      break;
    }
    FUN_0026533c();
    break;
  case 0x10:
    FUN_0026533c();
    if (puVar7[4] != 0) {
      temp_v6 = FUN_00273bfc(DAT_00432fc8 + 0xa8);
      if (temp_v6 != 0) {
        FUN_00291a08(DAT_00432fc8 + 0xa8);
        if (DAT_0049fd14 >= 0) {
          (*(unsigned short *)((unsigned char *)&temp_v15 + 0)) = romwright_piece_1_1((char)DAT_0049f91c - 'd',2);
          temp_v15._0_3_ = romwright_piece_1_2((char)DAT_0049f920,(unsigned short)temp_v15);
          temp_v15 = romwright_piece_1_3((char)DAT_0049f924,(undefined3)temp_v15);
          temp_v16 = *(unsigned int *)(DAT_00447e88 + 0x1c);
          temp_v17 = *(unsigned int *)(DAT_00447e88 + 0x20);
          temp_v18 = (unsigned int)*(unsigned char **)(DAT_00447e88 + 0x24);
          temp_v19 = *(unsigned int *)(DAT_00447e88 + 0x4c);
          temp_v20 = *(unsigned int *)(DAT_004474f4 + 0x18);
          FUN_00273bdc(&temp_v15);
          FUN_00276488();
          puVar7[3] = 0x60;
          puVar7[4] = 0;
        }
        else if (DAT_0049f970 != 0) {
          (*(unsigned short *)((unsigned char *)&temp_v15 + 0)) = romwright_piece_1_1((char)DAT_0049f91c - 'd',2);
          temp_v15._0_3_ = romwright_piece_1_2((char)DAT_0049f920,(unsigned short)temp_v15);
          temp_v15 = romwright_piece_1_3((char)DAT_0049f924,(undefined3)temp_v15);
          temp_v16 = *(unsigned int *)(DAT_00447e88 + 0x1c);
          temp_v17 = *(unsigned int *)(DAT_00447e88 + 0x20);
          temp_v18 = (unsigned int)*(unsigned char **)(DAT_00447e88 + 0x24);
          temp_v19 = *(unsigned int *)(DAT_00447e88 + 0x4c);
          temp_v20 = *(unsigned int *)(DAT_004474f4 + 0x18);
          FUN_00273bdc(&temp_v15);
          FUN_00276488();
          FUN_002649c0();
          puVar7[3] = 0x60;
          puVar7[4] = 0;
          *(unsigned char *)((int)puVar7 + 10) = 1;
        }
        else {
          FUN_00289770();
          FUN_00276170();
          DAT_0049f934 = '\0';
          DAT_0049f93c = 0;
          puVar7[3] = 0xb;
          puVar7[4] = 0;
          FUN_00266c58();
        }
        if (temp_v6 != 2) goto LAB_001d60c0;
      }
      else {
LAB_001d60c0:
        temp_v8 = *(unsigned int *)(DAT_00432fc8 + 0x754);
        *(unsigned int *)(DAT_00432fc8 + 0x754) = temp_v8 & 0xffffff8f;
        if ((temp_v8 & 0x10) == 0) {
          return 0;
        }
      }
      temp_v7 = 0x15;
      DAT_0049f934 = '\x01';
      DAT_0049f93c = 1;
      puVar7[3] = temp_v7;
      puVar7[4] = 0;
      return 0;
    }
    FUN_0028d908(DAT_00432fc8 + 0xa8,1);
    temp_v4 = puVar7[4] + 1;
    puVar7[4] = temp_v4;
    break;
  case 0x11:
    FUN_0026533c();
    if (puVar7[4] == 0) {
      FUN_0029c660(0,10,0xff);
      FUN_0029c660(1,10,0xff);
      puVar7[4] = puVar7[4] + 1;
    }
    temp_v6 = FUN_00289924();
    if (temp_v6 == 0) {
      return 0;
    }
    temp_v6 = DAT_00432fc8 + 0xa8;
    FUN_00289654(temp_v6,0);
    goto joined_r0x001d8b28;
  case 0x12:
    FUN_0026533c();
    if (puVar7[4] == 0) {
      FUN_002738b4(DAT_00432fc8 + 0xa8);
      FUN_0027fd08(2);
      FUN_002b8b70();
      FUN_002c0128();
      temp_v4 = puVar7[4] + 1;
      puVar7[4] = temp_v4;
      break;
    }
    temp_v6 = FUN_00273958(DAT_00432fc8 + 0xa8);
    if (temp_v6 == 0) {
      return 0;
    }
    FUN_0027390c(DAT_00432fc8 + 0xa8);
    puVar17 = DAT_00447060;
    FUN_002819f4();
    FUN_002667b0(puVar17[0x10]);
    FUN_00264900(1);
    FUN_00276170();
    DAT_0049f934 = '\0';
    puVar7[3] = 0xb;
    puVar7[4] = 0;
    FUN_00266c58();
    break;
  case 0x13:
    temp_v6 = DAT_00432fc8 + 0xa8;
    FUN_00289654(temp_v6,0);
    goto joined_r0x001d8b28;
  case 0x14:
    FUN_0026533c();
    if (puVar7[4] == 0) {
      FUN_0027368c(DAT_00432fc8 + 0xa8,1);
      temp_v4 = puVar7[4] + 1;
      puVar7[4] = temp_v4;
      break;
    }
    temp_v6 = FUN_00273760(DAT_00432fc8 + 0xa8);
    if (temp_v6 == 0) {
      return 0;
    }
    FUN_002736fc(DAT_00432fc8 + 0xa8);
    FUN_00276170();
    temp_v6 = FUN_0029066c();
joined_r0x001d634c:
    if (temp_v6 == 0) {
      DAT_0049f934 = 0;
      DAT_0049f93c = 0;
      puVar7[3] = 0xb;
      puVar7[4] = 0;
      return 0;
    }
    temp_v6 = 0x11;
    puVar7[3] = temp_v6;
    puVar7[4] = 0;
    break;
  case 0x15:
    FUN_0026533c();
    temp_v6 = DAT_00432fc8;
    temp_v8 = *(unsigned int *)(DAT_00432fc8 + 0x754);
    if ((temp_v8 & 4) != 0 || (temp_v8 & 8) != 0) {
      return 0;
    }
    if (puVar7[4] != 0) {
      temp_v6 = FUN_0027375c(DAT_00432fc8 + 0xa8);
      if (temp_v6 == 0) {
        return 0;
      }
      FUN_00289810(DAT_00432fc8 + 0xa8);
      FUN_00276170();
      temp_v6 = FUN_0029066c();
      goto joined_r0x001d634c;
    }
    *(unsigned int *)(DAT_00432fc8 + 0x754) = temp_v8 & 0xffffff8f;
    FUN_00289870(temp_v6 + 0xa8,1);
    temp_v4 = puVar7[4] + 1;
    puVar7[4] = temp_v4;
    break;
  case 0x1d:
    FUN_00273ab0(1);
    FUN_00276488();
    FUN_00276c24(0xffffffff,0xffffffff);
    puVar17 = DAT_00447060;
    FUN_002c0128();
    FUN_002be7fc(temp_v30,"event/e%03d/e%03d.bf",DAT_0049f970,DAT_0049f970);
    temp_v7 = FUN_002c5e2c(temp_v30);
    puVar17[0x279] = temp_v7;
    FUN_002be7fc(temp_v30,"event/e%03d/e%03d.mbm",DAT_0049f970,DAT_0049f970);
    temp_v7 = FUN_002c5e2c(temp_v30);
    puVar17[0x27a] = temp_v7;
    temp_v6 = puVar17[0x279];
    FUN_002972f8(temp_v6,temp_v7);
    puVar17[0x27b] = temp_v6;
    *(unsigned int *)(temp_v6 + 0x108) = 2;
    temp_v8 = DAT_0049f970;
    FUN_00289a58(DAT_0049f970,&DAT_0049f978);
    puVar17[0x27c] = temp_v8;
    temp_v7 = FUN_00291018(puVar17[0x279],&DAT_0049f978);
    FUN_002971e4(puVar17[0x27b],temp_v7);
    DAT_0049f970 = 0;
    puVar7[3] = puVar7[3] + 1;
    FUN_0026617c(puVar7);
    FUN_00264b68(puVar7);
    FUN_00265e24(puVar7);
    break;
  case 0x1e:
    FUN_0026617c(puVar7);
    FUN_00264b68(puVar7);
    FUN_00265e24(puVar7);
    temp_v6 = FUN_00264774();
    if (temp_v6 == 0) {
      return 0;
    }
    if (DAT_0049f970 != 0) {
LAB_001d6ad4:
      FUN_002649c0();
      puVar7[3] = 0x5e;
      puVar7[4] = 0;
      *(unsigned char *)((int)puVar7 + 10) = 1;
      return 0;
    }
    if (DAT_0049fd14 == -1) {
      FUN_00273ab0(0);
      FUN_002646d4();
      DAT_0049f934 = 0;
      puVar7[3] = 0xb;
      puVar7[4] = 0;
      temp_v6 = FUN_002c2bd0(0);
      if (temp_v6 == 3) {
        FUN_002c2ba4(0,10,0xff);
      }
      temp_v6 = FUN_002c2bd0(1);
      if (temp_v6 == 3) {
        FUN_002c2ba4(1,10,0xff);
        return 0;
      }
      return 0;
    }
    temp_v6 = 0x60;
    puVar7[3] = temp_v6;
    puVar7[4] = 0;
    break;
  case 0x1f:
    FUN_00273ab0(1);
    FUN_00276488();
    if (DAT_0049f974 == -1) {
      DAT_0049f974 = FUN_00291018(puVar7[0x26c],&DAT_0049f978);
    }
    FUN_00276c24(0xffffffff,0xffffffff);
    FUN_002c0128();
    FUN_002971e4(puVar7[0x26e],DAT_0049f974);
    DAT_0049f970 = 0;
    puVar7[3] = puVar7[3] + 1;
    FUN_0026617c(puVar7);
    FUN_00264b68(puVar7);
    FUN_00265e24(puVar7);
    break;
  case 0x20:
    FUN_0026617c(puVar7);
    FUN_00264b68(puVar7);
    FUN_00265e24(puVar7);
    temp_v6 = FUN_0019dfbc(puVar7[0x26e]);
    if (temp_v6 != 2) {
      return 0;
    }
    if (DAT_0049f970 != 0) goto LAB_001d6ad4;
    if (DAT_0049fd14 == -1) {
      FUN_00273ab0(0);
      FUN_002646d4();
      DAT_0049f934 = 0;
      puVar7[3] = 0xb;
      puVar7[4] = 0;
      temp_v6 = FUN_002c2bd0(0);
      if (temp_v6 == 3) {
        FUN_002c2ba4(0,10,0xff);
      }
      temp_v6 = FUN_002c2bd0(1);
      if (temp_v6 == 3) {
        FUN_002c2ba4(1,10,0xff);
        return 0;
      }
      return 0;
    }
    temp_v6 = 0x60;
    puVar7[3] = temp_v6;
    puVar7[4] = 0;
    break;
  case 0x21:
    FUN_002b8b70();
    FUN_00276488();
    if (DAT_0049f974 == -1) {
      DAT_0049f974 = FUN_00291018(puVar7[0x26c],&DAT_0049f978);
    }
    FUN_00276c24(0xffffffff,0xffffffff);
    FUN_002c0128();
    FUN_002971e4(puVar7[0x26e],DAT_0049f974);
    DAT_0049f970 = 0;
    puVar7[3] = puVar7[3] + 1;
    FUN_0026617c(puVar7);
    FUN_00264b68(puVar7);
    FUN_00265e24(puVar7);
    FUN_002764a8();
    break;
  case 0x22:
    FUN_0026617c(puVar7);
    FUN_00264b68(puVar7);
    FUN_00265e24(puVar7);
    temp_v6 = FUN_0019dfbc(puVar7[0x26e]);
    if (temp_v6 != 2) {
      return 0;
    }
    if (DAT_0049f970 != 0) goto LAB_001d6ad4;
    if (DAT_0049fd14 == -1) {
      FUN_00276170();
      FUN_002646d4();
      DAT_0049f934 = 0;
      puVar7[3] = 0xb;
      puVar7[4] = 0;
      temp_v6 = FUN_002c2bd0(0);
      if (temp_v6 == 3) {
        FUN_002c2ba4(0,10,0xff);
      }
      temp_v6 = FUN_002c2bd0(1);
      if (temp_v6 == 3) {
        FUN_002c2ba4(1,10,0xff);
        return 0;
      }
      return 0;
    }
    temp_v6 = 0x60;
    puVar7[3] = temp_v6;
    puVar7[4] = 0;
    break;
  case 0x23:
    if (DAT_0049f974 == -1) {
      DAT_0049f974 = FUN_00291018(puVar7[0x26c],&DAT_0049f978);
    }
    FUN_002c0128();
    FUN_002971e4(puVar7[0x26e],DAT_0049f974);
    FUN_0026617c(puVar7);
    FUN_00264b68(puVar7);
    FUN_00265e24(puVar7);
    FUN_0027079c();
    FUN_002755d4();
    FUN_00274a08();
    if (DAT_00447060[0x10] != 100) {
      FUN_002653ac();
    }
    FUN_0027d6e4(puVar7[0x10],puVar7[0x12],DAT_0049f924);
    puVar7[3] = puVar7[3] + 1;
    break;
  case 0x24:
    FUN_00264b68(puVar7);
    FUN_00265e24(puVar7);
    FUN_0026617c(puVar7);
    FUN_0027079c();
    FUN_002755d4();
    FUN_00274a08();
    if (DAT_00447060[0x10] != 100) {
      FUN_002653ac();
    }
    FUN_0027d6e4(puVar7[0x10],puVar7[0x12],DAT_0049f924);
    temp_v6 = FUN_0019dfbc(puVar7[0x26e]);
    if (temp_v6 == 2) {
      FUN_00276b74();
      FUN_00273ab0(0);
      DAT_0049f934 = '\0';
      DAT_0049fb45 = 1;
      DAT_0049fb46 = 1;
      puVar7[3] = 0xb;
      puVar7[4] = 0;
    }
    break;
  case 0x25:
    FUN_002b8b70();
    FUN_00276c24(0xffffffff,0xffffffff);
    DAT_0049f970 = 0;
    temp_v7 = FUN_00291018(puVar7[0x269],&DAT_0049f978);
    puVar7[0x267] = temp_v7;
    FUN_002c0128();
    FUN_002971e4(puVar7[0x26b],puVar7[0x267]);
    FUN_0026617c(puVar7);
    FUN_00264b68(puVar7);
    FUN_00265e24(puVar7);
    puVar7[3] = puVar7[3] + 1;
    puVar7[4] = 0;
    break;
  case 0x26:
    puVar7[4] = puVar7[4] + 1;
    FUN_0026617c(puVar7);
    FUN_00264b68(puVar7);
    FUN_00265e24(puVar7);
    temp_v6 = FUN_0019dfbc(puVar7[0x26b]);
    if (temp_v6 != 2) {
      return 0;
    }
    if (DAT_0049f9d4 != '\0') {
      if (DAT_0049f9d5 == '\x05') {
        FUN_00273a98();
        temp_v6 = puVar7[3];
        temp_v6 = temp_v6 + 1;
        puVar7[3] = temp_v6;
        puVar7[4] = 0;
        break;
      }
      if (DAT_0049f9d5 == '\x04') {
        FUN_00276c24((int)DAT_0049f9d6,DAT_0049f9d7,DAT_0049f9d8);
        FUN_00273a98();
        temp_v6 = puVar7[3] + 1;
        temp_v4 = 0;
        puVar7[3] = temp_v6;
        puVar7[4] = temp_v4;
        break;
      }
    }
    FUN_00276170();
    temp_v6 = 0xb;
    DAT_0049f934 = '\0';
    puVar7[3] = temp_v6;
    puVar7[4] = 0;
    break;
  case 0x27:
    temp_v4 = FUN_00273a78();
    temp_v9 = DAT_0049f9b8;
    temp_v10 = DAT_0049f9b4;
    temp_v7 = DAT_0049f9b0;
    temp_v6 = DAT_00447e88;
    if (temp_v4 == 0) {
      if ((DAT_0049f9d4 != '\0') && (DAT_0049f9d5 == '\x05')) {
        DAT_0049f9d4 = '\0';
        *(unsigned int *)(DAT_00447e88 + 0x1c) = DAT_0049f9b0;
        *(unsigned int *)(temp_v6 + 0x20) = temp_v10;
        *(unsigned int *)(temp_v6 + 0x24) = temp_v9;
        *(unsigned int *)(temp_v6 + 0x28) = temp_v7;
        *(unsigned int *)(temp_v6 + 0x2c) = temp_v10;
        *(unsigned int *)(temp_v6 + 0x30) = temp_v9;
        temp_v7 = DAT_0049f9ac;
        *(unsigned int *)(temp_v6 + 0x4c) = DAT_0049f9ac;
        *(unsigned int *)(temp_v6 + 0x50) = temp_v7;
      }
      FUN_00276170();
      DAT_0049f934 = '\0';
      puVar7[3] = 0xb;
      puVar7[4] = 0;
      FUN_00276ba4();
    }
    break;
  case 0x28:
    FUN_0026533c();
    temp_v6 = FUN_00289924();
    if (temp_v6 != 0) {
      FUN_00276c24(0xffffffff,0xffffffff);
      DAT_0049f970 = 0;
      temp_v7 = FUN_00291018(puVar7[0x269],&LAB_001d6eb0);
      puVar7[0x267] = temp_v7;
      FUN_002c0128();
      FUN_002971e4(puVar7[0x26b],puVar7[0x267]);
      puVar7[3] = puVar7[3] + 1;
      puVar7[4] = 0;
    }
    break;
  case 0x29:
    FUN_0026533c();
    puVar7[4] = puVar7[4] + 1;
    temp_v6 = FUN_0019dfbc(puVar7[0x26b]);
    puVar17 = DAT_00447060;
    if (temp_v6 != 2) {
      return 0;
    }
    FUN_002819f4();
    FUN_002667b0(puVar17[0x10]);
    FUN_00264900(1);
    FUN_0027dbb8();
    FUN_0027db78();
    puVar17 = DAT_00447060;
    if (DAT_00447060 != (unsigned int *)0x0) {
      FUN_00273fa4();
      FUN_00273ec4();
      FUN_00264670(puVar17 + 0x3b);
      FUN_002668cc(puVar17 + 0x3b,puVar17[0x10] - 100,puVar17[0x12]);
      FUN_00266704(puVar17 + 0x3b);
    }
    FUN_00275a18();
    FUN_00266c58();
    temp_v6 = 0xb;
    DAT_0049f934 = '\0';
    puVar7[3] = temp_v6;
    puVar7[4] = 0;
    break;
  case 0x2a:
    FUN_0026533c();
    temp_v6 = FUN_00289924();
    if (temp_v6 == 0) {
      return 0;
    }
    FUN_00276c24(0xffffffff,0xffffffff);
    DAT_0049f970 = 0;
    temp_v6 = FUN_002b6e44();
    if (temp_v6 != 0) {
      return 0;
    }
    puVar7[3] = puVar7[3] + 1;
    puVar7[4] = 0;
    break;
  case 0x2b:
    FUN_0026533c();
    temp_v6 = 0xb;
    puVar7[4] = puVar7[4] + 1;
    DAT_0049f934 = '\0';
    puVar7[3] = temp_v6;
    puVar7[4] = 0;
    break;
  case 0x2c:
    *(unsigned char *)((int)puVar7 + 0x999) = 0;
    FUN_0026533c();
    FUN_00276c24(0xffffffff,0xffffffff);
    DAT_0049f970 = 0;
    DAT_0049fb46 = 0;
    if (DAT_0049fa80 != 0) {
      DAT_0049fa80 = 0;
      DAT_0049f970 = (unsigned int)DAT_0049fa82;
      FUN_002bf86c(&DAT_0049f978,&DAT_0049fa84);
      puVar7[0x26f] = DAT_0049f970;
      FUN_002bf86c(puVar7 + 0x270,&DAT_0049f978);
    }
    else {
      temp_v6 = FUN_0027dbd8();
      if (temp_v6 != -1) {
        temp_v8 = FUN_0027dbd8() & 0xffff;
        FUN_002b6700();
        DAT_0049f970 = (unsigned int)*(unsigned short *)(temp_v8 + 2);
        FUN_002bf86c(&DAT_0049f978,temp_v8 + 0x128);
        puVar7[0x26f] = DAT_0049f970;
        FUN_002bf86c(puVar7 + 0x270,&DAT_0049f978);
      }
    }
    puVar17 = DAT_00447060;
    FUN_002c0128();
    FUN_002be7fc(temp_v30,"event/e%03d/e%03d.bf",DAT_0049f970,DAT_0049f970);
    temp_v7 = FUN_002c5e2c(temp_v30);
    puVar17[0x279] = temp_v7;
    FUN_002be7fc(temp_v30,"event/e%03d/e%03d.mbm",DAT_0049f970,DAT_0049f970);
    temp_v7 = FUN_002c5e2c(temp_v30);
    puVar17[0x27a] = temp_v7;
    temp_v6 = puVar17[0x279];
    FUN_002972f8(temp_v6,temp_v7);
    puVar17[0x27b] = temp_v6;
    *(unsigned int *)(temp_v6 + 0x108) = 2;
    temp_v8 = DAT_0049f970;
    FUN_00289a58(DAT_0049f970,&DAT_0049f978);
    puVar17[0x27c] = temp_v8;
    temp_v7 = FUN_00291018(puVar17[0x279],&DAT_0049f978);
    FUN_002971e4(puVar17[0x27b],temp_v7);
    puVar7[3] = puVar7[3] + 1;
    puVar7[4] = 0;
    break;
  case 0x2d:
    FUN_0026533c();
    puVar7[4] = puVar7[4] + 1;
    temp_v6 = FUN_00264774();
    if (temp_v6 == 0) {
      return 0;
    }
    if (DAT_0049fd14 == -1) {
      temp_v6 = FUN_002c2bd0(0);
      if (temp_v6 == 3) {
        FUN_002c2ba4(0,10,0xff);
      }
      temp_v6 = FUN_002c2bd0(1);
      if (temp_v6 == 3) {
        FUN_002c2ba4(1,10,0xff);
      }
      FUN_002819f4();
      FUN_002667b0(puVar7[0x10]);
      FUN_00264900(0);
      FUN_00266c58();
      FUN_00273ab0(0);
      DAT_0049f934 = 0;
      DAT_0049fb46 = 1;
      puVar7[3] = 0xb;
      puVar7[4] = 0;
      return 0;
    }
    temp_v6 = 0x60;
    puVar7[3] = temp_v6;
    puVar7[4] = 0;
    break;
  case 0x2e:
    FUN_0026533c();
    puVar7[0x265] = 0;
    temp_v6 = FUN_00289924();
    if (temp_v6 != 0) {
      FUN_002b8b70();
      FUN_00276c24(0xffffffff,0xffffffff);
      DAT_0049f970 = 0;
      temp_v7 = FUN_00291018(puVar7[0x269],&LAB_001d72d0);
      puVar7[0x267] = temp_v7;
      FUN_002c0128();
      FUN_002971e4(puVar7[0x26b],puVar7[0x267]);
      puVar7[3] = puVar7[3] + 1;
      puVar7[4] = 0;
    }
    break;
  case 0x2f:
    FUN_0026533c();
    puVar7[4] = puVar7[4] + 1;
    temp_v6 = FUN_0019dfbc(puVar7[0x26b]);
    if (temp_v6 != 2) {
      return 0;
    }
    temp_v6 = FUN_0027dbfc();
    if (temp_v6 != 4) {
      FUN_00275a18();
    }
    FUN_0027dd94(0);
    puVar17 = DAT_00447060;
    FUN_002819f4();
    FUN_002667b0(puVar17[0x10]);
    FUN_00264900(1);
    FUN_00276170();
    FUN_00266c58();
    temp_v6 = 0xb;
    DAT_0049f934 = '\0';
    puVar7[3] = temp_v6;
    puVar7[4] = 0;
    break;
  case 0x30:
    *(unsigned char *)(puVar7 + 0x264) = 0;
    FUN_002c0128();
    FUN_002b8b70();
    temp_v7 = FUN_002c5e2c(&LAB_001d72e0);
    puVar7[0x27d] = temp_v7;
    temp_v7 = FUN_002c5e2c(&LAB_001d72f4);
    puVar7[0x27e] = temp_v7;
    temp_v6 = puVar7[0x27d];
    FUN_002972f8(temp_v6,temp_v7);
    puVar7[0x27f] = temp_v6;
    *(unsigned int *)(temp_v6 + 0x108) = 3;
    temp_v7 = FUN_00291018(puVar7[0x27d],&LAB_001d730c);
    FUN_002971e4(puVar7[0x27f],temp_v7);
    FUN_0026533c();
    puVar7[3] = puVar7[3] + 1;
    puVar7[4] = 0;
    break;
  case 0x31:
    FUN_0026533c();
    temp_v6 = FUN_0019dfbc(puVar7[0x27f]);
    if (temp_v6 == 2) {
      FUN_002a755c(puVar7[0x27f]);
      puVar7[0x27f] = 0;
      FUN_002c4360(puVar7[0x27d]);
      puVar7[0x27d] = 0;
      FUN_002c4360(puVar7[0x27e]);
      puVar7[0x27e] = 0;
      FUN_00276170();
      DAT_0049f934 = '\0';
      puVar7[3] = 0xb;
      puVar7[4] = 0;
    }
    break;
  case 0x32:
    FUN_002649c0();
    FUN_00276c24(0xffffffff,0xffffffff);
    puVar17 = DAT_00447060;
    FUN_002c0128();
    FUN_002be7fc(temp_v30,&LAB_001d7324,puVar17[0x26f],puVar17[0x26f]);
    temp_v7 = FUN_002c5e2c(temp_v30);
    puVar17[0x279] = temp_v7;
    FUN_002be7fc(temp_v30,&LAB_001d733c,puVar17[0x26f],puVar17[0x26f]);
    temp_v7 = FUN_002c5e2c(temp_v30);
    puVar17[0x27a] = temp_v7;
    temp_v6 = puVar17[0x279];
    FUN_002972f8(temp_v6,temp_v7);
    puVar17[0x27b] = temp_v6;
    *(unsigned int *)(temp_v6 + 0x108) = 2;
    temp_v7 = FUN_00289ac0(puVar17[0x27b],puVar17[0x278]);
    temp_v10 = puVar17[0x26f];
    FUN_00289a58(temp_v10,temp_v7);
    puVar17[0x27c] = temp_v10;
    FUN_002971e4(puVar17[0x27b],puVar17[0x278]);
    DAT_0049f934 = '\x01';
    DAT_0049f970 = 0;
    temp_v6 = puVar7[3];
    temp_v6 = temp_v6 + 1;
    puVar7[3] = temp_v6;
    puVar7[4] = 0;
    break;
  case 0x33:
    temp_v6 = FUN_00264774();
    if (temp_v6 != 0) {
      temp_v12 = DAT_0049f970 == 0;
      if (!temp_v12) {
        puVar7[4] = 0;
        puVar7[3] = 0x5e;
        *(unsigned char *)((int)puVar7 + 10) = 1;
      }
      else {
        puVar7[3] = 0x5e;
        puVar7[4] = 0;
      }
      *(unsigned char *)((int)puVar7 + 9) = temp_v12;
    }
    break;
  case 0x34:
    temp_v15 = 0;
    temp_v16 = DAT_0049f958;
    temp_v19 = DAT_0049f9a0;
    temp_v20 = DAT_0049f9a4;
    temp_v21 = DAT_0049f9a8;
    temp_v22 = DAT_0049f9ac;
    FUN_0027ee6c(&temp_v15,0x20);
    DAT_0049fb47 = 1;
    puVar7[3] = puVar7[3] + 1;
    puVar7[4] = 0;
    break;
  case 0x35:
    temp_v6 = FUN_0027ee10();
    if (temp_v6 != 0) {
      return 0;
    }
    if (DAT_0049fd14 == -1) {
      FUN_00276170();
      temp_v7 = 0xb;
      DAT_0049fb47 = 0;
      DAT_0049fb45 = 1;
      DAT_0049fb46 = 1;
      DAT_0049f934 = '\0';
      puVar7[3] = temp_v7;
      puVar7[4] = 0;
      return 0;
    }
    if (DAT_0049f9d0 < 99) {
      FUN_002bf9e8(DAT_0049f9d0 + 0x10000af);
    }
    temp_v6 = DAT_00447e88;
    *(short *)(temp_v4 + 0x32) = (short)(int)*(float *)(DAT_00447e88 + 0x1c);
    *(short *)(temp_v4 + 0x34) = (short)(int)*(float *)(temp_v6 + 0x20);
    *(short *)(temp_v4 + 0x36) = (short)(int)*(float *)(temp_v6 + 0x24);
    temp_v3 = *(short *)(temp_v4 + 0x28);
    if (temp_v3 != 1) {
      if (temp_v3 == 2) {
        temp_v6 = 0;
        FUN_0027d81c(temp_v6);
        temp_v6 = 0x5d;
        puVar7[3] = temp_v6;
        puVar7[4] = 0;
        break;
      }
      if (temp_v3 == 3) {
        FUN_0027d81c(0);
      }
    }
    else {
      temp_v6 = FUN_0027636c((int)*(short *)(temp_v4 + 0x2a));
      temp_v6 = (int)*(short *)(temp_v6 + 8);
      FUN_0027d81c(temp_v6);
    }
    temp_v6 = 0x5d;
    puVar7[3] = temp_v6;
    puVar7[4] = 0;
    break;
  case 0x36:
    temp_v1 = 0xdb;
    FUN_002b8b78();
    *(unsigned char *)(puVar7 + 0x268) = 0;
    FUN_0027079c();
    *(unsigned char *)(puVar7 + 0x268) = temp_v1;
    FUN_0026617c(puVar7);
    FUN_00265e24(puVar7);
    FUN_002755d4();
    DAT_0049fb46 = 0;
    puVar7[3] = puVar7[3] + 1;
    puVar7[4] = 0;
    break;
  case 0x37:
    *(unsigned char *)(puVar7 + 0x268) = 0;
    FUN_0027079c();
    *(char *)(puVar7 + 0x268) = (char)temp_v5;
    FUN_0026617c(puVar7);
    FUN_00265e24(puVar7);
    FUN_002755d4();
    temp_v6 = FUN_002eb0f4();
    if (temp_v6 == 0) {
      if (DAT_0049fa58 != '\0') {
        FUN_002b8b70();
        temp_v7 = FUN_002be828(DAT_0049fa5c,1);
        FUN_002bd348(temp_v7,temp_v30);
        FUN_00295904(0,temp_v30);
        FUN_002c0128();
        temp_v7 = FUN_00291018(puVar7[0x269],&LAB_001d787c);
        puVar7[0x267] = temp_v7;
        FUN_002971e4(puVar7[0x26b],temp_v7);
        puVar7[3] = 0x38;
        puVar7[4] = 0;
      }
      else {
        FUN_00273ab0(0);
        DAT_0049fb46 = 1;
        DAT_0049f934 = '\0';
        puVar7[3] = 0xb;
        puVar7[4] = 0;
      }
    }
    break;
  case 0x38:
    FUN_0027079c();
    *(char *)(puVar7 + 0x268) = (char)temp_v5;
    FUN_0026617c(puVar7);
    FUN_00265e24(puVar7);
    FUN_002755d4();
    puVar7[4] = puVar7[4] + 1;
    temp_v6 = FUN_0019dfbc(puVar7[0x26b]);
    if (temp_v6 == 2) {
      DAT_0049fa58 = '\0';
      DAT_0049fa5c = 0;
      FUN_00273ab0(0);
      DAT_0049fb46 = 1;
      DAT_0049f934 = '\0';
      puVar7[3] = 0xb;
      puVar7[4] = 0;
    }
    break;
  case 0x39:
    DAT_0049f934 = '\x01';
    DAT_0049fb45 = 0;
    DAT_0049fb46 = 0;
    if (DAT_00447060[0x33] != 8) {
      DAT_00447060[0x33] = 8;
      puVar17[0x34] = 0;
      puVar17[0x35] = 0;
    }
    FUN_0026533c();
    puVar7[3] = puVar7[3] + 1;
    puVar7[4] = 0;
    break;
  case 0x3a:
    FUN_0026533c();
    if (puVar7[0x33] == 1) {
      FUN_002899c4(0x529,1);
      DAT_0049fb45 = 1;
      DAT_0049fb46 = 1;
      DAT_0049f934 = '\0';
      puVar7[3] = 0xb;
      puVar7[4] = 0;
    }
    break;
  case 0x3b:
    FUN_00264368();
    FUN_0026617c(puVar7);
    temp_v6 = FUN_0019dfbc(puVar7[0x26e]);
    if (temp_v6 != 2) {
      return 0;
    }
    temp_v6 = FUN_00297674();
    if (temp_v6 == 0) {
      DAT_0049f934 = 1;
      DAT_0049fb46 = 0;
      puVar7[3] = 0x3c;
      puVar7[4] = 0;
      return 0;
    }
    FUN_00276170();
    DAT_0049f934 = '\0';
    DAT_0049fb46 = 1;
    puVar7[3] = 0xb;
    puVar7[4] = 0;
    break;
  case 0x3c:
    if (puVar7[4] == 0) {
      *(unsigned char *)((int)puVar7 + 0xb) = 1;
      puVar7[6] = 2;
      puVar7[0xe] = 0;
      puVar7[0xf] = 0;
      temp_v7 = *(unsigned int *)(DAT_00447e88 + 0x1c);
      temp_v10 = *(unsigned int *)(DAT_00447e88 + 0x20);
      temp_v9 = *(unsigned int *)(DAT_00447e88 + 0x24);
      puVar7[8] = temp_v7;
      puVar7[9] = temp_v10;
      puVar7[10] = temp_v9;
      puVar7[0xb] = temp_v7;
      puVar7[0xc] = temp_v10;
      puVar7[0xd] = temp_v9;
      puVar7[0xc] = 0x44480000;
      puVar7[0x37] = 0;
      *(unsigned char *)(puVar7 + 0x38) = 1;
      puVar7[0x12] = 99;
      DAT_0049f920 = 99;
    }
    if (*(float *)(DAT_00447e88 + 0x20) < (float)puVar7[0xc]) {
      *(float *)(DAT_00447e88 + 0x20) = *(float *)(DAT_00447e88 + 0x20) + 20.0f;
    }
    if (puVar7[4] == 0xf) {
      FUN_0029c660(0,0xf,0xffffffff);
      FUN_0029c660(1,0xf,0xff);
    }
    FUN_0026533c();
    temp_v6 = puVar7[4];
    puVar7[4] = temp_v6 + 1;
    if (temp_v6 + 1 < 0x15) {
      return 0;
    }
    temp_v6 = FUN_00289924();
    if (temp_v6 == 0) {
      return 0;
    }
    FUN_00276170();
    temp_v6 = puVar7[3];
    temp_v6 = temp_v6 + 1;
    puVar7[3] = temp_v6;
    puVar7[4] = 0;
    break;
  case 0x3d:
    FUN_002a7604(0);
    FUN_002819f4();
    FUN_0027054c();
    temp_v6 = 0;
    do {
      if (puVar7[temp_v6 + 0x284] != 0) {
        FUN_00152af8();
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 0x20);
    if ((puVar7[0x2a7] != 0) && (temp_v6 = 0, 0 < *(int *)(puVar7[0x2a7] + 4))) {
      do {
        FUN_00265da4(temp_v6,0);
        if (*(char *)(puVar7 + temp_v6 * 0x22 + 0x2cc) != '\0') {
          FUN_002642d0(puVar7[0x2a7],temp_v6);
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < *(int *)(puVar7[0x2a7] + 4));
    }
    if (puVar7[0x283] != 0) {
      FUN_00152af8();
    }
    FUN_00264670(puVar7 + 0x3b);
    FUN_00397120(puVar7 + 0x3b);
    FUN_00152af8(puVar7[0x2f]);
    FUN_00152af8(puVar7[0x36]);
    FUN_00270514();
    FUN_00270458();
    puVar7[3] = puVar7[3] + 1;
    puVar7[4] = 0;
    break;
  case 0x3e:
    temp_v6 = puVar7[4] + 1;
    if (temp_v6 == 2) {
      unaff_r7 = 0;
      unaff_r5 = unaff_r7;
    }
    puVar7[4] = temp_v6;
    if (temp_v6 != 2) {
      return 0;
    }
    do {
      if (puVar7[unaff_r5 + 0x284] != 0) {
        FUN_002a7aa0();
        puVar7[unaff_r5 + 0x284] = unaff_r7;
      }
      unaff_r5 = unaff_r5 + 1;
    } while (unaff_r5 < 0x20);
    *(char *)(puVar7 + 0x2a4) = (char)unaff_r7;
    if (puVar7[0x2a7] != 0) {
      FUN_0026407c();
      puVar7[0x2a7] = unaff_r7;
    }
    if (puVar7[0x283] != 0) {
      FUN_002a7aa0();
      puVar7[0x283] = unaff_r7;
    }
    FUN_002a7aa0(puVar7[0x2f]);
    FUN_002a7aa0(puVar7[0x36]);
    FUN_002b01a0(puVar7 + 0x3b);
    FUN_00270404();
    FUN_00270340();
    FUN_00270250();
    temp_v6 = puVar7[3] + 1;
    puVar7[3] = temp_v6;
    break;
  case 0x3f:
  case 0x4c:
    DAT_0049f940 = 1;
    DAT_0049f941 = 1;
    temp_v6 = puVar7[3] + 1;
    temp_v4 = 0;
    puVar7[3] = temp_v6;
    puVar7[4] = temp_v4;
    break;
  case 0x40:
    FUN_002be7fc(temp_v29,&LAB_001d46f8,puVar7[0x10] - 100);
    FUN_002a0c54(temp_v29,0);
    puVar7[3] = puVar7[3] + 1;
    puVar7[4] = 0;
    break;
  case 0x41:
    if (DAT_00447060[0x10] == 100) {
      return 0;
    }
    FUN_002be7fc(temp_v29,&LAB_001d4710,puVar7[0x10] - 100,puVar7[0x10] - 100);
    FUN_00297704(temp_v29,puVar7 + 0x2a6,1);
    temp_v6 = 0;
    if (0 < *(int *)(puVar7[0x10] * 4 + 0x446ee8)) {
      do {
        if (puVar7[0x10] != 0x65 || temp_v6 != 3) {
          temp_v15 = temp_v6;
          FUN_002be7fc(temp_v29,&LAB_001d472c,puVar7[0x10] - 100);
          puVar17 = DAT_00447060;
          if (DAT_00447060 != (unsigned int *)0x0) {
            temp_v7 = FUN_0029a2d0(temp_v29,0x1c0);
            puVar17[*(unsigned char *)(puVar17 + 0x2a4) + 0x284] = temp_v7;
            *(char *)(puVar17 + 0x2a4) = *(char *)(puVar17 + 0x2a4) + '\x01';
          }
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < *(int *)(puVar7[0x10] * 4 + 0x446ee8));
    }
    temp_v6 = puVar7[3];
    temp_v6 = temp_v6 + 1;
    puVar7[3] = temp_v6;
    puVar7[4] = 0;
    break;
  case 0x42:
    temp_v6 = DAT_00447060[0x10];
    temp_v12 = temp_v6 == 100;
    if (!temp_v12) {
      temp_v6 = puVar7[0x2a6];
    }
    if (temp_v12 || temp_v6 == 0) {
      return 0;
    }
    if (DAT_00447060 != (unsigned int *)0x0) {
      temp_v6 = 0;
      do {
        if ((puVar17[temp_v6 + 0x284] != 0) && (temp_v4 = FUN_002ae16c(), temp_v4 == 0)) {
          return 0;
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 0x20);
    }
    FUN_002668dc();
    puVar17 = DAT_00447060;
    if (DAT_00447060 != (unsigned int *)0x0) {
      temp_v6 = 0;
      do {
        piVar18 = (int *)(puVar17 + temp_v6 + 0x284);
        if (*piVar18 != 0) {
          FUN_002a06c8(*piVar18,1);
          FUN_002e11bc(*piVar18,1);
          *(unsigned char *)(*(int *)(*(int *)(*piVar18 + 8) + 0x2c) + 500) = 0;
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 0x20);
    }
    temp_v6 = puVar7[3] + 1;
    puVar7[3] = temp_v6;
    break;
  case 0x43:
    temp_v5 = FUN_0027d334(puVar7[0x10],puVar7[0x12]);
    if (temp_v5 == 0) {
      return 0;
    }
    puVar7[3] = puVar7[3] + 1;
    break;
  case 0x44:
  case 0x51:
  case 0x5a:
    FUN_0027cedc();
    FUN_0027ceb8(puVar7[0x10],0);
    puVar7[3] = puVar7[3] + 1;
    break;
  case 0x45:
    FUN_0027c640();
    if (temp_v5 == 0) {
      return 0;
    }
    puVar7[3] = puVar7[3] + 1;
    break;
  case 0x46:
    puVar8 = &LAB_001d4770;
    FUN_0029bddc(&LAB_001d4770,0x1c0);
    puVar7[0x2f] = (unsigned int)puVar8;
    FUN_002a06c8();
    puVar8 = &LAB_001d4788;
    FUN_0029bddc(&LAB_001d4788,0x1c0);
    puVar7[0x36] = (unsigned int)puVar8;
    FUN_002a06c8();
    FUN_00297c9c();
    puVar17 = DAT_00447060;
    temp_v6 = FUN_002c0ba8(0x261);
    if ((temp_v6 != 0) && (puVar17[0x10] == 0x65)) {
      temp_v8 = 0;
      do {
        temp_v6 = temp_v8 * 0x18;
        temp_v27 = *(unsigned int *)(temp_v6 + 0x447364);
        temp_v26 = 0;
        uStack_144 = 0;
        temp_v28 = 0;
        temp_v22 = 0;
        temp_v23 = 0;
        temp_v24 = 0;
        temp_v25 = 0;
        temp_v18 = (unsigned int)(*(unsigned int *)(temp_v6 + 0x44736c) & 0xff);
        temp_v19 = 0;
        temp_v20 = 0;
        temp_v21 = 0.0f;
        temp_v17 = *(unsigned int *)(temp_v6 + 0x447368) & 0xff;
        temp_v15 = 0x27;
        temp_v16 = 0xffffffff;
        FUN_00263ee4(0,0,&DAT_00404460,0x3c);
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < 0x10);
    }
    FUN_0027b524(puVar7[0x10],puVar7[0x12]);
    FUN_00277f9c(puVar7[0x10],puVar7[0x12]);
    FUN_0027d77c(puVar7[0x10]);
    FUN_0027d700(1);
    puVar7[3] = puVar7[3] + 1;
    puVar7[4] = 0;
    break;
  case 0x47:
    FUN_002a0790(0);
    if (puVar7[0x2a7] != 0) {
      temp_v6 = 0;
      if (temp_v6 < *(int *)(puVar7[0x2a7] + 4)) {
        do {
          FUN_00265da4(temp_v6,0);
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < *(int *)(puVar7[0x2a7] + 4));
      }
      FUN_002653ac();
    }
    *(unsigned char *)((int)puVar7 + 0xb) = 1;
    puVar7[6] = 2;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
    puVar7[0x37] = 0x3f800000;
    *(unsigned char *)(puVar7 + 0x38) = 1;
    temp_v13 = DAT_0049f9a8;
    temp_v10 = DAT_0049f9a4;
    temp_v7 = DAT_0049f9a0;
    temp_v6 = DAT_00447e88;
    *(unsigned int *)(DAT_00447e88 + 0x1c) = DAT_0049f9a0;
    *(unsigned int *)(temp_v6 + 0x20) = temp_v10;
    *(float *)(temp_v6 + 0x24) = temp_v13;
    *(unsigned int *)(temp_v6 + 0x20) = 0x44480000;
    temp_v13 = temp_v13 + 250.0f;
    *(float *)(temp_v6 + 0x24) = temp_v13;
    *(unsigned int *)(temp_v6 + 0x28) = temp_v7;
    *(unsigned int *)(temp_v6 + 0x2c) = *(unsigned int *)(temp_v6 + 0x20);
    *(float *)(temp_v6 + 0x30) = temp_v13;
    *(unsigned int *)(temp_v6 + 0x34) = temp_v7;
    *(unsigned int *)(temp_v6 + 0x38) = *(unsigned int *)(temp_v6 + 0x20);
    *(float *)(temp_v6 + 0x3c) = temp_v13;
    *(unsigned int *)(temp_v6 + 0x4c) = 0;
    *(unsigned int *)(temp_v6 + 0x50) = 0;
    puVar7[0x14] = 0x43340000;
    puVar7[0x24] = 0x43480000;
    *(unsigned char *)((int)puVar7 + 0xe1) = 0;
    puVar7[0x39] = 0x38;
    puVar7[0x3a] = 0x42200000;
    FUN_0027d6e4(puVar7[0x10],puVar7[0x12],DAT_0049f924);
    DAT_0049f940 = 0;
    DAT_0049f941 = 0;
    FUN_0026533c();
    FUN_002c2ba4(0,0xf,0xffffffff);
    FUN_002c2ba4(1,0xf,0xff);
    puVar7[4] = 0;
    puVar7[3] = puVar7[3] + 1;
    break;
  case 0x48:
    FUN_0026533c();
    temp_v6 = FUN_00289924();
    if (temp_v6 == 0) {
      return 0;
    }
    DAT_0049f934 = '\0';
    DAT_0049fb46 = 1;
    puVar7[3] = 0xb;
    puVar7[4] = 0;
    break;
  case 0x49:
    if (puVar7[4] == 0) {
      DAT_0049f934 = 1;
      DAT_0049fb46 = 0;
      puVar7[0x12] = DAT_0049f994;
      puVar17 = DAT_00447060;
      DAT_0049f920 = temp_v6;
      FUN_0027054c();
      FUN_0027b524(puVar17[0x10],puVar17[0x12]);
      temp_v14 = 0x40000000;
      puVar17[0x37] = 0x40000000;
      *(unsigned char *)(puVar17 + 0x38) = 1;
      DAT_0049f934 = 1;
      DAT_0049fb46 = 0;
      temp_v10 = *(unsigned int *)(DAT_00447e88 + 0x20);
      temp_v9 = *(unsigned int *)(DAT_00447e88 + 0x1c);
      temp_v7 = *(unsigned int *)(DAT_00447e88 + 0x24);
      puVar17[9] = temp_v10;
      puVar17[8] = temp_v9;
      puVar17[0xc] = temp_v10;
      puVar17[10] = temp_v7;
      puVar17[0xb] = temp_v9;
      puVar17[0xd] = temp_v7;
      FUN_002d78bc(puVar17 + 0xb);
      puVar17[6] = 4;
      puVar17[7] = 0;
      puVar7[0x37] = temp_v14;
      *(unsigned char *)(puVar7 + 0x38) = 1;
      DAT_0049f934 = '\x01';
      DAT_0049fb46 = 0;
      temp_v7 = *(unsigned int *)(DAT_00447e88 + 0x20);
      temp_v10 = *(unsigned int *)(DAT_00447e88 + 0x24);
      puVar7[8] = *(unsigned int *)(DAT_00447e88 + 0x1c);
      puVar7[9] = temp_v7;
      puVar7[10] = temp_v10;
      temp_v13 = DAT_0049f9a8;
      temp_v10 = DAT_0049f9a4;
      temp_v7 = DAT_0049f9a0;
      puVar7[6] = 4;
      puVar7[7] = 0;
      puVar7[0xb] = temp_v7;
      puVar7[0xc] = temp_v10;
      *(float *)&puVar7[0xd] = temp_v13;
    }
    if ((int)*(float *)(DAT_00447e88 + 0x20) >= 0x42c80001) {
      *(float *)(DAT_00447e88 + 0x20) = *(float *)(DAT_00447e88 + 0x20) - 20.0f;
    }
    if (puVar7[4] == 0xf) {
      FUN_0029c660(0,0xf,0xff);
      FUN_0029c660(1,0xf,0xff);
    }
    FUN_0026533c();
    temp_v6 = puVar7[4];
    puVar7[4] = temp_v6 + 1;
    if (temp_v6 + 1 < 0x15) {
      return 0;
    }
    temp_v6 = FUN_00289924();
    if (temp_v6 == 0) {
      return 0;
    }
    temp_v6 = puVar7[3];
    temp_v6 = temp_v6 + 1;
    puVar7[3] = temp_v6;
    puVar7[4] = 0;
    break;
  case 0x4a:
    FUN_002a7604(0);
    FUN_002819f4();
    FUN_0027054c();
    temp_v6 = 0;
    do {
      if (puVar7[temp_v6 + 0x284] != 0) {
        FUN_00152af8();
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 0x20);
    if ((puVar7[0x2a7] != 0) && (temp_v6 = 0, 0 < *(int *)(puVar7[0x2a7] + 4))) {
      do {
        FUN_00265da4(temp_v6,0);
        if (*(char *)(puVar7 + temp_v6 * 0x22 + 0x2cc) != '\0') {
          FUN_002642d0(puVar7[0x2a7],temp_v6);
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < *(int *)(puVar7[0x2a7] + 4));
    }
    if (puVar7[0x283] != 0) {
      FUN_00152af8();
    }
    FUN_00152af8(puVar7[0x2f]);
    FUN_00152af8(puVar7[0x36]);
    FUN_00270514();
    FUN_00270458();
    puVar7[3] = puVar7[3] + 1;
    puVar7[4] = 0;
    break;
  case 0x4b:
    temp_v6 = puVar7[4] + 1;
    if (temp_v6 == 2) {
      unaff_r7 = 0;
      unaff_r5 = unaff_r7;
    }
    puVar7[4] = temp_v6;
    if (temp_v6 != 2) {
      return 0;
    }
    do {
      if (puVar7[unaff_r5 + 0x284] != 0) {
        FUN_002a7aa0();
        puVar7[unaff_r5 + 0x284] = unaff_r7;
      }
      unaff_r5 = unaff_r5 + 1;
    } while (unaff_r5 < 0x20);
    *(char *)(puVar7 + 0x2a4) = (char)unaff_r7;
    if (puVar7[0x2a7] != 0) {
      FUN_0026407c();
      puVar7[0x2a7] = unaff_r7;
    }
    if (puVar7[0x283] != 0) {
      FUN_002a7aa0();
      puVar7[0x283] = unaff_r7;
    }
    FUN_002a7aa0(puVar7[0x2f]);
    FUN_002a7aa0(puVar7[0x36]);
    FUN_00270404();
    FUN_00270340();
    FUN_00270250();
    temp_v6 = puVar7[3] + 1;
    puVar7[3] = temp_v6;
    break;
  case 0x4d:
    FUN_002be7fc(temp_v29,&LAB_001d46f8,puVar7[0x10] - 100);
    FUN_002a0c54(temp_v29,0);
    FUN_00277dcc(DAT_0049f91c,DAT_0049f920);
    temp_v6 = puVar7[3] + 1;
    temp_v4 = 0;
    puVar7[3] = temp_v6;
    puVar7[4] = temp_v4;
    break;
  case 0x4e:
    if (DAT_00447060[0x10] == 100) {
      return 0;
    }
    FUN_002be7fc(temp_v29,&LAB_001d4710,puVar7[0x10] - 100,puVar7[0x10] - 100);
    FUN_00297704(temp_v29,puVar7 + 0x2a6,1);
    temp_v6 = 0;
    if (0 < *(int *)(puVar7[0x10] * 4 + 0x446ee8)) {
      do {
        if (puVar7[0x10] != 0x65 || temp_v6 != 3) {
          temp_v15 = temp_v6;
          FUN_002be7fc(temp_v29,&LAB_001d472c,puVar7[0x10] - 100);
          puVar17 = DAT_00447060;
          if (DAT_00447060 != (unsigned int *)0x0) {
            temp_v7 = FUN_0029a2d0(temp_v29,0x1c0);
            puVar17[*(unsigned char *)(puVar17 + 0x2a4) + 0x284] = temp_v7;
            *(char *)(puVar17 + 0x2a4) = *(char *)(puVar17 + 0x2a4) + '\x01';
          }
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < *(int *)(puVar7[0x10] * 4 + 0x446ee8));
    }
    temp_v6 = puVar7[3];
    temp_v6 = temp_v6 + 1;
    puVar7[3] = temp_v6;
    puVar7[4] = 0;
    break;
  case 0x4f:
    temp_v6 = DAT_00447060[0x10];
    temp_v12 = temp_v6 == 100;
    if (!temp_v12) {
      temp_v6 = puVar7[0x2a6];
    }
    if (temp_v12 || temp_v6 == 0) {
      return 0;
    }
    if (DAT_00447060 != (unsigned int *)0x0) {
      temp_v6 = 0;
      do {
        if ((puVar17[temp_v6 + 0x284] != 0) && (temp_v4 = FUN_002ae16c(), temp_v4 == 0)) {
          return 0;
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 0x20);
    }
    FUN_002668dc();
    puVar17 = DAT_00447060;
    if (DAT_00447060 != (unsigned int *)0x0) {
      temp_v6 = 0;
      do {
        piVar18 = (int *)(puVar17 + temp_v6 + 0x284);
        if (*piVar18 != 0) {
          FUN_002a06c8(*piVar18,1);
          FUN_002e11bc(*piVar18,1);
          *(unsigned char *)(*(int *)(*(int *)(*piVar18 + 8) + 0x2c) + 500) = 0;
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 0x20);
    }
    temp_v6 = puVar7[3] + 1;
    puVar7[3] = temp_v6;
    break;
  case 0x50:
    temp_v5 = FUN_0027d334(puVar7[0x10],puVar7[0x12]);
    if (temp_v5 == 0) {
      return 0;
    }
    puVar7[3] = puVar7[3] + 1;
    break;
  case 0x52:
    FUN_0027c640();
    if (temp_v5 == 0) {
      return 0;
    }
    puVar7[3] = puVar7[3] + 1;
    break;
  case 0x53:
    puVar8 = &LAB_001d4770;
    FUN_0029bddc(&LAB_001d4770,0x1c0);
    puVar7[0x2f] = (unsigned int)puVar8;
    FUN_002a06c8();
    puVar8 = &LAB_001d4788;
    FUN_0029bddc(&LAB_001d4788,0x1c0);
    puVar7[0x36] = (unsigned int)puVar8;
    FUN_002a06c8();
    FUN_002668cc(puVar7 + 0x3b,puVar7[0x10] - 100,puVar7[0x12]);
    FUN_00397090(puVar7 + 0x3b);
    if (DAT_00447060[0x10] != 100) {
      temp_v8 = puVar7[0x3b] & 0xfffffffe;
    }
    else {
      temp_v8 = puVar7[0x3b] | 1;
    }
    puVar7[0x3b] = temp_v8;
    FUN_00266c58();
    FUN_002667b0(puVar7[0x10]);
    FUN_0027b524(puVar7[0x10],puVar7[0x12]);
    FUN_00277f9c(puVar7[0x10],puVar7[0x12]);
    FUN_0027d77c(puVar7[0x10]);
    FUN_0027d700(1);
    FUN_0027d6e4(puVar7[0x10],puVar7[0x12],DAT_0049f924);
    puVar7[4] = 0;
    puVar7[3] = puVar7[3] + 1;
    break;
  case 0x54:
    FUN_00266704(puVar7 + 0x3b);
    FUN_002a0790(0);
    if (puVar7[0x2a7] != 0) {
      temp_v6 = 0;
      if (temp_v6 < *(int *)(puVar7[0x2a7] + 4)) {
        do {
          FUN_00265da4(temp_v6,0);
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < *(int *)(puVar7[0x2a7] + 4));
      }
      FUN_002653ac();
    }
    puVar7[0x37] = 0x3f800000;
    *(unsigned char *)(puVar7 + 0x38) = 1;
    temp_v13 = DAT_0049f9a8;
    temp_v10 = DAT_0049f9a4;
    temp_v7 = DAT_0049f9a0;
    temp_v6 = DAT_00447e88;
    *(unsigned int *)(DAT_00447e88 + 0x1c) = DAT_0049f9a0;
    *(unsigned int *)(temp_v6 + 0x20) = temp_v10;
    *(float *)(temp_v6 + 0x24) = temp_v13;
    *(unsigned int *)(temp_v6 + 0x28) = temp_v7;
    *(unsigned int *)(temp_v6 + 0x2c) = temp_v10;
    *(float *)(temp_v6 + 0x30) = temp_v13;
    *(unsigned int *)(temp_v6 + 0x34) = temp_v7;
    *(unsigned int *)(temp_v6 + 0x38) = temp_v10;
    *(float *)(temp_v6 + 0x3c) = temp_v13;
    *(unsigned int *)(temp_v6 + 0x4c) = 0x43340000;
    *(unsigned int *)(temp_v6 + 0x50) = 0x43340000;
    puVar7[0x14] = 0x43340000;
    puVar7[0x24] = 0;
    FUN_00266c58();
    *(unsigned char *)((int)puVar7 + 0xb) = 0;
    FUN_00276170();
    DAT_0049f940 = 0;
    DAT_0049f941 = 0;
    FUN_00276b74();
    *(unsigned char *)((int)puVar7 + 0xe1) = 0;
    puVar7[0x39] = 0x38;
    puVar7[0x3a] = 0x42200000;
    FUN_0026533c();
    FUN_002c2ba4(0,0xf,0xff);
    FUN_002c2ba4(1,0xf,0xff);
    puVar7[4] = 0;
    puVar7[3] = puVar7[3] + 1;
    break;
  case 0x55:
    FUN_0026533c();
    temp_v6 = FUN_00289924();
    if (temp_v6 != 0) {
      DAT_0049f934 = '\0';
      DAT_0049fb45 = 1;
      DAT_0049fb46 = 1;
      puVar7[3] = 0xb;
      puVar7[4] = 0;
    }
    break;
  case 0x56:
    if (puVar7[4] == 0) {
      if (DAT_00447060[0x33] != 2) {
        DAT_00447060[0x34] = 0;
        puVar17[0x33] = 2;
        puVar17[0x35] = 0;
        goto LAB_001d8750;
      }
    }
    else {
LAB_001d8750:
      if (puVar7[4] == 0x10) {
        FUN_0029c660(0,10,0xff);
        FUN_0029c660(1,10,0xff);
        FUN_00270770(8,0);
      }
    }
    FUN_00264b68(puVar7);
    FUN_00265e24(puVar7);
    temp_v6 = puVar7[4];
    puVar7[4] = temp_v6 + 1;
    if (temp_v6 + 1 < 0x15) {
      return 0;
    }
    temp_v6 = FUN_00289924();
    if (temp_v6 == 0) {
      return 0;
    }
    puVar7[4] = 0;
    temp_v6 = DAT_0049f990;
    FUN_0027da20(DAT_0049f990,DAT_0049f994,DAT_0049f998);
    if (temp_v6 != -1) {
      pcVar9 = (char *)FUN_0027d9b8();
      FUN_00276c24((int)*pcVar9,(int)pcVar9[1],pcVar9[2]);
    }
    if ((DAT_0049fd14 < 200) && (DAT_0049fd14 >= 100)) {
      temp_v6 = 0x57;
    }
    else {
      temp_v6 = 0x60;
    }
    puVar7[3] = temp_v6;
    break;
  case 0x57:
    FUN_00270458();
    FUN_0027054c();
    DAT_0049f91c = DAT_0049fd14;
    puVar7[0x10] = DAT_0049fd14;
    DAT_0049f920 = DAT_0049fd18;
    puVar7[0x12] = DAT_0049fd18;
    FUN_0027da20(puVar7[0x10],puVar7[0x12],DAT_0049fd1c);
    temp_v4 = FUN_0027d9b8();
    temp_v6 = DAT_00447e88;
    temp_v7 = VectorSignedToFloat((int)*(short *)(temp_v4 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(DAT_00447e88 + 0x1c) = temp_v7;
    temp_v7 = VectorSignedToFloat((int)*(short *)(temp_v4 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v6 + 0x20) = temp_v7;
    temp_v7 = VectorSignedToFloat((int)*(short *)(temp_v4 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v6 + 0x24) = temp_v7;
    *(unsigned int *)(temp_v6 + 0x28) = *(unsigned int *)(temp_v6 + 0x1c);
    *(unsigned int *)(temp_v6 + 0x2c) = *(unsigned int *)(temp_v6 + 0x20);
    *(unsigned int *)(temp_v6 + 0x30) = *(unsigned int *)(temp_v6 + 0x24);
    *(unsigned int *)(temp_v6 + 0x34) = *(unsigned int *)(temp_v6 + 0x1c);
    *(unsigned int *)(temp_v6 + 0x4c) = 0x43340000;
    *(unsigned int *)(temp_v6 + 0x50) = 0x43340000;
    *(unsigned int *)(temp_v6 + 0x38) = *(unsigned int *)(temp_v6 + 0x20);
    *(unsigned int *)(temp_v6 + 0x3c) = *(unsigned int *)(temp_v6 + 0x24);
    puVar7[3] = puVar7[3] + 1;
    break;
  case 0x58:
    FUN_00270340();
    puVar7[3] = puVar7[3] + 1;
    break;
  case 0x59:
    FUN_0027b524(puVar7[0x10],puVar7[0x12]);
    FUN_00266c58();
    FUN_00264670(puVar7 + 0x3b);
    FUN_002668cc(puVar7 + 0x3b,puVar7[0x10] - 100,puVar7[0x12]);
    FUN_00266704(puVar7 + 0x3b);
    puVar7[3] = puVar7[3] + 1;
    break;
  case 0x5b:
    FUN_0027c640();
    if (temp_v5 == 0) {
      return 0;
    }
    puVar7[3] = puVar7[3] + 1;
    break;
  case 0x5c:
    temp_v6 = FUN_002c2bd0(0);
    if (temp_v6 == 3) {
      FUN_002c2ba4(0,10,0xff);
    }
    temp_v6 = FUN_002c2bd0(1);
    if (temp_v6 == 3) {
      FUN_002c2ba4(1,10,0xff);
    }
    FUN_00276ba4();
    FUN_00276bd8(0,8);
    puVar17 = DAT_00447060;
    if (DAT_00447060[0x33] != 3) {
      DAT_00447060[0x34] = 0;
      puVar17[0x33] = 3;
      puVar17[0x35] = 0;
    }
    DAT_0049f934 = '\0';
    puVar7[3] = 0xb;
    puVar7[4] = 0;
    FUN_00276c24(0xffffffff,0xffffffff);
    break;
  case 0x5d:
    if ((puVar7[4] == 0) && (DAT_00447060[0x33] != 2)) {
      DAT_00447060[0x34] = 0;
      puVar17[0x33] = 2;
      puVar17[0x35] = 0;
    }
    FUN_0026617c(puVar7);
    FUN_00264b68(puVar7);
    FUN_00265e24(puVar7);
    temp_v6 = puVar7[4];
    puVar7[4] = temp_v6 + 1;
    if (temp_v6 + 1 < 0x11) {
      return 0;
    }
    temp_v6 = 0x5e;
    puVar7[3] = temp_v6;
    puVar7[4] = 0;
    break;
  case 0x5e:
    if (puVar7[4] == 0) {
      FUN_0029c660(0,10,0xff);
      FUN_0029c660(1,10,0xff);
    }
    FUN_0026617c(puVar7);
    FUN_00264b68(puVar7);
    FUN_00265e24(puVar7);
    puVar7[4] = puVar7[4] + 1;
    temp_v6 = FUN_00289924();
joined_r0x001d8b28:
    if (temp_v6 == 0) {
      return 0;
    }
    temp_v6 = 0x60;
    puVar7[3] = temp_v6;
    puVar7[4] = 0;
    break;
  case 0x5f:
    if (puVar7[4] == 0) {
      FUN_00270298(4);
    }
    temp_v6 = puVar7[4];
    puVar7[4] = temp_v6 + 1;
    if (temp_v6 + 1 < 4) {
      return 0;
    }
    temp_v6 = 0x60;
    puVar7[3] = temp_v6;
    puVar7[4] = 0;
    break;
  case 0x60:
    FUN_002a7604(0);
    FUN_002819f4();
    FUN_0027054c();
    temp_v6 = 0;
    do {
      if (puVar7[temp_v6 + 0x284] != 0) {
        FUN_00152af8();
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 0x20);
    if ((puVar7[0x2a7] != 0) && (temp_v6 = 0, 0 < *(int *)(puVar7[0x2a7] + 4))) {
      do {
        FUN_00265da4(temp_v6,0);
        if (*(char *)(puVar7 + temp_v6 * 0x22 + 0x2cc) != '\0') {
          FUN_002642d0(puVar7[0x2a7],temp_v6);
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < *(int *)(puVar7[0x2a7] + 4));
    }
    if (puVar7[0x283] != 0) {
      FUN_00152af8();
    }
    FUN_00264670(puVar7 + 0x3b);
    FUN_00397120(puVar7 + 0x3b);
    FUN_00152af8(puVar7[0x2f]);
    FUN_00152af8(puVar7[0x36]);
    FUN_00263eac(&DAT_0049f3f0);
    FUN_00270514();
    FUN_00270458();
    FUN_0032b5a0();
    if (puVar7[0x26b] != 0) {
      FUN_002a755c();
      puVar7[0x26b] = 0;
    }
    if (puVar7[0x26e] != 0) {
      FUN_002a755c();
      puVar7[0x26e] = 0;
    }
    if (puVar7[0x26c] != 0) {
      FUN_002c4360();
      puVar7[0x26c] = 0;
    }
    if (puVar7[0x26d] != 0) {
      FUN_002c4360();
      puVar7[0x26d] = 0;
    }
    FUN_0027de14();
    DAT_0049fba0 = 0;
    DAT_0049fb49 = 0;
    puVar7[3] = puVar7[3] + 1;
    puVar7[4] = 0;
    break;
  case 0x61:
    temp_v6 = puVar7[4] + 1;
    if (temp_v6 == 2) {
      unaff_r7 = 0;
      unaff_r5 = unaff_r7;
    }
    puVar7[4] = temp_v6;
    if (temp_v6 != 2) {
      return 0;
    }
    do {
      if (puVar7[unaff_r5 + 0x284] != 0) {
        FUN_002a7aa0();
        puVar7[unaff_r5 + 0x284] = unaff_r7;
      }
      unaff_r5 = unaff_r5 + 1;
    } while (unaff_r5 < 0x20);
    if (puVar7[0x2a7] != 0) {
      FUN_0026407c();
      puVar7[0x2a7] = unaff_r7;
    }
    if (puVar7[0x283] != 0) {
      FUN_002a7aa0();
      puVar7[0x283] = unaff_r7;
    }
    FUN_002a7aa0(puVar7[0x2f]);
    FUN_002a7aa0(puVar7[0x36]);
    FUN_002b01a0(puVar7 + 0x3b);
    FUN_00270404();
    FUN_00270340();
    FUN_00270250();
    FUN_00275c2c();
    FUN_003338b4();
    temp_v6 = puVar7[3] + 1;
    puVar7[3] = temp_v6;
    break;
  case 0x62:
    if (DAT_0049f950 != '\0') {
      FUN_002701c4();
      FUN_00287e9c(1);
      FUN_0027007c();
      FUN_0026fd14();
      if ((DAT_0049f950 != '\0') && (temp_v6 = FUN_002c0b94(), *(char *)(temp_v6 + 2) == '\x02')) {
        FUN_0026fc24();
        FUN_0029c650(0xf);
        DAT_0049f950 = '\0';
        temp_v15 = 1;
        temp_v16 = 0xffffffff;
        temp_v10 = 0x20;
        temp_v17 = 0x31303065;
        temp_v18 = (unsigned int)&LAB_0031305f;
        temp_v7 = 4;
        FUN_002c59b8(temp_v7,puVar14,temp_v10);
        return 0xffffffff;
      }
    }
    if (*(char *)((int)puVar7 + 9) != '\0') {
      temp_v6 = FUN_00290694();
      if ((temp_v6 != 0) && (temp_v4 = FUN_00287afc(), temp_v4 == 6)) {
        FUN_002b6700();
        FUN_0026fbd0(*(unsigned short *)(temp_v6 + 0x148));
        return 0xffffffff;
      }
      (*(unsigned short *)((unsigned char *)&temp_v15 + 0)) = (unsigned short)temp_v15 & 0xff00;
      temp_v15 = romwright_piece_2_2(0xffff,(unsigned short)temp_v15);
      temp_v16 = 0xffffffff;
      temp_v17 = 0xffffffff;
      temp_v18 = (unsigned int)((((unsigned int)temp_v18 >> 8) & 0xff) << 8);
      temp_v19 = (unsigned int)(*(unsigned short *)((unsigned char *)&temp_v19 + 2)) << 0x10;
      temp_v2 = FUN_002faf3c();
      temp_v15 = romwright_piece_2_2(temp_v2,(unsigned short)temp_v15);
      temp_v6 = (int)(short)puVar7[0x12];
      FUN_001e446c();
      switch(temp_v6) {
      case 0:
        temp_v18 = (unsigned int)romwright_piece_2_2(1,(unsigned short)temp_v18);
        temp_v19 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v19 + 2)),6);
        break;
      case 1:
        temp_v18 = (unsigned int)romwright_piece_2_2(1,(unsigned short)temp_v18);
        temp_v19 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v19 + 2)),4);
        break;
      case 2:
        temp_v18 = (unsigned int)romwright_piece_2_2(5,(unsigned short)temp_v18);
        temp_v19 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v19 + 2)),0x1d);
        break;
      case 3:
        temp_v18 = (unsigned int)romwright_piece_2_2(1,(unsigned short)temp_v18);
        temp_v19 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v19 + 2)),5);
        break;
      case 4:
      case 9:
        temp_v18 = (unsigned int)romwright_piece_2_2(5,(unsigned short)temp_v18);
        temp_v19 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v19 + 2)),0x1f);
        break;
      case 5:
        temp_v18 = (unsigned int)romwright_piece_2_2(5,(unsigned short)temp_v18);
        temp_v19 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v19 + 2)),0x24);
        break;
      case 6:
        temp_v18 = (unsigned int)romwright_piece_2_2(5,(unsigned short)temp_v18);
        temp_v19 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v19 + 2)),0x26);
        break;
      case 7:
        temp_v18 = (unsigned int)romwright_piece_2_2(5,(unsigned short)temp_v18);
        temp_v19 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v19 + 2)),0x1e);
        break;
      case 8:
        temp_v18 = (unsigned int)romwright_piece_2_2(5,(unsigned short)temp_v18);
        temp_v19 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v19 + 2)),0x23);
        break;
      default:
        temp_v6 = puVar7[0x10];
        if (temp_v6 == 0x65) {
          temp_v18 = (unsigned int)romwright_piece_2_2(1,(unsigned short)temp_v18);
          temp_v19 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v19 + 2)),6);
          break;
        }
        if (temp_v6 == 0x66) {
          temp_v18 = (unsigned int)romwright_piece_2_2(5,(unsigned short)temp_v18);
          temp_v19 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v19 + 2)),0x24);
          break;
        }
        if (temp_v6 == 0x67) {
          temp_v18 = (unsigned int)romwright_piece_2_2(5,(unsigned short)temp_v18);
          temp_v19 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v19 + 2)),0x26);
        }
      }
      if ((*(unsigned short *)((unsigned char *)&temp_v15 + 2)) != 0) {
        temp_v15 = romwright_piece_3_1(temp_v15._1_3_,1);
        FUN_0026fca0(0);
      }
      else {
        temp_v3 = FUN_0026fbc0();
        temp_v15 = romwright_piece_2_2(temp_v3,(unsigned short)temp_v15);
        if (temp_v3 != 0) {
          temp_v2 = FUN_0026fbc0();
          temp_v15 = romwright_piece_2_2(temp_v2,(unsigned short)temp_v15);
          temp_v15 = romwright_piece_3_1(temp_v15._1_3_,1);
          FUN_0027db24(0);
        }
        else {
          temp_v15 = romwright_piece_2_2((short)puVar7[0x11],(unsigned short)temp_v15);
          temp_v8 = FUN_002c0bcc(100);
          if (temp_v8 < 0x4b) {
            temp_v18 = (unsigned int)romwright_piece_3_1(temp_v18._1_3_,3);
          }
          DAT_0049fb9c = 2;
        }
      }
      temp_v10 = 0x12;
      temp_v17 = romwright_piece_2_2((short)puVar7[0x12],(short)puVar7[0x10]);
      temp_v7 = 5;
      puVar14 = &temp_v15;
    }
    else if (*(char *)((int)puVar7 + 10) != '\0') {
      temp_v15 = DAT_0049f970;
      temp_v16 = 0xffffffff;
      FUN_002bf86c(&temp_v17,&DAT_0049f978);
      temp_v10 = 0x20;
      temp_v7 = 4;
      puVar14 = &temp_v15;
    }
    else if (DAT_0049fd14 >= 200) {
      temp_v15 = DAT_0049fd14 - 200;
      temp_v10 = 4;
      temp_v7 = 0xe;
      puVar14 = &temp_v15;
    }
    else {
      if (DAT_0049fd14 == -1) {
        FUN_002c45b8(*DAT_00447060,0);
        FUN_0029c650(0xf);
        return 0xffffffff;
      }
      temp_v10 = 0;
      puVar14 = (unsigned int *)0x0;
      if (DAT_0049fd14 < 100) {
        temp_v7 = 6;
      }
      else {
        temp_v7 = 8;
      }
    }
    FUN_002c59b8(temp_v7,puVar14,temp_v10);
    return 0xffffffff;
  }
  return 0;
LAB_001d459c:
  FUN_0027cedc();
  FUN_0027ceb8(puVar7[0x10],0);
  temp_v5 = puVar7[3] + 1;
  puVar7[3] = temp_v5;
LAB_001d45bc:
  FUN_0027c640();
  if (temp_v5 == 0) {
    return 0;
  }
  puVar7[3] = puVar7[3] + 1;
LAB_001d45d8:
  temp_v6 = DAT_0049fba4;
  puVar7[0x269] = DAT_0049fba4;
  puVar7[0x26a] = DAT_0049fba8;
  FUN_002972f8();
  puVar7[0x26b] = temp_v6;
  *(unsigned int *)(temp_v6 + 0x108) = 3;
  FUN_002be7fc(temp_v29,&LAB_001d4748,puVar7[0x10] - 100);
  temp_v7 = FUN_002c5e2c(temp_v29);
  puVar7[0x26c] = temp_v7;
  FUN_002be7fc(temp_v29,&LAB_001d475c,puVar7[0x10] - 100);
  temp_v7 = FUN_002c5e2c(temp_v29);
  puVar7[0x26d] = temp_v7;
  temp_v6 = puVar7[0x26c];
  FUN_002972f8(temp_v6,temp_v7);
  puVar7[0x26e] = temp_v6;
  *(unsigned int *)(temp_v6 + 0x108) = 3;
  puVar7[3] = puVar7[3] + 1;
LAB_001d4678:
  puVar8 = &LAB_001d4770;
  FUN_0029bddc(&LAB_001d4770,0x1c0);
  puVar7[0x2f] = (unsigned int)puVar8;
  FUN_002a06c8();
  puVar8 = &LAB_001d4788;
  FUN_0029bddc(&LAB_001d4788,0x1c0);
  puVar7[0x36] = (unsigned int)puVar8;
  FUN_002a06c8();
  temp_v7 = 0;
  puVar7[0x14] = 0x43340000;
  temp_v10 = 0x3f800000;
  puVar7[0x15] = 0;
  puVar7[0x16] = 0x3f800000;
  puVar7[0x17] = 0;
  puVar7[0x1b] = 0;
  puVar7[0x1c] = 0;
  puVar7[0x1d] = 0;
  puVar7[0x18] = 0;
  puVar7[0x19] = 0x43960000;
  puVar7[0x1a] = 0x43960000;
  puVar7[0x21] = puVar7[0x1b];
  puVar7[0x22] = puVar7[0x1c];
  puVar7[0x23] = puVar7[0x1d];
  puVar7[0x1e] = 0;
  puVar7[0x1f] = puVar7[0x19];
  puVar7[0x20] = 0x43960000;
  FUN_002c2210(&DAT_0049f3f0,1);
  FUN_002c20a8(&DAT_0049f3f0,puVar7 + 0x18,puVar7 + 0x1b,puVar7 + 0x15);
  temp_v9 = 0x42100000;
  FUN_002c1ffc(&DAT_0049f3f0,1);
  FUN_00298fec(&DAT_0049f3f0);
  temp_v6 = DAT_004474f4;
  *(unsigned int *)(DAT_004474f4 + 0xc4) = 0;
  *(unsigned int *)(temp_v6 + 200) = 0x43160000;
  *(unsigned int *)(temp_v6 + 0x108) = 0x452f0000;
  *(unsigned int *)(temp_v6 + 0x188) = 0x44fa0000;
  *(unsigned int *)(temp_v6 + 0x1c8) = 0x42200000;
  *(unsigned int *)(temp_v6 + 0xcc) = temp_v7;
  *(unsigned int *)(temp_v6 + 0x10c) = 0x453b8000;
  *(unsigned int *)(temp_v6 + 0x18c) = 0x453b8000;
  *(unsigned int *)(temp_v6 + 0x1cc) = temp_v9;
  *(unsigned int *)(temp_v6 + 0xd0) = temp_v7;
  *(unsigned int *)(temp_v6 + 0x110) = 0x45abe000;
  *(unsigned int *)(temp_v6 + 400) = 0x42c80000;
  *(unsigned int *)(temp_v6 + 0x1d0) = temp_v9;
  puVar7[0x26] = temp_v7;
  puVar7[0x29] = 0x44160000;
  puVar7[0x2c] = 0x44160000;
  puVar7[0x27] = temp_v7;
  puVar7[0x2a] = temp_v7;
  puVar7[0x2d] = temp_v7;
  puVar7[0x28] = temp_v7;
  puVar7[0x2b] = temp_v7;
  puVar7[0x2e] = temp_v7;
  *(unsigned char *)(puVar7 + 0x25) = 1;
  puVar7[0x24] = temp_v7;
  *(unsigned char *)(temp_v6 + 0xb0) = 0;
  *(unsigned char *)(temp_v6 + 0xb1) = 0;
  *(unsigned short *)(temp_v6 + 0xb2) = 0;
  *(unsigned short *)(temp_v6 + 0xb4) = 0;
  *(unsigned int *)(temp_v6 + 0xb8) = temp_v7;
  *(unsigned int *)(temp_v6 + 0xbc) = temp_v7;
  *(unsigned int *)(temp_v6 + 0xc0) = temp_v10;
  DAT_0049f934 = '\x01';
  FUN_002668cc(puVar7 + 0x3b,puVar7[0x10] - 100,puVar7[0x12]);
  FUN_00397090(puVar7 + 0x3b);
  if (DAT_00447060[0x10] != 100) {
    temp_v8 = puVar7[0x3b] & 0xfffffffe;
  }
  else {
    temp_v8 = puVar7[0x3b] | 1;
  }
  puVar7[0x3b] = temp_v8;
  if (DAT_0049fb9c == 0) {
    FUN_00266c58();
  }
  DAT_0049fb9c = 0;
  FUN_002667b0(puVar7[0x10]);
  FUN_0027b524(puVar7[0x10],puVar7[0x12]);
  FUN_00277f9c(puVar7[0x10],puVar7[0x12]);
  FUN_0027d77c(puVar7[0x10]);
  FUN_0027d700(1);
  if (DAT_0049fd14 != -1) {
    FUN_00276c24(0xffffffff,0xffffffff);
    FUN_00276ba4();
  }
  FUN_00276bd8(1,8);
  if (DAT_0049f91c == 0x65) {
    FUN_0027d67c(0x10101003);
  }
  puVar7[3] = puVar7[3] + 1;
  puVar7[4] = 0;
  return 0;
}
