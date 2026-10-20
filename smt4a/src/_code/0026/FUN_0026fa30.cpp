/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026fa30` (_code @ 0x26fa30, 0x1c8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00203b40(...);
int FUN_00261840(...);
int FUN_002a4878(...);
int FUN_002a4914(...);
int FUN_002a4964(...);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int DAT_0057f268; /* 0x57f268 */

extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_00261840. */
/* Supplied declaration required: FUN_002a4878. */
extern unsigned int FUN_002a4894(int);
/* Supplied declaration required: FUN_002a4914. */
/* Supplied declaration required: FUN_002a4964. */


void FUN_0026fa30(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
  
  temp_v1 = DAT_0057f268;
  temp_v2 = FUN_001ab888();
  if (*(int *)(temp_v1 + 0x1218) != 1) {
    temp_v3 = temp_v1 + 0xc88;
    temp_v4 = FUN_002a4878();
    temp_v5 = FUN_002a4894(temp_v3);
    temp_v6 = FUN_002a4878(temp_v1 + 0xd50);
    temp_v7 = FUN_002a4894(temp_v1 + 0xd50);
    temp_v0 = *(unsigned char *)(temp_v2 + 0x1ca3);
    temp_v8 = temp_v0 >> 2;
    if ((temp_v0 & 3) != 0) {
      temp_v8 = temp_v8 + 1;
    }
    if (temp_v0 < 0xc) {
      FUN_00203b40(temp_v3,temp_v0,temp_v8,4,1,1);
      FUN_00203b40(temp_v1 + 0xd50,*(unsigned char *)(temp_v2 + 0x1ca3) + 4,temp_v8 + 1,4,1,1);
    }
    else if (*(int *)(temp_v1 + 0x2c) != 0) {
      temp_v2 = FUN_001ab888();
      FUN_00203b40(temp_v3,*(unsigned char *)(temp_v2 + 0x1ca3) - 0xc,3,4,1,1);
      temp_v2 = FUN_001ab888();
      FUN_00203b40(temp_v1 + 0xd50,*(unsigned char *)(temp_v2 + 0x1ca3) - 8,4,4,1,1);
    }
    else {
      FUN_00203b40(temp_v3,0xc,3,4,1,1);
      FUN_00203b40(temp_v1 + 0xd50,0x10,4,4,1,1);
    }
    FUN_002a4914(temp_v3,temp_v4);
    FUN_002a4964(temp_v3,temp_v5);
    FUN_002a4914(temp_v1 + 0xd50,temp_v6);
    FUN_002a4964(temp_v1 + 0xd50,temp_v7);
    FUN_00261840(temp_v3);
    FUN_00261840(temp_v1 + 0xd50);
    return;
  }
  return;
}

} /* extern "C" */
