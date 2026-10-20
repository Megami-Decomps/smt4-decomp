/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a8cf8` (_code @ 0x1a8cf8, 0x25c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMdlManagerMarkDestroy(void);
int FUN_002878fc(int);
int FUN_002879dc(int, int, int);
int FUN_00287a78(void);
int FUN_00287aec(void);
int FUN_00287b0c(void);
int FUN_00287be4(void);
int FUN_00291e40(int);
int asdMdlManagerDestroy(void);
int FUN_002df824(int, int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern int DAT_00447a60; /* 0x447a60 */
extern signed char DAT_0049fa98; /* 0x49fa98 */
extern int DAT_0049fa9c; /* 0x49fa9c */
extern short DAT_0049faae; /* 0x49faae */

/* Supplied declaration required: asdMdlManagerMarkDestroy. */
/* Supplied declaration required: FUN_002878fc. */
/* Supplied declaration required: FUN_002879dc. */
/* Supplied declaration required: FUN_00287a78. */
/* Supplied declaration required: FUN_00287aec. */
/* Supplied declaration required: FUN_00287b0c. */
/* Supplied declaration required: FUN_00287be4. */
/* Supplied declaration required: FUN_00291e40. */
/* Supplied declaration required: asdMdlManagerDestroy. */
/* Supplied declaration required: FUN_002df824. */


unsigned int FUN_001a8cf8(void)

{
/* irregular: 10 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  
  temp_v5 = 0;
  do {
    temp_v4 = DAT_00447a60 + temp_v5 * 0x3c;
    if (*(char *)(temp_v4 + 0x24) != '\0') {
      switch(*(unsigned int *)(temp_v4 + 0x28)) {
      case 1:
        temp_v1 = 0;
        temp_v0 = 0;
        if (DAT_0049fa98 != '\0') {
          temp_v0 = DAT_0049faae;
        }
        if (DAT_0049fa98 != '\0' && temp_v0 != 0) {
          FUN_00287be4();
          temp_v6 = *(unsigned int *)(temp_v4 + 0x3c);
          FUN_00287b0c();
          if ((temp_v6 < 0xc2b40000) && ((int)temp_v6 < 0x42b40000)) {
            temp_v1 = 1;
          }
          temp_v2 = DAT_0049fa9c;
          FUN_00287aec();
          if (((temp_v2 < 0x43960000) && (temp_v2 = DAT_0049fa9c, FUN_00287a78(), temp_v2 < 0x428c0000))
             && (temp_v1)) {
            *(unsigned int *)(temp_v4 + 0x40) = 1;
            FUN_00291e40(0x10001fb);
            FUN_002df824((int)(short)*(unsigned int *)(temp_v4 + 0x48),1);
            *(unsigned char *)(temp_v4 + 0x44) = 1;
            *(unsigned int *)(temp_v4 + 0x28) = 2;
            *(unsigned int *)(temp_v4 + 0x2c) = 0;
          }
        }
        break;
      case 2:
        temp_v2 = *(int *)(temp_v4 + 0x2c) + 1;
        *(int *)(temp_v4 + 0x2c) = temp_v2;
        if (temp_v2 == 2) {
          FUN_002879dc(0xf,0x1e,1);
        }
        if (*(int *)(temp_v4 + 0x2c) == 0x28) {
          FUN_002878fc((int)(short)*(unsigned int *)(temp_v4 + 0x5c));
        }
        if (*(int *)(temp_v4 + 0x2c) >= 0x3c) {
          if (*(char *)(temp_v4 + 0x4c) != '\0') {
            if (*(int *)(temp_v4 + 0x50) == 0) break;
            asdMdlManagerMarkDestroy();
            temp_v3 = 4;
            *(unsigned char *)(temp_v4 + 0x54) = 0;
          }
          else {
            puVar5 = *(unsigned int **)(DAT_00447a60 + *(int *)(temp_v4 + 0x58) * 8 + 0x18);
            *puVar5 = *puVar5 | 2;
            *(unsigned char *)(*(int *)(puVar5[2] + 0x2c) + 0x1f6) = 0;
            temp_v3 = 3;
          }
          *(unsigned int *)(temp_v4 + 0x28) = temp_v3;
        }
        break;
      case 4:
        *(unsigned int *)(temp_v4 + 0x28) = 5;
        break;
      case 5:
        if (*(int *)(temp_v4 + 0x50) != 0) {
          asdMdlManagerDestroy();
          *(unsigned int *)(temp_v4 + 0x50) = 0;
        }
        *(char *)(temp_v4 + 0x24) = '\0';
        *(unsigned int *)(temp_v4 + 0x28) = 0;
      }
    }
    temp_v5 = temp_v5 + 1;
    if (temp_v5 >= 0x10) {
      return 0;
    }
  } while( 1 );
}

} /* extern "C" */
