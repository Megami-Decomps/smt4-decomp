/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00339d98` (_code @ 0x339d98, 0x254 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int DAT_00435d9c; /* 0x435d9c */
extern unsigned int DAT_00435da0; /* 0x435da0 */
extern int DAT_00435da4; /* 0x435da4 */
extern unsigned int DAT_00435da8; /* 0x435da8 */
extern unsigned int DAT_00435dac; /* 0x435dac */
extern unsigned int DAT_00435db0; /* 0x435db0 */
extern unsigned int DAT_00435db4; /* 0x435db4 */
extern unsigned int DAT_00435db8; /* 0x435db8 */
extern unsigned int DAT_00435dbc; /* 0x435dbc */

extern int FUN_0023ebc8(unsigned int);
/* Supplied declaration required: FUN_002972f8. */
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */
/* Supplied declaration required: FUN_00328f60. */
/* Supplied declaration required: FUN_003291d8. */
/* Supplied declaration required: FUN_0039493c. */
/* Supplied declaration required: FUN_00394ee0. */


void FUN_00339d98(int param_1)

{
/* irregular: 6 unstructured edge(s); 9 goto(s); 7 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  FUN_002c3aa8();
  do {
    temp_v0 = *(unsigned short *)(param_1 + 0x49fe);
    temp_v1 = (unsigned int)temp_v0;
    switch(temp_v1) {
    case 0:
      FUN_00394ee0();
      temp_v1 = *(unsigned short *)(param_1 + 0x49fe) + 1;
      *(short *)(param_1 + 0x49fe) = (short)temp_v1;
    case 1:
      FUN_0039493c();
      if (temp_v1 != 0) {
        *(unsigned int *)(param_1 + 0x2248) = DAT_00435d9c;
        *(unsigned int *)(param_1 + 0x224c) = DAT_00435da0;
        temp_v2 = DAT_00435da4;
        *(int *)(param_1 + 0x2250) = DAT_00435da4;
        FUN_002972f8();
        *(int *)(param_1 + 0x2254) = temp_v2;
        *(unsigned int *)(temp_v2 + 0x108) = 0;
        *(short *)(param_1 + 0x49fe) = *(short *)(param_1 + 0x49fe) + 1;
        goto LAB_00339e5c;
      }
      break;
    case 2:
LAB_00339e5c:
      if (*(int *)(param_1 + 0x2250) != 0) {
        *(unsigned int *)(param_1 + 0x2230) = DAT_00435da8;
        *(short *)(param_1 + 0x49fe) = *(short *)(param_1 + 0x49fe) + 1;
        goto LAB_00339e84;
      }
      break;
    case 3:
LAB_00339e84:
      if (*(int *)(param_1 + 0x2230) != 0) {
        *(unsigned int *)(param_1 + 0x2234) = DAT_00435dac;
        *(short *)(param_1 + 0x49fe) = *(short *)(param_1 + 0x49fe) + 1;
        goto LAB_00339eac;
      }
      break;
    case 4:
LAB_00339eac:
      if (*(int *)(param_1 + 0x2234) != 0) {
        *(unsigned int *)(param_1 + 0x2238) = DAT_00435db0;
        *(short *)(param_1 + 0x49fe) = *(short *)(param_1 + 0x49fe) + 1;
        goto LAB_00339ed4;
      }
      break;
    case 5:
LAB_00339ed4:
      if (*(int *)(param_1 + 0x2238) != 0) {
        *(unsigned int *)(param_1 + 0x2240) = DAT_00435db8;
        *(short *)(param_1 + 0x49fe) = *(short *)(param_1 + 0x49fe) + 1;
        goto LAB_00339efc;
      }
      break;
    case 6:
LAB_00339efc:
      if (*(int *)(param_1 + 0x2240) != 0) {
        *(unsigned int *)(param_1 + 0x223c) = DAT_00435db4;
        *(short *)(param_1 + 0x49fe) = *(short *)(param_1 + 0x49fe) + 1;
        goto LAB_00339f24;
      }
      break;
    case 7:
LAB_00339f24:
      if (*(int *)(param_1 + 0x223c) != 0) {
        *(unsigned int *)(param_1 + 0x2244) = DAT_00435dbc;
        *(short *)(param_1 + 0x49fe) = *(short *)(param_1 + 0x49fe) + 1;
        goto LAB_00339f4c;
      }
      break;
    case 8:
LAB_00339f4c:
      if (*(int *)(param_1 + 0x2244) != 0) {
        *(short *)(param_1 + 0x49fe) = *(short *)(param_1 + 0x49fe) + 1;
        goto LAB_00339f68;
      }
      break;
    case 9:
LAB_00339f68:
      temp_v2 = FUN_0023ebc8(0x3e);
      if (temp_v2 != 0) {
        *(short *)(param_1 + 0x49fe) = *(short *)(param_1 + 0x49fe) + 1;
        goto LAB_00339f8c;
      }
      break;
    case 10:
LAB_00339f8c:
      FUN_00328f60();
      *(short *)(param_1 + 0x49fe) = *(short *)(param_1 + 0x49fe) + 1;
    case 0xb:
      FUN_003291d8();
      temp_v0 = *(short *)(param_1 + 0x49fe) + 1;
      *(unsigned short *)(param_1 + 0x49fe) = temp_v0;
    case 0xc:
      temp_v0 = temp_v0 + 1;
      *(unsigned short *)(param_1 + 0x49fe) = temp_v0;
    case 0xd:
      *(unsigned short *)(param_1 + 0x49fe) = temp_v0 + 1;
      *(unsigned short *)(param_1 + 0x49fc) = *(unsigned short *)(param_1 + 0x49fc) | 1;
    }
    if ((*(unsigned short *)(param_1 + 0x49fc) & 1) != 0) {
      FUN_002c3a24(param_1 + 0x4a00);
      return;
    }
  } while( 1 );
}
