/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b7e78` (_code @ 0x1b7e78, 0x8098 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00305f61; /* 0x305f61 */
extern unsigned char LAB_0031305f; /* 0x31305f */
extern unsigned char LAB_00315f61; /* 0x315f61 */
extern unsigned char LAB_00325f61; /* 0x325f61 */
extern int DAT_00432fc8; /* 0x432fc8 */
extern int DAT_00433158; /* 0x433158 */
extern int DAT_004474d8; /* 0x4474d8 */
extern int DAT_004474f4; /* 0x4474f4 */
extern unsigned int *DAT_00447e28; /* 0x447e28 */
extern int iRam00447e2c; /* 0x447e2c */
extern int DAT_00447e58; /* 0x447e58 */
extern int DAT_00447e88; /* 0x447e88 */
extern unsigned int DAT_0049f91c; /* 0x49f91c */
extern unsigned int DAT_0049f920; /* 0x49f920 */
extern unsigned int DAT_0049f924; /* 0x49f924 */
extern int DAT_0049f928; /* 0x49f928 */
extern int DAT_0049f92c; /* 0x49f92c */
extern unsigned int DAT_0049f930; /* 0x49f930 */
extern unsigned char DAT_0049f934; /* 0x49f934 */
extern int DAT_0049f938; /* 0x49f938 */
extern unsigned char DAT_0049f93c; /* 0x49f93c */
extern unsigned char DAT_0049f93d; /* 0x49f93d */
extern unsigned char DAT_0049f93e; /* 0x49f93e */
extern signed char DAT_0049f93f; /* 0x49f93f */
extern unsigned char DAT_0049f940; /* 0x49f940 */
extern unsigned char DAT_0049f941; /* 0x49f941 */
extern signed char DAT_0049f942; /* 0x49f942 */
extern signed char DAT_0049f943; /* 0x49f943 */
extern signed char DAT_0049f950; /* 0x49f950 */
extern unsigned int DAT_0049f954; /* 0x49f954 */
extern unsigned int DAT_0049f958; /* 0x49f958 */
extern int DAT_0049f964; /* 0x49f964 */
extern int DAT_0049f968; /* 0x49f968 */
extern unsigned int DAT_0049f96c; /* 0x49f96c */
extern unsigned int DAT_0049f970; /* 0x49f970 */
extern unsigned int DAT_0049f978; /* 0x49f978 */
extern unsigned char *DAT_0049f97c; /* 0x49f97c */
extern unsigned char *DAT_0049f980; /* 0x49f980 */
extern unsigned int uRam0049f984; /* 0x49f984 */
extern unsigned int uRam0049f988; /* 0x49f988 */
extern unsigned int DAT_0049f990; /* 0x49f990 */
extern unsigned int DAT_0049f994; /* 0x49f994 */
extern unsigned int DAT_0049f998; /* 0x49f998 */
extern int DAT_0049f9a0; /* 0x49f9a0 */
extern unsigned int DAT_0049f9a4; /* 0x49f9a4 */
extern unsigned int DAT_0049f9a8; /* 0x49f9a8 */
extern float DAT_0049f9ac; /* 0x49f9ac */
extern float DAT_0049f9b0; /* 0x49f9b0 */
extern float DAT_0049f9b4; /* 0x49f9b4 */
extern float DAT_0049f9b8; /* 0x49f9b8 */
extern float DAT_0049f9bc; /* 0x49f9bc */
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
extern short DAT_0049f9da; /* 0x49f9da */
extern short DAT_0049f9dc; /* 0x49f9dc */
extern unsigned char DAT_0049fa14; /* 0x49fa14 */
extern unsigned char DAT_0049fa15; /* 0x49fa15 */
extern unsigned char DAT_0049fa16; /* 0x49fa16 */
extern unsigned char DAT_0049fa17; /* 0x49fa17 */
extern unsigned char DAT_0049fa18; /* 0x49fa18 */
extern unsigned char DAT_0049fa19; /* 0x49fa19 */
extern signed char DAT_0049fa1a; /* 0x49fa1a */
extern short DAT_0049fa1c; /* 0x49fa1c */
extern unsigned char DAT_0049fa20; /* 0x49fa20 */
extern signed char DAT_0049fa38; /* 0x49fa38 */
extern unsigned char DAT_0049fa39; /* 0x49fa39 */
extern signed char DAT_0049fa3a; /* 0x49fa3a */
extern unsigned int DAT_0049fa3c; /* 0x49fa3c */
extern unsigned char DAT_0049fa40; /* 0x49fa40 */
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
extern signed char DAT_0049fa98; /* 0x49fa98 */
extern unsigned short DAT_0049fab0; /* 0x49fab0 */
extern signed char DAT_0049fab4; /* 0x49fab4 */
extern signed char DAT_0049fab5; /* 0x49fab5 */
extern signed char DAT_0049fab6; /* 0x49fab6 */
extern signed char cRam0049fab7; /* 0x49fab7 */
extern unsigned short uRam0049fab8; /* 0x49fab8 */
extern unsigned short uRam0049faba; /* 0x49faba */
extern int DAT_0049fad4; /* 0x49fad4 */
extern unsigned int DAT_0049fad8; /* 0x49fad8 */
extern signed char DAT_0049fb44; /* 0x49fb44 */
extern unsigned char DAT_0049fb45; /* 0x49fb45 */
extern unsigned char DAT_0049fb46; /* 0x49fb46 */
extern unsigned char DAT_0049fb47; /* 0x49fb47 */
extern unsigned char DAT_0049fb48; /* 0x49fb48 */
extern unsigned char DAT_0049fb49; /* 0x49fb49 */
extern int DAT_0049fb64; /* 0x49fb64 */
extern unsigned char DAT_0049fb68; /* 0x49fb68 */
extern unsigned char DAT_0049fb69; /* 0x49fb69 */
extern unsigned char DAT_0049fb6a; /* 0x49fb6a */
extern unsigned char DAT_0049fb6b; /* 0x49fb6b */
extern unsigned char DAT_0049fb6c; /* 0x49fb6c */
extern int DAT_0049fb9c; /* 0x49fb9c */
extern signed char DAT_0049fba0; /* 0x49fba0 */
extern int DAT_0049fba4; /* 0x49fba4 */
extern unsigned int DAT_0049fba8; /* 0x49fba8 */
extern signed char DAT_0049fc14; /* 0x49fc14 */
extern unsigned int DAT_0049fc18; /* 0x49fc18 */
extern unsigned int DAT_0049fc1c; /* 0x49fc1c */
extern unsigned int DAT_0049fc20; /* 0x49fc20 */
extern float DAT_0049fc24; /* 0x49fc24 */
extern float DAT_0049fc28; /* 0x49fc28 */
extern float DAT_0049fc2c; /* 0x49fc2c */
extern float DAT_0049fc30; /* 0x49fc30 */
extern float DAT_0049fc34; /* 0x49fc34 */
extern unsigned int DAT_0049fc38; /* 0x49fc38 */
extern unsigned int DAT_0049fc3c; /* 0x49fc3c */
extern float DAT_0049fc40; /* 0x49fc40 */
extern float DAT_0049fc44; /* 0x49fc44 */
extern float DAT_0049fc48; /* 0x49fc48 */
extern float DAT_0049fc4c; /* 0x49fc4c */
extern float DAT_0049fc50; /* 0x49fc50 */
extern signed char DAT_0049fc64; /* 0x49fc64 */
extern unsigned int DAT_0049fc68; /* 0x49fc68 */
extern int DAT_0049fc7c; /* 0x49fc7c */
extern int DAT_0049fc80; /* 0x49fc80 */
extern int DAT_0049fc84; /* 0x49fc84 */
extern int DAT_0049fc88; /* 0x49fc88 */
extern int DAT_0049fc8c; /* 0x49fc8c */
extern signed char DAT_0049fca8; /* 0x49fca8 */
extern signed char DAT_0049fce8; /* 0x49fce8 */
extern int DAT_0049fcf8; /* 0x49fcf8 */
extern unsigned int DAT_0049fd14; /* 0x49fd14 */
extern unsigned int DAT_0049fd18; /* 0x49fd18 */
extern unsigned int DAT_0049fd1c; /* 0x49fd1c */
extern unsigned int DAT_0049fd20; /* 0x49fd20 */
extern unsigned int DAT_0049fd24; /* 0x49fd24 */
extern unsigned int DAT_0049fd28; /* 0x49fd28 */
extern unsigned int DAT_0049fd2c; /* 0x49fd2c */
extern unsigned int DAT_0049fd30; /* 0x49fd30 */
extern unsigned int DAT_0049fd34; /* 0x49fd34 */

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
/* Supplied declaration required: FUN_001041d8. */
/* Supplied declaration required: FUN_0010bb08. */
/* Supplied declaration required: FUN_0018aba8. */
/* Supplied declaration required: FUN_0019dce0. */
extern int FUN_0019dfbc(unsigned int);
/* Supplied declaration required: FUN_001a85b0. */
/* Supplied declaration required: FUN_001a8924. */
/* Supplied declaration required: FUN_001a8bf0. */
/* Supplied declaration required: FUN_001a8ffc. */
/* Supplied declaration required: FUN_001a946c. */
/* Supplied declaration required: FUN_001aba94. */
/* Supplied declaration required: FUN_001b3c68. */
/* Supplied declaration required: FUN_001b427c. */
/* Supplied declaration required: FUN_001b45e0. */
/* Supplied declaration required: FUN_001b481c. */
/* Supplied declaration required: FUN_001d33ac. */
/* Supplied declaration required: FUN_001d3598. */
extern int FUN_001e266c(unsigned int);
/* Supplied declaration required: FUN_001e29e8. */
/* Supplied declaration required: FUN_001e2a68. */
/* Supplied declaration required: FUN_001f9290. */
/* Supplied declaration required: FUN_001fa408. */
/* Supplied declaration required: FUN_001fa5dc. */
/* Supplied declaration required: FUN_001fa614. */
/* Supplied declaration required: FUN_001fb24c. */
/* Supplied declaration required: FUN_001fb2fc. */
extern int FUN_001fc20c(int);
/* Supplied declaration required: FUN_001fde18. */
/* Supplied declaration required: FUN_00207ffc. */
/* Supplied declaration required: FUN_00208c28. */
/* Supplied declaration required: FUN_0020d54c. */
/* Supplied declaration required: FUN_0020d7b8. */
/* Supplied declaration required: FUN_0020d9ac. */
/* Supplied declaration required: FUN_0020dbd0. */
/* Supplied declaration required: FUN_002147e8. */
/* Supplied declaration required: FUN_0021b9f8. */
/* Supplied declaration required: FUN_0021bb08. */
/* Supplied declaration required: FUN_0021bd04. */
/* Supplied declaration required: FUN_0021df78. */
extern int FUN_0021e3c0(void);
/* Supplied declaration required: FUN_0021e8b0. */
/* Supplied declaration required: FUN_00220f20. */
/* Supplied declaration required: FUN_002235ac. */
/* Supplied declaration required: FUN_002235e8. */
/* Supplied declaration required: FUN_00223644. */
/* Supplied declaration required: FUN_0026fbc0. */
/* Supplied declaration required: FUN_0026fbd0. */
/* Supplied declaration required: FUN_0026fc24. */
/* Supplied declaration required: FUN_0026fca0. */
/* Supplied declaration required: FUN_0026fcb4. */
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
/* Supplied declaration required: FUN_002705c8. */
/* Supplied declaration required: FUN_002705f4. */
/* Supplied declaration required: FUN_002706e4. */
/* Supplied declaration required: FUN_00270770. */
/* Supplied declaration required: FUN_0027079c. */
extern int FUN_002710a4(void);
/* Supplied declaration required: FUN_002711e0. */
/* Supplied declaration required: FUN_00271280. */
/* Supplied declaration required: FUN_0027154c. */
/* Supplied declaration required: FUN_002735c8. */
/* Supplied declaration required: FUN_00273610. */
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
/* Supplied declaration required: FUN_00273de8. */
/* Supplied declaration required: FUN_00273ec4. */
/* Supplied declaration required: FUN_00273fa4. */
/* Supplied declaration required: FUN_002741cc. */
extern char *FUN_002741f4(void);
/* Supplied declaration required: FUN_00274200. */
/* Supplied declaration required: FUN_00274230. */
/* Supplied declaration required: FUN_00274a08. */
/* Supplied declaration required: FUN_0027521c. */
/* Supplied declaration required: FUN_0027549c. */
/* Supplied declaration required: FUN_002755d4. */
/* Supplied declaration required: FUN_00275818. */
/* Supplied declaration required: FUN_00275984. */
/* Supplied declaration required: FUN_00275a18. */
/* Supplied declaration required: FUN_00275a38. */
/* Supplied declaration required: FUN_00275a8c. */
/* Supplied declaration required: FUN_00275b48. */
/* Supplied declaration required: FUN_00275c2c. */
/* Supplied declaration required: FUN_00275ca0. */
/* Supplied declaration required: FUN_00275e38. */
/* Supplied declaration required: FUN_00275e58. */
/* Supplied declaration required: FUN_00276034. */
/* Supplied declaration required: FUN_0027605c. */
/* Supplied declaration required: FUN_00276088. */
/* Supplied declaration required: FUN_002760bc. */
/* Supplied declaration required: FUN_00276170. */
/* Supplied declaration required: FUN_002761fc. */
extern int FUN_002762d0(unsigned int);
/* Supplied declaration required: FUN_002762e8. */
extern int FUN_0027636c(int);
/* Supplied declaration required: FUN_00276488. */
/* Supplied declaration required: FUN_002764a8. */
extern int FUN_002764d4(void);
extern int FUN_00276550(void);
/* Supplied declaration required: FUN_00276580. */
extern int FUN_002765b8(int);
/* Supplied declaration required: FUN_002766cc. */
/* Supplied declaration required: FUN_002766f0. */
/* Supplied declaration required: FUN_00276718. */
/* Supplied declaration required: FUN_00276840. */
/* Supplied declaration required: FUN_00276b74. */
/* Supplied declaration required: FUN_00276ba4. */
/* Supplied declaration required: FUN_00276bc0. */
/* Supplied declaration required: FUN_00276bd8. */
/* Supplied declaration required: FUN_00276c24. */
/* Supplied declaration required: FUN_00276cac. */
/* Supplied declaration required: FUN_00277dcc. */
/* Supplied declaration required: FUN_00277e4c. */
/* Supplied declaration required: FUN_00277f9c. */
/* Supplied declaration required: FUN_0027af3c. */
/* Supplied declaration required: FUN_0027b100. */
/* Supplied declaration required: FUN_0027b424. */
/* Supplied declaration required: FUN_0027b4ec. */
/* Supplied declaration required: FUN_0027b524. */
/* Supplied declaration required: FUN_0027b8cc. */
/* Supplied declaration required: FUN_0027c640. */
/* Supplied declaration required: FUN_0027ceb8. */
/* Supplied declaration required: FUN_0027cedc. */
extern int FUN_0027d010(void);
extern int FUN_0027d334(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0027d35c. */
/* Supplied declaration required: FUN_0027d67c. */
/* Supplied declaration required: FUN_0027d6e4. */
/* Supplied declaration required: FUN_0027d700. */
/* Supplied declaration required: FUN_0027d77c. */
/* Supplied declaration required: FUN_0027d81c. */
/* Supplied declaration required: FUN_0027d830. */
extern int FUN_0027d884(unsigned int, unsigned int);
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
/* Supplied declaration required: FUN_0027f10c. */
/* Supplied declaration required: FUN_0027f13c. */
/* Supplied declaration required: FUN_0027f150. */
/* Supplied declaration required: FUN_0027fd08. */
/* Supplied declaration required: FUN_0027fe84. */
/* Supplied declaration required: FUN_0027ff10. */
/* Supplied declaration required: FUN_0028075c. */
/* Supplied declaration required: FUN_00280d30. */
/* Supplied declaration required: FUN_00280f3c. */
/* Supplied declaration required: FUN_002819f4. */
/* Supplied declaration required: FUN_002819f8. */
/* Supplied declaration required: FUN_00284aa8. */
/* Supplied declaration required: FUN_00284c14. */
/* Supplied declaration required: FUN_002854ec. */
/* Supplied declaration required: FUN_0028550c. */
/* Supplied declaration required: FUN_002857e4. */
/* Supplied declaration required: FUN_00285f14. */
extern int FUN_00287a68(void);
extern int FUN_00287afc(void);
extern int FUN_00287b10(int);
/* Supplied declaration required: FUN_00287b4c. */
/* Supplied declaration required: FUN_00287e9c. */
/* Supplied declaration required: FUN_00289654. */
/* Supplied declaration required: FUN_00289770. */
/* Supplied declaration required: FUN_002897dc. */
/* Supplied declaration required: FUN_00289810. */
/* Supplied declaration required: FUN_00289870. */
extern int FUN_00289924(void);
/* Supplied declaration required: FUN_002899c4. */
/* Supplied declaration required: FUN_00289a58. */
extern unsigned int FUN_00289ac0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00289ae8. */
/* Supplied declaration required: FUN_00289fdc. */
/* Supplied declaration required: FUN_0028a04c. */
extern int FUN_0028a0bc(int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0028a688. */
/* Supplied declaration required: FUN_0028d908. */
extern int FUN_0029066c(void);
extern int FUN_00290694(void);
/* Supplied declaration required: FUN_00291000. */
/* Supplied declaration required: FUN_00291018. */
/* Supplied declaration required: FUN_00291a08. */
/* Supplied declaration required: FUN_00291cac. */
/* Supplied declaration required: FUN_00294ad8. */
/* Supplied declaration required: FUN_00295904. */
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_002972f8. */
extern int FUN_00297674(void);
/* Supplied declaration required: FUN_00297c9c. */
/* Supplied declaration required: FUN_0029b0fc. */
/* Supplied declaration required: FUN_0029c650. */
/* Supplied declaration required: FUN_0029c660. */
/* Supplied declaration required: FUN_002a0790. */
/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002a7604. */
extern int FUN_002a8a1c(void);
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
/* Supplied declaration required: FUN_002bfdfc. */
extern unsigned int FUN_002bff9c(void);
extern unsigned int FUN_002bffac(void);
extern int FUN_002bffbc(unsigned int);
/* Supplied declaration required: FUN_002c0128. */
extern int FUN_002c0b94(void);
extern int FUN_002c0ba8(unsigned int);
extern int FUN_002c2b1c(void);
/* Supplied declaration required: FUN_002c2ba4. */
extern int FUN_002c2bd0(unsigned int);
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */
/* Supplied declaration required: FUN_002c59b8. */
/* Supplied declaration required: FUN_002c5e2c. */
/* Supplied declaration required: FUN_002c8a78. */
/* Supplied declaration required: FUN_002c9ad8. */
extern int FUN_002c9b3c(void);
extern int FUN_002c9c1c(void);
/* Supplied declaration required: FUN_002d27f8. */
extern int FUN_002d3f60(void);
/* Supplied declaration required: FUN_002df7f8. */
extern int FUN_002eb0f4(void);
/* Supplied declaration required: FUN_002eb144. */
/* Supplied declaration required: FUN_002f364c. */
extern int FUN_002f3fc4(void);
extern unsigned short FUN_002faf3c(void);
/* Supplied declaration required: FUN_002fb090. */
/* Supplied declaration required: FUN_002fb2f4. */
/* Supplied declaration required: FUN_002fb4a0. */
/* Supplied declaration required: FUN_00307978. */
extern int FUN_0030f558(int);
/* Supplied declaration required: FUN_00316f2c. */
/* Supplied declaration required: FUN_0031d6d4. */
extern int FUN_00328d50(int);
/* Supplied declaration required: FUN_0032b5a0. */
/* Supplied declaration required: FUN_0032c8d0. */
/* Supplied declaration required: FUN_003338b4. */
/* Supplied declaration required: func_0x0019db70. */
/* Supplied declaration required: func_0x001a8b4c. */
/* Supplied declaration required: func_0x001a8e6c. */
/* Supplied declaration required: func_0x001a9408. */
/* Supplied declaration required: func_0x001b41ac. */
/* Supplied declaration required: func_0x001b41e0. */
/* Supplied declaration required: func_0x001d2e24. */
/* Supplied declaration required: func_0x001d2e4c. */
/* Supplied declaration required: func_0x001d371c. */
/* Supplied declaration required: func_0x001e3190. */
/* Supplied declaration required: func_0x001e3874. */
/* Supplied declaration required: func_0x001e38a0. */
/* Supplied declaration required: func_0x001e38c0. */
/* Supplied declaration required: func_0x001e444c. */
/* Supplied declaration required: func_0x001f9020. */
extern int func_0x001fb224(void);
/* Supplied declaration required: func_0x00208a28. */
/* Supplied declaration required: func_0x00208a64. */
/* Supplied declaration required: func_0x00208b44. */
/* Supplied declaration required: func_0x0020ce84. */
/* Supplied declaration required: func_0x0020cea8. */
/* Supplied declaration required: func_0x0020ced4. */
/* Supplied declaration required: func_0x0020cf00. */
/* Supplied declaration required: func_0x0021e668. */
extern int func_0x00270f34(void);
/* Supplied declaration required: func_0x00273640. */
/* Supplied declaration required: func_0x002763a8. */
/* Supplied declaration required: func_0x002767b0. */
/* Supplied declaration required: func_0x002c8750. */
extern int func_0x002d2a94(void);
extern int func_0x002d3a74(void);
/* Supplied declaration required: func_0x002d3d6c. */
/* Supplied declaration required: func_0x002d3ddc. */
/* Supplied declaration required: func_0x002dfa04. */
extern int func_0x002dfab4(void);
/* Supplied declaration required: func_0x002dfdf0. */
/* Supplied declaration required: func_0x002e0594. */
/* Supplied declaration required: func_0x002f49a4. */
extern int func_0x0030f534(void);
/* Supplied declaration required: func_0x0030f904. */
/* Supplied declaration required: func_0x00316e44. */
/* Supplied declaration required: func_0x003422b0. */


/* WARNING: Type propagation algorithm not settling */

unsigned int FUN_001b7e78(void)

{
/* irregular: 76 goto(s); irregular input(s): in_fpscr; 259 native warning(s); review required */
  char temp_v0;
  char temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  unsigned char temp_v5;
  unsigned short temp_v6;
  short temp_v7;
  short temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  char *pcVar13;
  unsigned int *puVar14;
  int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int *puVar19;
  unsigned int temp_v16;
  unsigned int temp_v17;
  float *pfVar22;
  unsigned int *puVar23;
  unsigned char temp_v18;
  unsigned char temp_v19;
  unsigned int in_fpscr;
  unsigned long long temp_v20;
  unsigned int uStack_1c8;
  unsigned int uStack_1c4;
  int uStack_1c0;
  unsigned int uStack_1bc;
  int uStack_1b8;
  unsigned int uStack_1b4;
  unsigned int uStack_1b0;
  unsigned int uStack_1ac;
  unsigned char temp_v21 [128];
  unsigned char temp_v22 [128];
  unsigned char temp_v23 [132];
  
  puVar14 = DAT_00447e28;
  puVar19 = &uStack_1c8;
  temp_v9 = FUN_002c2b1c();
  temp_v2 = DAT_0049f9ac;
  puVar23 = DAT_00447e28;
  temp_v10 = puVar14[9];
  switch(temp_v10) {
  case 0:
    DAT_0049f940 = 1;
    DAT_0049f941 = 1;
    DAT_0049fba0 = '\0';
    func_0x0019db70();
    FUN_002819f8();
    func_0x001e38a0();
    func_0x001a9408();
    FUN_0018aba8(*puVar14,0);
    *(unsigned char *)((int)puVar14 + 0xba) = 0;
    *(unsigned char *)(puVar14 + 0x11) = 0;
    *(unsigned char *)((int)puVar14 + 0x45) = 0;
    temp_v10 = FUN_002c0ba8(0x18);
    if (temp_v10 != 0) {
      FUN_002899c4(0x52a,1);
    }
    temp_v14 = DAT_0049fd14;
    DAT_0049f930 = 1;
    if (DAT_0049fc14 != '\0') {
      temp_v18 = 0;
      temp_v19 = 0;
      temp_v16 = FUN_0027dbfc();
      switch(temp_v16) {
      case 0:
      case 3:
        temp_v10 = FUN_00290694();
        if ((temp_v10 != 0) && (temp_v10 = FUN_00287afc(), temp_v10 == 6)) {
          puVar14[0x10] = 1;
        }
        if (*(short *)(temp_v9 + 0x22) != 0) {
          temp_v10 = FUN_0027dbd8();
          if (temp_v10 != -1) {
            FUN_002899c4((int)*(short *)(temp_v9 + 0x22),1);
          }
          else {
            FUN_0027dbb8();
            FUN_0027db78();
          }
        }
        temp_v10 = FUN_0027dd94(0);
        temp_v19 = 1;
        FUN_001fb2fc();
        if (temp_v10 == 3) {
          *(unsigned char *)((int)puVar14 + 0x45) = 1;
        }
        break;
      case 1:
        temp_v10 = FUN_0027db38();
        if (temp_v10 != 0) {
          *(unsigned char *)(puVar14 + 0x12) = 1;
        }
      case 5:
        FUN_00285f14(1);
        FUN_0027dd94(0);
        temp_v18 = 1;
        DAT_0049fb9c = 0;
        break;
      case 2:
        temp_v18 = 1;
        FUN_0027dd94(0);
        break;
      case 4:
        puVar14[0x10] = 2;
        break;
      case 6:
        FUN_00285f14(2);
        FUN_0027dd94(0);
      }
      *(unsigned short *)(temp_v9 + 0x22) = 0;
      temp_v9 = FUN_00287a68();
      if (temp_v9 != 0) {
        temp_v18 = 1;
        DAT_0049fa61 = '\0';
        DAT_0049f9c8 = 0;
        DAT_0049fa38 = '\x01';
        DAT_0049fa39 = 1;
        FUN_0027de00();
        FUN_0027db24(0);
        DAT_0049fa1a = '\0';
      }
      else if (!temp_v19) {
        DAT_0049fa61 = '\0';
        DAT_0049f9c8 = 0;
        DAT_0049fa38 = '\x01';
        DAT_0049fa39 = 1;
        FUN_0027de00();
        FUN_0027db24(0);
        DAT_0049fa1a = '\0';
      }
      temp_v14 = DAT_0049fc38;
      DAT_0049f91c = DAT_0049fc18;
      if (temp_v18) {
        puVar14[0xb] = DAT_0049fc38;
        DAT_0049f920 = DAT_0049fc3c;
        DAT_0049f91c = temp_v14;
        puVar14[0xc] = DAT_0049fc3c;
        temp_v4 = DAT_0049fc48;
        temp_v3 = DAT_0049fc44;
        temp_v2 = DAT_0049fc40;
        temp_v9 = DAT_00447e88;
        DAT_0049f924 = DAT_0049fc20;
        *(float *)(DAT_00447e88 + 0x34) = DAT_0049fc40;
        *(float *)(temp_v9 + 0x38) = temp_v3;
        *(float *)(temp_v9 + 0x3c) = temp_v4;
        *(float *)(temp_v9 + 0x1c) = temp_v2;
        *(float *)(temp_v9 + 0x20) = temp_v3;
        *(float *)(temp_v9 + 0x24) = temp_v4;
        *(float *)(temp_v9 + 0x28) = temp_v2;
        *(float *)(temp_v9 + 0x2c) = temp_v3;
        *(float *)(temp_v9 + 0x30) = temp_v4;
        temp_v2 = DAT_0049fc4c;
        *(float *)(temp_v9 + 0x4c) = DAT_0049fc4c;
        *(float *)(temp_v9 + 0x50) = temp_v2;
        *(float *)(DAT_004474f4 + 0x18) = DAT_0049fc50;
      }
      else {
        puVar14[0xb] = DAT_0049fc18;
        DAT_0049f920 = DAT_0049fc1c;
        puVar14[0xc] = DAT_0049fc1c;
        temp_v4 = DAT_0049fc2c;
        temp_v3 = DAT_0049fc28;
        temp_v2 = DAT_0049fc24;
        temp_v9 = DAT_00447e88;
        DAT_0049f924 = DAT_0049fc20;
        pfVar22 = (float *)(DAT_00447e88 + 0x38);
        *(float *)(DAT_00447e88 + 0x34) = DAT_0049fc24;
        *(float *)(temp_v9 + 0x1c) = temp_v2;
        *pfVar22 = temp_v3;
        *(float *)(temp_v9 + 0x3c) = temp_v4;
        *(float *)(temp_v9 + 0x28) = temp_v2;
        *(float *)(temp_v9 + 0x20) = temp_v3;
        *(float *)(temp_v9 + 0x24) = temp_v4;
        *(float *)(temp_v9 + 0x2c) = temp_v3;
        *(float *)(temp_v9 + 0x30) = temp_v4;
        temp_v2 = DAT_0049fc30;
        *(float *)(temp_v9 + 0x4c) = DAT_0049fc30;
        *(float *)(temp_v9 + 0x50) = temp_v2;
        *(float *)(DAT_004474f4 + 0x18) = DAT_0049fc34;
      }
      DAT_0049fc14 = '\0';
      *(unsigned char *)((int)puVar14 + 0x3d) = 1;
      if ((DAT_0049fa61 == '\0') && (DAT_0049fa38 != '\0')) {
        FUN_0027db00();
      }
      temp_v9 = 2;
      puVar14[9] = temp_v9;
    }
    else if (DAT_0049fd14 != 0x18) {
      if (DAT_0049fd14 == 0xffffffff) {
        DAT_0049fb9c = 0;
        *(unsigned int *)(DAT_004474f4 + 0x18) = 0xc2b40000;
        temp_v9 = puVar14[9] + 1;
        puVar14[9] = temp_v9;
        FUN_0027d830();
        break;
      }
LAB_001b838c:
      DAT_0049fb9c = 0;
      puVar14[0xb] = DAT_0049fd14;
      DAT_0049f920 = DAT_0049fd18;
      DAT_0049f91c = temp_v14;
      puVar14[0xc] = DAT_0049fd18;
      temp_v9 = DAT_00447e88;
      DAT_0049f924 = DAT_0049fd20;
      if (DAT_0049fd1c != 0xffffffff) {
        temp_v9 = puVar14[0xb];
        FUN_0027da20(temp_v9,puVar14[0xc]);
        if (temp_v9 != -1) {
          temp_v10 = FUN_0027d9b8();
          temp_v9 = DAT_00447e88;
          puVar23 = (unsigned int *)(DAT_00447e88 + 0x34);
          temp_v16 = VectorSignedToFloat((int)*(short *)(temp_v10 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(DAT_00447e88 + 0x1c) = temp_v16;
          temp_v16 = VectorSignedToFloat((int)*(short *)(temp_v10 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v9 + 0x20) = temp_v16;
          temp_v15 = VectorSignedToFloat((int)*(short *)(temp_v10 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v9 + 0x24) = temp_v15;
          temp_v16 = *(unsigned int *)(temp_v9 + 0x1c);
          temp_v13 = *(unsigned int *)(temp_v9 + 0x20);
          *puVar23 = temp_v16;
          *(unsigned int *)(temp_v9 + 0x38) = temp_v13;
          *(unsigned int *)(temp_v9 + 0x3c) = temp_v15;
          *(unsigned int *)(temp_v9 + 0x28) = temp_v16;
          *(unsigned int *)(temp_v9 + 0x2c) = temp_v13;
          *(unsigned int *)(temp_v9 + 0x30) = temp_v15;
          temp_v16 = VectorSignedToFloat((int)*(short *)(temp_v10 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v9 + 0x4c) = temp_v16;
          *(unsigned int *)(temp_v9 + 0x50) = temp_v16;
          temp_v16 = VectorSignedToFloat((int)*(short *)(temp_v10 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(DAT_004474f4 + 0x18) = temp_v16;
        }
      }
      else {
        puVar23 = (unsigned int *)(DAT_00447e88 + 0x34);
        *(unsigned int *)(DAT_00447e88 + 0x1c) = DAT_0049fd24;
        *(unsigned int *)(temp_v9 + 0x20) = DAT_0049fd28;
        *(unsigned int *)(temp_v9 + 0x24) = DAT_0049fd2c;
        temp_v16 = *(unsigned int *)(temp_v9 + 0x1c);
        temp_v13 = *(unsigned int *)(temp_v9 + 0x20);
        temp_v15 = *(unsigned int *)(temp_v9 + 0x24);
        *puVar23 = temp_v16;
        *(unsigned int *)(temp_v9 + 0x38) = temp_v13;
        *(unsigned int *)(temp_v9 + 0x3c) = temp_v15;
        *(unsigned int *)(temp_v9 + 0x28) = temp_v16;
        *(unsigned int *)(temp_v9 + 0x2c) = temp_v13;
        *(unsigned int *)(temp_v9 + 0x30) = temp_v15;
        temp_v16 = DAT_0049fd30;
        *(unsigned int *)(temp_v9 + 0x4c) = DAT_0049fd30;
        *(unsigned int *)(temp_v9 + 0x50) = temp_v16;
        *(unsigned int *)(DAT_004474f4 + 0x18) = DAT_0049fd34;
      }
      if ((DAT_0049fa61 == '\0') && (DAT_0049fa38 != '\0')) {
        FUN_0027db00();
      }
      puVar14[9] = 2;
      if ((((*(char *)(puVar14 + 0x12) == '\0') && (puVar14[0x10] != 1)) && (puVar14[0x10] != 2)) &&
         (((DAT_0049fa61 == '\0' && (DAT_0049fa1a == '\0')) &&
          ((temp_v9 = FUN_001e266c(puVar14[0xb]), temp_v9 == 0 &&
           (temp_v9 = FUN_0027d884(DAT_0049f91c,DAT_0049f920), temp_v9 == 0)))))) {
        *(unsigned char *)(puVar14 + 0x11) = 1;
      }
    }
    else {
      if (DAT_0049f950 != '\0') goto LAB_001b838c;
      DAT_0049fb9c = 0;
      puVar14[0xb] = 0x18;
      DAT_0049f91c = 0x18;
      puVar14[0xc] = DAT_0049fd18;
      DAT_0049f920 = 0xffffffff;
      if ((DAT_0049fa61 == '\0') && (DAT_0049fa38 != '\0')) {
        FUN_0027db00();
        puVar14[9] = 2;
      }
      if ((((*(char *)(puVar14 + 0x12) == '\0') && (puVar14[0x10] != 1)) && (puVar14[0x10] != 2)) &&
         ((DAT_0049fa61 == '\0' && (DAT_0049fa1a == '\0')))) {
        *(unsigned char *)(puVar14 + 0x11) = 1;
      }
    }
    FUN_0027d830();
    break;
  case 1:
    FUN_0027db00();
    temp_v9 = puVar14[9] + 1;
    puVar14[9] = temp_v9;
    break;
  case 2:
    if ((((DAT_0049fa1a == '\0') || (DAT_0049f91c != 0x24)) && (DAT_0049fcf8 == 0)) &&
       ((DAT_00447e28 != (unsigned int *)0x0 && (*(char *)(DAT_00447e28 + 0xf) == '\0')))) {
      FUN_0010bb08(0x100,0x30000);
      *(unsigned char *)(puVar23 + 0xf) = 1;
    }
    FUN_0021bb08(puVar14[0xb],puVar14[0xc]);
    FUN_002f364c();
    if (puVar14[0xb] != 0x18) {
      *(unsigned char *)(temp_v9 + 0x792) = 0;
      DAT_0049f942 = '\0';
      FUN_0027d81c();
      FUN_002854ec(0);
    }
    else {
      DAT_0049f942 = '\x01';
      puVar14[0xc] = 1;
      DAT_0049f920 = 1;
      temp_v9 = FUN_002857e4();
      if (temp_v9 != 0) {
        puVar14[0xc] = 2;
        DAT_0049f920 = 2;
      }
      else {
        puVar14[0xc] = 1;
        DAT_0049f920 = 1;
      }
    }
    FUN_001fde18(puVar14);
    FUN_0027d77c(puVar14[0xb]);
    FUN_0027d700(puVar14[0xc]);
    DAT_0049f928 = puVar14[0xb];
    DAT_0049f92c = puVar14[0xc];
    if (DAT_0049f942 != '\0') {
      temp_v16 = FUN_002857e4();
      switch(temp_v16) {
      case 0:
        DAT_0049f928 = 0x18;
        DAT_0049f92c = 1;
        break;
      case 1:
        DAT_0049f928 = 10;
        DAT_0049f92c = 0xb;
        break;
      case 2:
        DAT_0049f928 = 4;
        DAT_0049f92c = 6;
        break;
      case 3:
        DAT_0049f928 = 1;
        DAT_0049f92c = 0xf;
        break;
      case 4:
        DAT_0049f928 = 4;
        DAT_0049f92c = 7;
        break;
      case 5:
        DAT_0049f928 = 0x13;
        DAT_0049f92c = 0xe;
        break;
      case 6:
        DAT_0049f928 = 0x1b;
        DAT_0049f92c = 3;
        break;
      case 7:
        DAT_0049f928 = 0x1c;
        DAT_0049f92c = 3;
        break;
      case 8:
        DAT_0049f928 = 0x20;
        DAT_0049f92c = 4;
        break;
      case 9:
        DAT_0049f928 = 0x21;
        DAT_0049f92c = 4;
        break;
      case 10:
        DAT_0049f928 = 0x22;
        DAT_0049f92c = 3;
        break;
      case 0xb:
        DAT_0049f928 = 0x11;
        DAT_0049f92c = 5;
        break;
      default:
        DAT_0049f928 = 0x18;
        DAT_0049f92c = 1;
      }
    }
    func_0x003422b0(DAT_0049f928,DAT_0049f92c,1);
    FUN_00291cac(1,DAT_0049f928);
    FUN_0021e8b0(DAT_0049f928);
    FUN_0027d6e4(DAT_0049f928,DAT_0049f92c,DAT_0049f924);
    FUN_0027dbb8();
    uStack_1c8 = 0;
    uStack_1c4 = 0;
    FUN_0028550c(DAT_0049f924 & 0xff,0,0,0);
    if (DAT_0049f91c == 10) {
      FUN_0027d67c(0x81001401);
      uStack_1c8 = 0;
      uStack_1c4 = 0;
      FUN_0028550c(0x43,1,0);
    }
    if (DAT_0049f91c == 0x12) {
      FUN_0027d67c(0x81801401);
      uStack_1c8 = 0;
      uStack_1c4 = 0;
      FUN_0028550c(0x59,1,0);
    }
    if (DAT_0049f91c == 0x24) {
      FUN_00289ae8();
    }
    if (DAT_0049f942 == '\0') {
      temp_v9 = puVar14[9] + 1;
      puVar14[9] = temp_v9;
      break;
    }
    if (DAT_0049fb9c != 0) {
      FUN_0027d35c();
    }
    temp_v9 = 5;
    puVar14[9] = temp_v9;
    break;
  case 3:
    func_0x001d2e24(puVar14[0xb],puVar14[0xc]);
    temp_v10 = puVar14[9] + 1;
    puVar14[9] = temp_v10;
  case 4:
    FUN_00207ffc();
    if (temp_v10 == 0) {
      return 0;
    }
    puVar14[9] = puVar14[9] + 1;
    if (DAT_0049fb9c != 0) {
      FUN_0027d35c();
    }
LAB_001b8944:
    if ((DAT_0049fc80 == 0) && (temp_v9 = FUN_0027d334(puVar14[0xb],puVar14[0xc]), temp_v9 == 0)) {
      return 0;
    }
    puVar14[9] = puVar14[9] + 1;
LAB_001b8974:
    func_0x001e3874(puVar14[0xb],puVar14[0xc]);
    puVar14[9] = puVar14[9] + 1;
LAB_001b898c:
    temp_v9 = FUN_0021e3c0();
    if (temp_v9 == 0) {
      return 0;
    }
    puVar14[9] = puVar14[9] + 1;
LAB_001b89a8:
    func_0x0020ced4(puVar14[0xb],puVar14[0xc]);
    puVar14[9] = puVar14[9] + 1;
LAB_001b89c0:
    temp_v9 = FUN_0027d010();
    if (temp_v9 == 0) {
      return 0;
    }
    puVar14[9] = puVar14[9] + 1;
LAB_001b89e0:
    FUN_0027cedc();
    FUN_0027ceb8(puVar14[0xb],puVar14[0xc]);
    temp_v10 = puVar14[9] + 1;
    puVar14[9] = temp_v10;
LAB_001b8a00:
    FUN_0027c640();
    if (temp_v10 == 0) {
      return 0;
    }
    puVar14[9] = puVar14[9] + 1;
LAB_001b8a20:
    func_0x001a8e6c();
    func_0x0020cf00(puVar14[0xb],puVar14[0xc]);
    puVar14[9] = puVar14[9] + 1;
LAB_001b8a40:
    temp_v9 = func_0x002d3a74();
    if (temp_v9 == 0) {
      return 0;
    }
    puVar14[9] = puVar14[9] + 1;
LAB_001b8a60:
    func_0x001e3190();
    func_0x002d3ddc(puVar14[0xb],puVar14[0xc]);
    puVar14[9] = puVar14[9] + 1;
LAB_001b8a80:
    temp_v9 = FUN_002f3fc4();
    if (temp_v9 == 0) {
      return 0;
    }
    puVar14[9] = puVar14[9] + 1;
LAB_001b8a9c:
    temp_v9 = DAT_0049fba4;
    puVar14[0x13] = DAT_0049fba4;
    puVar14[0x14] = DAT_0049fba8;
    FUN_002972f8();
    puVar14[0x15] = temp_v9;
    *(unsigned int *)(temp_v9 + 0x108) = 3;
    FUN_002be7fc(temp_v21,0x1b8e68,puVar14[0xb],puVar14[0xb]);
    temp_v16 = FUN_002c5e2c(temp_v21);
    puVar14[0x16] = temp_v16;
    FUN_002be7fc(temp_v21,0x1b8e7c,puVar14[0xb],puVar14[0xb]);
    temp_v16 = FUN_002c5e2c(temp_v21);
    puVar14[0x17] = temp_v16;
    temp_v9 = puVar14[0x16];
    FUN_002972f8(temp_v9,temp_v16);
    puVar14[0x18] = temp_v9;
    *(unsigned int *)(temp_v9 + 0x108) = 3;
    puVar14[9] = puVar14[9] + 1;
LAB_001b8b30:
    if (DAT_0049f942 != '\0') {
      FUN_00220f20();
      FUN_001aba94();
    }
    FUN_001a8924(*puVar14);
    if (DAT_0049fc80 == 0) {
      func_0x0020ce84(puVar14[0xb],puVar14[0xc]);
      puVar14[9] = puVar14[9] + 1;
LAB_001b8b80:
      temp_v9 = func_0x002dfab4();
      if (temp_v9 == 0) {
        return 0;
      }
      func_0x001b41e0();
      temp_v9 = puVar14[9] + 1;
      puVar14[9] = temp_v9;
      break;
    }
    temp_v9 = 0x13;
    puVar14[9] = temp_v9;
    break;
  case 5:
    goto LAB_001b8944;
  case 6:
    goto LAB_001b8974;
  case 7:
    goto LAB_001b898c;
  case 8:
    goto LAB_001b89a8;
  case 9:
    goto LAB_001b89c0;
  case 10:
    goto LAB_001b89e0;
  case 0xb:
    goto LAB_001b8a00;
  case 0xc:
    goto LAB_001b8a20;
  case 0xd:
    goto LAB_001b8a40;
  case 0xe:
    goto LAB_001b8a60;
  case 0xf:
    goto LAB_001b8a80;
  case 0x10:
    goto LAB_001b8a9c;
  case 0x11:
    goto LAB_001b8b30;
  case 0x12:
    goto LAB_001b8b80;
  case 0x13:
    FUN_001b481c();
    FUN_0021b9f8();
    FUN_00208c28();
    if (DAT_0049f942 != '\0') {
      temp_v0 = *(char *)((int)puVar14 + 0x3d);
      temp_v1 = temp_v0;
      if (temp_v0 == '\0') {
        temp_v1 = DAT_0049f950;
      }
      if (temp_v0 == '\0' && temp_v1 == '\0') {
        if (DAT_0049f943 != '\0') {
          temp_v16 = FUN_002857e4();
          temp_v9 = puVar14[0xb];
          FUN_0027da20(temp_v9,temp_v16,DAT_0049fd1c);
          if (temp_v9 != -1) {
            temp_v10 = FUN_0027d9b8();
            temp_v9 = DAT_00447e88;
            temp_v16 = VectorSignedToFloat((int)*(short *)(temp_v10 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
            puVar23 = (unsigned int *)(DAT_00447e88 + 0x34);
            *(unsigned int *)(DAT_00447e88 + 0x1c) = temp_v16;
            temp_v16 = VectorSignedToFloat((int)*(short *)(temp_v10 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
            *(unsigned int *)(temp_v9 + 0x20) = temp_v16;
            temp_v15 = VectorSignedToFloat((int)*(short *)(temp_v10 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
            *(unsigned int *)(temp_v9 + 0x24) = temp_v15;
            temp_v16 = *(unsigned int *)(temp_v9 + 0x1c);
            temp_v13 = *(unsigned int *)(temp_v9 + 0x20);
            *puVar23 = temp_v16;
            *(unsigned int *)(temp_v9 + 0x38) = temp_v13;
            *(unsigned int *)(temp_v9 + 0x3c) = temp_v15;
            *(unsigned int *)(temp_v9 + 0x28) = temp_v16;
            *(unsigned int *)(temp_v9 + 0x2c) = temp_v13;
            *(unsigned int *)(temp_v9 + 0x30) = temp_v15;
            temp_v16 = VectorSignedToFloat((int)*(short *)(temp_v10 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
            *(unsigned int *)(temp_v9 + 0x4c) = temp_v16;
            *(unsigned int *)(temp_v9 + 0x50) = temp_v16;
            temp_v16 = VectorSignedToFloat((int)*(short *)(temp_v10 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
            *(unsigned int *)(DAT_004474f4 + 0x18) = temp_v16;
          }
        }
        else {
          FUN_00223644();
        }
      }
      DAT_0049f93d = 1;
      DAT_0049fc68 = 0;
      DAT_0049f943 = '\0';
      temp_v9 = FUN_002857e4();
      if (temp_v9 != 0) {
        temp_v16 = FUN_002857e4();
        FUN_0027b8cc(puVar14[0xb],temp_v16);
      }
    }
    else {
      if (DAT_0049fc7c != 2) {
        if (puVar14[0xb] == 0x11) {
          if (puVar14[0xc] != 1) goto LAB_001b8d80;
          temp_v9 = FUN_002c0ba8(0xc6);
          if ((temp_v9 == 0) || (temp_v9 = FUN_002c0ba8(0x108), temp_v9 != 0)) goto LAB_001b8d38;
          FUN_0027b524(puVar14[0xb],puVar14[0xc],puVar14[0xb],99);
        }
        else {
LAB_001b8d38:
          temp_v9 = puVar14[0xb];
          temp_v19 = temp_v9 != 5;
          if (!temp_v19) {
            temp_v9 = puVar14[0xc];
          }
          if ((temp_v19 || temp_v9 != 1) || (temp_v9 = FUN_002c0ba8(0x719), temp_v9 != 0)) {
LAB_001b8d80:
            temp_v17 = 0;
            temp_v13 = puVar14[0xb];
            temp_v15 = puVar14[0xc];
            temp_v16 = 0;
          }
          else {
            temp_v13 = puVar14[0xb];
            temp_v15 = puVar14[0xc];
            temp_v17 = 99;
            temp_v16 = temp_v13;
          }
          FUN_0027b524(temp_v13,temp_v15,temp_v16,temp_v17);
        }
        FUN_0027b4ec();
        FUN_0027b424();
        FUN_0027b100();
        FUN_0027af3c();
        FUN_00277f9c(puVar14[0xb],puVar14[0xc]);
        DAT_0049f93d = 1;
      }
      else {
        FUN_00220f20();
        DAT_0049f93d = 0;
      }
      temp_v16 = puVar14[0xb];
      temp_v13 = puVar14[0xc];
      FUN_00297c9c();
      FUN_0027b8cc(temp_v16,temp_v13);
      FUN_00277e4c();
      FUN_00284aa8();
    }
    temp_v0 = DAT_0049f950;
    if (DAT_0049f950 == '\0') {
      temp_v0 = *(char *)(puVar14 + 0x11);
    }
    if (DAT_0049f950 != '\0' || temp_v0 != '\0') {
      FUN_00277dcc(DAT_0049f91c,DAT_0049f920);
    }
    FUN_0021bd04();
    FUN_002d27f8(DAT_0049f91c,DAT_0049f920);
    func_0x00208a28();
    FUN_00307978();
    FUN_00276cac();
    if (DAT_0049fd14 != 0xffffffff) {
      FUN_00276c24(0xffffffff,0xffffffff);
    }
    func_0x002f49a4(DAT_0049f924);
    FUN_00276bd8(1,8);
    FUN_0027d6e4(DAT_0049f928,DAT_0049f92c,DAT_0049f924);
    if ((DAT_0049f942 != '\0') && (temp_v9 = FUN_002857e4(), temp_v9 == 0)) {
      func_0x0030f904();
    }
    FUN_00276bc0(DAT_0049f928);
    DAT_0049f941 = 0;
    temp_v9 = FUN_002c0ba8(0x18);
    if (((temp_v9 != 0) && (temp_v9 = FUN_002c0ba8(0x1a), temp_v9 == 0)) &&
       (temp_v9 = FUN_002a8a1c(), temp_v9 >= 3)) {
      *(unsigned char *)((int)puVar14 + 0x46) = 1;
    }
    if (((((DAT_0049fb9c != 0) && (DAT_0049fa61 == '\0')) &&
         ((DAT_0049fa38 != '\0' &&
          ((*(char *)((int)puVar14 + 0x45) == '\0' && (*(char *)((int)puVar14 + 0x46) == '\0'))))))
        && (temp_v9 = FUN_0027d884(puVar14[0xb],puVar14[0xc]), temp_v9 == 0)) &&
       (temp_v9 = FUN_002c2bd0(1), temp_v9 == 3)) {
      FUN_002c2ba4(1,10,0xff);
    }
    temp_v9 = puVar14[9] + 1;
    puVar14[9] = temp_v9;
    break;
  case 0x14:
    temp_v9 = func_0x001fb224();
    if (temp_v9 == 0) {
      return 0;
    }
    FUN_0020d9ac();
    FUN_0019dce0(puVar14[0xb],puVar14[0xc]);
    FUN_001fa408(puVar14[0xb],puVar14[0xc]);
    FUN_0020d54c();
    FUN_002a0790(0);
    DAT_0049f934 = 1;
    FUN_0027fd08(1);
    func_0x001b41ac(1);
    FUN_0028075c(DAT_00447e88 + 0x28);
    *(unsigned char *)(DAT_004474f4 + 0xa4) = 1;
    FUN_00307978();
    FUN_00276cac();
    FUN_00276ba4();
    if (((DAT_0049fa61 == '\0') && (DAT_0049fa38 != '\0')) &&
       ((*(char *)((int)puVar14 + 0x45) == '\0' &&
        ((*(char *)((int)puVar14 + 0x46) == '\0' &&
         (temp_v9 = FUN_0027d884(puVar14[0xb],puVar14[0xc]), temp_v9 == 0)))))) {
      temp_v9 = FUN_002c2bd0(0);
      if (temp_v9 == 3) {
        FUN_002c2ba4(0,10,0xff);
      }
      if (DAT_0049fb9c == 0) {
        temp_v9 = FUN_002c2bd0(1);
        if (temp_v9 == 3) {
          FUN_002c2ba4(1,10,0xff);
        }
        goto LAB_001b9110;
      }
    }
    else {
LAB_001b9110:
      if (DAT_0049fb9c == 0) {
        FUN_0027d35c();
      }
    }
    DAT_0049fb9c = 0;
    DAT_0049fa38 = '\x01';
    DAT_0049f940 = 0;
    DAT_0049f934 = 0;
    DAT_0049f93c = 0;
    DAT_0049fb45 = 1;
    DAT_0049fb46 = 1;
    puVar14[9] = 0x15;
    temp_v0 = DAT_0049f950;
    if (DAT_0049f950 == '\0') {
      temp_v0 = *(char *)(puVar14 + 0x11);
    }
    if (DAT_0049f950 != '\0' || temp_v0 != '\0') {
      *(unsigned char *)(puVar14 + 0x11) = 0;
      FUN_00276b74();
    }
    DAT_0049f950 = '\0';
    if (DAT_0049fa1a != '\0') {
      DAT_0049fa1a = 0;
      DAT_0049f934 = 1;
      DAT_0049f93c = 1;
      puVar14[9] = 0x36;
      puVar14[10] = 0;
      puVar14[0x19] = (int)DAT_0049fa1c;
      FUN_002be7fc(puVar14 + 0x1a,&DAT_0049fa20);
      return 0;
    }
    if (*(char *)((int)puVar14 + 0x46) != '\0') {
      DAT_0049f934 = 1;
      DAT_0049f93c = 1;
      puVar14[0x19] = 0xe;
      puVar14[9] = 0x36;
      puVar14[10] = 0;
      FUN_002be7fc(puVar14 + 0x1a,0x1b94dc);
      return 0;
    }
    if (*(char *)(puVar14 + 0x12) == '\0') {
      if ((puVar14[0x10] == 1) || (puVar14[0x10] == 2)) {
        DAT_0049f934 = 1;
        DAT_0049f93c = 1;
        puVar14[9] = 0x49;
        puVar14[10] = 0;
        return 0;
      }
      temp_v9 = FUN_001e266c(puVar14[0xb]);
      if (temp_v9 != 0) {
        DAT_0049fa1a = 0;
        DAT_0049f934 = 1;
        DAT_0049f93c = 1;
        DAT_0049fb68 = 0;
        puVar14[9] = 0x41;
        puVar14[10] = 0;
        return 0;
      }
      if (DAT_0049fa61 != '\0') {
        DAT_0049fa61 = 0;
        DAT_0049f934 = 1;
        DAT_0049f93c = 1;
        puVar14[9] = 0x36;
        puVar14[10] = 0;
        puVar14[0x19] = DAT_0049fa64;
        FUN_002be7fc(puVar14 + 0x1a,&DAT_0049fa68);
        return 0;
      }
      temp_v9 = FUN_0027d884(puVar14[0xb],puVar14[0xc]);
      if (temp_v9 != 0) {
        DAT_0049f934 = 1;
        DAT_0049f93c = 1;
        puVar14[9] = 0x36;
        puVar14[10] = 0;
        puVar14[0x19] = (int)*(short *)(temp_v9 + 6);
        FUN_002be7fc(puVar14 + 0x1a,temp_v9 + 8);
        DAT_0049f9ac = (float)*(unsigned int *)(DAT_00447e88 + 0x4c);
        DAT_0049f9b0 = (float)*(unsigned int *)(DAT_00447e88 + 0x1c);
        DAT_0049f9b4 = (float)*(unsigned int *)(DAT_00447e88 + 0x20);
        DAT_0049f9b8 = (float)*(unsigned int *)(DAT_00447e88 + 0x24);
        return 0;
      }
      FUN_00276840();
      if (temp_v9 != 0) {
        DAT_0049f934 = 1;
        DAT_0049f93c = 1;
        DAT_0049f970 = 0;
        DAT_0049fb6b = 1;
        temp_v16 = FUN_00291018(puVar14[0x13],0x1b94e4);
        puVar14[0x2d] = temp_v16;
        puVar14[9] = 0x34;
        puVar14[10] = 0;
        return 0;
      }
      DAT_0049f938 = 3;
      return 0;
    }
    DAT_0049f934 = 1;
    DAT_0049f93c = 1;
    puVar14[9] = 0x4b;
    puVar14[10] = 0;
    temp_v9 = FUN_002c2bd0(0);
    if (temp_v9 == 3) {
      FUN_002c2ba4(0,10,0xff);
    }
    temp_v9 = FUN_002c2bd0(1);
    if (temp_v9 == 3) {
      FUN_002c2ba4(1,10,0xff);
    }
    break;
  case 0x15:
    if (0 < DAT_0049f938) {
      DAT_0049f938 = DAT_0049f938 - 1;
    }
    temp_v10 = DAT_0049f938;
    FUN_001a8ffc();
    if (temp_v10 == 1) {
      puVar14[9] = 0x43;
      DAT_0049f934 = 1;
      DAT_0049f93c = 1;
      puVar14[10] = 0;
      return 0;
    }
    if (temp_v10 == 2) {
      puVar14[9] = 0x45;
      DAT_0049f934 = 1;
      DAT_0049f93c = 1;
      puVar14[10] = 0;
      return 0;
    }
    if (temp_v10 == 3) {
      puVar14[9] = 0x47;
      DAT_0049f934 = 1;
      DAT_0049f93c = 1;
      puVar14[10] = 0;
      return 0;
    }
    if (temp_v10 == 4) {
      puVar14[9] = 0x31;
      puVar14[10] = 0;
      DAT_0049f934 = 1;
      DAT_0049f93c = 1;
      DAT_0049f9ac = *(float *)(DAT_00447e88 + 0x50);
      temp_v16 = FUN_002be828(DAT_0049f9cc,0);
      FUN_002bd348(temp_v16,temp_v22);
      FUN_00295904(0,temp_v22);
      FUN_002bcf58(&DAT_0049f978,0x1b94f8,0x16);
      return 0;
    }
    if (DAT_0049fa80 != 0) {
      puVar14[9] = 0x47;
      DAT_0049f934 = 1;
      DAT_0049f93c = 1;
      puVar14[10] = 0;
      return 0;
    }
    if (*(char *)(DAT_00432fc8 + 0xc1) != '\0') {
      *(unsigned char *)(DAT_00432fc8 + 0xc1) = 0;
      puVar14[9] = 0x1e;
      puVar14[10] = 0;
      DAT_0049f934 = 1;
      DAT_0049f93c = 1;
      func_0x002767b0();
      return 0;
    }
    if (DAT_0049fa96 != 0) {
      DAT_0049fa96 = 0;
      puVar14[9] = 0x1d;
      puVar14[10] = 0;
      DAT_0049f934 = 1;
      DAT_0049f93c = 1;
      func_0x002767b0();
      return 0;
    }
    if (DAT_0049fa94 != 0) {
      DAT_0049fa94 = 0;
      puVar14[9] = 0x1c;
      puVar14[10] = 0;
      DAT_0049f934 = 1;
      DAT_0049f93c = 1;
      func_0x002767b0();
      return 0;
    }
    temp_v10 = DAT_00433158;
    FUN_00276718();
    if (temp_v10 != 0) {
      puVar14[9] = 0x20;
      puVar14[10] = 0;
      DAT_0049f934 = 1;
      DAT_0049f93c = 1;
      func_0x002767b0();
      return 0;
    }
    func_0x002767b0();
    if (DAT_0049f91c != 0x24) {
      FUN_0027d6e4(DAT_0049f928,DAT_0049f92c,DAT_0049f924);
    }
    if ((*(char *)(puVar14 + 0x2e) != '\0') && (DAT_0049fca8 == '\0')) {
      *(unsigned char *)(puVar14 + 0x2e) = 0;
      DAT_0049f934 = 1;
      DAT_0049f93c = 1;
      puVar14[9] = 0x24;
      puVar14[10] = 0;
      return 0;
    }
    temp_v0 = DAT_0049fce8;
    if (DAT_0049fce8 == '\0') {
      temp_v0 = DAT_0049fca8;
    }
    if (DAT_0049fce8 == '\0' && temp_v0 == '\0') {
      FUN_00280f3c();
    }
    temp_v19 = DAT_0049fc64 == '\0';
    temp_v0 = DAT_0049fc64;
    if (temp_v19) {
      temp_v0 = DAT_0049fce8;
    }
    temp_v18 = temp_v19 && temp_v0 == '\0';
    if (temp_v19 && temp_v0 == '\0') {
      temp_v18 = DAT_0049fc8c == 0;
    }
    if (!temp_v18) {
      return 0;
    }
    if (DAT_0049f954 != 0x27) {
      if (DAT_0049f954 < 3) {
        DAT_0049f934 = 1;
        DAT_0049f93c = 1;
        FUN_0027fd08(0x25);
        puVar14[9] = 0x52;
        puVar14[10] = 0;
        *(unsigned char *)((int)puVar14 + 0xb9) = 1;
        uStack_1c4 = (unsigned int)DAT_0049fa19;
        uStack_1c8 = (unsigned int)DAT_0049fa18;
        FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
        FUN_002766cc(1);
        if (DAT_0049f990 != 0x18) {
          return 0;
        }
        *(short *)(temp_v9 + 0x2c) = (short)(int)DAT_0049f9ac;
        *(short *)(temp_v9 + 0x2e) = (short)DAT_0049f91c;
        *(short *)(temp_v9 + 0x30) = (short)DAT_0049f920;
        *(unsigned int *)(temp_v9 + 0xddc) = DAT_0049f924;
        *(short *)(temp_v9 + 0x32) = (short)(int)DAT_0049f9b0;
        *(short *)(temp_v9 + 0x34) = (short)(int)DAT_0049f9b4;
        *(short *)(temp_v9 + 0x36) = (short)(int)DAT_0049f9b8;
        *(short *)(temp_v9 + 0x38) = (short)(int)DAT_0049f9bc;
        *(short *)(temp_v9 + 0x28) = (short)DAT_0049f9c0;
        *(short *)(temp_v9 + 0x2a) = (short)DAT_0049f9c4;
        return 0;
      }
      if (DAT_0049f954 == 3 || DAT_0049f954 == 0x2c) {
        temp_v14 = FUN_0027f13c();
        temp_v19 = temp_v14 == 1;
        if (temp_v19) {
          temp_v14 = (unsigned int)DAT_0049fab0;
        }
        if ((temp_v19 && temp_v14 == 0) && (temp_v10 = FUN_0027f10c(), temp_v10 != 0)) {
          temp_v14 = DAT_0049f954;
          if (DAT_0049f954 == 3) {
            temp_v14 = DAT_0049f990;
          }
          if (DAT_0049f954 != 3 || temp_v14 != 0x18) {
            DAT_0049f934 = 1;
            DAT_0049f93c = 1;
            FUN_0027fd08(0x26);
            puVar14[9] = 0x52;
            puVar14[10] = 0;
            uStack_1c4 = (unsigned int)DAT_0049fa19;
            uStack_1c8 = (unsigned int)DAT_0049fa18;
            FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
            FUN_002766cc(1);
            return 0;
          }
          *(short *)(temp_v9 + 0x2c) = (short)(int)DAT_0049f9ac;
          *(short *)(temp_v9 + 0x2e) = (short)DAT_0049f91c;
          *(short *)(temp_v9 + 0x30) = (short)DAT_0049f920;
          *(unsigned int *)(temp_v9 + 0xddc) = DAT_0049f924;
          *(short *)(temp_v9 + 0x32) = (short)(int)DAT_0049f9b0;
          *(short *)(temp_v9 + 0x34) = (short)(int)DAT_0049f9b4;
          *(short *)(temp_v9 + 0x36) = (short)(int)DAT_0049f9b8;
          *(short *)(temp_v9 + 0x38) = (short)(int)DAT_0049f9bc;
          *(unsigned short *)(temp_v9 + 0x28) = 0;
          *(unsigned short *)(temp_v9 + 0x2a) = 0;
          DAT_0049f934 = 1;
          DAT_0049f93c = 1;
          DAT_0049f970 = 0;
          DAT_0049fb6c = 1;
          temp_v16 = FUN_00291018(puVar14[0x13],0x1b9d70);
          puVar14[0x2d] = temp_v16;
          *(float *)(DAT_00447e88 + 0x50) = DAT_0049f9ac;
          puVar14[9] = 0x34;
          puVar14[10] = 0;
          return 0;
        }
        goto LAB_001bb0d4;
      }
      if (DAT_0049f954 == 4) {
        temp_v14 = FUN_0027f13c();
        temp_v19 = temp_v14 == 1;
        if (temp_v19) {
          temp_v14 = (unsigned int)DAT_0049fab0;
        }
        if ((temp_v19 && temp_v14 == 0) && (temp_v10 = FUN_0027f10c(), temp_v10 != 0)) {
          DAT_0049f934 = 1;
          DAT_0049f93c = 1;
          puVar14[9] = 0x3f;
          puVar14[10] = 0;
          uStack_1c4 = (unsigned int)DAT_0049fa19;
          uStack_1c8 = (unsigned int)DAT_0049fa18;
          FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
          FUN_002766cc(1);
          return 0;
        }
        goto LAB_001bb0d4;
      }
      if (DAT_0049f954 == 5) {
        if (*(int *)(DAT_004474f4 + 0xac) == 0) {
          temp_v14 = FUN_0027f13c();
          temp_v19 = temp_v14 == 1;
          if (temp_v19) {
            temp_v14 = (unsigned int)DAT_0049fab0;
          }
          if ((temp_v19 && temp_v14 == 0) && (temp_v10 = FUN_002bffbc(6), temp_v10 != 0)) {
            DAT_0049f968 = 0;
            temp_v14 = DAT_0049f990;
            FUN_0027da20(DAT_0049f990,DAT_0049f994,DAT_0049f998);
            if (temp_v14 != 0xffffffff) {
              pcVar13 = (char *)FUN_0027d9b8();
              if ((puVar14[0xb] == (int)*pcVar13) && (puVar14[0xc] == (int)pcVar13[1])) {
                DAT_0049f968 = 0;
              }
              else {
                DAT_0049f968 = 1;
              }
            }
            FUN_0027fd08(0xb);
            DAT_0049f934 = 1;
            DAT_0049f93c = 1;
            puVar14[9] = 0x42;
            puVar14[10] = 0;
            return 0;
          }
        }
        goto LAB_001bb0d4;
      }
      if (DAT_0049f954 == 6) {
        temp_v14 = FUN_0027f13c();
        temp_v19 = temp_v14 == 1;
        if (temp_v19) {
          temp_v14 = (unsigned int)DAT_0049fab0;
        }
        if ((temp_v19 && temp_v14 == 0) && (temp_v10 = FUN_0027f10c(), temp_v10 != 0)) {
          DAT_0049f934 = 1;
          DAT_0049f93c = 1;
          puVar14[9] = 0x36;
          puVar14[10] = 0;
          puVar14[0x19] = DAT_0049f970;
          FUN_002be7fc(puVar14 + 0x1a,&DAT_0049f978);
          return 0;
        }
        goto LAB_001bb0d4;
      }
      if (DAT_0049f954 == 7) {
        temp_v14 = FUN_0027f13c();
        temp_v19 = temp_v14 == 1;
        if (temp_v19) {
          temp_v14 = (unsigned int)DAT_0049fab0;
        }
        if (temp_v19 && temp_v14 == 0) {
          temp_v20 = FUN_0027f10c();
          if ((int)temp_v20 != 0) {
            DAT_0049f934 = 1;
            DAT_0049f93c = 1;
            temp_v14 = (unsigned int)((unsigned long long)temp_v20 >> 0x20);
            if (DAT_0049f91c == 5) {
              temp_v14 = DAT_0049f920;
            }
            if (DAT_0049f91c != 5 || temp_v14 != 6) {
              temp_v14 = DAT_0049f91c - 0x19;
              temp_v18 = temp_v14 >= 5;
              temp_v19 = temp_v14 == 5;
              if (temp_v14 >= 6) {
                temp_v18 = DAT_0049f91c - 0x1f >= 4;
                temp_v19 = DAT_0049f91c - 0x1f == 4;
              }
              if (temp_v18 && !temp_v19) {
                DAT_0049f9d0 = 99;
              }
            }
            FUN_0027fd08(0x26);
            puVar14[9] = 0x3c;
            puVar14[10] = 0;
            puVar14[0xe] = DAT_0049f990;
            *(unsigned char *)((int)puVar14 + 0xf) = 1;
            uStack_1c4 = (unsigned int)DAT_0049fa19;
            uStack_1c8 = (unsigned int)DAT_0049fa18;
            FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
            return 0;
          }
        }
        goto LAB_001bb0d4;
      }
      if (DAT_0049f954 == 0x18) {
        temp_v14 = FUN_0027f13c();
        temp_v19 = temp_v14 == 1;
        if (temp_v19) {
          temp_v14 = (unsigned int)DAT_0049fab0;
        }
        if ((temp_v19 && temp_v14 == 0) && (temp_v10 = FUN_0027f10c(), temp_v10 != 0)) {
          DAT_0049f934 = 1;
          DAT_0049f93c = 1;
          puVar14[9] = 0x22;
          puVar14[10] = 0;
          temp_v9 = FUN_002765b8(DAT_0049f958);
          if (temp_v9 != -1) {
            FUN_00316f2c(temp_v9,1);
            FUN_00276580();
          }
          temp_v2 = DAT_0049f9ac;
          *(float *)(DAT_00447e88 + 0x50) = DAT_0049f9ac;
          *(float *)(DAT_004474f4 + 0x18) = temp_v2;
          FUN_0027fd08(0x1c);
          return 0;
        }
        goto LAB_001bb0d4;
      }
      if (DAT_0049f954 == 0x19) {
        if (*(int *)(DAT_004474f4 + 0xac) == 0) {
          temp_v14 = FUN_0027f13c();
          temp_v19 = temp_v14 == 1;
          if (temp_v19) {
            temp_v14 = (unsigned int)DAT_0049fab0;
          }
          if ((temp_v19 && temp_v14 == 0) && (temp_v10 = FUN_002bffbc(6), temp_v10 != 0)) {
            FUN_0027fd08(0xf);
            DAT_0049f934 = 1;
            DAT_0049f93c = 1;
            puVar14[9] = 0x42;
            puVar14[10] = 0;
            return 0;
          }
        }
        goto LAB_001bb0d4;
      }
      if (DAT_0049f954 == 0x1a) {
        if (*(int *)(DAT_004474f4 + 0xac) != 1) {
          if (*(int *)(DAT_004474f4 + 0xac) == 0) {
            temp_v14 = FUN_0027f13c();
            temp_v19 = temp_v14 == 1;
            if (temp_v19) {
              temp_v14 = (unsigned int)DAT_0049fab0;
            }
            if ((temp_v19 && temp_v14 == 0) && (temp_v10 = FUN_002bffbc(5), temp_v10 != 0)) {
              FUN_0027fd08(0x13);
              temp_v9 = DAT_004474f4;
              *(unsigned int *)(DAT_004474f4 + 0xac) = 1;
              *(unsigned char *)(temp_v9 + 0xa4) = 1;
              temp_v13 = DAT_0049f9a8;
              temp_v16 = DAT_0049f9a4;
              temp_v12 = DAT_0049f9a0;
              temp_v10 = DAT_00447e88;
              puVar14 = (unsigned int *)(DAT_00447e88 + 0x38);
              *(int *)(DAT_00447e88 + 0x34) = DAT_0049f9a0;
              *(int *)(temp_v10 + 0x1c) = temp_v12;
              *puVar14 = temp_v16;
              *(unsigned int *)(temp_v10 + 0x3c) = temp_v13;
              *(unsigned int *)(temp_v10 + 0x20) = temp_v16;
              *(unsigned int *)(temp_v10 + 0x24) = temp_v13;
              *(int *)(temp_v10 + 0x28) = temp_v12;
              *(unsigned int *)(temp_v10 + 0x2c) = temp_v16;
              *(unsigned int *)(temp_v10 + 0x30) = temp_v13;
              temp_v2 = DAT_0049f9ac;
              *(float *)(temp_v9 + 0x18) = DAT_0049f9ac;
              *(float *)(temp_v10 + 0x4c) = temp_v2;
              *(float *)(temp_v10 + 0x50) = temp_v2;
              return 0;
            }
          }
        }
        else {
          temp_v14 = FUN_0027f13c();
          temp_v19 = temp_v14 == 1;
          if (temp_v19) {
            temp_v14 = (unsigned int)DAT_0049fab0;
          }
          if ((temp_v19 && temp_v14 == 0) && (temp_v10 = FUN_0027f10c(), temp_v10 != 0)) {
            DAT_0049f934 = 1;
            DAT_0049f93c = 1;
            puVar14[9] = 0x22;
            puVar14[10] = 0;
            return 0;
          }
          temp_v14 = FUN_0027f13c();
          temp_v19 = temp_v14 == 1;
          if (temp_v19) {
            temp_v14 = (unsigned int)DAT_0049fab0;
          }
          if (((temp_v19 && temp_v14 == 0) && (temp_v10 = FUN_002bffbc(6), temp_v10 != 0)) ||
             (temp_v10 = FUN_00276550(), temp_v10 != 0)) {
            FUN_0027fd08(1);
            temp_v9 = DAT_004474f4;
            *(unsigned int *)(DAT_004474f4 + 0xac) = 0;
            *(unsigned char *)(temp_v9 + 0xa4) = 1;
            return 0;
          }
        }
        goto LAB_001bb0d4;
      }
      if (DAT_0049f954 == 8) {
        temp_v14 = FUN_0027f13c();
        temp_v19 = temp_v14 == 1;
        if (temp_v19) {
          temp_v14 = (unsigned int)DAT_0049fab0;
        }
        if ((temp_v19 && temp_v14 == 0) && (temp_v10 = FUN_0027f10c(), temp_v10 != 0)) {
          DAT_0049f934 = 1;
          DAT_0049f93c = 1;
          FUN_0027fd08(0x26);
          puVar14[9] = 0x3a;
          puVar14[10] = 0;
          puVar14[0xe] = DAT_0049f990;
          uStack_1c4 = (unsigned int)DAT_0049fa19;
          uStack_1c8 = (unsigned int)DAT_0049fa18;
          FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
          return 0;
        }
        goto LAB_001bb0d4;
      }
      if (DAT_0049f954 == 9) {
        temp_v14 = FUN_0027f13c();
        temp_v19 = temp_v14 == 1;
        if (temp_v19) {
          temp_v14 = (unsigned int)DAT_0049fab0;
        }
        if ((temp_v19 && temp_v14 == 0) && (temp_v10 = FUN_0027f10c(), temp_v10 != 0)) {
          DAT_0049f934 = 1;
          DAT_0049f93c = 1;
          FUN_0027fd08(0x26);
          puVar14[9] = 0x3c;
          puVar14[10] = 0;
          *(unsigned char *)((int)puVar14 + 0x11) = 1;
          puVar14[0xe] = DAT_0049f990;
          uStack_1c4 = (unsigned int)DAT_0049fa19;
          uStack_1c8 = (unsigned int)DAT_0049fa18;
          FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
          return 0;
        }
        goto LAB_001bb0d4;
      }
      if (DAT_0049f954 == 10) {
        DAT_0049f934 = 1;
        DAT_0049f93c = 1;
        FUN_0027fd08(0x25);
        puVar14[9] = 0x52;
        puVar14[10] = 0;
        uStack_1c4 = (unsigned int)DAT_0049fa19;
        uStack_1c8 = (unsigned int)DAT_0049fa18;
        FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
        return 0;
      }
      if (DAT_0049f954 == 0xb) {
        temp_v14 = FUN_0027f13c();
        temp_v19 = temp_v14 == 1;
        if (temp_v19) {
          temp_v14 = (unsigned int)DAT_0049fab0;
        }
        if ((temp_v19 && temp_v14 == 0) && (temp_v10 = FUN_0027f10c(), temp_v10 != 0)) {
          DAT_0049f934 = 1;
          DAT_0049f93c = 1;
          FUN_0027fd08(0x26);
          puVar14[9] = 0x52;
          puVar14[10] = 0;
          uStack_1c4 = (unsigned int)DAT_0049fa19;
          uStack_1c8 = (unsigned int)DAT_0049fa18;
          FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
          return 0;
        }
        goto LAB_001bb0d4;
      }
      if (DAT_0049f954 == 0x2a) {
        DAT_0049f934 = 1;
        DAT_0049f93c = 1;
        FUN_0027fd08(0x25);
        puVar14[9] = 0x52;
        puVar14[10] = 0;
        *(unsigned char *)((int)puVar14 + 0xb9) = 1;
        uStack_1c4 = (unsigned int)DAT_0049fa19;
        uStack_1c8 = (unsigned int)DAT_0049fa18;
        FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
        return 0;
      }
      if (DAT_0049f954 != 0xc) {
        if (DAT_0049f954 != 0x3b) {
          if (DAT_0049f954 != 0xd) {
            if (DAT_0049f954 == 0xe) {
              DAT_0049f934 = 1;
              DAT_0049f93c = 1;
              if (DAT_0049f9d4 == '\0') {
                FUN_0027fd08(2);
                puVar14[9] = 0x3c;
                puVar14[10] = 0;
                *(unsigned char *)((int)puVar14 + 0x12) = 1;
                uStack_1c4 = (unsigned int)DAT_0049fa19;
                uStack_1c8 = (unsigned int)DAT_0049fa18;
                FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
                return 0;
              }
LAB_001ba620:
              DAT_0049f93c = 1;
              DAT_0049f934 = 1;
              FUN_002bcf58(&DAT_0049f978,0x1ba8fc,0x11);
              puVar14[9] = 0x31;
              puVar14[10] = 0;
              FUN_002764a8();
              return 0;
            }
            if (DAT_0049f954 == 0xf) {
              DAT_0049f934 = 1;
              DAT_0049f93c = 1;
              if (DAT_0049f9d4 == '\0') {
                FUN_0027fd08(0x25);
                puVar14[9] = 0x3c;
                puVar14[10] = 0;
                *(unsigned char *)(puVar14 + 5) = 1;
                uStack_1c4 = (unsigned int)DAT_0049fa19;
                uStack_1c8 = (unsigned int)DAT_0049fa18;
                FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
                return 0;
              }
              goto LAB_001ba620;
            }
            if (!(DAT_0049f954 == 0x10 || DAT_0049f954 == 0x2d)) {
              if (DAT_0049f954 != 0x12) {
                if (DAT_0049f954 == 0x11) {
                  if (DAT_0049f9d4 == '\0') {
LAB_001ba68c:
                    DAT_0049f93c = 1;
                    DAT_0049f934 = 1;
                    puVar14[9] = 0x36;
                    puVar14[10] = 0;
                    uStack_1c4 = (unsigned int)DAT_0049fa19;
                    uStack_1c8 = (unsigned int)DAT_0049fa18;
                    FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
                    puVar14[0x19] = DAT_0049f970;
                    FUN_002be7fc(puVar14 + 0x1a,&DAT_0049f978);
                    return 0;
                  }
                  goto LAB_001ba620;
                }
                if (!(DAT_0049f954 == 0x13 || DAT_0049f954 == 0x14)) {
                  if (!(DAT_0049f954 == 0x15 || DAT_0049f954 == 0x16)) {
                    if (DAT_0049f954 == 0x17) {
                      DAT_0049f934 = 1;
                      DAT_0049f93c = 1;
                      uStack_1c4 = (unsigned int)DAT_0049fa19;
                      uStack_1c8 = (unsigned int)DAT_0049fa18;
                      FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
                      temp_v9 = 0x2f;
                      temp_v16 = 0;
                      puVar14[9] = temp_v9;
                      puVar14[10] = temp_v16;
                      break;
                    }
                    if (DAT_0049f954 != 0x1b) {
                      if (DAT_0049f954 == 0x1c) {
                        temp_v14 = FUN_0027f13c();
                        temp_v19 = temp_v14 == 1;
                        if (temp_v19) {
                          temp_v14 = (unsigned int)DAT_0049fab0;
                        }
                        if ((!temp_v19 || temp_v14 != 0) || (temp_v10 = FUN_0027f10c(), temp_v10 == 0))
                        goto LAB_001bb0d4;
                        temp_v10 = FUN_002857e4();
                        if (((temp_v10 == 0 || temp_v10 == 7) || (temp_v10 == 9 || temp_v10 == 10)) ||
                           (temp_v12 = FUN_0027dbd8(), temp_v12 == -1)) {
                          DAT_0049f934 = 1;
                          DAT_0049f93c = 1;
                          if (temp_v10 == 4) {
                            FUN_00276488();
                            func_0x002763a8();
                            FUN_0027d81c(0);
                            FUN_002854ec(0);
                            FUN_002bf9e8(0x10000bc);
                            FUN_0027fd08(2);
                            uStack_1c4 = (unsigned int)DAT_0049fa19;
                            uStack_1c8 = (unsigned int)DAT_0049fa18;
                            FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
                            temp_v9 = FUN_0027636c((int)*(short *)(temp_v9 + 0x2a));
                            DAT_0049f970 = (unsigned int)*(short *)(temp_v9 + 0x12);
                            FUN_002bf86c(&DAT_0049f978,temp_v9 + 0x14);
                            puVar14[9] = 0x6c;
                            puVar14[10] = 0;
                            *(unsigned char *)(puVar14 + 5) = 1;
                            return 0;
                          }
                          DAT_0049fb6a = 1;
                          temp_v16 = FUN_00291018(puVar14[0x13],0x1ba554);
                          puVar14[0x2d] = temp_v16;
                          puVar14[9] = 0x2a;
                          puVar14[10] = 0;
                          return 0;
                        }
                        DAT_0049f934 = 1;
                        DAT_0049f93c = 1;
                        FUN_002bcf58(&DAT_0049f978,0x1ba8fc,0x11);
                        puVar14[9] = 0x31;
                        puVar14[10] = 0;
                        FUN_002764a8();
                        break;
                      }
                      if (DAT_0049f954 != 0x1d) {
                        if (DAT_0049f954 != 0x1e) {
                          if (DAT_0049f954 != 0x1f) {
                            if (DAT_0049f954 != 0x20) {
                              if (DAT_0049f954 != 0x21) {
                                if (DAT_0049f954 != 0x22) {
                                  if (DAT_0049f954 != 0x23) {
                                    if (DAT_0049f954 != 0x24) {
                                      if (DAT_0049f954 != 0x25) {
                                        if (DAT_0049f954 == 0x26) {
                                          DAT_0049f934 = 1;
                                          DAT_0049f93c = 1;
                                          FUN_0027fd08(2);
                                          puVar14[9] = 0x51;
                                          puVar14[10] = 0;
                                          uStack_1c4 = (unsigned int)DAT_0049fa19;
                                          uStack_1c8 = (unsigned int)DAT_0049fa18;
                                          FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,
                                                       DAT_0049fa17);
                                          FUN_002766cc(1);
                                          return 0;
                                        }
                                        if (DAT_0049f954 != 0x28) {
                                          if (DAT_0049f954 != 0x29) {
                                            if (DAT_0049f954 != 0x3a) {
                                              if (DAT_0049f954 == 0x2b) {
                                                temp_v14 = FUN_0027f13c();
                                                temp_v19 = temp_v14 == 1;
                                                if (temp_v19) {
                                                  temp_v14 = (unsigned int)DAT_0049fab0;
                                                }
                                                if ((temp_v19 && temp_v14 == 0) &&
                                                   (temp_v10 = FUN_0027f10c(), temp_v2 = DAT_0049f9ac,
                                                   temp_v10 != 0)) {
                                                  DAT_0049f934 = 1;
                                                  DAT_0049f93c = 1;
                                                  *(float *)(DAT_00447e88 + 0x50) = DAT_0049f9ac;
                                                  *(float *)(DAT_004474f4 + 0x18) = temp_v2;
                                                  FUN_0027fd08(0x1c);
                                                  if (DAT_0049f9c0 != 5) {
                                                    temp_v9 = FUN_002762d0(DAT_0049f9c4);
                                                    if (temp_v9 != 0xff) {
                                                      FUN_002fb090(DAT_0049f9c4,1);
                                                      FUN_00276580();
                                                      FUN_002761fc();
                                                      temp_v9 = 0x22;
                                                      temp_v16 = 0;
                                                      puVar14[9] = temp_v9;
                                                      puVar14[10] = temp_v16;
                                                      break;
                                                    }
                                                    DAT_0049f980 = &LAB_00325f61;
                                                    DAT_0049f978 = 0x5f726373;
                                                    DAT_0049f97c = (unsigned char *)0x73757566;
                                                    puVar14[9] = 0x31;
                                                    puVar14[10] = 0;
                                                    FUN_002764a8();
                                                    break;
                                                  }
                                                  uRam0049f988 = 0x6e6e69;
                                                  DAT_0049f978 = 0x5f726373;
                                                  DAT_0049f97c = (unsigned char *)0x646e6172;
                                                  DAT_0049f980 = (unsigned char *)0x657a616d;
                                                  uRam0049f984 = 0x746f6e5f;
                                                  puVar14[9] = 0x31;
                                                  puVar14[10] = 0;
                                                  FUN_002764a8();
                                                  break;
                                                }
                                              }
                                            }
                                            else {
                                              temp_v10 = FUN_001fc20c((int)(short)DAT_0049f994);
                                              if (temp_v10 != 0) {
                                                func_0x001f9020(DAT_0049f990);
                                                FUN_002762e8((int)(short)DAT_0049f994);
                                              }
                                            }
                                          }
                                          else if (DAT_0049f9d0 != 0x1e) {
                                            if (DAT_0049f9d0 != 0x1f) {
                                              if (DAT_0049f9d0 != 0x20) {
                                                if (DAT_0049f9d0 == 0x21) {
                                                  temp_v16 = FUN_002bffac();
                                                  temp_v13 = FUN_002bff9c();
                                                  FUN_002bfdfc(0,0x61ec8,temp_v13,temp_v16);
                                                }
                                              }
                                              else {
                                                temp_v16 = FUN_002bffac();
                                                temp_v13 = FUN_002bff9c();
                                                FUN_002bfdfc(0,0x61e6c,temp_v13,temp_v16);
                                              }
                                            }
                                            else {
                                              temp_v16 = FUN_002bffac();
                                              temp_v13 = FUN_002bff9c();
                                              FUN_002bfdfc(0,0xbbb,temp_v13,temp_v16);
                                            }
                                          }
                                          else {
                                            temp_v16 = FUN_002bffac();
                                            temp_v13 = FUN_002bff9c();
                                            FUN_002bfdfc(0,0x7d3,temp_v13,temp_v16);
                                          }
                                          goto LAB_001bb0d4;
                                        }
                                        if (*(int *)(DAT_004474f4 + 0xac) == 0) {
                                          temp_v14 = FUN_0027f13c();
                                          temp_v19 = temp_v14 != 1;
                                          if (!temp_v19) {
                                            temp_v14 = (unsigned int)DAT_0049fab0;
                                          }
                                          if ((temp_v19 || temp_v14 != 0) ||
                                             (temp_v10 = FUN_002bffbc(6), temp_v10 == 0))
                                          goto LAB_001bae1c;
                                        }
                                        else {
LAB_001bae1c:
                                          if (*(int *)(DAT_004474f4 + 0xac) != -1)
                                          goto LAB_001bb0d4;
                                        }
                                        if (DAT_0049f9d4 == '\0') {
                                          FUN_0027fd08(0x11);
                                          DAT_0049f934 = 1;
                                          temp_v9 = 0x42;
                                          temp_v16 = 0;
                                          DAT_0049f93c = 1;
                                          puVar14[9] = temp_v9;
                                          puVar14[10] = temp_v16;
                                          break;
                                        }
                                        FUN_002bcf58(&DAT_0049f978,0x1ba8fc,0x11);
                                        puVar14[9] = 0x31;
                                        puVar14[10] = 0;
                                        FUN_002764a8();
                                        break;
                                      }
                                      temp_v14 = FUN_0027f13c();
                                      temp_v19 = temp_v14 == 1;
                                      if (temp_v19) {
                                        temp_v14 = (unsigned int)DAT_0049fab0;
                                      }
                                      if ((temp_v19 && temp_v14 == 0) &&
                                         (temp_v10 = FUN_0027f10c(), temp_v10 != 0)) {
                                        DAT_0049f934 = 1;
                                        DAT_0049f93c = 1;
                                        FUN_0027fd08(2);
                                        puVar14[9] = 0x50;
                                        puVar14[10] = 0;
                                        uStack_1c4 = (unsigned int)DAT_0049fa19;
                                        uStack_1c8 = (unsigned int)DAT_0049fa18;
                                        FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,
                                                     DAT_0049fa17);
                                        FUN_002766cc(1);
                                        return 0;
                                      }
                                    }
                                    else if (*(int *)(DAT_004474f4 + 0xac) == 0) {
                                      temp_v14 = FUN_0027f13c();
                                      temp_v19 = temp_v14 == 1;
                                      if (temp_v19) {
                                        temp_v14 = (unsigned int)DAT_0049fab0;
                                      }
                                      if ((temp_v19 && temp_v14 == 0) &&
                                         (temp_v10 = FUN_002bffbc(6), temp_v10 != 0)) {
                                        DAT_0049f968 = 0;
                                        temp_v14 = DAT_0049f990;
                                        FUN_0027da20(DAT_0049f990,DAT_0049f994,DAT_0049f998);
                                        if (temp_v14 != 0xffffffff) {
                                          pcVar13 = (char *)FUN_0027d9b8();
                                          if ((puVar14[0xb] == (int)*pcVar13) &&
                                             (puVar14[0xc] == (int)pcVar13[1])) {
                                            DAT_0049f968 = 0;
                                          }
                                          else {
                                            DAT_0049f968 = 1;
                                          }
                                        }
                                        FUN_0027fd08(0xd);
                                        DAT_0049f934 = 1;
                                        DAT_0049f93c = 1;
                                        puVar14[9] = 0x42;
                                        puVar14[10] = 0;
                                        return 0;
                                      }
                                    }
                                  }
                                  else {
                                    if (*(int *)(DAT_004474f4 + 0xac) == 0) {
                                      temp_v14 = FUN_0027f13c();
                                      temp_v19 = temp_v14 == 1;
                                      if (temp_v19) {
                                        temp_v14 = (unsigned int)DAT_0049fab0;
                                      }
                                      if ((temp_v19 && temp_v14 == 0) &&
                                         (temp_v10 = FUN_002bffbc(5), temp_v10 != 0)) goto LAB_001bac4c;
                                    }
                                    if (*(int *)(DAT_004474f4 + 0xac) == 1) {
LAB_001bac4c:
                                      DAT_0049f968 = 0;
                                      temp_v14 = DAT_0049f990;
                                      FUN_0027da20(DAT_0049f990,DAT_0049f994,DAT_0049f998);
                                      if (temp_v14 != 0xffffffff) {
                                        pcVar13 = (char *)FUN_0027d9b8();
                                        if ((puVar14[0xb] == (int)*pcVar13) &&
                                           (puVar14[0xc] == (int)pcVar13[1])) {
                                          DAT_0049f968 = 0;
                                        }
                                        else {
                                          DAT_0049f968 = 1;
                                        }
                                      }
                                      FUN_0027fd08(0x15);
                                      DAT_0049f934 = 1;
                                      DAT_0049f93c = 1;
                                      puVar14[9] = 0x42;
                                      puVar14[10] = 0;
                                      return 0;
                                    }
                                  }
                                }
                                else {
                                  temp_v14 = FUN_0027f13c();
                                  temp_v19 = temp_v14 == 1;
                                  if (temp_v19) {
                                    temp_v14 = (unsigned int)DAT_0049fab0;
                                  }
                                  if ((temp_v19 && temp_v14 == 0) &&
                                     (temp_v10 = FUN_0027f10c(), temp_v10 != 0)) {
                                    DAT_0049f934 = 1;
                                    DAT_0049f93c = 1;
                                    puVar14[9] = 0x4f;
                                    puVar14[10] = 0;
                                    uStack_1c4 = (unsigned int)DAT_0049fa19;
                                    uStack_1c8 = (unsigned int)DAT_0049fa18;
                                    FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17
                                                );
                                    return 0;
                                  }
                                }
                              }
                              else {
                                if (*(int *)(DAT_004474f4 + 0xac) == 0) {
                                  temp_v14 = FUN_0027f13c();
                                  temp_v19 = temp_v14 == 1;
                                  if (temp_v19) {
                                    temp_v14 = (unsigned int)DAT_0049fab0;
                                  }
                                  if ((temp_v19 && temp_v14 == 0) &&
                                     (temp_v10 = FUN_002bffbc(5), temp_v10 != 0)) goto LAB_001bab68;
                                }
                                if (*(int *)(DAT_004474f4 + 0xac) == 1) {
LAB_001bab68:
                                  FUN_0027fd08(0x13);
                                  DAT_0049f934 = 1;
                                  DAT_0049f93c = 1;
                                  puVar14[9] = 0x42;
                                  puVar14[10] = 0;
                                  return 0;
                                }
                              }
                            }
                            else if (*(int *)(DAT_004474f4 + 0xac) == 0) {
                              temp_v14 = FUN_0027f13c();
                              temp_v19 = temp_v14 == 1;
                              if (temp_v19) {
                                temp_v14 = (unsigned int)DAT_0049fab0;
                              }
                              if ((temp_v19 && temp_v14 == 0) && (temp_v10 = FUN_002bffbc(6), temp_v10 != 0)
                                 ) {
                                FUN_0027fd08(9);
                                DAT_0049f934 = 1;
                                DAT_0049f93c = 1;
                                puVar14[9] = 0x42;
                                puVar14[10] = 0;
                                return 0;
                              }
                            }
                          }
                          else {
                            if (*(int *)(DAT_004474f4 + 0xac) == 0) {
                              temp_v14 = FUN_0027f13c();
                              temp_v19 = temp_v14 == 1;
                              if (temp_v19) {
                                temp_v14 = (unsigned int)DAT_0049fab0;
                              }
                              if ((temp_v19 && temp_v14 == 0) && (temp_v10 = FUN_002bffbc(6), temp_v10 != 0)
                                 ) goto LAB_001baa90;
                            }
                            if (*(int *)(DAT_004474f4 + 0xac) == -1) {
LAB_001baa90:
                              FUN_0027fd08(7);
                              DAT_0049f934 = 1;
                              DAT_0049f93c = 1;
                              puVar14[9] = 0x42;
                              puVar14[10] = 0;
                              return 0;
                            }
                          }
                        }
                        else {
                          temp_v14 = FUN_0027f13c();
                          temp_v19 = temp_v14 == 1;
                          if (temp_v19) {
                            temp_v14 = (unsigned int)DAT_0049fab0;
                          }
                          if ((temp_v19 && temp_v14 == 0) && (temp_v10 = FUN_0027f10c(), temp_v10 != 0)) {
                            DAT_0049f934 = 1;
                            DAT_0049f93c = 1;
                            puVar14[9] = 0x2f;
                            puVar14[10] = 0;
                            FUN_002764a8();
                            break;
                          }
                        }
                      }
                      else {
                        temp_v14 = FUN_0027f13c();
                        temp_v19 = temp_v14 == 1;
                        if (temp_v19) {
                          temp_v14 = (unsigned int)DAT_0049fab0;
                        }
                        if ((temp_v19 && temp_v14 == 0) && (temp_v10 = FUN_0027f10c(), temp_v10 != 0)) {
                          *(short *)(temp_v9 + 0x2c) = (short)(int)DAT_0049f9ac;
                          *(short *)(temp_v9 + 0x2e) = (short)DAT_0049f91c;
                          *(short *)(temp_v9 + 0x30) = (short)DAT_0049f920;
                          *(unsigned int *)(temp_v9 + 0xddc) = DAT_0049f924;
                          *(short *)(temp_v9 + 0x32) = (short)(int)DAT_0049f9b0;
                          *(short *)(temp_v9 + 0x34) = (short)(int)DAT_0049f9b4;
                          *(short *)(temp_v9 + 0x36) = (short)(int)DAT_0049f9b8;
                          *(short *)(temp_v9 + 0x38) = (short)(int)DAT_0049f9bc;
                          *(short *)(temp_v9 + 0x28) = (short)DAT_0049f9c0;
                          *(short *)(temp_v9 + 0x2a) = (short)DAT_0049f9c4;
                          DAT_0049f934 = 1;
                          DAT_0049f93c = 1;
                          DAT_0049f970 = 0;
                          DAT_0049fb69 = 1;
                          temp_v16 = FUN_00291018(puVar14[0x13],0x1b9d70);
                          puVar14[0x2d] = temp_v16;
                          *(float *)(DAT_00447e88 + 0x50) = DAT_0049f9ac;
                          puVar14[9] = 0x34;
                          puVar14[10] = 0;
                          return 0;
                        }
                      }
                    }
                    else {
                      temp_v14 = FUN_0027f13c();
                      temp_v19 = temp_v14 == 1;
                      if (temp_v19) {
                        temp_v14 = (unsigned int)DAT_0049fab0;
                      }
                      if ((temp_v19 && temp_v14 == 0) && (temp_v10 = FUN_0027f10c(), temp_v10 != 0)) {
                        DAT_0049f934 = 1;
                        DAT_0049f93c = 1;
                        puVar14[9] = 0x28;
                        puVar14[10] = 0;
                        return 0;
                      }
                    }
                  }
                  else {
                    temp_v14 = FUN_0027f13c();
                    temp_v19 = temp_v14 == 1;
                    if (temp_v19) {
                      temp_v14 = (unsigned int)DAT_0049fab0;
                    }
                    if ((temp_v19 && temp_v14 == 0) && (temp_v10 = FUN_0027f10c(), temp_v10 != 0)) {
                      DAT_0049f934 = 1;
                      DAT_0049f93c = 1;
                      puVar14[9] = 0x2f;
                      puVar14[10] = 0;
                      return 0;
                    }
                  }
                }
                else {
                  temp_v14 = FUN_0027f13c();
                  temp_v19 = temp_v14 == 1;
                  if (temp_v19) {
                    temp_v14 = (unsigned int)DAT_0049fab0;
                  }
                  if ((temp_v19 && temp_v14 == 0) && (temp_v10 = FUN_0027f10c(), temp_v10 != 0)) {
                    DAT_0049f934 = 1;
                    DAT_0049f93c = 1;
                    if (DAT_0049f9d4 == '\0') goto LAB_001ba68c;
                    FUN_002bcf58(&DAT_0049f978,0x1ba8fc,0x11);
                    puVar14[9] = 0x31;
                    puVar14[10] = 0;
                    FUN_002764a8();
                    break;
                  }
                }
              }
              else {
                temp_v14 = FUN_0027f13c();
                temp_v19 = temp_v14 == 1;
                if (temp_v19) {
                  temp_v14 = (unsigned int)DAT_0049fab0;
                }
                if ((temp_v19 && temp_v14 == 0) && (temp_v10 = FUN_0027f10c(), temp_v10 != 0)) {
                  DAT_0049f934 = 1;
                  DAT_0049f93c = 1;
                  if (DAT_0049f9dc != -1) {
                    temp_v9 = FUN_002764d4();
                    if (*(short *)(temp_v9 + 0x28) == 0) {
                      DAT_0049f978 = 0x5f726373;
                      DAT_0049f97c = (unsigned char *)0x73757566;
                      DAT_0049f980 = &LAB_00305f61;
                    }
                    temp_v8 = *(short *)(temp_v9 + 0x28);
                    goto joined_r0x001ba408;
                  }
                  if (DAT_0049f9d4 == '\0') {
                    temp_v9 = FUN_00328d50(DAT_0049f958);
                    if (temp_v9 == 0) {
                      FUN_0027fd08(0x26);
                      puVar14[9] = 0x52;
                      puVar14[10] = 0;
                      if (DAT_0049f970 != 0) {
                        puVar14[0x19] = DAT_0049f970;
                        FUN_002be7fc(puVar14 + 0x1a,&DAT_0049f978);
                        *(unsigned char *)(puVar14 + 7) = 1;
                      }
                      uStack_1c4 = (unsigned int)DAT_0049fa19;
                      uStack_1c8 = (unsigned int)DAT_0049fa18;
                      FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
                      FUN_002766cc(1);
                      return 0;
                    }
                    goto LAB_001ba450;
                  }
                  FUN_002bcf58(&DAT_0049f978,0x1ba8fc,0x11);
                  puVar14[9] = 0x31;
                  puVar14[10] = 0;
                  FUN_002764a8();
                  break;
                }
              }
            }
            else {
              temp_v14 = FUN_0027f13c();
              temp_v19 = temp_v14 == 1;
              if (temp_v19) {
                temp_v14 = (unsigned int)DAT_0049fab0;
              }
              if ((temp_v19 && temp_v14 == 0) && (temp_v10 = FUN_0027f10c(), temp_v10 != 0)) {
                DAT_0049f934 = 1;
                DAT_0049f93c = 1;
                if (DAT_0049f9dc != -1) {
                  temp_v9 = FUN_002764d4();
                  if (*(short *)(temp_v9 + 0x28) == 0) {
                    DAT_0049f978 = 0x5f726373;
                    DAT_0049f97c = (unsigned char *)0x73757566;
                    DAT_0049f980 = &LAB_00305f61;
                  }
                  temp_v8 = *(short *)(temp_v9 + 0x28);
joined_r0x001ba408:
                  if (temp_v8 == 1) {
                    DAT_0049f980 = &LAB_00315f61;
                    DAT_0049f978 = 0x5f726373;
                    DAT_0049f97c = (unsigned char *)0x73757566;
                  }
                  FUN_00295904(0);
                  puVar14[9] = 0x31;
                  puVar14[10] = 0;
                  FUN_002764a8();
                  return 0;
                }
                if (DAT_0049f9d4 == '\0') {
                  temp_v9 = FUN_00328d50(DAT_0049f958);
                  if (temp_v9 == 0) {
                    FUN_0027fd08(0x26);
                    puVar14[9] = 0x3c;
                    puVar14[10] = 0;
                    *(unsigned char *)(puVar14 + 5) = 1;
                    uStack_1c4 = (unsigned int)DAT_0049fa19;
                    uStack_1c8 = (unsigned int)DAT_0049fa18;
                    FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
                    return 0;
                  }
LAB_001ba450:
                  DAT_0049f934 = 1;
                  DAT_0049f93c = 1;
                  DAT_0049fb6a = 1;
                  temp_v16 = FUN_00291018(puVar14[0x13],0x1ba554);
                  puVar14[0x2d] = temp_v16;
                  temp_v9 = 0x34;
                  temp_v16 = 0;
                  *(float *)(DAT_00447e88 + 0x50) = DAT_0049f9ac;
                  puVar14[9] = temp_v9;
                  puVar14[10] = temp_v16;
                  break;
                }
                FUN_002bcf58(&DAT_0049f978,0x1ba8fc,0x11);
                puVar14[9] = 0x31;
                puVar14[10] = 0;
                FUN_002764a8();
                break;
              }
            }
          }
          else {
            temp_v14 = FUN_0027f13c();
            temp_v19 = temp_v14 == 1;
            if (temp_v19) {
              temp_v14 = (unsigned int)DAT_0049fab0;
            }
            if ((temp_v19 && temp_v14 == 0) && (temp_v10 = FUN_0027f10c(), temp_v10 != 0)) {
              DAT_0049f934 = 1;
              DAT_0049f93c = 1;
              FUN_0027fd08(0x26);
              puVar14[9] = 0x3c;
              puVar14[10] = 0;
              *(unsigned char *)((int)puVar14 + 0x13) = 1;
              puVar14[0xe] = DAT_0049f990;
              uStack_1c4 = (unsigned int)DAT_0049fa19;
              uStack_1c8 = (unsigned int)DAT_0049fa18;
              FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
              return 0;
            }
          }
        }
        else {
          temp_v14 = FUN_0027f13c();
          temp_v19 = temp_v14 == 1;
          if (temp_v19) {
            temp_v14 = (unsigned int)DAT_0049fab0;
          }
          if ((temp_v19 && temp_v14 == 0) && (temp_v10 = FUN_0027f10c(), temp_v10 != 0)) {
            temp_v9 = FUN_002857e4();
            if ((temp_v9 == 0) || (temp_v9 = FUN_0027dbd8(), temp_v9 == -1)) {
              DAT_0049f934 = 1;
              DAT_0049f93c = 1;
              DAT_0049fb6a = 1;
              temp_v16 = FUN_00291018(puVar14[0x13],0x1ba554);
              puVar14[0x2d] = temp_v16;
              temp_v9 = 0x34;
              temp_v16 = 0;
              *(float *)(DAT_00447e88 + 0x50) = DAT_0049f9ac;
              puVar14[9] = temp_v9;
              puVar14[10] = temp_v16;
              break;
            }
            DAT_0049f934 = 1;
            DAT_0049f93c = 1;
            FUN_002bcf58(&DAT_0049f978,0x1ba8fc,0x11);
            puVar14[9] = 0x31;
            puVar14[10] = 0;
            FUN_002764a8();
            break;
          }
        }
        goto LAB_001bb0d4;
      }
      temp_v14 = FUN_0027f13c();
      temp_v19 = temp_v14 == 1;
      if (temp_v19) {
        temp_v14 = (unsigned int)DAT_0049fab0;
      }
      if ((!temp_v19 || temp_v14 != 0) || (temp_v10 = FUN_0027f10c(), temp_v10 == 0)) goto LAB_001bb0d4;
      DAT_0049f934 = 1;
      DAT_0049f93c = 1;
      if (DAT_0049f9d4 == '\0') {
        FUN_0027fd08(0x26);
        puVar14[9] = 0x3c;
        puVar14[10] = 0;
        *(unsigned char *)((int)puVar14 + 0x12) = 1;
        uStack_1c4 = (unsigned int)DAT_0049fa19;
        uStack_1c8 = (unsigned int)DAT_0049fa18;
        FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
        return 0;
      }
      FUN_002bcf58(&DAT_0049f978,0x1ba8fc,0x11);
      puVar14[9] = 0x31;
      puVar14[10] = 0;
    }
    else {
      uStack_1c4 = (unsigned int)DAT_0049fa19;
      uStack_1c8 = (unsigned int)DAT_0049fa18;
      FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
      if (DAT_0049f994 != 0) {
        uStack_1c8 = 0;
        uStack_1c4 = 0;
        FUN_0028550c(DAT_0049f994 & 0xff,DAT_0049f998 & 0xff,0);
      }
      DAT_0049f924 = DAT_0049f990;
      FUN_002766f0(DAT_0049f928,DAT_0049f92c);
      FUN_00276bc0(DAT_0049f928);
LAB_001bb0d4:
      if ((*(char *)(DAT_00447e58 + 0xe0c) != '\0') &&
         ((((temp_v10 = FUN_0027f13c(), temp_v10 == 1 && (DAT_0049fab0 == 0)) &&
           (temp_v10 = FUN_0027f10c(), temp_v10 != 0)) && (*(char *)(DAT_004474f4 + 0xb0) == '\0')))) {
        DAT_0049f934 = 1;
        DAT_0049f93c = 1;
        puVar14[9] = 0x2d;
        puVar14[10] = 0;
        return 0;
      }
      if (((puVar14[9] == 0x15) && (DAT_0049fc8c != 1)) &&
         ((temp_v10 = FUN_0027f13c(), temp_v10 == 1 && (*(char *)(DAT_004474f4 + 0xb0) == '\0')))) {
        if ((*(int *)(DAT_004474f4 + 0xac) != 0) && (temp_v10 = FUN_00276550(), temp_v10 != 0)) {
          *(unsigned int *)(DAT_004474f4 + 0xac) = 0;
          FUN_00276170();
          if (*(int *)(DAT_00447e88 + 0x188) == 0) {
            *(unsigned int *)(DAT_00447e88 + 0x188) = 2;
          }
        }
        else {
          temp_v14 = FUN_0027f13c();
          temp_v19 = temp_v14 != 1;
          if (!temp_v19) {
            temp_v14 = (unsigned int)DAT_0049fab0;
          }
          if ((!(temp_v19 || temp_v14 != 0)) &&
             (temp_v12 = FUN_002bffbc(5), temp_v10 = DAT_004474f4, temp_v12 != 0)) {
            *(unsigned int *)(DAT_004474f4 + 0xa8) = 10;
            temp_v12 = *(int *)(temp_v10 + 0xac);
            if (temp_v12 == 0) {
              *(unsigned int *)(temp_v10 + 0xac) = 2;
              temp_v16 = 0xda;
              FUN_002b8b78(temp_v16);
            }
            else if (temp_v12 != -1) {
              if (temp_v12 != 2) {
                if (temp_v12 == 0) {
                  FUN_00276170();
                }
              }
              else {
                temp_v16 = 0xda;
                FUN_002b8b78(temp_v16);
              }
            }
            else {
              *(unsigned int *)(temp_v10 + 0xac) = 0;
              FUN_00276170();
            }
          }
          else {
            temp_v14 = FUN_0027f13c();
            temp_v19 = temp_v14 == 1;
            if (temp_v19) {
              temp_v14 = (unsigned int)DAT_0049fab0;
            }
            if ((temp_v19 && temp_v14 == 0) &&
               (temp_v12 = FUN_002bffbc(6), temp_v10 = DAT_004474f4, temp_v12 != 0)) {
              *(unsigned int *)(DAT_004474f4 + 0xa8) = 10;
              temp_v12 = *(int *)(temp_v10 + 0xac);
              if (temp_v12 == 2) {
                *(unsigned int *)(temp_v10 + 0xac) = 0;
                FUN_00276170();
              }
              else {
                temp_v19 = temp_v12 == 0;
                if (temp_v19) {
                  temp_v12 = -1;
                  *(unsigned int *)(temp_v10 + 0xac) = 0xffffffff;
                }
                if (temp_v19 || temp_v12 == -1) {
                  temp_v16 = 0xdb;
                  FUN_002b8b78(temp_v16);
                }
                else if (temp_v12 == 0) {
                  FUN_00276170();
                }
              }
            }
          }
        }
      }
      temp_v19 = DAT_0049fc84 == 0;
      temp_v10 = DAT_0049fc84;
      if (temp_v19) {
        temp_v10 = DAT_0049fc8c;
      }
      temp_v18 = temp_v19 && temp_v10 == 0;
      if (temp_v19 && temp_v10 == 0) {
        temp_v18 = DAT_0049fa98 == '\0';
      }
      if (temp_v18) {
        temp_v11 = FUN_0027f13c();
        temp_v14 = temp_v11;
        if (temp_v11 != 0x1f) {
          temp_v14 = DAT_0049f91c;
        }
        if (((temp_v11 != 0x1f && temp_v14 != 0x24) && (*(int *)(DAT_004474f4 + 0xac) == 0)) &&
           (temp_v10 = FUN_002c9c1c(), temp_v10 != 0)) {
          DAT_0049f934 = 1;
          DAT_0049f93c = 1;
          FUN_0027fd08(0x1c);
          temp_v9 = 0x17;
          temp_v16 = 0;
          puVar14[9] = temp_v9;
          puVar14[10] = temp_v16;
          break;
        }
      }
      if (*(char *)((int)puVar14 + 0xba) == '\0') {
        FUN_001d33ac(puVar14[0xb],puVar14[0xc]);
        *(unsigned char *)((int)puVar14 + 0xba) = 1;
      }
      if (*(char *)(temp_v9 + 0xdc8) == '\0') {
        temp_v9 = func_0x002d2a94();
        if (temp_v9 == -1) {
          return 0;
        }
        if (DAT_0049fab5 != '\0') {
          func_0x001d2e4c();
          return 0;
        }
        if (DAT_0049fc88 == 0) {
          FUN_00276088();
          return 0;
        }
        FUN_00276488();
        FUN_002760bc();
        puVar14[0x2c] = temp_v9;
        *(unsigned char *)((int)puVar14 + 0xd) = 1;
        puVar14[9] = 0x6e;
        puVar14[10] = 0;
        FUN_002b91c4(0x1000184);
        if (DAT_0049fad4 != 0) {
          puVar14[9] = 0x4d;
          puVar14[0x19] = DAT_0049fad4;
          puVar14[0x22] = DAT_0049fad8;
          DAT_0049f9ac = DAT_0049fc50;
          DAT_0049f9b0 = DAT_0049fc40;
          DAT_0049f9b4 = DAT_0049fc44;
          DAT_0049f9b8 = DAT_0049fc48;
          return 0;
        }
        FUN_0027605c();
        return 0;
      }
      *(unsigned char *)(temp_v9 + 0xdc8) = 0;
      FUN_0027fd08(2);
      DAT_0049f934 = 1;
      DAT_0049f93c = 1;
      DAT_0049f954 = 0xffffffff;
      DAT_0049f9ac = *(float *)(DAT_00447e88 + 0x50);
      FUN_002bcf58(&DAT_0049f978,0x1bb794,0xe);
      puVar14[9] = 0x31;
      puVar14[10] = 0;
    }
    FUN_002764a8();
    break;
  case 0x17:
    if (puVar14[10] == 0) {
      if (iRam00447e2c % 3 == 0) {
        FUN_002bf9e8(0x1000241,(iRam00447e2c / 3) * -3,iRam00447e2c * 0x55555556);
      }
      temp_v9 = DAT_00447e88;
      iRam00447e2c = iRam00447e2c + 1;
      puVar23 = (unsigned int *)(DAT_00447e88 + 0x20);
      temp_v16 = *(unsigned int *)(DAT_00447e88 + 0x24);
      *(unsigned int *)(DAT_00447e88 + 0x28) = *(unsigned int *)(DAT_00447e88 + 0x1c);
      *(unsigned int *)(temp_v9 + 0x2c) = *puVar23;
      *(unsigned int *)(temp_v9 + 0x30) = temp_v16;
    }
    if (puVar14[10] == 10) {
      DAT_0049fb48 = 1;
      FUN_00276034();
      FUN_00275e58(1);
      FUN_00275e38();
    }
    if (puVar14[10] == 0xb) {
      DAT_0049f93e = 1;
      *(unsigned char *)(DAT_004474d8 + 10) = 0;
      FUN_00275ca0();
      FUN_0027de14();
    }
    temp_v9 = puVar14[10];
    puVar14[10] = temp_v9 + 1;
    if (temp_v9 + 1 >= 0xd) {
      FUN_00275c2c();
      FUN_00275b48();
      FUN_00275a8c();
      temp_v5 = FUN_00275a38();
      *(unsigned char *)((int)puVar14 + 0xbb) = temp_v5;
      FUN_0028a688(0);
      puVar14[9] = 0x18;
      puVar14[10] = 0;
      temp_v9 = DAT_00447e88;
      *(unsigned int *)(DAT_00447e88 + 0x54) = 0;
      *(unsigned int *)(temp_v9 + 0x58) = 0;
      uStack_1b8 = 0x1e;
      uStack_1b4 = 0x96;
      uStack_1b0 = 0x96;
      uStack_1ac = 0x96;
      uStack_1c8 = 0x82;
      uStack_1c4 = 0x82;
      uStack_1c0 = 0x1e;
      uStack_1bc = (unsigned int)0x1e;
      FUN_00294ad8(200,200,200,0x82);
    }
    func_0x002767b0();
    return 0;
  case 0x18:
    puVar14[10] = puVar14[10] + 1;
    temp_v10 = FUN_002b89d4();
    if (temp_v10 != 0) {
      return 0;
    }
    DAT_0049fb48 = 0;
    FUN_00280d30(1);
    DAT_0049f93e = 0;
    FUN_00275a18();
    FUN_00275984();
    FUN_0027d700(puVar14[0xc]);
    FUN_00275818();
    FUN_002755d4();
    FUN_0027549c();
    FUN_0027521c();
    FUN_00274a08();
    *(unsigned char *)(DAT_004474d8 + 10) = 1;
    FUN_00275ca0();
    FUN_0029b0fc(*(unsigned int *)(DAT_00447e88 + 0x194));
    FUN_00274230();
    FUN_0020d7b8();
    FUN_00274200();
    puVar14[9] = 0x19;
    puVar14[10] = 0;
    pcVar13 = (char *)FUN_002741f4();
    if (pcVar13[4] == '\0') {
      return 0;
    }
    if (pcVar13[1] != '\0') {
      temp_v14 = (unsigned int)*(unsigned short *)(pcVar13 + 8);
      FUN_002b6700();
      DAT_0049fa82 = *(short *)(temp_v14 + 2);
      FUN_002bf86c(&DAT_0049fa84,temp_v14 + 0x138);
      DAT_0049fa80 = 1;
    }
    else if (pcVar13[3] != '\0') {
      DAT_0049fa96 = 1;
    }
    *(unsigned short *)(temp_v9 + 0x22) = 0;
    FUN_002741cc();
    FUN_0027dbb8();
    FUN_0027db78();
    if (pcVar13[2] != '\0') {
      DAT_0049fa94 = 1;
    }
    if (*pcVar13 != '\0') {
      puVar14[9] = 0x1b;
      puVar14[10] = 0;
      return 0;
    }
    *(unsigned short *)(temp_v9 + 0x1e) = *(unsigned short *)(pcVar13 + 6);
    FUN_00273fa4();
    FUN_00273ec4();
    if (*(char *)((int)puVar14 + 0xbb) == '\0') {
      temp_v9 = 1;
      FUN_001f9290();
      if (temp_v9 != 0) {
        FUN_00276088();
      }
    }
    else {
      FUN_00276088();
    }
    FUN_00273de8();
    FUN_0027d35c();
    break;
  case 0x19:
    temp_v9 = FUN_002d3f60();
    if (temp_v9 == 0) {
      return 0;
    }
    FUN_00275e58(0);
    if (DAT_0049f950 != '\0') {
      temp_v9 = 0x6f;
      temp_v16 = 0;
      puVar14[9] = temp_v9;
      puVar14[10] = temp_v16;
      break;
    }
    temp_v9 = FUN_0027f13c();
    if (temp_v9 == 0x1c) {
      *(unsigned int *)(DAT_00447e88 + 4) = 0x14;
    }
    temp_v9 = 0x1a;
    temp_v16 = 0;
    puVar14[9] = temp_v9;
    puVar14[10] = temp_v16;
    break;
  case 0x1a:
    puVar14[10] = puVar14[10] + 1;
    temp_v9 = FUN_0027f13c();
    if ((temp_v9 == 0x1c) && (func_0x002767b0(), *(int *)(DAT_00447e88 + 4) >= 100)) {
      puVar14[10] = 999;
    }
    else if ((int)puVar14[10] < 0x15) {
      return 0;
    }
    *(unsigned short *)(DAT_004474f4 + 0xb2) = 0xd;
    puVar14[9] = 0x15;
    puVar14[10] = 0;
    FUN_0027fd08(1);
    DAT_0049f934 = 0;
    DAT_0049f93c = 0;
    break;
  case 0x1b:
    temp_v9 = FUN_002d3f60();
    if (temp_v9 == 0) {
      return 0;
    }
    if (puVar14[10] == 0) {
      FUN_00275e58(0);
    }
    temp_v9 = puVar14[10];
    puVar14[10] = temp_v9 + 1;
    if (temp_v9 + 1 == 0x16) {
      FUN_002b91c4(0x1000184);
      FUN_0027605c();
    }
    if (puVar14[10] != 0x17) {
      return 0;
    }
    FUN_00276488();
    FUN_002760bc();
    temp_v9 = 0x6e;
    temp_v16 = 0;
    *(unsigned char *)((int)puVar14 + 0xd) = 1;
    puVar14[9] = temp_v9;
    puVar14[10] = temp_v16;
    break;
  case 0x1c:
    func_0x002767b0();
    if (puVar14[10] == 0) {
      FUN_0028d908(DAT_00432fc8 + 0xa8,1);
      FUN_00273ab0(1);
      puVar14[10] = puVar14[10] + 1;
      return 0;
    }
    temp_v9 = FUN_00273bfc(DAT_00432fc8 + 0xa8);
    if (temp_v9 != 0) {
      FUN_00291a08(DAT_00432fc8 + 0xa8);
      if ((int)DAT_0049fd14 >= 0) {
        (*(unsigned short *)((unsigned char *)&uStack_1c8 + 0)) = romwright_piece_1_1((char)DAT_0049f91c,1);
        uStack_1c8._0_3_ = romwright_piece_1_2((char)DAT_0049f920,(unsigned short)uStack_1c8);
        uStack_1c8 = romwright_piece_1_3((char)DAT_0049f924,(undefined3)uStack_1c8);
        uStack_1c4 = *(unsigned int *)(DAT_00447e88 + 0x1c);
        uStack_1c0 = *(unsigned int *)(DAT_00447e88 + 0x20);
        uStack_1bc = (unsigned int)*(unsigned char **)(DAT_00447e88 + 0x24);
        uStack_1b8 = *(int *)(DAT_00447e88 + 0x4c);
        uStack_1b4 = *(unsigned int *)(DAT_004474f4 + 0x18);
        FUN_00273bdc(&uStack_1c8);
        FUN_00276488();
        FUN_00273ab0(0);
        puVar14[9] = 0x6f;
        puVar14[10] = 0;
      }
      else if (DAT_0049f970 != 0) {
        (*(unsigned short *)((unsigned char *)&uStack_1c8 + 0)) = romwright_piece_1_1((char)DAT_0049f91c,1);
        uStack_1c8._0_3_ = romwright_piece_1_2((char)DAT_0049f920,(unsigned short)uStack_1c8);
        uStack_1c8 = romwright_piece_1_3((char)DAT_0049f924,(undefined3)uStack_1c8);
        uStack_1c4 = *(unsigned int *)(DAT_00447e88 + 0x1c);
        uStack_1c0 = *(unsigned int *)(DAT_00447e88 + 0x20);
        uStack_1bc = (unsigned int)*(unsigned char **)(DAT_00447e88 + 0x24);
        uStack_1b8 = *(int *)(DAT_00447e88 + 0x4c);
        uStack_1b4 = *(unsigned int *)(DAT_004474f4 + 0x18);
        FUN_00273bdc(&uStack_1c8);
        FUN_00276488();
        FUN_00273ab0(0);
        FUN_002760bc();
        puVar14[9] = 0x6f;
        puVar14[10] = 0;
        *(unsigned char *)(puVar14 + 5) = 1;
      }
      else {
        FUN_00289770();
        FUN_00276170();
        FUN_0027fd08(1);
        DAT_0049f934 = 0;
        DAT_0049f93c = 0;
        puVar14[9] = 0x15;
        puVar14[10] = 0;
        FUN_00273ab0(0);
        FUN_0027d35c();
      }
      if (temp_v9 != 2) goto LAB_001bbc00;
    }
    else {
LAB_001bbc00:
      temp_v14 = *(unsigned int *)(DAT_00432fc8 + 0x754);
      *(unsigned int *)(DAT_00432fc8 + 0x754) = temp_v14 & 0xffffff8f;
      if ((temp_v14 & 0x10) == 0) {
        return 0;
      }
    }
    FUN_0027fd08(2);
    DAT_0049f934 = 1;
    DAT_0049f93c = 1;
    puVar14[9] = 0x21;
    puVar14[10] = 0;
    temp_v16 = 1;
    FUN_00273ab0(temp_v16);
    break;
  case 0x1d:
    func_0x002767b0();
    if (puVar14[10] == 0) {
      FUN_00273a98();
    }
    FUN_00276cac();
    FUN_00274230();
    puVar14[10] = puVar14[10] + 1;
    temp_v9 = FUN_00273a78();
    if (temp_v9 == 0) {
      temp_v9 = DAT_00432fc8 + 0xa8;
      FUN_00289654(temp_v9,0);
      if (temp_v9 != 0) {
        puVar14[9] = 0x6f;
        puVar14[10] = 0;
        FUN_00291000(0);
      }
    }
    break;
  case 0x1e:
    func_0x002767b0();
    if (puVar14[10] == 0) {
      FUN_002738b4(DAT_00432fc8 + 0xa8);
      FUN_0027fd08(2);
      FUN_002b8b70();
      *(unsigned char *)((int)puVar14 + 0x47) = 0;
      FUN_002c0128();
      puVar14[10] = puVar14[10] + 1;
      return 0;
    }
    temp_v9 = FUN_00273958(DAT_00432fc8 + 0xa8);
    if (temp_v9 == 0) {
      return 0;
    }
    FUN_0027390c(DAT_00432fc8 + 0xa8);
    FUN_00276170();
    FUN_00273de8();
    *(unsigned char *)(DAT_004474f4 + 0xa4) = 1;
    FUN_0027fd08(1);
    *(unsigned char *)((int)puVar14 + 0x47) = 1;
    *(unsigned char *)(DAT_004474f4 + 0xa4) = 1;
    DAT_0049f934 = 0;
    DAT_0049f93c = 0;
    puVar14[9] = 0x15;
    puVar14[10] = 0;
    FUN_0027d35c();
    break;
  case 0x1f:
    temp_v9 = DAT_00432fc8 + 0xa8;
    FUN_00289654(temp_v9,0);
    goto joined_r0x001bfbb4;
  case 0x20:
    func_0x002767b0();
    if (puVar14[10] == 0) {
      FUN_0027368c(DAT_00432fc8 + 0xa8,1);
      FUN_00273ab0(1);
      temp_v10 = puVar14[10] + 1;
      puVar14[10] = temp_v10;
      break;
    }
    temp_v9 = FUN_00273760(DAT_00432fc8 + 0xa8);
    if (temp_v9 == 0) {
      return 0;
    }
    FUN_002736fc(DAT_00432fc8 + 0xa8);
    FUN_00276170();
    temp_v9 = FUN_0029066c();
    if (temp_v9 != 0) {
      temp_v9 = 0x1d;
      temp_v16 = 0;
      puVar14[9] = temp_v9;
      puVar14[10] = temp_v16;
      break;
    }
LAB_001bbf08:
    FUN_0027fd08(1);
    DAT_0049f934 = 0;
    DAT_0049f93c = 0;
    puVar14[9] = 0x15;
    puVar14[10] = 0;
    FUN_00273ab0(0);
    FUN_0027d35c();
    break;
  case 0x21:
    func_0x002767b0();
    temp_v9 = DAT_00432fc8;
    temp_v14 = *(unsigned int *)(DAT_00432fc8 + 0x754);
    if ((temp_v14 & 4) != 0 || (temp_v14 & 8) != 0) {
      return 0;
    }
    if (puVar14[10] == 0) {
      *(unsigned int *)(DAT_00432fc8 + 0x754) = temp_v14 & 0xffffff8f;
      FUN_00289870(temp_v9 + 0xa8,1);
      temp_v10 = puVar14[10] + 1;
      puVar14[10] = temp_v10;
      break;
    }
    temp_v9 = FUN_0027375c(DAT_00432fc8 + 0xa8);
    if (temp_v9 == 0) {
      return 0;
    }
    FUN_00289810(DAT_00432fc8 + 0xa8);
    FUN_00276170();
    temp_v9 = FUN_0029066c();
    if (temp_v9 == 0) goto LAB_001bbf08;
    temp_v9 = 0x1d;
    temp_v16 = 0;
    puVar14[9] = temp_v9;
    puVar14[10] = temp_v16;
    break;
  case 0x22:
    FUN_00276c24(0xffffffff,0xffffffff);
    func_0x002767b0();
    uStack_1c8 = 0;
    uStack_1c4 = DAT_0049f958;
    FUN_0027ee6c(&uStack_1c8,0x20);
    func_0x00273640();
    DAT_0049fb47 = 1;
    puVar14[9] = 0x23;
    puVar14[10] = 0;
    break;
  case 0x23:
    func_0x002767b0();
    temp_v12 = FUN_0027ee10();
    temp_v10 = DAT_004474f4;
    if (temp_v12 != 0) {
      return 0;
    }
    if (DAT_0049fd14 == 0xffffffff) {
      *(unsigned int *)(DAT_004474f4 + 0x18) = *(unsigned int *)(DAT_00447e88 + 0x50);
      *(unsigned int *)(temp_v10 + 0xac) = 0;
      *(unsigned char *)(temp_v10 + 0xa4) = 1;
      FUN_0027fe84(0);
      FUN_00273ab0(0);
      FUN_0027fd08(1);
      *(unsigned char *)((int)puVar14 + 0x47) = 1;
      DAT_0049fb47 = 0;
      DAT_0049f934 = 0;
      DAT_0049f93c = 0;
      puVar14[9] = 0x15;
      puVar14[10] = 0;
      return 0;
    }
    if (DAT_0049f9d0 < 99) {
      FUN_002bf9e8(DAT_0049f9d0 + 0x10000af);
    }
    temp_v8 = *(short *)(temp_v9 + 0x28);
    if (temp_v8 != 1) {
      if (temp_v8 != 2) {
        if (temp_v8 == 3) {
          FUN_0027d81c(0);
        }
        temp_v9 = 0x6c;
        temp_v16 = 0;
        puVar14[9] = temp_v9;
        puVar14[10] = temp_v16;
        break;
      }
      temp_v9 = 0;
    }
    else {
      temp_v9 = FUN_0027636c((int)*(short *)(temp_v9 + 0x2a));
      temp_v9 = (int)*(short *)(temp_v9 + 8);
    }
    FUN_0027d81c(temp_v9);
    temp_v9 = 0x6c;
    temp_v16 = 0;
    puVar14[9] = temp_v9;
    puVar14[10] = temp_v16;
    break;
  case 0x24:
    FUN_0027fd08(5);
    puVar14[10] = puVar14[10] + 1;
    func_0x002767b0();
    temp_v16 = 0;
    temp_v9 = 0x25;
    DAT_0049fb45 = 0;
    puVar14[9] = temp_v9;
    puVar14[10] = temp_v16;
    break;
  case 0x25:
    func_0x002767b0();
    temp_v9 = FUN_002eb0f4();
    if (temp_v9 == 0) {
      FUN_0027ff10(0);
      temp_v9 = DAT_004474f4;
      if (DAT_0049fa3a != '\0') {
        *(unsigned int *)(DAT_004474f4 + 0xac) = 0;
        *(unsigned char *)(temp_v9 + 0xa4) = 1;
        FUN_0027fe84(0);
        FUN_00273ab0(0);
        FUN_0027fd08(2);
        puVar14[9] = 0x26;
        puVar14[10] = 0;
      }
      else if (DAT_0049fa58 != '\0') {
        FUN_002b8b70();
        temp_v16 = FUN_002be828(DAT_0049fa5c,1);
        FUN_002bd348(temp_v16,temp_v22);
        FUN_00295904(0,temp_v22);
        FUN_002c0128();
        temp_v16 = FUN_00291018(puVar14[0x13],0x1bc4a4);
        puVar14[0x2d] = temp_v16;
        FUN_002971e4(puVar14[0x15],temp_v16);
        puVar14[9] = 0x27;
        puVar14[10] = 0;
      }
      else {
        FUN_00273610(2);
        temp_v9 = DAT_004474f4;
        *(unsigned int *)(DAT_004474f4 + 0xac) = 0;
        *(unsigned char *)(temp_v9 + 0xa4) = 1;
        FUN_0027fe84(0);
        FUN_00273ab0(0);
        FUN_0027fd08(1);
        DAT_0049fb45 = 1;
        DAT_0049f934 = 0;
        DAT_0049f93c = 0;
        puVar14[9] = 0x15;
        puVar14[10] = 0;
      }
    }
    break;
  case 0x26:
    puVar14[10] = puVar14[10] + 1;
    func_0x002767b0();
    if ((int)puVar14[10] >= 11) {
      puVar14[0x19] = DAT_0049fa3c;
      FUN_002be7fc(puVar14 + 0x1a,&DAT_0049fa40);
      DAT_0049fa3a = '\0';
      DAT_0049f934 = 1;
      DAT_0049f93c = 1;
      DAT_0049f954 = 0x38;
      puVar14[9] = 0x36;
      puVar14[10] = 0;
    }
    break;
  case 0x27:
    func_0x002767b0();
    puVar14[10] = puVar14[10] + 1;
    temp_v9 = FUN_0019dfbc(puVar14[0x15]);
    if (temp_v9 == 2) {
      DAT_0049fa58 = '\0';
      DAT_0049fa5c = 0;
      FUN_00273610(2);
      temp_v9 = DAT_004474f4;
      *(unsigned int *)(DAT_004474f4 + 0xac) = 0;
      *(unsigned char *)(temp_v9 + 0xa4) = 1;
      FUN_0027fe84(0);
      FUN_00273ab0(0);
      FUN_0027fd08(1);
      DAT_0049fb45 = 1;
      DAT_0049f934 = 0;
      DAT_0049f93c = 0;
      puVar14[9] = 0x15;
      puVar14[10] = 0;
    }
    break;
  case 0x28:
    *(float *)(DAT_00447e88 + 0x50) = DAT_0049f9ac;
    *(float *)(DAT_004474f4 + 0x18) = temp_v2;
    FUN_002b8b70();
    FUN_002735c8(1);
    FUN_0027fd08(2);
    FUN_0027154c();
    FUN_00276cac();
    FUN_00274230();
    FUN_002c0128();
    FUN_002971e4(puVar14[0x15],0);
    DAT_0049fb45 = 0;
    DAT_0049fb46 = 0;
    func_0x00273640();
    puVar14[9] = puVar14[9] + 1;
    puVar14[10] = 0;
    break;
  case 0x29:
    FUN_0027154c();
    FUN_00276cac();
    FUN_00274230();
    temp_v10 = FUN_0019dfbc(puVar14[0x15]);
    if (temp_v10 != 2) {
      return 0;
    }
    temp_v10 = FUN_00297674();
    if (temp_v10 != 0) {
      FUN_00276170();
      FUN_002735c8(0xffffffff);
      FUN_0027fd08(1);
      DAT_0049fb45 = 1;
      DAT_0049fb46 = 1;
      DAT_0049f934 = 0;
      DAT_0049f93c = 0;
      puVar14[9] = 0x15;
      puVar14[10] = 0;
      return 0;
    }
    if (DAT_0049f970 != 0) {
      FUN_002760bc();
      puVar14[9] = 0x6c;
      puVar14[10] = 0;
      *(unsigned char *)(puVar14 + 5) = 1;
      return 0;
    }
    temp_v10 = FUN_002857e4();
    if (temp_v10 != 0) {
      uStack_1c4 = (unsigned int)DAT_0049fa19;
      uStack_1c8 = (unsigned int)DAT_0049fa18;
      FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
      FUN_002235ac();
    }
    else {
      temp_v10 = (int)*(short *)(temp_v9 + 0x38);
      VectorSignedToFloat((int)*(short *)(temp_v9 + 0x32),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v9 + 0x36),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v9 + 0x34),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002897dc((int)*(short *)(temp_v9 + 0x2e),(int)*(short *)(temp_v9 + 0x30),
                   *(unsigned int *)(temp_v9 + 0xddc),temp_v10);
    }
    temp_v9 = 0x6c;
    temp_v16 = 0;
    puVar14[9] = temp_v9;
    puVar14[10] = temp_v16;
    break;
  case 0x2a:
    *(float *)(DAT_00447e88 + 0x50) = DAT_0049f9ac;
    *(float *)(DAT_004474f4 + 0x18) = temp_v2;
    FUN_002b8b70();
    FUN_002735c8(1);
    FUN_0027fd08(2);
    func_0x002767b0();
    FUN_002c0128();
    FUN_002971e4(puVar14[0x15],puVar14[0x2d]);
    DAT_0049fb45 = 0;
    DAT_0049fb46 = 0;
    func_0x00273640();
    puVar14[9] = puVar14[9] + 1;
    puVar14[10] = 0;
    break;
  case 0x2b:
    func_0x002767b0();
    temp_v10 = FUN_0019dfbc(puVar14[0x15]);
    if (temp_v10 != 2) {
      return 0;
    }
    DAT_0049fb6a = 0;
    temp_v10 = FUN_00297674();
    if (temp_v10 != 0) {
      FUN_00276170();
      FUN_002735c8(0xffffffff);
      FUN_0027fd08(1);
      DAT_0049fb45 = 1;
      DAT_0049fb46 = 1;
      DAT_0049f934 = 0;
      DAT_0049f93c = 0;
      puVar14[9] = 0x15;
      puVar14[10] = 0;
      return 0;
    }
    uStack_1c4 = (unsigned int)DAT_0049fa19;
    uStack_1c8 = (unsigned int)DAT_0049fa18;
    FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
    temp_v8 = *(short *)(temp_v9 + 0x28);
    temp_v7 = *(short *)(temp_v9 + 0x2a);
    temp_v10 = FUN_002857e4();
    if (temp_v10 != 2) {
      FUN_00276488();
      func_0x002763a8();
      *(unsigned char *)(temp_v9 + 0x790) = 1;
      if (temp_v8 == 1) {
        temp_v9 = FUN_0027636c((int)temp_v7);
        DAT_0049f970 = (unsigned int)*(short *)(temp_v9 + 0x12);
        FUN_002bf86c(&DAT_0049f978,temp_v9 + 0x14);
        FUN_002bf9e8(0x10000bc);
        puVar14[9] = 0x6c;
        puVar14[10] = 0;
        *(unsigned char *)(puVar14 + 5) = 1;
        return 0;
      }
      if (temp_v8 != 2) {
        if (temp_v8 != 3) {
          return 0;
        }
        FUN_002bf9e8(0x10000bc);
        DAT_0049f970 = 0x382;
        DAT_0049f978 = 0x38393865;
        DAT_0049f97c = &LAB_0031305f;
        puVar14[9] = 0x6c;
        puVar14[10] = 0;
        *(unsigned char *)(puVar14 + 5) = 1;
        return 0;
      }
      FUN_002b91c4(0x1000184);
      *(unsigned char *)((int)puVar14 + 0xd) = 1;
      temp_v9 = FUN_00287b10((int)temp_v7);
      FUN_0027db24((int)*(short *)(temp_v9 + 0x10));
      puVar14[9] = 0x6e;
      puVar14[10] = 0;
      DAT_0049f9c8 = 1;
      FUN_0027605c();
      return 0;
    }
    FUN_00276488();
    func_0x002763a8();
    DAT_0049f970 = 0x71;
    DAT_0049f978 = 0x33313165;
    DAT_0049f97c = &LAB_0031305f;
    FUN_0027d81c(0);
    FUN_002854ec(0);
    FUN_002bf9e8(0x10000bc);
    puVar14[9] = 0x6c;
    puVar14[10] = 0;
    *(unsigned char *)(puVar14 + 5) = 1;
    break;
  case 0x2c:
    if (DAT_0049f91c == 4) {
      FUN_002bf9e8(0x10000b6);
    }
    if (DAT_0049f91c == 0x20) {
      FUN_002bf9e8(0x10000be);
    }
    FUN_00276c24(0x18,1,0);
    puVar14[9] = 0x6c;
    puVar14[10] = 0;
    temp_v8 = *(short *)(temp_v9 + 0x28);
    if (temp_v8 != 1) {
      if (temp_v8 != 2) {
        if (temp_v8 != 3) {
          return 0;
        }
        FUN_0027d81c(0);
        return 0;
      }
      temp_v9 = 0;
    }
    else {
      temp_v9 = FUN_0027636c((int)*(short *)(temp_v9 + 0x2a));
      temp_v9 = (int)*(short *)(temp_v9 + 8);
    }
    FUN_0027d81c(temp_v9);
    break;
  case 0x2d:
    temp_v14 = DAT_00447e58 + 0xe00;
    temp_v19 = *(char *)(DAT_00447e58 + 0xe1c) == '\0';
    if (temp_v19) {
      temp_v14 = (unsigned int)*(unsigned char *)(DAT_00447e58 + 0xe1d);
    }
    if (!(temp_v19 && temp_v14 == 0)) {
      FUN_0027fd08(0x21);
      FUN_00271280(1);
      FUN_0027fe84(4);
      FUN_00273ab0(1);
      *(unsigned char *)((int)puVar14 + 0x47) = 0;
      DAT_0049fb45 = 0;
      DAT_0049f934 = 1;
      DAT_0049f93c = 1;
      DAT_0049f970 = 0;
      func_0x002767b0();
      FUN_002c0128();
      temp_v16 = FUN_00291018(puVar14[0x16],DAT_00447e58 + 0xe1c);
      puVar14[0x2d] = temp_v16;
      FUN_002971e4(puVar14[0x18],temp_v16);
      FUN_002764a8();
      puVar14[9] = puVar14[9] + 1;
      puVar14[10] = 0;
    }
    else {
      FUN_0027fd08(1);
      *(unsigned char *)((int)puVar14 + 0x47) = 1;
      DAT_0049fb45 = 1;
      DAT_0049f934 = 0;
      DAT_0049f93c = 0;
      puVar14[9] = 0x15;
      puVar14[10] = 0;
    }
    break;
  case 0x2e:
    func_0x002767b0();
    temp_v9 = FUN_0019dfbc(puVar14[0x18]);
    if (temp_v9 == 2) {
      FUN_0027fd08(1);
      FUN_00271280(0);
      FUN_0027fe84(0);
      FUN_00273ab0(0);
      *(unsigned char *)((int)puVar14 + 0x47) = 1;
      *(unsigned char *)(DAT_004474f4 + 0xa4) = 1;
      DAT_0049fb45 = 1;
      DAT_0049f934 = 0;
      DAT_0049f93c = 0;
      puVar14[9] = 0x15;
      puVar14[10] = 0;
    }
    break;
  case 0x2f:
    FUN_00276488();
    *(float *)(DAT_00447e88 + 0x50) = DAT_0049f9ac;
    FUN_0027fd08(2);
    FUN_00273ab0(1);
    *(unsigned char *)((int)puVar14 + 0x47) = 0;
    DAT_0049fb45 = 0;
    DAT_0049fb46 = 0;
    DAT_0049f934 = 1;
    DAT_0049f93c = 1;
    DAT_0049f970 = 0;
    FUN_00276c24(0xffffffff,0xffffffff);
    DAT_0049f964 = (int)DAT_0049fb44;
    DAT_0049f970 = 0;
    func_0x00273640();
    temp_v16 = FUN_00291018(puVar14[0x16],&DAT_0049f978);
    puVar14[0x2d] = temp_v16;
    FUN_002c0128();
    FUN_002971e4(puVar14[0x18],puVar14[0x2d]);
    func_0x002767b0();
    puVar14[9] = puVar14[9] + 1;
    puVar14[10] = 0;
    break;
  case 0x30:
    func_0x002767b0();
    puVar14[10] = puVar14[10] + 1;
    temp_v9 = FUN_0019dfbc(puVar14[0x18]);
    goto joined_r0x001bcd40;
  case 0x31:
    *(float *)(DAT_00447e88 + 0x50) = DAT_0049f9ac;
    FUN_0027fd08(2);
    FUN_00273ab0(1);
    *(unsigned char *)((int)puVar14 + 0x47) = 0;
    DAT_0049fb45 = 0;
    if (DAT_0049f954 == 0x2b) {
      DAT_0049fb47 = 1;
    }
    else {
      DAT_0049fb46 = 0;
    }
    DAT_0049f934 = 1;
    DAT_0049f93c = 1;
    DAT_0049f970 = 0;
    FUN_00276c24(0xffffffff,0xffffffff);
    DAT_0049f964 = (int)DAT_0049fb44;
    DAT_0049f970 = 0;
    func_0x00273640();
    temp_v16 = FUN_00291018(puVar14[0x13],&DAT_0049f978);
    puVar14[0x2d] = temp_v16;
    FUN_002c0128();
    FUN_002971e4(puVar14[0x15],puVar14[0x2d]);
    func_0x002767b0();
    puVar14[9] = puVar14[9] + 1;
    puVar14[10] = 0;
    break;
  case 0x32:
    func_0x002767b0();
    puVar14[10] = puVar14[10] + 1;
    temp_v9 = FUN_0019dfbc(puVar14[0x15]);
    if (temp_v9 != 2) {
      return 0;
    }
    if (DAT_0049f9d4 != '\0') {
      if (DAT_0049f9d5 == '\x05') {
        FUN_00273a98();
        temp_v16 = 0;
        temp_v9 = puVar14[9] + 1;
        puVar14[9] = temp_v9;
        puVar14[10] = temp_v16;
        break;
      }
      if (DAT_0049f9d5 == '\x04') {
        FUN_00276c24((int)DAT_0049f9d6,DAT_0049f9d7,DAT_0049f9d8);
        FUN_00273a98();
        temp_v10 = 0;
        puVar14[9] = puVar14[9] + 1;
        puVar14[10] = temp_v10;
        break;
      }
    }
    FUN_0031d6d4();
    break;
  case 0x33:
    func_0x002767b0();
    temp_v9 = FUN_00273a78();
    if (temp_v9 == 0) {
      if ((DAT_0049f9d4 != '\0') && (DAT_0049f9d5 == '\x05')) {
        DAT_0049f9d4 = '\0';
        FUN_002711e0(&DAT_0049f9b0);
        temp_v4 = DAT_0049f9b8;
        temp_v3 = DAT_0049f9b4;
        temp_v2 = DAT_0049f9b0;
        temp_v9 = DAT_00447e88;
        *(float *)(DAT_00447e88 + 0x34) = DAT_0049f9b0;
        *(float *)(temp_v9 + 0x38) = temp_v3;
        *(float *)(temp_v9 + 0x3c) = temp_v4;
        *(float *)(temp_v9 + 0x1c) = temp_v2;
        *(float *)(temp_v9 + 0x20) = temp_v3;
        *(float *)(temp_v9 + 0x24) = temp_v4;
        *(float *)(temp_v9 + 0x28) = temp_v2;
        *(float *)(temp_v9 + 0x2c) = temp_v3;
        *(float *)(temp_v9 + 0x30) = temp_v4;
        temp_v2 = DAT_0049f9ac;
        *(float *)(temp_v9 + 0x4c) = DAT_0049f9ac;
        *(float *)(temp_v9 + 0x50) = temp_v2;
        *(float *)(DAT_004474f4 + 0x18) = DAT_0049f9ac;
      }
      FUN_0031d6d4();
      FUN_00276ba4();
    }
    break;
  case 0x34:
    FUN_0027fd08(2);
    FUN_002735c8(1);
    FUN_002b8b70();
    *(unsigned char *)((int)puVar14 + 0x47) = 0;
    DAT_0049fb45 = 0;
    DAT_0049fb46 = 0;
    DAT_0049f934 = 1;
    DAT_0049f93c = 1;
    func_0x00273640();
    DAT_0049f964 = (int)DAT_0049fb44;
    FUN_002c0128();
    FUN_002971e4(puVar14[0x15],puVar14[0x2d]);
    func_0x002767b0();
    FUN_002764a8();
    puVar14[9] = puVar14[9] + 1;
    puVar14[10] = 0;
    break;
  case 0x35:
    func_0x002767b0();
    puVar14[10] = puVar14[10] + 1;
    temp_v9 = FUN_0019dfbc(puVar14[0x15]);
joined_r0x001bcd40:
    if (temp_v9 != 2) {
      return 0;
    }
    FUN_0031d6d4();
    break;
  case 0x36:
    FUN_00276488();
    FUN_0027fd08(2);
    if (DAT_0049f954 != 6) {
      FUN_00273ab0(1);
    }
    func_0x002767b0();
    FUN_00276c24(0xffffffff,0xffffffff);
    DAT_0049f964 = (int)DAT_0049fb44;
    temp_v9 = FUN_002710a4();
    if (temp_v9 == 0) {
      DAT_0049f934 = 1;
      DAT_0049f93c = 1;
      puVar14[9] = 0x21;
      puVar14[10] = 0;
      return 0;
    }
    *(unsigned char *)((int)puVar14 + 0x47) = 0;
    DAT_0049fb45 = 0;
    DAT_0049fb46 = 0;
    DAT_0049f934 = 1;
    DAT_0049f93c = 1;
    DAT_0049f970 = 0;
    DAT_0049f96c = 0;
    func_0x00273640();
    puVar14[9] = puVar14[9] + 1;
    puVar14[10] = 0;
    break;
  case 0x37:
    if (DAT_0049f93f == '\0') {
      func_0x002767b0();
    }
    if (DAT_0049fb64 == 1) {
      puVar14[9] = 0x41;
      puVar14[10] = 0;
    }
    temp_v9 = func_0x00270f34();
    if (temp_v9 == 0) {
      return 0;
    }
    FUN_0031d6d4();
    break;
  case 0x38:
    *(unsigned char *)(DAT_004474f4 + 0xa4) = 1;
    FUN_0027fe84(3);
    FUN_0027fd08(0x1d);
    FUN_00307978();
    FUN_0027154c();
    FUN_00276cac();
    FUN_00274230();
    FUN_00276488();
    FUN_00276c24(0xffffffff,0xffffffff);
    temp_v9 = FUN_002710a4();
    temp_v10 = 0;
    if (temp_v9 == 0) {
      FUN_0027fe84();
      FUN_0027fd08(2);
      FUN_00307978();
      FUN_0027154c();
      FUN_00276cac();
      FUN_00274230();
      DAT_0049f934 = 1;
      DAT_0049f93c = 1;
      puVar14[9] = 0x21;
      puVar14[10] = 0;
      return 0;
    }
    *(unsigned char *)((int)puVar14 + 0x47) = 0;
    DAT_0049fb45 = 0;
    DAT_0049fb46 = 0;
    DAT_0049f934 = 1;
    DAT_0049f93c = 1;
    DAT_0049f970 = 0;
    puVar14[9] = puVar14[9] + 1;
    puVar14[10] = temp_v10;
    break;
  case 0x39:
    FUN_00307978();
    FUN_0027154c();
    FUN_0027079c();
    FUN_001a8bf0();
    FUN_00276cac();
    FUN_00274230();
    FUN_002755d4();
    FUN_00275818();
    temp_v9 = func_0x00270f34();
    if (temp_v9 == 0) {
      return 0;
    }
    if (DAT_0049f970 != 0) {
      FUN_002760bc();
      puVar14[9] = 0x6c;
      puVar14[10] = 0;
      *(unsigned char *)(puVar14 + 5) = 1;
      return 0;
    }
    if (DAT_0049fd14 != 0xffffffff) {
      temp_v14 = puVar14[0xb];
      if ((temp_v14 != DAT_0049fd14) || (puVar14[0xc] != DAT_0049fd18)) {
        temp_v9 = 0x6f;
        puVar14[9] = temp_v9;
        break;
      }
      FUN_0027da20(temp_v14,puVar14[0xc],DAT_0049fd1c);
      if (temp_v14 != 0xffffffff) {
        temp_v10 = FUN_0027d9b8();
        temp_v9 = DAT_00447e88;
        temp_v16 = VectorSignedToFloat((int)*(short *)(temp_v10 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
        puVar23 = (unsigned int *)(DAT_00447e88 + 0x34);
        *(unsigned int *)(DAT_00447e88 + 0x1c) = temp_v16;
        temp_v16 = VectorSignedToFloat((int)*(short *)(temp_v10 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v9 + 0x20) = temp_v16;
        temp_v15 = VectorSignedToFloat((int)*(short *)(temp_v10 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v9 + 0x24) = temp_v15;
        temp_v16 = *(unsigned int *)(temp_v9 + 0x1c);
        temp_v13 = *(unsigned int *)(temp_v9 + 0x20);
        *puVar23 = temp_v16;
        *(unsigned int *)(temp_v9 + 0x38) = temp_v13;
        *(unsigned int *)(temp_v9 + 0x3c) = temp_v15;
        *(unsigned int *)(temp_v9 + 0x28) = temp_v16;
        *(unsigned int *)(temp_v9 + 0x2c) = temp_v13;
        *(unsigned int *)(temp_v9 + 0x30) = temp_v15;
        temp_v16 = VectorSignedToFloat((int)*(short *)(temp_v10 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v9 + 0x4c) = temp_v16;
        *(unsigned int *)(temp_v9 + 0x50) = temp_v16;
        temp_v16 = VectorSignedToFloat((int)*(short *)(temp_v10 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(DAT_004474f4 + 0x18) = temp_v16;
      }
      FUN_00276088();
      FUN_0027fe84(0);
      FUN_00273ab0(0);
      FUN_0027fd08(1);
      *(unsigned char *)((int)puVar14 + 0x47) = 1;
      *(unsigned char *)(DAT_004474f4 + 0xa4) = 1;
      DAT_0049fb45 = 1;
      DAT_0049fb46 = 1;
      DAT_0049f934 = 0;
      DAT_0049f93c = 0;
      puVar14[9] = 0x15;
      puVar14[10] = 0;
      FUN_00273de8();
      FUN_0027d35c();
      temp_v9 = FUN_002c2bd0(0);
      if (temp_v9 == 3) {
        FUN_002c2ba4(0,10,0xff);
      }
      temp_v9 = FUN_002c2bd0(1);
    }
    else {
      FUN_0027fe84(0);
      FUN_00273ab0(0);
      FUN_0027fd08(1);
      *(unsigned char *)((int)puVar14 + 0x47) = 1;
      *(unsigned char *)(DAT_004474f4 + 0xa4) = 1;
      DAT_0049fb45 = 1;
      DAT_0049fb46 = 1;
      DAT_0049f934 = 0;
      DAT_0049f93c = 0;
      puVar14[9] = 0x15;
      puVar14[10] = 0;
      FUN_00273de8();
      temp_v9 = FUN_002c2bd0(0);
      if (temp_v9 == 3) {
        FUN_002c2ba4(0,10,0xff);
      }
      temp_v9 = FUN_002c2bd0(1);
    }
    if (temp_v9 == 3) {
      FUN_002c2ba4(1,10,0xff);
    }
    break;
  case 0x3a:
    FUN_0029c660(0,10,0xff);
    FUN_0029c660(1,10,0xff);
    FUN_00270770(8,0);
    *(unsigned char *)((int)puVar14 + 0x47) = 0;
    func_0x002767b0();
    puVar14[9] = puVar14[9] + 1;
    puVar14[10] = 0;
    break;
  case 0x3b:
    func_0x002767b0();
    temp_v9 = FUN_00289924();
    if (temp_v9 == 0) {
      return 0;
    }
    func_0x00273640();
    *(unsigned char *)(puVar14 + 4) = 1;
    temp_v9 = 0x6f;
    temp_v16 = 0;
    puVar14[6] = DAT_0049f990;
    puVar14[9] = temp_v9;
    puVar14[10] = temp_v16;
    break;
  case 0x3c:
    FUN_00276488();
    *(unsigned char *)((int)puVar14 + 0x47) = 0;
    func_0x002767b0();
    FUN_0029c660(0,10,0xff);
    FUN_0029c660(1,10,0xff);
    FUN_00270770(8,0);
    puVar14[9] = puVar14[9] + 1;
    puVar14[10] = 0;
    break;
  case 0x3d:
    func_0x002767b0();
    temp_v9 = FUN_00289924();
    if (temp_v9 == 0) {
      return 0;
    }
    func_0x00273640();
    puVar23 = DAT_00447e28;
    temp_v9 = (int)DAT_0049f9da;
    if (temp_v9 >= 1) {
      *(unsigned char *)((int)puVar14 + 0x13) = 1;
      *(unsigned char *)((int)puVar14 + 0xe) = 0;
      *(unsigned char *)((int)puVar14 + 0xf) = 0;
      *(unsigned char *)((int)puVar14 + 0x11) = 0;
      *(unsigned char *)((int)puVar14 + 0x12) = 0;
      *(unsigned char *)(puVar14 + 5) = 0;
      puVar14[0xe] = temp_v9;
      FUN_002706e4();
    }
    else if (DAT_0049f954 != 0xe) {
      FUN_002706e4();
    }
    else if (DAT_0049fba0 != '\0') {
      DAT_0049fba0 = '\0';
    }
    else {
      FUN_002711e0(&DAT_0049f9b0);
      DAT_0049fc14 = '\x01';
      DAT_0049fc18 = puVar23[0xb];
      DAT_0049fc1c = puVar23[0xc];
      DAT_0049fc20 = DAT_0049f924;
      DAT_0049fc24 = DAT_0049f9b0;
      DAT_0049fc28 = DAT_0049f9b4;
      DAT_0049fc2c = DAT_0049f9b8;
      DAT_0049fc30 = DAT_0049f9ac;
      DAT_0049fc38 = puVar23[0xb];
      DAT_0049fc3c = puVar23[0xc];
      DAT_0049fc34 = DAT_0049fc30;
      DAT_0049fc40 = DAT_0049fc24;
      DAT_0049fc44 = DAT_0049fc28;
      DAT_0049fc48 = DAT_0049fc2c;
      DAT_0049fc4c = DAT_0049fc30;
      DAT_0049fc50 = DAT_0049fc30;
    }
    puVar14[9] = 0x6f;
    puVar14[10] = 0;
    break;
  case 0x3f:
    FUN_0027fd08(2);
    FUN_002b8b70();
    *(unsigned char *)((int)puVar14 + 0x47) = 0;
    func_0x002767b0();
    FUN_00276c24(0xffffffff,0xffffffff);
    DAT_0049f970 = 0;
    FUN_002fb2f4(DAT_0049f958);
    temp_v9 = FUN_002c9b3c();
    temp_v16 = FUN_00291018(puVar14[0x13],temp_v9 + 4);
    puVar14[0x2d] = temp_v16;
    FUN_002c0128();
    FUN_002971e4(puVar14[0x15],puVar14[0x2d]);
    puVar14[9] = puVar14[9] + 1;
    puVar14[10] = 0;
    break;
  case 0x40:
    func_0x002767b0();
    puVar14[10] = puVar14[10] + 1;
    temp_v9 = FUN_0019dfbc(puVar14[0x15]);
    if (temp_v9 != 2) {
      return 0;
    }
    if (DAT_0049f970 != 0) {
      FUN_0027fd08(0x26);
      FUN_00276488();
      FUN_002760bc();
      puVar14[9] = 0x6d;
      puVar14[10] = 0;
      *(unsigned char *)(puVar14 + 5) = 1;
      break;
    }
    if (DAT_0049fd14 == 0xffffffff) {
      FUN_0027fd08(1);
      *(unsigned char *)((int)puVar14 + 0x47) = 1;
      *(unsigned char *)(DAT_004474f4 + 0xa4) = 1;
      DAT_0049f934 = 0;
      DAT_0049f93c = 0;
      FUN_002766cc(0);
      FUN_00276170();
      puVar14[9] = 0x15;
      puVar14[10] = 0;
      return 0;
    }
    FUN_0027fd08(0x26);
    temp_v9 = 0x52;
    temp_v16 = 0;
    DAT_0049f990 = DAT_0049fd14;
    DAT_0049f994 = DAT_0049fd18;
    DAT_0049f998 = DAT_0049fd1c;
    puVar14[9] = temp_v9;
    puVar14[10] = temp_v16;
    break;
  case 0x41:
    if (puVar14[10] == 0) {
      FUN_0027fd08(2);
      *(unsigned char *)((int)puVar14 + 0x47) = 0;
      DAT_0049fb45 = 0;
      puVar14[0x30] = 0;
      temp_v9 = puVar14[0xb];
      if (DAT_0049fb64 != 0) {
        if (temp_v9 != 0x18) {
          temp_v9 = FUN_002705f4();
        }
        else {
          temp_v9 = FUN_002705f4(0x29);
        }
        if ((temp_v9 == 2) && (DAT_0049f954 != 0xffffffff)) {
          temp_v9 = *(int *)(DAT_004474f4 + 0x18);
          FUN_0027f150();
          if (temp_v9 < 0x42700001) {
            *(float *)(DAT_00447e88 + 0x50) = DAT_0049f9ac;
            temp_v9 = DAT_0049f9a0;
            FUN_00287b4c();
            if (temp_v9 < 0x43160000) {
              temp_v9 = puVar14[0xb];
              goto joined_r0x001bd6a0;
            }
          }
          FUN_00273610(5);
          puVar14[0x30] = 2;
        }
      }
      else {
joined_r0x001bd6a0:
        if (temp_v9 == 0x18) {
          temp_v9 = 0x29;
        }
        FUN_002705c8(temp_v9,2);
      }
    }
    temp_v9 = DAT_004474f4;
    if (puVar14[10] == 1) {
      if (puVar14[0x30] == 2) {
        *(unsigned char *)(DAT_004474f4 + 0xa4) = 1;
        temp_v2 = DAT_0049f9ac;
        temp_v10 = DAT_00447e88;
        puVar23 = (unsigned int *)(DAT_00447e88 + 0x38);
        *(float *)(DAT_00447e88 + 0x50) = DAT_0049f9ac;
        *(float *)(temp_v10 + 0x4c) = temp_v2;
        *(float *)(temp_v9 + 0x18) = temp_v2;
        temp_v13 = DAT_0049f9a8;
        temp_v16 = DAT_0049f9a4;
        temp_v9 = DAT_0049f9a0;
        *(int *)(temp_v10 + 0x34) = DAT_0049f9a0;
        *(int *)(temp_v10 + 0x28) = temp_v9;
        *puVar23 = temp_v16;
        *(unsigned int *)(temp_v10 + 0x3c) = temp_v13;
        *(int *)(temp_v10 + 0x1c) = temp_v9;
        *(unsigned int *)(temp_v10 + 0x2c) = temp_v16;
        *(unsigned int *)(temp_v10 + 0x30) = temp_v13;
        *(unsigned int *)(temp_v10 + 0x20) = temp_v16;
        *(unsigned int *)(temp_v10 + 0x24) = temp_v13;
        temp_v9 = puVar14[0xb];
        if (temp_v9 == 0x18) {
          temp_v9 = 0x29;
        }
        FUN_002705c8(temp_v9,2);
        goto LAB_001bd724;
      }
    }
    else {
LAB_001bd724:
      if (puVar14[10] == 0x14) {
        FUN_0027fd08(0x22);
        FUN_002fb4a0();
      }
    }
    func_0x002767b0();
    temp_v9 = puVar14[10];
    puVar14[10] = temp_v9 + 1;
    if (temp_v9 + 1 < 0x1f) {
      return 0;
    }
    temp_v9 = FUN_0027f13c();
    if (temp_v9 == 0x22) {
      return 0;
    }
    FUN_002eb144();
    temp_v9 = puVar14[0xb];
    if (temp_v9 == 0x18) {
      temp_v9 = 0x29;
    }
    FUN_002705c8(temp_v9,3);
    if (puVar14[0xb] != 0x11) {
      FUN_0027d35c();
    }
    if (DAT_0049fb64 == 0) {
      FUN_0027fd08(1);
      *(unsigned char *)((int)puVar14 + 0x47) = 1;
      DAT_0049fb45 = 1;
      DAT_0049f934 = 0;
      DAT_0049f93c = 0;
      puVar14[9] = 0x15;
      puVar14[10] = 0;
      return 0;
    }
    DAT_0049fb64 = 2;
    FUN_0027fd08();
    temp_v9 = 0x37;
    temp_v16 = 0;
    puVar14[9] = temp_v9;
    puVar14[10] = temp_v16;
    break;
  case 0x42:
    if (puVar14[10] == 0) {
      func_0x00273640();
    }
    func_0x002767b0();
    puVar14[10] = puVar14[10] + 1;
    temp_v9 = FUN_0027f13c();
    if (temp_v9 != 8) {
      temp_v9 = FUN_0027f13c();
      if (temp_v9 != 10) {
        temp_v9 = FUN_0027f13c();
        if (temp_v9 != 0xc) {
          temp_v9 = FUN_0027f13c();
          if (temp_v9 == 0xe) {
            uStack_1c4 = (unsigned int)DAT_0049fa19;
            uStack_1c8 = (unsigned int)DAT_0049fa18;
            FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
            FUN_002766cc(1);
            temp_v9 = 0x52;
            temp_v16 = 1;
            puVar14[9] = temp_v9;
            puVar14[10] = temp_v16;
            break;
          }
          temp_v9 = FUN_0027f13c();
          if (temp_v9 != 0x10) {
            temp_v9 = FUN_0027f13c();
            if (temp_v9 != 0x12) {
              temp_v9 = FUN_0027f13c();
              if (temp_v9 == 0x14) {
                if ((DAT_0049f958 == 0x3303001) && (temp_v9 = FUN_002c0ba8(0x292), temp_v9 != 0)) {
                  DAT_0049f934 = 1;
                  DAT_0049f93c = 1;
                  puVar14[0x19] = 0x210;
                  puVar14[9] = 0x36;
                  puVar14[10] = 0;
                  FUN_002be7fc(puVar14 + 0x1a,0x1bdf78);
                  return 0;
                }
                *(unsigned char *)(puVar14 + 8) = 1;
                uStack_1c4 = (unsigned int)DAT_0049fa19;
                uStack_1c8 = (unsigned int)DAT_0049fa18;
                FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
                FUN_002766cc(1);
                puVar14[9] = 0x52;
                puVar14[10] = 1;
                return 0;
              }
              temp_v9 = FUN_0027f13c();
              if (temp_v9 == 0x16) {
                *(unsigned char *)((int)puVar14 + 0x1f) = 1;
                uStack_1c4 = (unsigned int)DAT_0049fa19;
                uStack_1c8 = (unsigned int)DAT_0049fa18;
                FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
                FUN_002766cc(1);
                puVar14[9] = 0x52;
                puVar14[10] = 1;
                return 0;
              }
              temp_v9 = FUN_0027f13c();
              if (temp_v9 != 1) {
                return 0;
              }
              FUN_00276170();
              *(unsigned char *)((int)puVar14 + 0x47) = 1;
              DAT_0049fb45 = 1;
              DAT_0049fb46 = 1;
              DAT_0049f934 = 0;
              temp_v16 = 0x15;
              DAT_0049f93c = 0;
              puVar14[9] = temp_v16;
              puVar14[10] = 0;
              break;
            }
            *(unsigned char *)(puVar14 + 5) = 1;
            uStack_1c4 = (unsigned int)DAT_0049fa19;
            uStack_1c8 = (unsigned int)DAT_0049fa18;
            FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
            FUN_002766cc(1);
            FUN_00276488();
            FUN_002706e4();
            temp_v9 = 0x6f;
          }
          else {
            FUN_0027fd08(5);
            temp_v9 = 0x22;
          }
        }
        else {
          uStack_1c4 = (unsigned int)DAT_0049fa19;
          uStack_1c8 = (unsigned int)DAT_0049fa18;
          FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
          FUN_002761fc();
          if (DAT_0049f968 == 0) {
            FUN_0027fd08();
            *(unsigned char *)((int)puVar14 + 0x47) = 1;
            DAT_0049fb45 = 1;
            DAT_0049fb46 = 1;
            DAT_0049f934 = 0;
            DAT_0049f93c = 0;
            FUN_0027da20(DAT_0049f990,DAT_0049f994,DAT_0049f998);
            pcVar13 = (char *)FUN_0027d9b8();
            DAT_0049f91c = (unsigned int)*pcVar13;
            puVar14[0xb] = DAT_0049f91c;
            DAT_0049f920 = (unsigned int)pcVar13[1];
            puVar14[0xc] = DAT_0049f920;
            DAT_0049f924 = (unsigned int)(unsigned char)pcVar13[3];
            DAT_0049f928 = (int)*pcVar13;
            DAT_0049f92c = (int)pcVar13[1];
            FUN_0027d6e4(DAT_0049f928);
            FUN_002766f0(DAT_0049f928,DAT_0049f92c,DAT_0049f924);
            FUN_00276170();
            puVar14[9] = 0x15;
            puVar14[10] = 0;
            return 0;
          }
          *(unsigned char *)((int)puVar14 + 0x1d) = 1;
          FUN_0027da20(DAT_0049f990,DAT_0049f994,DAT_0049f998);
          pcVar13 = (char *)FUN_0027d9b8();
          temp_v9 = DAT_00447e88;
          puVar23 = (unsigned int *)(DAT_00447e88 + 0x30);
          temp_v16 = VectorSignedToFloat((int)*(short *)(pcVar13 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(DAT_00447e88 + 0x1c) = temp_v16;
          temp_v16 = VectorSignedToFloat((int)*(short *)(pcVar13 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v9 + 0x20) = temp_v16;
          temp_v15 = VectorSignedToFloat((int)*(short *)(pcVar13 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v9 + 0x24) = temp_v15;
          temp_v16 = *(unsigned int *)(temp_v9 + 0x1c);
          temp_v13 = *(unsigned int *)(temp_v9 + 0x20);
          *(unsigned int *)(temp_v9 + 0x28) = temp_v16;
          *(unsigned int *)(temp_v9 + 0x2c) = temp_v13;
          *puVar23 = temp_v15;
          *(unsigned int *)(temp_v9 + 0x34) = temp_v16;
          *(unsigned int *)(temp_v9 + 0x38) = temp_v13;
          *(unsigned int *)(temp_v9 + 0x3c) = temp_v15;
          temp_v16 = VectorSignedToFloat((int)*(short *)(pcVar13 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v9 + 0x4c) = temp_v16;
          *(unsigned int *)(temp_v9 + 0x50) = temp_v16;
          temp_v16 = VectorSignedToFloat((int)*(short *)(pcVar13 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(DAT_004474f4 + 0x18) = temp_v16;
          DAT_0049f91c = (unsigned int)*pcVar13;
          puVar14[0xb] = DAT_0049f91c;
          DAT_0049f920 = (unsigned int)pcVar13[1];
          puVar14[0xc] = DAT_0049f920;
          DAT_0049f924 = (unsigned int)(unsigned char)pcVar13[3];
          DAT_0049f928 = puVar14[0xb];
          DAT_0049f92c = puVar14[0xc];
          FUN_0027d6e4(DAT_0049f928);
          FUN_002766f0(DAT_0049f928,DAT_0049f92c,DAT_0049f924);
          DAT_0049f924 = (unsigned int)(unsigned char)pcVar13[3];
          if (DAT_0049f924 == 0xff) {
            DAT_0049f924 = 0xffffffff;
          }
          FUN_00276bc0(DAT_0049f928);
          func_0x002e0594(DAT_00447e88 + 0x1c);
          FUN_002766cc(1);
          FUN_00277dcc(DAT_0049f91c,DAT_0049f920);
          temp_v9 = 0x54;
        }
      }
      else {
        *(unsigned char *)((int)puVar14 + 0x1f) = 1;
        uStack_1c4 = (unsigned int)DAT_0049fa19;
        uStack_1c8 = (unsigned int)DAT_0049fa18;
        FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
        FUN_002766cc(1);
        temp_v9 = 0x52;
      }
    }
    else {
      *(unsigned char *)((int)puVar14 + 0x1d) = 1;
      uStack_1c4 = (unsigned int)DAT_0049fa19;
      uStack_1c8 = (unsigned int)DAT_0049fa18;
      FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17);
      FUN_002766cc(1);
      temp_v9 = 0x52;
    }
    temp_v16 = 0;
    puVar14[9] = temp_v9;
    puVar14[10] = temp_v16;
    break;
  case 0x43:
    temp_v9 = FUN_00289924();
    if (temp_v9 != 0) {
      FUN_0027fd08(0x1e);
      *(unsigned char *)((int)puVar14 + 0x47) = 0;
      func_0x002767b0();
      FUN_00276c24(0xffffffff,0xffffffff);
      DAT_0049f970 = 0;
      temp_v16 = FUN_00291018(puVar14[0x13],0x1bdf80);
      puVar14[0x2d] = temp_v16;
      FUN_002c0128();
      FUN_002971e4(puVar14[0x15],puVar14[0x2d]);
      puVar14[9] = puVar14[9] + 1;
      puVar14[10] = 0;
    }
    break;
  case 0x44:
    func_0x002767b0();
    puVar14[10] = puVar14[10] + 1;
    temp_v9 = FUN_0019dfbc(puVar14[0x15]);
    if (temp_v9 != 2) {
      return 0;
    }
    FUN_00275a18();
    FUN_0027d35c();
    FUN_00273de8();
    FUN_0027fd08(1);
    FUN_0027dbb8();
    FUN_0027db78();
    temp_v9 = FUN_00275a38();
    if (temp_v9 != 0) {
      FUN_00273fa4();
      FUN_00273ec4();
      FUN_00276088();
    }
    *(unsigned char *)((int)puVar14 + 0x47) = 1;
    *(unsigned char *)(DAT_004474f4 + 0xa4) = 1;
    DAT_0049f934 = 0;
    DAT_0049f93c = 0;
    puVar14[9] = 0x15;
    puVar14[10] = 0;
    break;
  case 0x45:
    if (puVar14[10] == 0) {
      FUN_0027fd08(0x1e);
      *(unsigned char *)((int)puVar14 + 0x47) = 0;
    }
    func_0x002767b0();
    puVar14[10] = puVar14[10] + 1;
    temp_v9 = FUN_00289924();
    if (temp_v9 == 0) {
      return 0;
    }
    temp_v9 = FUN_002b6e44();
    if (temp_v9 != 0) {
      return 0;
    }
    temp_v16 = 0;
    temp_v9 = puVar14[9] + 1;
    puVar14[9] = temp_v9;
    puVar14[10] = temp_v16;
    break;
  case 0x46:
    func_0x002767b0();
    puVar14[10] = puVar14[10] + 1;
    FUN_0027fd08(1);
    *(unsigned char *)((int)puVar14 + 0x47) = 1;
    *(unsigned char *)(DAT_004474f4 + 0xa4) = 1;
    DAT_0049f934 = 0;
    DAT_0049f93c = 0;
    puVar14[9] = 0x15;
    puVar14[10] = 0;
    break;
  case 0x47:
    *(unsigned char *)((int)puVar14 + 0x45) = 0;
    FUN_0027fd08(2);
    *(unsigned char *)((int)puVar14 + 0x47) = 0;
    DAT_0049fb45 = 0;
    DAT_0049fb46 = 0;
    func_0x002767b0();
    FUN_00276c24(0xffffffff,0xffffffff);
    DAT_0049f970 = 0;
    if (DAT_0049fa80 != 0) {
      DAT_0049fa80 = 0;
      DAT_0049f970 = (unsigned int)DAT_0049fa82;
      FUN_002bf86c(&DAT_0049f978,&DAT_0049fa84);
      puVar14[0x19] = DAT_0049f970;
      FUN_002bf86c(puVar14 + 0x1a,&DAT_0049f978);
    }
    else {
      temp_v9 = FUN_0027dbd8();
      if (temp_v9 != -1) {
        temp_v14 = FUN_0027dbd8() & 0xffff;
        FUN_002b6700();
        DAT_0049f970 = (unsigned int)*(unsigned short *)(temp_v14 + 2);
        FUN_002bf86c(&DAT_0049f978,temp_v14 + 0x128);
        puVar14[0x19] = DAT_0049f970;
        FUN_002bf86c(puVar14 + 0x1a,&DAT_0049f978);
      }
    }
    temp_v9 = FUN_002710a4();
    if (temp_v9 == 0) {
      DAT_0049f934 = 1;
      DAT_0049f93c = 1;
      puVar14[9] = 0x21;
      puVar14[10] = 0;
      return 0;
    }
    puVar14[9] = puVar14[9] + 1;
    puVar14[10] = 0;
    break;
  case 0x48:
    func_0x002767b0();
    puVar14[10] = puVar14[10] + 1;
    temp_v9 = func_0x00270f34();
    if (temp_v9 == 0) {
      return 0;
    }
    if (DAT_0049fd14 == 0xffffffff) {
      temp_v9 = FUN_002c2bd0(0);
      if (temp_v9 == 3) {
        FUN_002c2ba4(0,10,0xff);
      }
      temp_v9 = FUN_002c2bd0(1);
      if (temp_v9 == 3) {
        FUN_002c2ba4(1,10,0xff);
      }
      FUN_00273de8();
      FUN_0027d35c();
      FUN_00273ab0(0);
      FUN_0027fd08(1);
      *(unsigned char *)((int)puVar14 + 0x47) = 1;
      DAT_0049fb45 = 1;
      DAT_0049fb46 = 1;
      *(unsigned char *)(DAT_004474f4 + 0xa4) = 1;
      DAT_0049f934 = 0;
      DAT_0049f93c = 0;
      puVar14[9] = 0x15;
      puVar14[10] = 0;
      return 0;
    }
    temp_v14 = puVar14[0xb];
    if ((temp_v14 == DAT_0049fd14) && (puVar14[0xc] == DAT_0049fd18)) {
      FUN_0027da20(temp_v14,puVar14[0xc],DAT_0049fd1c);
      if (temp_v14 != 0xffffffff) {
        temp_v10 = FUN_0027d9b8();
        temp_v9 = DAT_00447e88;
        temp_v16 = VectorSignedToFloat((int)*(short *)(temp_v10 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
        puVar23 = (unsigned int *)(DAT_00447e88 + 0x1c);
        puVar19 = (unsigned int *)(DAT_00447e88 + 0x34);
        *(unsigned int *)(DAT_00447e88 + 0x1c) = temp_v16;
        temp_v16 = VectorSignedToFloat((int)*(short *)(temp_v10 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v9 + 0x20) = temp_v16;
        temp_v15 = VectorSignedToFloat((int)*(short *)(temp_v10 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v9 + 0x24) = temp_v15;
        temp_v16 = *puVar23;
        temp_v13 = *(unsigned int *)(temp_v9 + 0x20);
        *(unsigned int *)(temp_v9 + 0x3c) = temp_v15;
        *puVar19 = temp_v16;
        *(unsigned int *)(temp_v9 + 0x38) = temp_v13;
        *(unsigned int *)(temp_v9 + 0x30) = temp_v15;
        *(unsigned int *)(temp_v9 + 0x28) = temp_v16;
        *(unsigned int *)(temp_v9 + 0x2c) = temp_v13;
        temp_v16 = VectorSignedToFloat((int)*(short *)(temp_v10 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v9 + 0x4c) = temp_v16;
        *(unsigned int *)(temp_v9 + 0x50) = temp_v16;
        temp_v16 = VectorSignedToFloat((int)*(short *)(temp_v10 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(DAT_004474f4 + 0x18) = temp_v16;
      }
      FUN_00276088();
      FUN_0027fe84(0);
      FUN_00273ab0(0);
      FUN_0027fd08(1);
      *(unsigned char *)((int)puVar14 + 0x47) = 1;
      *(unsigned char *)(DAT_004474f4 + 0xa4) = 1;
      DAT_0049fb45 = 1;
      DAT_0049f934 = 0;
      DAT_0049f93c = 0;
      puVar14[9] = 0x15;
      puVar14[10] = 0;
      FUN_00273de8();
      FUN_0027d35c();
      if (DAT_0049fa38 != '\0') {
        temp_v9 = FUN_002c2bd0(0);
        if (temp_v9 == 3) {
          FUN_002c2ba4(0,10,0xff);
        }
        temp_v9 = FUN_002c2bd0(1);
        if (temp_v9 == 3) {
          FUN_002c2ba4(1,10,0xff);
        }
      }
      DAT_0049fa38 = '\x01';
      if (DAT_0049fa1a != '\0') {
        DAT_0049fa1a = 0;
        DAT_0049f934 = 1;
        DAT_0049f93c = 1;
        puVar14[9] = 0x36;
        puVar14[10] = 0;
        puVar14[0x19] = (int)DAT_0049fa1c;
        FUN_002be7fc(puVar14 + 0x1a,&DAT_0049fa20);
        return 0;
      }
      if (puVar14[9] != 0x15) {
        DAT_0049fa38 = '\x01';
        return 0;
      }
      temp_v16 = 0;
      FUN_00273ab0(temp_v16);
      break;
    }
    temp_v9 = 0x6f;
    puVar14[9] = temp_v9;
    break;
  case 0x49:
    if (puVar14[10] == 0) {
      puVar14[0x10] = 0;
      FUN_0027fd08(2);
      FUN_002b8b70();
      *(unsigned char *)((int)puVar14 + 0x47) = 0;
    }
    func_0x002767b0();
    puVar14[10] = puVar14[10] + 1;
    temp_v9 = FUN_00289924();
    if (temp_v9 != 0) {
      FUN_00276c24(0xffffffff,0xffffffff);
      DAT_0049f970 = 0;
      temp_v16 = FUN_00291018(puVar14[0x13],0x1be66c);
      puVar14[0x2d] = temp_v16;
      FUN_002c0128();
      FUN_002971e4(puVar14[0x15],puVar14[0x2d]);
      puVar14[9] = puVar14[9] + 1;
      puVar14[10] = 0;
    }
    break;
  case 0x4a:
    func_0x002767b0();
    puVar14[10] = puVar14[10] + 1;
    temp_v9 = FUN_0019dfbc(puVar14[0x15]);
    if (temp_v9 == 2) {
      temp_v9 = FUN_0027dbfc();
      if (temp_v9 != 4) {
        FUN_00275a18();
        FUN_0027d35c();
      }
      FUN_0027dd94(0);
      FUN_00273de8();
      FUN_00276170();
      *(unsigned char *)(DAT_004474f4 + 0xa4) = 1;
      FUN_0027fd08(1);
      *(unsigned char *)((int)puVar14 + 0x47) = 1;
      *(unsigned char *)(DAT_004474f4 + 0xa4) = 1;
      DAT_0049f934 = 0;
      DAT_0049f93c = 0;
      puVar14[9] = 0x15;
      puVar14[10] = 0;
    }
    break;
  case 0x4b:
    FUN_0027fd08(2);
    *(unsigned char *)(puVar14 + 0x12) = 0;
    FUN_002c0128();
    FUN_002b8b70();
    temp_v16 = FUN_002c5e2c(0x1be67c);
    puVar14[0x27] = temp_v16;
    temp_v16 = FUN_002c5e2c(0x1be690);
    puVar14[0x28] = temp_v16;
    temp_v9 = puVar14[0x27];
    FUN_002972f8(temp_v9,temp_v16);
    puVar14[0x29] = temp_v9;
    *(unsigned int *)(temp_v9 + 0x108) = 3;
    temp_v16 = FUN_00291018(puVar14[0x27],0x1be6a8);
    FUN_002971e4(puVar14[0x29],temp_v16);
    *(unsigned char *)((int)puVar14 + 0x47) = 0;
    DAT_0049f934 = 1;
    DAT_0049f93c = 1;
    DAT_0049f970 = 0;
    func_0x002767b0();
    puVar14[9] = puVar14[9] + 1;
    puVar14[10] = 0;
    break;
  case 0x4c:
    func_0x002767b0();
    temp_v9 = FUN_0019dfbc(puVar14[0x29]);
    if (temp_v9 == 2) {
      FUN_002a755c(puVar14[0x29]);
      puVar14[0x29] = 0;
      FUN_002c4360(puVar14[0x27]);
      puVar14[0x27] = 0;
      FUN_002c4360(puVar14[0x28]);
      puVar14[0x28] = 0;
      FUN_00276170();
      FUN_0027fd08(1);
      *(unsigned char *)((int)puVar14 + 0x47) = 1;
      DAT_0049fb45 = 1;
      *(unsigned char *)(DAT_004474f4 + 0xa4) = 1;
      DAT_0049f934 = 0;
      DAT_0049f93c = 0;
      puVar14[9] = 0x15;
      puVar14[10] = 0;
    }
    break;
  case 0x4d:
    temp_v9 = FUN_0027f13c();
    if (temp_v9 == 1) {
      FUN_0027fd08(2);
    }
    FUN_00276c24(0xffffffff,0xffffffff);
    puVar23 = DAT_00447e28;
    FUN_002c0128();
    FUN_002be7fc(temp_v22,0x1be6c0,puVar23[0x19],puVar23[0x19]);
    FUN_002be7fc(temp_v23,0x1be6d8,puVar23[0x19],puVar23[0x19]);
    temp_v9 = FUN_0028a0bc(DAT_00433158,puVar23[0x19],0);
    if (temp_v9 == 0) {
      temp_v16 = FUN_002c5e2c(temp_v22);
      puVar23[0x23] = temp_v16;
      temp_v9 = FUN_002c5e2c(temp_v23);
      puVar23[0x24] = temp_v9;
LAB_001be70c:
      temp_v10 = puVar23[0x23];
      FUN_002972f8(temp_v10,temp_v9);
      puVar23[0x25] = temp_v10;
      *(unsigned int *)(temp_v10 + 0x108) = 2;
      temp_v16 = FUN_00289ac0(puVar23[0x25],puVar23[0x22]);
      temp_v13 = puVar23[0x19];
      FUN_00289a58(temp_v13,temp_v16);
      puVar23[0x26] = temp_v13;
      FUN_002971e4(puVar23[0x25],puVar23[0x22]);
      DAT_0049f934 = 1;
      DAT_0049f93c = 1;
      DAT_0049f970 = 0;
      puVar14[9] = puVar14[9] + 1;
      puVar14[10] = 0;
      return 0;
    }
    temp_v9 = DAT_00433158;
    FUN_0028a04c(DAT_00433158,puVar23[0x19],0);
    puVar23[0x23] = temp_v9;
    temp_v9 = DAT_00433158;
    FUN_00289fdc(DAT_00433158,puVar23[0x19],0);
    puVar23[0x24] = temp_v9;
    if (puVar23[0x23] != 0) {
      if (temp_v9 != 0) goto LAB_001be70c;
      FUN_002c4360(puVar23[0x23]);
      puVar23[0x23] = 0;
    }
    if (puVar23[0x24] != 0) {
      FUN_002c4360();
      puVar23[0x24] = 0;
    }
    temp_v16 = 0x21;
    DAT_0049f934 = 1;
    DAT_0049f93c = 1;
    puVar14[9] = temp_v16;
    puVar14[10] = 0;
    break;
  case 0x4e:
    temp_v9 = func_0x00270f34();
    if (temp_v9 != 0) {
      temp_v19 = DAT_0049f970 == 0;
      if (!temp_v19) {
        puVar14[10] = 0;
        puVar14[9] = 0x6c;
        *(unsigned char *)(puVar14 + 5) = 1;
      }
      else {
        FUN_0027605c();
        puVar14[9] = 0x6e;
        puVar14[10] = 0;
      }
      *(unsigned char *)((int)puVar14 + 0xd) = temp_v19;
    }
    break;
  case 0x4f:
    if (puVar14[10] == 0) {
      FUN_0027da20(DAT_0049f990,DAT_0049f994,DAT_0049f998);
      temp_v9 = FUN_0027d9b8();
      VectorSignedToFloat((int)*(short *)(temp_v9 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v9 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v9 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002c9ad8(DAT_00447e88 + 0x28,(int)*(short *)(temp_v9 + 4),(int)*(short *)(temp_v9 + 6));
      FUN_0027fd08(6);
      FUN_0027fe84(1);
    }
    func_0x002767b0();
    temp_v9 = puVar14[10];
    puVar14[10] = temp_v9 + 1;
    if (temp_v9 + 1 < 0x29) {
      return 0;
    }
    FUN_0027fe84(0);
    FUN_00273ab0(0);
    FUN_002761fc();
    FUN_0027da20(DAT_0049f990,DAT_0049f994,DAT_0049f998);
    pcVar13 = (char *)FUN_0027d9b8();
    temp_v9 = (int)*pcVar13;
    if ((puVar14[0xb] != temp_v9) || (puVar14[0xc] != (int)pcVar13[1])) {
      puVar14[0xb] = temp_v9;
      DAT_0049f920 = (unsigned int)pcVar13[1];
      DAT_0049f91c = temp_v9;
      puVar14[0xc] = DAT_0049f920;
      DAT_0049f934 = 1;
      DAT_0049f93c = 1;
      puVar14[9] = 0x54;
      return 0;
    }
    FUN_0027fd08(1);
    temp_v16 = 0;
    *(unsigned char *)((int)puVar14 + 0x47) = 1;
    DAT_0049f934 = 0;
    temp_v9 = 0x15;
    DAT_0049f93c = 0;
    puVar14[9] = temp_v9;
    puVar14[10] = temp_v16;
    break;
  case 0x50:
    if (puVar14[10] == 0) {
      FUN_0027fd08(0x23);
      *(unsigned char *)((int)puVar14 + 0x47) = 0;
      DAT_0049fb46 = 0;
      DAT_0049fb45 = 0;
    }
    func_0x002767b0();
    temp_v9 = puVar14[10];
    puVar14[10] = temp_v9 + 1;
    if (temp_v9 + 1 == 0x5f) {
      FUN_00273a98();
    }
    temp_v9 = FUN_00273a78();
    if (temp_v9 != 0) {
      return 0;
    }
    temp_v9 = 0x52;
    temp_v16 = 1;
    puVar14[9] = temp_v9;
    puVar14[10] = temp_v16;
    break;
  case 0x51:
    if (puVar14[10] == 0) {
      FUN_0027fd08(0x24);
      *(unsigned char *)((int)puVar14 + 0x47) = 0;
      DAT_0049fb46 = 0;
      DAT_0049f93c = 1;
    }
    func_0x002767b0();
    temp_v9 = puVar14[10];
    puVar14[10] = temp_v9 + 1;
    if (temp_v9 + 1 == 0x28) {
      FUN_00273a98();
    }
    temp_v9 = FUN_00273a78();
    if (temp_v9 != 0) {
      return 0;
    }
    if (DAT_0049f920 == 2 || DAT_0049f920 == 6) {
      *(unsigned char *)((int)puVar14 + 0x1e) = 1;
    }
    else {
      *(unsigned char *)((int)puVar14 + 0x1d) = 1;
    }
    temp_v9 = 0x52;
    temp_v16 = 1;
    puVar14[9] = temp_v9;
    puVar14[10] = temp_v16;
    break;
  case 0x52:
    if (puVar14[10] == 0) {
      DAT_0049fb45 = 0;
      if (DAT_0049f954 == 2) {
        if (DAT_0049f958 == 0x2702001) {
          temp_v10 = FUN_002c0ba8(0x148);
          if (temp_v10 == 0) {
            if (DAT_0049f954 != 2) goto LAB_001beaac;
            goto LAB_001bea58;
          }
        }
        else {
LAB_001bea58:
          if ((DAT_0049f958 != 0x2802001) || (temp_v10 = FUN_002c0ba8(0x291), temp_v10 == 0))
          goto LAB_001beaac;
        }
        FUN_0029c660(0,0xf,0xff);
        FUN_0029c660(1,0xf,0xff);
      }
      else {
LAB_001beaac:
        FUN_00273a98();
        if (puVar14[0xb] != DAT_0049f990) {
          FUN_00270770(8,0);
        }
        FUN_002766cc(1);
      }
    }
    func_0x002767b0();
    puVar14[10] = puVar14[10] + 1;
    if (DAT_0049f954 == 2) {
      if (DAT_0049f958 == 0x2702001) {
        temp_v10 = FUN_002c0ba8(0x148);
        if (temp_v10 == 0) {
          if (DAT_0049f954 != 2) goto LAB_001beb78;
          goto LAB_001beb3c;
        }
        temp_v10 = FUN_00289924();
      }
      else {
LAB_001beb3c:
        if ((DAT_0049f958 != 0x2802001) || (temp_v10 = FUN_002c0ba8(0x291), temp_v10 == 0))
        goto LAB_001beb78;
        temp_v10 = FUN_00289924();
      }
      if (temp_v10 == 0) {
        return 0;
      }
    }
    else {
LAB_001beb78:
      temp_v10 = FUN_00273a78();
      if (temp_v10 != 0) {
        return 0;
      }
    }
    if (DAT_0049f954 == 2) {
      if ((DAT_0049f958 == 0x2702001) && (temp_v10 = FUN_002c0ba8(0x148), temp_v10 != 0)) {
        DAT_0049f934 = 1;
        DAT_0049f93c = 1;
        puVar14[0x19] = 0x20a;
        puVar14[9] = 0x36;
        puVar14[10] = 0;
        FUN_002be7fc(puVar14 + 0x1a,0x1beed0);
        return 0;
      }
      if ((DAT_0049f958 == 0x2802001) && (temp_v10 = FUN_002c0ba8(0x291), temp_v10 != 0)) {
        DAT_0049f934 = 1;
        DAT_0049f93c = 1;
        puVar14[0x19] = 0x20b;
        puVar14[9] = 0x36;
        puVar14[10] = 0;
        FUN_002be7fc(puVar14 + 0x1a,0x1beedc);
        return 0;
      }
    }
    FUN_002761fc();
    if ((int)DAT_0049f990 >= 200) {
      puVar14[9] = 0x6f;
      FUN_00276c24(DAT_0049f990,0);
    }
    else if ((int)DAT_0049f990 >= 100) {
      puVar14[9] = 0x6f;
      temp_v14 = DAT_0049f990;
      FUN_0027da20(DAT_0049f990,DAT_0049f994,DAT_0049f998);
      FUN_00276c24(DAT_0049f990,DAT_0049f994,DAT_0049f998);
      temp_v10 = FUN_0027d9b8(temp_v14);
      temp_v9 = DAT_00447e88;
      puVar14 = (unsigned int *)(DAT_00447e88 + 0x28);
      temp_v16 = VectorSignedToFloat((int)*(short *)(temp_v10 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
      *(unsigned int *)(DAT_00447e88 + 0x1c) = temp_v16;
      temp_v16 = VectorSignedToFloat((int)*(short *)(temp_v10 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
      *(unsigned int *)(temp_v9 + 0x20) = temp_v16;
      temp_v15 = VectorSignedToFloat((int)*(short *)(temp_v10 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
      *(unsigned int *)(temp_v9 + 0x24) = temp_v15;
      temp_v16 = *(unsigned int *)(temp_v9 + 0x1c);
      temp_v13 = *(unsigned int *)(temp_v9 + 0x20);
      *(unsigned int *)(temp_v9 + 0x30) = temp_v15;
      *puVar14 = temp_v16;
      *(unsigned int *)(temp_v9 + 0x2c) = temp_v13;
      *(unsigned int *)(temp_v9 + 0x3c) = temp_v15;
      *(unsigned int *)(temp_v9 + 0x34) = temp_v16;
      *(unsigned int *)(temp_v9 + 0x38) = temp_v13;
      temp_v16 = VectorSignedToFloat((int)*(short *)(temp_v10 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
      *(unsigned int *)(temp_v9 + 0x4c) = temp_v16;
      *(unsigned int *)(temp_v9 + 0x50) = temp_v16;
      temp_v16 = VectorSignedToFloat((int)*(short *)(temp_v10 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
      *(unsigned int *)(DAT_004474f4 + 0x18) = temp_v16;
      DAT_0049f924 = 0xffffffff;
    }
    else {
      temp_v12 = (int)DAT_0049fb44;
      *(unsigned char *)(DAT_004474f4 + 0xa4) = 1;
      DAT_0049fb45 = 1;
      DAT_0049fb46 = 1;
      func_0x00273640();
      puVar14[9] = 0x15;
      puVar14[10] = 0;
      DAT_0049fb44 = DAT_0049f964 != 0;
      uStack_1c8 = *(unsigned int *)(DAT_00447e88 + 0x1c);
      uStack_1c4 = *(unsigned int *)(DAT_00447e88 + 0x20);
      uStack_1c0 = *(unsigned int *)(DAT_00447e88 + 0x24);
      FUN_0027da20(DAT_0049f990,DAT_0049f994,DAT_0049f998);
      pcVar13 = (char *)FUN_0027d9b8();
      temp_v10 = DAT_00447e88;
      temp_v16 = VectorSignedToFloat((int)*(short *)(pcVar13 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
      puVar23 = (unsigned int *)(DAT_00447e88 + 0x28);
      *(unsigned int *)(DAT_00447e88 + 0x1c) = temp_v16;
      temp_v16 = VectorSignedToFloat((int)*(short *)(pcVar13 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
      *(unsigned int *)(temp_v10 + 0x20) = temp_v16;
      temp_v15 = VectorSignedToFloat((int)*(short *)(pcVar13 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
      *(unsigned int *)(temp_v10 + 0x24) = temp_v15;
      temp_v16 = *(unsigned int *)(temp_v10 + 0x1c);
      temp_v13 = *(unsigned int *)(temp_v10 + 0x20);
      *puVar23 = temp_v16;
      *(unsigned int *)(temp_v10 + 0x2c) = temp_v13;
      *(unsigned int *)(temp_v10 + 0x30) = temp_v15;
      *(unsigned int *)(temp_v10 + 0x34) = temp_v16;
      *(unsigned int *)(temp_v10 + 0x38) = temp_v13;
      *(unsigned int *)(temp_v10 + 0x3c) = temp_v15;
      temp_v16 = VectorSignedToFloat((int)*(short *)(pcVar13 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
      *(unsigned int *)(temp_v10 + 0x4c) = temp_v16;
      *(unsigned int *)(temp_v10 + 0x50) = temp_v16;
      temp_v16 = VectorSignedToFloat((int)*(short *)(pcVar13 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
      *(unsigned int *)(DAT_004474f4 + 0x18) = temp_v16;
      DAT_0049f924 = (unsigned int)(unsigned char)pcVar13[3];
      if (DAT_0049f924 == 0xff) {
        DAT_0049f924 = 0xffffffff;
      }
      temp_v14 = (unsigned int)*pcVar13;
      if (puVar14[0xb] != temp_v14) {
        if (DAT_0049f990 != 0x18) {
          FUN_00276c24(DAT_0049f990,DAT_0049f994,DAT_0049f998);
          if (*(char *)(puVar14 + 7) != '\0') {
            *(unsigned char *)(puVar14 + 7) = 0;
            DAT_0049fa1a = '\x01';
            DAT_0049fa1c = (short)puVar14[0x19];
            FUN_002bf86c(&DAT_0049fa20,puVar14 + 0x1a);
          }
        }
        else {
          FUN_00276c24(0x18,1,DAT_0049f998);
          FUN_0027d81c(DAT_0049f994);
          DAT_0049f943 = '\x01';
          if (*(char *)((int)puVar14 + 0xb9) != '\0') {
            func_0x00316e44();
          }
          *(unsigned char *)((int)puVar14 + 0xb9) = 0;
          temp_v10 = FUN_0030f558(DAT_0049f958);
          if (temp_v10 != -1) {
            *(unsigned short *)(temp_v9 + 0x28) = 1;
            *(short *)(temp_v9 + 0x2a) = (short)temp_v10;
            FUN_002df7f8();
          }
        }
        puVar14[9] = 0x6c;
        puVar14[10] = 0;
      }
      else {
        temp_v9 = puVar14[0xc];
        temp_v19 = temp_v9 != pcVar13[1];
        if (!temp_v19) {
          temp_v9 = (int)DAT_0049fb44;
        }
        if (!(temp_v19 || temp_v9 != temp_v12)) {
          func_0x002dfa04();
          if (*(char *)((int)puVar14 + 0x1d) != '\0') {
            *(unsigned char *)((int)puVar14 + 0x1d) = 0;
            puVar14[9] = 0x68;
            puVar14[10] = 0;
          }
          else if (*(char *)((int)puVar14 + 0x1e) != '\0') {
            *(unsigned char *)((int)puVar14 + 0x1e) = 0;
            puVar14[9] = 0x69;
            puVar14[10] = 0;
          }
          else if (*(char *)((int)puVar14 + 0x1f) != '\0') {
            *(unsigned char *)((int)puVar14 + 0x1f) = 0;
            puVar14[9] = 0x6a;
            puVar14[10] = 0;
          }
          else if (*(char *)(puVar14 + 8) != '\0') {
            *(unsigned char *)(puVar14 + 8) = 0;
            puVar14[9] = 0x6b;
            puVar14[10] = 0;
          }
          else {
            puVar14[9] = 0x53;
            puVar14[10] = 0;
            func_0x002c8750();
          }
          DAT_0049f924 = (unsigned int)(unsigned char)pcVar13[3];
          DAT_0049f928 = puVar14[0xb];
          DAT_0049f92c = puVar14[0xc];
          FUN_0027d6e4();
          FUN_002766f0(DAT_0049f928,DAT_0049f92c,DAT_0049f924);
          FUN_00276bc0(DAT_0049f928);
        }
        else {
          puVar14[0xb] = temp_v14;
          DAT_0049f920 = (unsigned int)pcVar13[1];
          DAT_0049f91c = temp_v14;
          puVar14[0xc] = DAT_0049f920;
          DAT_0049f924 = (unsigned int)(unsigned char)pcVar13[3];
          DAT_0049f928 = puVar14[0xb];
          DAT_0049f92c = puVar14[0xc];
          FUN_0027d6e4(DAT_0049f928);
          FUN_002766f0(DAT_0049f928,DAT_0049f92c,DAT_0049f924);
          FUN_00276bc0(DAT_0049f928);
          func_0x002e0594(&uStack_1c8);
          DAT_0049f934 = 1;
          DAT_0049f93c = 1;
          puVar14[9] = 0x54;
          FUN_00277dcc(DAT_0049f91c,DAT_0049f920);
        }
        if (puVar14[9] == 0x15) {
          FUN_00276170();
        }
      }
    }
    break;
  case 0x53:
    temp_v9 = puVar14[10];
    puVar14[10] = temp_v9 + 1;
    if (temp_v9 + 1 >= 4) {
      FUN_002766cc(0);
      FUN_00276ba4();
      FUN_0027fe84(0);
      *(unsigned int *)(DAT_004474f4 + 0xac) = 0;
      FUN_00273ab0(0);
      FUN_0027fd08(1);
      FUN_002735c8(0xffffffff);
      *(unsigned char *)(DAT_004474f4 + 0xa4) = 1;
      if (*(char *)(puVar14 + 7) != '\0') {
        *(unsigned char *)(puVar14 + 7) = 0;
        puVar14[9] = 0x36;
        puVar14[10] = 0;
      }
      else {
        FUN_00276170();
        DAT_0049f934 = 0;
        DAT_0049f93c = 0;
        DAT_0049fb45 = 1;
        DAT_0049fb46 = 1;
        puVar14[9] = 0x15;
        puVar14[10] = 0;
      }
    }
    break;
  case 0x54:
    FUN_002819f4();
    FUN_0027054c();
    FUN_0020dbd0();
    FUN_00270514();
    FUN_001d3598();
    FUN_001fa5dc();
    FUN_00270458();
    FUN_001fa614();
    func_0x001e444c();
    func_0x0020cea8();
    FUN_001b3c68();
    FUN_002235e8();
    FUN_002c8a78();
    func_0x002dfdf0();
    FUN_002a7604(0);
    FUN_001a946c();
    temp_v9 = puVar14[9] + 1;
    puVar14[9] = temp_v9;
    break;
  case 0x55:
    temp_v9 = 0x56;
    puVar14[9] = temp_v9;
    break;
  case 0x56:
    FUN_001fb24c();
    FUN_001a85b0();
    FUN_00270404();
    FUN_001b45e0();
    FUN_001e29e8();
    FUN_00270340();
    FUN_001e2a68();
    func_0x001d371c();
    FUN_002147e8();
    FUN_0021df78();
    func_0x002d3d6c();
    FUN_001b427c();
    temp_v9 = puVar14[9] + 1;
    puVar14[9] = temp_v9;
    break;
  case 0x57:
    if (*(char *)((int)puVar14 + 0xb9) != '\0') {
      func_0x00316e44();
    }
    *(unsigned char *)((int)puVar14 + 0xb9) = 0;
    *(unsigned int *)(DAT_004474f4 + 0xac) = 0;
    func_0x001e38c0();
    FUN_001fde18(puVar14);
    FUN_0027d700(puVar14[0xc]);
    func_0x001d2e24(puVar14[0xb],puVar14[0xc]);
    temp_v10 = puVar14[9] + 1;
    puVar14[9] = temp_v10;
  case 0x58:
    FUN_00207ffc();
    if (temp_v10 == 0) {
      return 0;
    }
    FUN_002d27f8(DAT_0049f91c,DAT_0049f920);
    func_0x00208a28();
    puVar14[9] = puVar14[9] + 1;
LAB_001bf38c:
    temp_v9 = FUN_0027d334(puVar14[0xb],puVar14[0xc]);
    if (temp_v9 == 0) {
      return 0;
    }
    puVar14[9] = puVar14[9] + 1;
LAB_001bf3ac:
    func_0x001e3874(puVar14[0xb],puVar14[0xc]);
    puVar14[9] = puVar14[9] + 1;
LAB_001bf3c4:
    temp_v9 = FUN_0021e3c0();
    if (temp_v9 == 0) {
      return 0;
    }
    puVar14[9] = puVar14[9] + 1;
LAB_001bf3e0:
    func_0x0020ced4(puVar14[0xb],puVar14[0xc]);
    puVar14[9] = puVar14[9] + 1;
LAB_001bf3f8:
    temp_v9 = FUN_0027d010();
    if (temp_v9 == 0) {
      return 0;
    }
    puVar14[9] = puVar14[9] + 1;
LAB_001bf418:
    FUN_0027cedc();
    FUN_0027ceb8(puVar14[0xb],puVar14[0xc]);
    temp_v10 = puVar14[9] + 1;
    puVar14[9] = temp_v10;
LAB_001bf438:
    FUN_0027c640();
    if (temp_v10 == 0) {
      return 0;
    }
    puVar14[9] = puVar14[9] + 1;
LAB_001bf458:
    func_0x001a8e6c();
    func_0x0020cf00(puVar14[0xb],puVar14[0xc]);
    puVar14[9] = puVar14[9] + 1;
LAB_001bf478:
    temp_v9 = func_0x002d3a74();
    if (temp_v9 == 0) {
      return 0;
    }
    puVar14[9] = puVar14[9] + 1;
LAB_001bf498:
    func_0x001e3190();
    func_0x002d3ddc(puVar14[0xb],puVar14[0xc]);
    puVar14[9] = puVar14[9] + 1;
LAB_001bf4b8:
    temp_v9 = FUN_002f3fc4();
    if (temp_v9 == 0) {
      return 0;
    }
    puVar14[9] = puVar14[9] + 1;
LAB_001bf4d4:
    if (DAT_0049fc80 == 0) {
      func_0x0020ce84(puVar14[0xb],puVar14[0xc]);
      puVar14[9] = puVar14[9] + 1;
LAB_001bf504:
      temp_v9 = func_0x002dfab4();
      if (temp_v9 == 0) {
        return 0;
      }
      func_0x001b41e0();
      puVar14[9] = puVar14[9] + 1;
LAB_001bf528:
      FUN_001b481c();
      if (DAT_0049fc7c == 2) {
        DAT_0049f93d = 0;
      }
      else {
        if (puVar14[0xb] == 0x11) {
          if (puVar14[0xc] != 1) goto LAB_001bf5c8;
          temp_v9 = FUN_002c0ba8(0xc6);
          if ((temp_v9 == 0) || (temp_v9 = FUN_002c0ba8(0x108), temp_v9 != 0)) goto LAB_001bf580;
          FUN_0027b524(puVar14[0xb],puVar14[0xc],puVar14[0xb],99);
        }
        else {
LAB_001bf580:
          temp_v9 = puVar14[0xb];
          temp_v19 = temp_v9 != 5;
          if (!temp_v19) {
            temp_v9 = puVar14[0xc];
          }
          if ((temp_v19 || temp_v9 != 1) || (temp_v9 = FUN_002c0ba8(0x719), temp_v9 != 0)) {
LAB_001bf5c8:
            temp_v17 = 0;
            temp_v13 = puVar14[0xb];
            temp_v15 = puVar14[0xc];
            temp_v16 = 0;
          }
          else {
            temp_v13 = puVar14[0xb];
            temp_v15 = puVar14[0xc];
            temp_v17 = 99;
            temp_v16 = temp_v13;
          }
          FUN_0027b524(temp_v13,temp_v15,temp_v16,temp_v17);
        }
        FUN_0027b4ec();
        FUN_0027b424();
        FUN_0027b100();
        FUN_0027af3c();
        FUN_00277f9c(puVar14[0xb],puVar14[0xc]);
        DAT_0049f93d = 1;
      }
      temp_v9 = FUN_002857e4();
      if (temp_v9 != 0) {
        temp_v16 = FUN_002857e4();
        FUN_0027b8cc(puVar14[0xb],temp_v16);
        FUN_00284c14(0);
      }
      else {
        temp_v16 = puVar14[0xb];
        temp_v13 = puVar14[0xc];
        FUN_00297c9c();
        FUN_0027b8cc(temp_v16,temp_v13);
        FUN_00277e4c();
        FUN_00284aa8();
      }
      FUN_0021bd04();
      temp_v16 = 0;
      temp_v9 = puVar14[9] + 1;
      puVar14[9] = temp_v9;
      puVar14[10] = temp_v16;
      break;
    }
    temp_v9 = puVar14[9] + 2;
    puVar14[9] = temp_v9;
    break;
  case 0x59:
    goto LAB_001bf38c;
  case 0x5a:
    goto LAB_001bf3ac;
  case 0x5b:
    goto LAB_001bf3c4;
  case 0x5c:
    goto LAB_001bf3e0;
  case 0x5d:
    goto LAB_001bf3f8;
  case 0x5e:
    goto LAB_001bf418;
  case 0x5f:
    goto LAB_001bf438;
  case 0x60:
    goto LAB_001bf458;
  case 0x61:
    goto LAB_001bf478;
  case 0x62:
    goto LAB_001bf498;
  case 99:
    goto LAB_001bf4b8;
  case 100:
    goto LAB_001bf4d4;
  case 0x65:
    goto LAB_001bf504;
  case 0x66:
    goto LAB_001bf528;
  case 0x67:
    temp_v9 = func_0x001fb224();
    temp_v14 = DAT_0049f954;
    if (temp_v9 != 0) {
      FUN_0020d9ac();
      FUN_0019dce0(puVar14[0xb],puVar14[0xc]);
      FUN_001fa408(puVar14[0xb],puVar14[0xc]);
      FUN_0020d54c();
      DAT_0049fb49 = 0;
      DAT_0049f954 = 0xffffffff;
      FUN_0027d35c();
      FUN_002a0790(0);
      DAT_0049f934 = 1;
      FUN_0027fd08(1);
      func_0x001b41ac(1);
      *(unsigned char *)(DAT_004474f4 + 0xa4) = 1;
      FUN_002735c8(0xffffffff);
      FUN_0028075c(DAT_00447e88 + 0x28);
      *(unsigned char *)(DAT_004474f4 + 0xa4) = 1;
      FUN_00307978();
      FUN_00276cac();
      func_0x003422b0(puVar14[0xb],puVar14[0xc],1);
      FUN_002766cc(0);
      FUN_00276b74();
      if (*(char *)((int)puVar14 + 0x1d) != '\0') {
        *(unsigned char *)((int)puVar14 + 0x1d) = 0;
        puVar14[9] = 0x68;
        puVar14[10] = 0;
      }
      else if (*(char *)((int)puVar14 + 0x1e) != '\0') {
        *(unsigned char *)((int)puVar14 + 0x1e) = 0;
        puVar14[9] = 0x69;
        puVar14[10] = 0;
      }
      else if (*(char *)((int)puVar14 + 0x1f) != '\0') {
        *(unsigned char *)((int)puVar14 + 0x1f) = 0;
        puVar14[9] = 0x6a;
        puVar14[10] = 0;
      }
      else if (*(char *)(puVar14 + 8) != '\0') {
        *(unsigned char *)(puVar14 + 8) = 0;
        puVar14[9] = 0x6b;
        puVar14[10] = 0;
      }
      else {
        FUN_00276ba4();
        temp_v9 = 0;
        FUN_00276bd8(0,8);
        FUN_00276840();
        if (temp_v9 != 0) {
          DAT_0049fb6b = 1;
          temp_v16 = FUN_00291018(puVar14[0x13],0x1b94e4);
          puVar14[0x2d] = temp_v16;
          DAT_0049f970 = 0;
          puVar14[9] = 0x34;
          puVar14[10] = 0;
        }
        else {
          if (temp_v14 == 3) {
            func_0x002c8750();
          }
          if (*(char *)(puVar14 + 7) != '\0') {
            *(unsigned char *)(puVar14 + 7) = 0;
            puVar14[9] = 0x36;
            puVar14[10] = 0;
          }
          else {
            FUN_00276170();
            DAT_0049f934 = 0;
            DAT_0049f93c = 0;
            DAT_0049fb45 = 1;
            DAT_0049fb46 = 1;
            puVar14[9] = 0x15;
            puVar14[10] = 0;
          }
        }
      }
    }
    break;
  case 0x68:
    if (puVar14[10] == 0) {
      *(unsigned char *)(DAT_004474f4 + 0xa4) = 1;
      FUN_0027fe84(0);
      *(unsigned int *)(DAT_004474f4 + 0xac) = 0;
      FUN_002735c8(0xffffffff);
      FUN_00273ab0(0);
      FUN_0027fd08(0x17);
      FUN_00276ba4();
      FUN_002766cc(0);
    }
    puVar14[10] = puVar14[10] + 1;
    func_0x002767b0();
    temp_v9 = FUN_0027f13c();
    if (temp_v9 == 0x17) {
      return 0;
    }
    goto LAB_001bfb30;
  case 0x69:
    if (puVar14[10] == 0) {
      *(unsigned char *)(DAT_004474f4 + 0xa4) = 1;
      FUN_0027fe84(0);
      *(unsigned int *)(DAT_004474f4 + 0xac) = 0;
      FUN_002735c8(0xffffffff);
      FUN_00273ab0(0);
      FUN_0027fd08(0x18);
      FUN_00276ba4();
      FUN_002766cc(0);
    }
    puVar14[10] = puVar14[10] + 1;
    func_0x002767b0();
    temp_v9 = FUN_0027f13c();
    if (temp_v9 == 0x18) {
      return 0;
    }
    goto LAB_001bfb30;
  case 0x6a:
    if (puVar14[10] == 0) {
      *(unsigned char *)(DAT_004474f4 + 0xa4) = 1;
      FUN_0027fe84(0);
      *(unsigned int *)(DAT_004474f4 + 0xac) = 0;
      FUN_002735c8(0xffffffff);
      FUN_00273ab0(0);
      FUN_0027fd08(0x19);
      FUN_00276ba4();
      FUN_002766cc(0);
    }
    puVar14[10] = puVar14[10] + 1;
    func_0x002767b0();
    temp_v9 = FUN_0027f13c();
    if (temp_v9 == 0x19) {
      return 0;
    }
    goto LAB_001bfb30;
  case 0x6b:
    if (puVar14[10] == 0) {
      *(unsigned char *)(DAT_004474f4 + 0xa4) = 1;
      FUN_0027fe84(0);
      *(unsigned int *)(DAT_004474f4 + 0xac) = 0;
      FUN_002735c8(0xffffffff);
      FUN_00273ab0(0);
      FUN_0027fd08(0x1a);
      FUN_00276ba4();
      FUN_002766cc(0);
    }
    puVar14[10] = puVar14[10] + 1;
    func_0x002767b0();
    temp_v9 = FUN_0027f13c();
    if (temp_v9 == 0x1a) {
      return 0;
    }
    FUN_00276840();
    if (temp_v9 != 0) {
      DAT_0049fb6b = 1;
      temp_v16 = FUN_00291018(puVar14[0x13],0x1b94e4);
      puVar14[0x2d] = temp_v16;
      DAT_0049f970 = 0;
      puVar14[9] = 0x34;
      puVar14[10] = 0;
      return 0;
    }
LAB_001bfb30:
    DAT_0049f934 = 0;
    DAT_0049f93c = 0;
    DAT_0049fb45 = 1;
    DAT_0049fb46 = 1;
    puVar14[9] = 0x15;
    puVar14[10] = 0;
    break;
  case 0x6c:
    if (puVar14[10] == 0) {
      FUN_0029c660(0,10,0xff);
      FUN_0029c660(1,10,0xff);
    }
    FUN_00276cac();
    FUN_00274230();
    puVar14[10] = puVar14[10] + 1;
    temp_v9 = FUN_00289924();
joined_r0x001bfbb4:
    if (temp_v9 == 0) {
      return 0;
    }
    temp_v9 = 0x6f;
    temp_v16 = 0;
    puVar14[9] = temp_v9;
    puVar14[10] = temp_v16;
    break;
  case 0x6d:
    if (puVar14[10] == 0) {
      FUN_0029c660(0,10,0xff);
      FUN_0029c660(1,10,0xff);
    }
    FUN_00276cac();
    FUN_00274230();
    puVar14[10] = puVar14[10] + 1;
    temp_v9 = FUN_00289924();
    if (temp_v9 == 0) {
      return 0;
    }
    FUN_002761fc();
    temp_v9 = 0x6f;
    temp_v16 = 0;
    puVar14[9] = temp_v9;
    puVar14[10] = temp_v16;
    break;
  case 0x6e:
    if (puVar14[10] == 0) {
      FUN_00270298(1);
    }
    FUN_00274230();
    puVar14[9] = 0x6f;
    puVar14[10] = 0;
    break;
  case 0x6f:
    FUN_002819f4();
    FUN_0027054c();
    FUN_002a7604(0);
    FUN_0020dbd0();
    FUN_00270514();
    FUN_001d3598();
    FUN_001fa5dc();
    FUN_00270458();
    FUN_001fa614();
    func_0x001e444c();
    func_0x0020cea8();
    FUN_001b3c68();
    FUN_002235e8();
    FUN_002c8a78();
    func_0x002dfdf0();
    FUN_0032b5a0();
    DAT_0049fb45 = 0;
    DAT_0049fba0 = '\0';
    DAT_0049fb49 = 0;
    func_0x00208a64();
    func_0x00208b44();
    FUN_002a755c(puVar14[0x18]);
    puVar14[0x18] = 0;
    FUN_002c4360(puVar14[0x16]);
    puVar14[0x16] = 0;
    FUN_002c4360(puVar14[0x17]);
    puVar14[0x17] = 0;
    FUN_002a755c(puVar14[0x15]);
    puVar14[0x15] = 0;
    FUN_0027de14();
    temp_v0 = *(char *)((int)puVar14 + 0xd);
    temp_v19 = temp_v0 == '\0';
    if (temp_v19) {
      temp_v0 = *(char *)((int)puVar14 + 0xe);
    }
    if (temp_v19 && temp_v0 == '\0') {
      temp_v0 = *(char *)((int)puVar14 + 0xf);
      temp_v19 = temp_v0 == '\0';
      if (temp_v19) {
        temp_v0 = *(char *)(puVar14 + 4);
      }
      if (temp_v19 && temp_v0 == '\0') {
        temp_v0 = *(char *)((int)puVar14 + 0x11);
        temp_v19 = temp_v0 == '\0';
        if (temp_v19) {
          temp_v0 = *(char *)((int)puVar14 + 0x12);
        }
        if (temp_v19 && temp_v0 == '\0') {
          temp_v0 = *(char *)((int)puVar14 + 0x13);
          temp_v19 = temp_v0 == '\0';
          if (temp_v19) {
            temp_v0 = *(char *)(puVar14 + 5);
          }
          if (((temp_v19 && temp_v0 == '\0') && ((int)DAT_0049fd14 < 200)) &&
             (DAT_0049fd14 == 0xffffffff)) {
            FUN_0032c8d0();
          }
        }
      }
    }
    FUN_001a946c();
    puVar14[9] = puVar14[9] + 1;
    puVar14[10] = 0;
    break;
  case 0x70:
    temp_v9 = puVar14[10] + 1;
    puVar14[10] = temp_v9;
    if (temp_v9 == 1) {
      FUN_001fb24c();
      FUN_001a85b0();
      FUN_00270404();
      FUN_001b45e0();
      FUN_001e29e8();
      FUN_00270340();
      FUN_001e2a68();
      func_0x001d371c();
      FUN_002147e8();
      FUN_0021df78();
      func_0x002d3d6c();
      FUN_00270250();
      FUN_001b427c();
      func_0x0021e668();
      puVar23 = DAT_00447e28;
      puVar14 = (unsigned int *)&DAT_00447e28;
      if (DAT_00447e28 != (unsigned int *)0x0) {
        puVar14 = (unsigned int *)(unsigned int)*(unsigned char *)(DAT_00447e28 + 0xf);
      }
      if (DAT_00447e28 != (unsigned int *)0x0 && puVar14 != (unsigned int *)0x0) {
        FUN_001041d8();
        *(unsigned char *)(puVar23 + 0xf) = 0;
      }
      FUN_00275c2c();
      FUN_003338b4();
      return 0;
    }
    if (temp_v9 < 2) {
      return 0;
    }
    temp_v9 = func_0x0030f534();
    if (temp_v9 == 0) {
      return 0;
    }
    func_0x001a8b4c();
    temp_v16 = 0;
    temp_v9 = puVar14[9] + 1;
    puVar14[9] = temp_v9;
    puVar14[10] = temp_v16;
    break;
  case 0x71:
    if (DAT_0049f950 != '\0') {
      FUN_002701c4();
      FUN_00287e9c(1);
      FUN_0027007c();
      FUN_0026fd14();
      if ((DAT_0049f950 != '\0') && (temp_v10 = FUN_002c0b94(), *(char *)(temp_v10 + 2) == '\x02')) {
        FUN_0026fc24();
        FUN_0029c650(0xf);
        DAT_0049f950 = '\0';
        uStack_1c8 = 1;
        uStack_1c4 = 0xffffffff;
        temp_v16 = 0x20;
        uStack_1c0 = 0x31303065;
        uStack_1bc = (unsigned int)&LAB_0031305f;
        temp_v13 = 4;
        FUN_002c59b8(temp_v13,puVar19,temp_v16);
        return 0xffffffff;
      }
    }
    if (*(char *)((int)puVar14 + 0xd) != '\0') {
      temp_v10 = FUN_00290694();
      if ((temp_v10 != 0) && (temp_v12 = FUN_00287afc(), temp_v12 == 6)) {
        FUN_002b6700();
        FUN_0026fbd0(*(unsigned short *)(temp_v10 + 0x148));
        return 0xffffffff;
      }
      (*(unsigned short *)((unsigned char *)&uStack_1c8 + 0)) = (unsigned short)uStack_1c8 & 0xff00;
      uStack_1c8 = romwright_piece_2_2(0xffff,(unsigned short)uStack_1c8);
      uStack_1c4 = 0xffffffff;
      uStack_1c0 = 0xffffffff;
      uStack_1bc = (unsigned int)((((unsigned int)uStack_1bc >> 8) & 0xff) << 8);
      uStack_1b8 = (unsigned int)(*(unsigned short *)((unsigned char *)&uStack_1b8 + 2)) << 0x10;
      FUN_0026fcb4(puVar14[0xb],puVar14[0xc]);
      uStack_1c8 = uStack_1c8 & 0xffffff00;
      temp_v6 = FUN_002faf3c();
      uStack_1c8 = romwright_piece_2_2(temp_v6,(unsigned short)uStack_1c8);
      if (DAT_0049f942 != '\0') {
        temp_v10 = FUN_002857e4();
        if (temp_v10 == 0) {
          temp_v6 = 7;
        }
        else {
          temp_v6 = 0xb;
        }
        uStack_1bc = (unsigned int)romwright_piece_2_2(1,(unsigned short)uStack_1bc);
        uStack_1b8 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&uStack_1b8 + 2)),temp_v6);
      }
      if (cRam0049fab7 != '\0') {
        uStack_1bc = (unsigned int)romwright_piece_2_2(uRam0049fab8,(unsigned short)uStack_1bc);
        uStack_1b8 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&uStack_1b8 + 2)),uRam0049faba);
      }
      if (DAT_0049fab4 != '\0') {
        (*(unsigned char *)((unsigned char *)&uStack_1bc + 0)) = 1;
      }
      else if (DAT_0049fab6 == '\0') {
        (*(unsigned char *)((unsigned char *)&uStack_1bc + 0)) = 0;
      }
      else {
        (*(unsigned char *)((unsigned char *)&uStack_1bc + 0)) = 2;
      }
      if ((*(unsigned short *)((unsigned char *)&uStack_1c8 + 2)) != 0) {
        uStack_1c8 = romwright_piece_3_1(uStack_1c8._1_3_,1);
        FUN_0026fca0(0);
code_r0x001c004c:
        if (DAT_0049f942 != '\0') {
          temp_v8 = (short)*(char *)(temp_v9 + 0x3a);
          temp_v7 = (short)*(char *)(temp_v9 + 0x3b);
        }
        else {
          temp_v8 = (short)puVar14[0xb];
          temp_v7 = (short)puVar14[0xc];
        }
      }
      else {
        temp_v8 = FUN_0026fbc0();
        uStack_1c8 = romwright_piece_2_2(temp_v8,(unsigned short)uStack_1c8);
        if (temp_v8 != 0) {
          temp_v6 = FUN_0026fbc0();
          uStack_1c8 = romwright_piece_2_2(temp_v6,(unsigned short)uStack_1c8);
          uStack_1c8 = romwright_piece_3_1(uStack_1c8._1_3_,1);
          FUN_0027db24(0);
          goto code_r0x001c004c;
        }
        uStack_1c8 = romwright_piece_2_2((short)puVar14[0x2c],(unsigned short)uStack_1c8);
        if (DAT_0049f942 != '\0') {
          DAT_0049fb9c = 3;
          temp_v8 = (short)*(char *)(temp_v9 + 0x3a);
          temp_v7 = (short)*(char *)(temp_v9 + 0x3b);
        }
        else {
          DAT_0049fb9c = 1;
          temp_v8 = (short)puVar14[0xb];
          temp_v7 = (short)puVar14[0xc];
        }
      }
      temp_v16 = 0x12;
      uStack_1c0 = romwright_piece_2_2(temp_v7,temp_v8);
      temp_v13 = 5;
      puVar19 = &uStack_1c8;
    }
    else if (*(char *)((int)puVar14 + 0xe) != '\0') {
      uStack_1c8 = puVar14[0xe];
      temp_v16 = 4;
      temp_v13 = 10;
      puVar19 = &uStack_1c8;
    }
    else if (*(char *)((int)puVar14 + 0xf) != '\0') {
      temp_v16 = 4;
      uStack_1c8 = puVar14[0xe] + 100;
      temp_v13 = 10;
      puVar19 = &uStack_1c8;
    }
    else if (*(char *)(puVar14 + 4) != '\0') {
      uStack_1c8 = puVar14[6];
      temp_v16 = 4;
      temp_v13 = 0xd;
      puVar19 = &uStack_1c8;
    }
    else if (*(char *)((int)puVar14 + 0x11) != '\0') {
      uStack_1c8 = puVar14[0xe];
      uStack_1c4 = 0;
      uStack_1c0 = 0;
      temp_v16 = 0xc;
      temp_v13 = 0x10;
      puVar19 = &uStack_1c8;
    }
    else {
      if (*(char *)((int)puVar14 + 0x12) == '\0') {
        if (*(char *)((int)puVar14 + 0x13) != '\0') {
          temp_v16 = 2;
          uStack_1c8 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&uStack_1c8 + 2)),(short)puVar14[0xe]);
          temp_v13 = 0x12;
          puVar19 = &uStack_1c8;
          FUN_002c59b8(temp_v13,puVar19,temp_v16);
          return 0xffffffff;
        }
        if (*(char *)(puVar14 + 5) == '\0') {
          if ((int)DAT_0049fd14 >= 200) {
            temp_v8 = (short)DAT_0049fd14 - 200;
            temp_v16 = 4;
            if (temp_v8 == 1) {
              temp_v6 = 0xb;
            }
            else {
              temp_v6 = 6;
            }
            uStack_1c8 = romwright_piece_2_2(temp_v6,temp_v8);
            temp_v13 = 0xe;
            puVar19 = &uStack_1c8;
          }
          else {
            if (DAT_0049fd14 == 0xffffffff) {
              FUN_002c45b8(*DAT_00447e28,0);
              return 0xffffffff;
            }
            temp_v16 = 0;
            puVar19 = (unsigned int *)0x0;
            if ((int)DAT_0049fd14 < 100) {
              temp_v13 = 6;
            }
            else {
              temp_v13 = 8;
            }
          }
          FUN_002c59b8(temp_v13,puVar19,temp_v16);
          return 0xffffffff;
        }
      }
      uStack_1c8 = DAT_0049f970;
      uStack_1c4 = 0xffffffff;
      FUN_002bf86c(&uStack_1c0,&DAT_0049f978);
      temp_v16 = 0x20;
      temp_v13 = 4;
      puVar19 = &uStack_1c8;
    }
    FUN_002c59b8(temp_v13,puVar19,temp_v16);
    return 0xffffffff;
  }
  return 0;
}
