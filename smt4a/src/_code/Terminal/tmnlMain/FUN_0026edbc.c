/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026edbc` (_code @ 0x26edbc, 0x2f4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

extern unsigned short DAT_0056fd74; /* 0x56fd74 */
extern unsigned short DAT_0056fdb0; /* 0x56fdb0 */
extern unsigned short DAT_0056fdec; /* 0x56fdec */
extern unsigned short DAT_0056fe28; /* 0x56fe28 */
extern unsigned short DAT_0056fe64; /* 0x56fe64 */
extern unsigned short DAT_0056fea0; /* 0x56fea0 */
extern unsigned short DAT_0056fedc; /* 0x56fedc */
extern unsigned short DAT_0056ff18; /* 0x56ff18 */
extern unsigned short DAT_0056ff54; /* 0x56ff54 */
extern unsigned short DAT_0056ff90; /* 0x56ff90 */
extern unsigned short DAT_0056ffcc; /* 0x56ffcc */
extern short DAT_00570008; /* 0x570008 */
extern short DAT_00570044; /* 0x570044 */
extern short DAT_00570080; /* 0x570080 */
extern short DAT_005700bc; /* 0x5700bc */
extern unsigned short DAT_005700f8; /* 0x5700f8 */
extern unsigned short DAT_00570134; /* 0x570134 */
extern unsigned short DAT_00570170; /* 0x570170 */
extern unsigned short DAT_005701ac; /* 0x5701ac */
extern unsigned short DAT_005701e8; /* 0x5701e8 */
extern unsigned short DAT_00570224; /* 0x570224 */

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif


int FUN_0026edbc(int param_1,unsigned int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  short temp_v2;
  
  temp_v1 = 0;
  temp_v2 = 0;
  switch(param_2) {
  case 0x35:
  case 0x44:
  case 0x49:
    temp_v1 = romwright_piece_2_2(DAT_0056ff54,DAT_0056fe28);
    temp_v2 = DAT_00570044;
    break;
  case 0x36:
  case 0x45:
  case 0x4a:
    temp_v1 = romwright_piece_2_2(DAT_0056ff90,DAT_0056fea0);
    temp_v2 = DAT_00570080;
    break;
  case 0x37:
  case 0x48:
    temp_v1 = (unsigned int)DAT_0056fdec;
    temp_v2 = DAT_00570008;
    break;
  case 0x38:
  case 0x47:
  case 0x4b:
    temp_v1 = romwright_piece_2_2(DAT_0056ffcc,DAT_0056fe64);
    temp_v2 = DAT_005700bc;
    break;
  case 0x39:
    temp_v1 = (unsigned int)DAT_0056fedc;
    break;
  case 0x3a:
    temp_v1 = (unsigned int)DAT_0056fdb0;
    break;
  case 0x3b:
    temp_v1 = (unsigned int)DAT_005700f8;
    break;
  case 0x3c:
    temp_v1 = (unsigned int)DAT_00570134;
    break;
  case 0x41:
    temp_v1 = (unsigned int)DAT_0056fd74;
    break;
  case 0x42:
    temp_v1 = (unsigned int)DAT_00570170;
    break;
  case 0x43:
    temp_v1 = (unsigned int)DAT_005701ac;
    break;
  case 0x46:
    temp_v1 = (unsigned int)DAT_0056ff18;
    break;
  case 0x4c:
    temp_v1 = (unsigned int)DAT_005701e8;
    break;
  case 0x4d:
    temp_v1 = (unsigned int)DAT_00570224;
  }
  temp_v0 = 0;
  if (temp_v0 < *(int *)(param_1 + 0x600)) {
    do {
      if ((0 < (short)temp_v1) && (**(short **)(param_1 + temp_v0 * 4 + 0x5a8) == (short)temp_v1)) {
        return temp_v0;
      }
      if ((0 < (int)temp_v1 >> 0x10) &&
         ((int)**(short **)(param_1 + temp_v0 * 4 + 0x5a8) == (int)temp_v1 >> 0x10)) {
        return temp_v0;
      }
      if ((0 < temp_v2) && (**(short **)(param_1 + temp_v0 * 4 + 0x5a8) == temp_v2)) {
        return temp_v0;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(int *)(param_1 + 0x600));
  }
  return 0;
}
