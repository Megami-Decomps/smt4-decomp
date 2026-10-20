/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001df8d4` (_code @ 0x1df8d4, 0x30c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int idMapLookup(void);
int FUN_00283e48(void);
int dataTable06Sub1GetRecord(void);
int FUN_002ae164(void);
int VectorUnsignedToFloat(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
extern int FUN_0026a604(void);
/* Supplied declaration required: idMapLookup. */
/* Supplied declaration required: FUN_00283e48. */
/* Supplied declaration required: dataTable06Sub1GetRecord. */
/* Supplied declaration required: FUN_002ae164. */


unsigned int FUN_001df8d4(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int in_fpscr;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  
  temp_v7 = 0;
  temp_v8 = -1;
  temp_v9 = -1;
  temp_v11 = 0.0f;
  if (0 < *(int *)(param_1 + 8)) {
    temp_v13 = 0.01f;
    temp_v12 = 1.0f;
    do {
      temp_v1 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 4) + temp_v7 * 2);
      if ((temp_v1 != 0) && (idMapLookup(), temp_v1 != 6)) {
        temp_v2 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 4) + temp_v7 * 2);
        dataTable06Sub1GetRecord();
        temp_v5 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 4) + temp_v7 * 2);
        temp_v1 = temp_v5;
        dataTable06Sub1GetRecord();
        temp_v10 = (float)VectorUnsignedToFloat
                                  (*(unsigned char *)(temp_v1 + 3) & 0x1f,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v10 = temp_v10 + temp_v10 * temp_v13;
        temp_v3 = temp_v5;
        idMapLookup();
        if (*(unsigned char *)(param_1 + 0x2c) == temp_v3) {
          temp_v10 = temp_v10 + temp_v12;
        }
        FUN_002ae164();
        if ((temp_v5 != 0) && (temp_v6 = 0, 0 < *(int *)(param_1 + 0x10))) {
          do {
            if (*(short *)(*(int *)(param_1 + 0xc) + temp_v6 * 2) != 0) {
              FUN_00283e48();
              temp_v4 = FUN_0026a604();
              if (temp_v4 != 0) {
                temp_v10 = temp_v10 + temp_v12;
                break;
              }
            }
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < *(int *)(param_1 + 0x10));
        }
        temp_v6 = 0;
        if (temp_v6 < *(int *)(param_1 + 0x20)) {
          do {
            temp_v5 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x1c) + temp_v6 * 2);
            idMapLookup();
            if (temp_v5 == temp_v3) {
              temp_v10 = temp_v10 - temp_v12;
            }
            temp_v5 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x1c) + temp_v6 * 2);
            dataTable06Sub1GetRecord();
            temp_v6 = temp_v6 + 1;
            if (*(char *)(temp_v1 + 2) == *(char *)(temp_v5 + 2)) {
              temp_v10 = temp_v10 - temp_v12;
            }
          } while (temp_v6 < *(int *)(param_1 + 0x20));
        }
        if (temp_v8 < 0) {
          temp_v8 = temp_v7;
          temp_v9 = *(int *)(param_1 + (unsigned int)*(unsigned char *)(temp_v2 + 2) * 4 + 0x30);
          temp_v11 = temp_v10;
        }
        else {
          temp_v6 = *(int *)(param_1 + (unsigned int)*(unsigned char *)(temp_v2 + 2) * 4 + 0x30);
          if (temp_v6 <= temp_v9) {
            if (temp_v6 == temp_v9) {
              temp_v1 = in_fpscr & 0xfffffff;
              temp_v3 = temp_v1 | ((unsigned int)(temp_v11 < temp_v10) << 0x1f) | ((unsigned int)(temp_v11 == temp_v10) << 0x1e)
              ;
              in_fpscr = temp_v3 | ((unsigned int)((temp_v11 != temp_v11) || (temp_v10 != temp_v10)) << 0x1c);
              temp_v0 = (unsigned char)(temp_v3 >> 0x18);
              if ((!(!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1))) &&
                 ((in_fpscr = temp_v1 | ((unsigned int)(temp_v11 == temp_v10) << 0x1e), !romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)
                  || (*(unsigned short *)(*(int *)(param_1 + 4) + temp_v8 * 2) >=
                      *(unsigned short *)(*(int *)(param_1 + 4) + temp_v7 * 2))))) {
                temp_v8 = temp_v7;
                temp_v9 = temp_v6;
                temp_v11 = temp_v10;
              }
            }
            else {
              temp_v8 = temp_v7;
              temp_v9 = temp_v6;
              temp_v11 = temp_v10;
            }
          }
        }
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < *(int *)(param_1 + 8));
    if (-1 < temp_v8) {
      *(unsigned short *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x20) * 2) =
           *(unsigned short *)(*(int *)(param_1 + 4) + temp_v8 * 2);
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      temp_v1 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 4) + temp_v8 * 2);
      FUN_002ae164();
      if ((temp_v1 != 0) && (temp_v9 = 0, 0 < *(int *)(param_1 + 0x10))) {
        do {
          if (*(short *)(*(int *)(param_1 + 0xc) + temp_v9 * 2) != 0) {
            FUN_00283e48();
            temp_v7 = FUN_0026a604();
            if (temp_v7 != 0) {
              *(unsigned short *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x20) * 2) =
                   *(unsigned short *)(*(int *)(param_1 + 0xc) + temp_v9 * 2);
              *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
              *(unsigned short *)(*(int *)(param_1 + 0xc) + temp_v9 * 2) = 0;
              break;
            }
          }
          temp_v9 = temp_v9 + 1;
        } while (temp_v9 < *(int *)(param_1 + 0x10));
      }
      *(unsigned short *)(*(int *)(param_1 + 4) + temp_v8 * 2) = 0;
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
