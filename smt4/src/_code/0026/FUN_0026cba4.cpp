/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026cba4` (_code @ 0x26cba4, 0x268 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029a0cc(int);
int FUN_0029c4c8(int);
int FUN_0029c4e4(int, int);
int FUN_002b4670(void);
int rt_memcpy_w(int, unsigned int, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern int DAT_0043dcf0; /* 0x43dcf0 */

/* Supplied declaration required: FUN_0029a0cc. */
/* Supplied declaration required: FUN_0029c4c8. */
/* Supplied declaration required: FUN_0029c4e4. */
extern unsigned int FUN_002a8740(int);
/* Supplied declaration required: FUN_002b4670. */
extern unsigned int FUN_002b63ac(void);
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0026cba4(int param_1,int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = DAT_0043dcf0;
  temp_v1 = (unsigned int)*(unsigned short *)(DAT_0043dcf0 + 0x36);
  if ((temp_v1 == 0) || ((param_1 < 0 && (param_2 != 0 || param_3 != 0)))) {
    return;
  }
  FUN_002b4670();
  if ((*(unsigned char *)(temp_v1 + 0x6e) & 2) == 0) {
    FUN_0029c4c8(0);
    return;
  }
  if (!(param_2 == 0 && param_3 == 0)) {
    temp_v2 = FUN_002a8740(param_1);
    temp_v4 = 0x604;
    temp_v3 = temp_v0 + 0x11ec;
  }
  else {
    temp_v2 = FUN_002b63ac();
    temp_v4 = 0x8c;
    temp_v3 = temp_v0 + 0x1160;
  }
  rt_memcpy_w(temp_v3,temp_v2,temp_v4);
  switch(*(unsigned short *)(temp_v1 + 0x60)) {
  case 0x1f:
    if (!(param_2 == 0 && param_3 == 0)) {
      *(short *)(temp_v0 + 0x11f0) = *(short *)(temp_v0 + 0x11f0) + 3;
      *(short *)(temp_v0 + 0x11fe) = *(short *)(temp_v0 + 0x11fe) + 3;
    }
    else {
      *(short *)(temp_v0 + 0x1172) = *(short *)(temp_v0 + 0x1172) + 3;
      *(short *)(temp_v0 + 0x1180) = *(short *)(temp_v0 + 0x1180) + 3;
    }
    break;
  case 0x20:
    if (!(param_2 == 0 && param_3 == 0)) {
      *(short *)(temp_v0 + 0x11f4) = *(short *)(temp_v0 + 0x11f4) + 3;
      *(short *)(temp_v0 + 0x1202) = *(short *)(temp_v0 + 0x1202) + 3;
    }
    else {
      *(short *)(temp_v0 + 0x1176) = *(short *)(temp_v0 + 0x1176) + 3;
      *(short *)(temp_v0 + 0x1184) = *(short *)(temp_v0 + 0x1184) + 3;
    }
    break;
  case 0x21:
    if (!(param_2 == 0 && param_3 == 0)) {
      *(short *)(temp_v0 + 0x11f2) = *(short *)(temp_v0 + 0x11f2) + 3;
      *(short *)(temp_v0 + 0x1200) = *(short *)(temp_v0 + 0x1200) + 3;
    }
    else {
      *(short *)(temp_v0 + 0x1174) = *(short *)(temp_v0 + 0x1174) + 3;
      *(short *)(temp_v0 + 0x1182) = *(short *)(temp_v0 + 0x1182) + 3;
    }
    break;
  case 0x22:
    if (!(param_2 == 0 && param_3 == 0)) {
      *(short *)(temp_v0 + 0x11f6) = *(short *)(temp_v0 + 0x11f6) + 3;
      *(short *)(temp_v0 + 0x1204) = *(short *)(temp_v0 + 0x1204) + 3;
    }
    else {
      *(short *)(temp_v0 + 0x1178) = *(short *)(temp_v0 + 0x1178) + 3;
      *(short *)(temp_v0 + 0x1186) = *(short *)(temp_v0 + 0x1186) + 3;
    }
    break;
  case 0x23:
    if (!(param_2 == 0 && param_3 == 0)) {
      *(short *)(temp_v0 + 0x11f8) = *(short *)(temp_v0 + 0x11f8) + 3;
      *(short *)(temp_v0 + 0x1206) = *(short *)(temp_v0 + 0x1206) + 3;
    }
    else {
      *(short *)(temp_v0 + 0x117a) = *(short *)(temp_v0 + 0x117a) + 3;
      *(short *)(temp_v0 + 0x1188) = *(short *)(temp_v0 + 0x1188) + 3;
    }
  }
  FUN_0029c4c8(1);
  if (param_2 == 0 && param_3 == 0) {
    FUN_0029a0cc(temp_v0 + 0x1160);
    return;
  }
  FUN_0029c4e4(temp_v0 + 0x11ec,0);
  return;
}

} /* extern "C" */
