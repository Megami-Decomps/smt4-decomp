/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027dbac` (_code @ 0x27dbac, 0x1e8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00164168(unsigned int, int, int, int, int, int);
int FUN_001677c0(void);
int FUN_0016c4b8(unsigned int, int);
int FUN_00183bb0(void);
int FUN_00184e64(int);
int FUN_0025cba0(int, int, int, int, int);
int FUN_002e6dd0(unsigned char [72], int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} void_stack;

extern int DAT_00589154; /* 0x589154 */
extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00164168. */
/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_0016c4b8. */
extern int FUN_001834a4(unsigned int, int);
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_00184e64. */
/* Supplied declaration required: FUN_0025cba0. */
/* Supplied declaration required: FUN_002e6dd0. */


unsigned int FUN_0027dbac(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [72];
  
  temp_v0 = DAT_00589154;
  FUN_001677c0();
  FUN_00183bb0();
  FUN_002e6dd0(temp_v3,0x40);
  switch(*(unsigned int *)(temp_v0 + 8)) {
  case 1:
  case 2:
    FUN_00184e64(0xff);
    FUN_001677c0();
    FUN_0016c4b8(DAT_0059dbb4,0);
    FUN_0025cba0(0,0,400,0xf0,0x65);
    FUN_00183bb0();
    FUN_001677c0();
    break;
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
    FUN_00184e64(0xff);
    FUN_0016c4b8(DAT_0059dbb4,0);
    FUN_0025cba0(0,0,400,0xf0,0x65);
    FUN_00183bb0();
  }
  temp_v1 = *(int *)(temp_v0 + 8);
  if ((temp_v1 == 0x15 || temp_v1 == 0x16) || temp_v1 == 0x17) {
    temp_v1 = 0;
    do {
      temp_v2 = FUN_001834a4(8,temp_v1 + 0x69);
      FUN_00164168(*(unsigned int *)(temp_v0 + 0x2b8),*(short *)(temp_v2 + 8) - 10,
                   *(short *)(temp_v2 + 10) - 10,0x65,6,temp_v1);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 7);
  }
  FUN_001677c0();
  FUN_00183bb0();
  return 0;
}

} /* extern "C" */
