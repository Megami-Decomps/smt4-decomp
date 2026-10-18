/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a8bf0` (_code @ 0x1a8bf0, 0x25c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern int DAT_00447a60; /* 0x447a60 */
extern signed char DAT_0049fa98; /* 0x49fa98 */
extern int DAT_0049fa9c; /* 0x49fa9c */
extern short DAT_0049faae; /* 0x49faae */

/* Supplied declaration required: FUN_00152af8. */
/* Supplied declaration required: FUN_00287b64. */
/* Supplied declaration required: FUN_00287c44. */
/* Supplied declaration required: FUN_00287ce0. */
/* Supplied declaration required: FUN_00287d54. */
/* Supplied declaration required: FUN_00287d74. */
/* Supplied declaration required: FUN_00287e4c. */
/* Supplied declaration required: FUN_002920e4. */
/* Supplied declaration required: FUN_002a7aa0. */
/* Supplied declaration required: FUN_002df7b0. */


unsigned int FUN_001a8bf0(void)

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
          FUN_00287e4c();
          temp_v6 = *(unsigned int *)(temp_v4 + 0x3c);
          FUN_00287d74();
          if ((temp_v6 < 0xc2b40000) && ((int)temp_v6 < 0x42b40000)) {
            temp_v1 = 1;
          }
          temp_v2 = DAT_0049fa9c;
          FUN_00287d54();
          if (((temp_v2 < 0x43960000) && (temp_v2 = DAT_0049fa9c, FUN_00287ce0(), temp_v2 < 0x428c0000))
             && (temp_v1)) {
            *(unsigned int *)(temp_v4 + 0x40) = 1;
            FUN_002920e4(0x10001fb);
            FUN_002df7b0((int)(short)*(unsigned int *)(temp_v4 + 0x48),1);
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
          FUN_00287c44(0xf,0x1e,1);
        }
        if (*(int *)(temp_v4 + 0x2c) == 0x28) {
          FUN_00287b64((int)(short)*(unsigned int *)(temp_v4 + 0x5c));
        }
        if (*(int *)(temp_v4 + 0x2c) >= 0x3c) {
          if (*(char *)(temp_v4 + 0x4c) != '\0') {
            if (*(int *)(temp_v4 + 0x50) == 0) break;
            FUN_00152af8();
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
          FUN_002a7aa0();
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
