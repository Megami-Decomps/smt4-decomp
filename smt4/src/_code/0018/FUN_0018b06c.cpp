/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018b06c` (_code @ 0x18b06c, 0x17c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b76d0(int *);
int FUN_002ba12c(int);
int FUN_002bed3c(void);
int FUN_002bf538(void);
int FUN_002c1b64(int, int);
int FUN_002c39a4(int);
int VectorSignedToFloat(int, int);

typedef int romwright_code(...);
/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern int DAT_0043daa8; /* 0x43daa8 */
extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b76d0. */
/* Supplied declaration required: FUN_002ba12c. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf538. */
/* Supplied declaration required: FUN_002c1b64. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);


unsigned int FUN_0018b06c(void)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  unsigned int in_fpscr;
  float temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  temp_v5 = 0x3f800000;
  temp_v6 = 0x3f800000;
  temp_v7 = 0x3f800000;
  temp_v8 = 0x3f800000;
  switch(*(unsigned int *)(DAT_0043daa8 + 0xd28)) {
  case 3:
  case 4:
  case 5:
    if (*(char *)(DAT_0043daa8 + 0xd62) != '\0') {
      FUN_002bed3c();
      FUN_002c39a4(g_titleScene);
      temp_v0 = g_titleScene;
      temp_v1 = FUN_002c5d80(1,0);
      piVar5 = (int *)(temp_v0 + 0x124c);
      temp_v2 = *piVar5;
      temp_v3 = piVar5[temp_v2 + 2];
      *piVar5 = temp_v2 + 1;
      piVar5[temp_v2 + 3] = temp_v1;
      if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v3 != temp_v1) {
        (**(romwright_code **)(temp_v0 + 0x1268))();
        *(unsigned char *)(temp_v0 + 0x1264) = 0;
      }
      temp_v5 = 0;
      temp_v6 = 0;
      temp_v7 = 0;
      temp_v8 = 0x3f000000;
      FUN_002c1b64(g_titleScene,0);
      temp_v4 = 0.35f;
      FUN_002ba12c(g_titleScene);
      VectorSignedToFloat((int)temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002b76d0(&temp_v5);
      FUN_002bf538();
      temp_v0 = g_titleScene;
      piVar5 = (int *)(g_titleScene + 0x124c);
      temp_v1 = *piVar5;
      temp_v2 = piVar5[temp_v1 + 2];
      *piVar5 = temp_v1 - 1;
      if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
        (**(romwright_code **)(temp_v0 + 0x1268))();
        *(unsigned char *)(temp_v0 + 0x1264) = 0;
      }
    }
  }
  return 0;
}

} /* extern "C" */
