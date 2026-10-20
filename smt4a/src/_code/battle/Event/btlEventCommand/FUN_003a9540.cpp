/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a9540` (_code @ 0x3a9540, 0x100 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(int *, unsigned char *, unsigned int);
int FUN_00178b04(int, unsigned char *, int);
int FUN_004d854c(unsigned int);
int FUN_004d8804(unsigned int);
int FUN_004d881c(void);

/* stack frame of void: 16 slot(s), 64 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern unsigned char LAB_003a9644; /* 0x3a9644 */
extern unsigned char LAB_003a965c; /* 0x3a965c */

/* Supplied declaration required: FUN_00100388. */
extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_00178b04. */
extern unsigned int FUN_002360dc(unsigned int);
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_004d854c. */
extern int FUN_004d87e4(unsigned int);
/* Supplied declaration required: FUN_004d8804. */
/* Supplied declaration required: FUN_004d881c. */
extern unsigned int FUN_004d88c0(void);


unsigned int FUN_003a9540(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  
  temp_v0 = FUN_0014aa78();
  temp_v1 = FUN_002deb84();
  if (temp_v1 != 0) {
    temp_v1 = FUN_004d87e4(*(unsigned int *)(temp_v0 + 0x2298));
    if (temp_v1 == 0) {
      return 0;
    }
    FUN_004d854c(*(unsigned int *)(temp_v0 + 0x2298));
    FUN_004d8804(*(unsigned int *)(temp_v0 + 0x2298));
    *(unsigned char *)(temp_v0 + 0x22b4) = 1;
  }
  else {
    temp_v2 = FUN_002360dc(0);
    temp_v3 = 0;
    temp_v4 = 0;
    temp_v5 = 0;
    temp_v6 = 0;
    temp_v7 = 0;
    temp_v8 = 0;
    temp_v9 = 0;
    temp_v10 = 0;
    temp_v11 = 0;
    temp_v12 = 0;
    temp_v13 = 0;
    temp_v14 = 0;
    temp_v15 = 0;
    temp_v16 = 0;
    temp_v17 = 0;
    temp_v18 = 0;
    FUN_00100388(&temp_v3,&LAB_003a9644,temp_v2);
    if (*(int *)(temp_v0 + 0x2298) == 0) {
      temp_v1 = 0x24;
      FUN_00178b04(0x24,&LAB_003a965c,0x54b);
      temp_v2 = 0;
      if (temp_v1 != 0) {
        temp_v2 = FUN_004d88c0();
      }
      *(unsigned int *)(temp_v0 + 0x2298) = temp_v2;
      FUN_004d881c();
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
