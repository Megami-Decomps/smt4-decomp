/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103bdc` (_code @ 0x103bdc, 0x200 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00103bdc_arg0 fn_00103bdc_arg0;
struct fn_00103bdc_arg0 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    byte field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x13];
    void *field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0x18];
    void *field_0x38; /* +0x38 */
    unsigned char pad_0x3c[0x18];
    void *field_0x54; /* +0x54 */
    int field_0x58; /* +0x58 */
    unsigned char pad_0x5c[0x8];
    undefined1 field_0x64; /* +0x64 */
    unsigned char pad_0x65[0x1];
    undefined1 field_0x66; /* +0x66 */
};

/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp81C; /* 0x81c: local_81c */
    unsigned int sp820; /* 0x820: local_820 */
    unsigned int sp824; /* 0x824: local_824 */
    unsigned int sp828; /* 0x828: local_828 */
    unsigned int sp82C; /* 0x82c: local_82c */
    unsigned int sp830; /* 0x830: local_830 */
    unsigned int sp834; /* 0x834: local_834 */
    unsigned int sp838; /* 0x838: local_838 */
} param_1_stack;

extern unsigned char LAB_00103e04; /* 0x103e04 */
extern unsigned char LAB_00103e0c; /* 0x103e0c */
extern unsigned char LAB_00103e1c; /* 0x103e1c */
extern unsigned char LAB_00103e20; /* 0x103e20 */
extern unsigned char LAB_00103e34; /* 0x103e34 */
extern unsigned char LAB_00103e48; /* 0x103e48 */

/* Unsupported intrinsic, declaration required: while (COPY). */
extern int FUN_002e783c(unsigned char *);
/* Supplied declaration required: FUN_002e95c4. */
/* Supplied declaration required: FUN_002e9768. */
/* Supplied declaration required: FUN_002e97b4. */
extern int FUN_002e97e2(int *, void **);
extern int FUN_002e97f2(int *, void **);
/* Supplied declaration required: FUN_002e9802. */
/* Supplied declaration required: FUN_002e9832. */
extern int FUN_002e9842(int *, void **);
extern int FUN_002e9854(int, int);
/* Supplied declaration required: FUN_002e98a4. */


void FUN_00103bdc(fn_00103bdc_arg0 *param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned int temp_v7;
  unsigned char *puVar9;
  int temp_v8;
  void *pvVar11;
  unsigned int temp_v9;
  unsigned char *puVar13;
  unsigned char *puVar14;
  void *pvVar15;
  void *temp_v10;
  int temp_v11;
  int temp_v12;
  void *temp_v13;
  void *temp_v14;
  void *temp_v15;
  void *temp_v16;
  unsigned char temp_v17 [2052];
  
  puVar14 = (unsigned char *)0x0;
  temp_v0 = param_1->field_0x8;
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if (temp_v0 != 2) {
        if (temp_v0 == 3) {
          temp_v9 = 0x103de4;
          puVar14 = temp_v17;
          FUN_002e9768(temp_v17,0x400,temp_v9);
        }
      }
      else {
        temp_v9 = 0x103df0;
        puVar14 = temp_v17;
        FUN_002e9768(temp_v17,0x400,temp_v9);
      }
    }
    else {
      temp_v9 = 0x103de0;
      puVar14 = temp_v17;
      FUN_002e9768(temp_v17,0x400,temp_v9);
    }
  }
  temp_v7 = *(unsigned int *)((int)param_1->field_0x4 + 8);
  temp_v5 = (temp_v7 & 0xff) != 0;
  temp_v6 = ((temp_v7 >> 8) & 0xff) != 0;
  temp_v4 = ((temp_v7 >> 0x10) & 0xff) != 0;
  temp_v3 = temp_v7 >> 0x18 != 0;
  if (((temp_v5 || temp_v6) || temp_v4) || temp_v3) {
    puVar9 = temp_v17 + (int)puVar14 * 2;
    FUN_002e9768(puVar9,0x400,&LAB_00103e0c,"address",&LAB_00103e04);
    puVar9 = puVar9 + (int)puVar14;
    puVar14 = temp_v17 + (int)puVar9 * 2;
    FUN_002e97b4(param_1->field_0x4,puVar14,0x400 - (int)puVar9);
    temp_v8 = FUN_002e783c(puVar14);
    puVar14 = puVar9 + temp_v8;
  }
  temp_v2 = ((temp_v5 || temp_v6) || temp_v4) || temp_v3;
  temp_v1 = *(unsigned short *)((int)param_1->field_0x4 + 6);
  if ((temp_v1 & 0xff) != 0 || temp_v1 >> 8 != 0) {
    if (((temp_v5 || temp_v6) || temp_v4) || temp_v3) {
      puVar9 = temp_v17 + (int)puVar14 * 2;
      FUN_002e9768(puVar9,0x400,&LAB_00103e1c);
      puVar14 = puVar9 + (int)puVar14;
    }
    temp_v1 = *(unsigned short *)((int)param_1->field_0x4 + 6);
    temp_v10 = (void *)(((temp_v1 & 0xff) << 8) | (unsigned int)(temp_v1 >> 8));
    puVar9 = temp_v17 + (int)puVar14 * 2;
    FUN_002e9768(puVar9,0x400,&LAB_00103e20,"port",&LAB_00103e04);
    puVar14 = puVar9 + (int)puVar14;
    temp_v2 = 1;
  }
  temp_v11 = *(int *)((int)param_1->field_0x38 + 8);
  temp_v12 = *(int *)((int)param_1->field_0x1c + 8);
  do {
    temp_v13 = param_1->field_0x38;
    temp_v8 = FUN_002e9832(&temp_v11,&temp_v13);
    if (temp_v8 == 0) {
      temp_v16 = param_1->field_0x1c;
      temp_v8 = FUN_002e9842(&temp_v12,&temp_v16);
      if (temp_v8 == 0) {
        if (param_1->field_0x58 != 0) {
          puVar9 = temp_v17 + (int)puVar14 * 2;
          FUN_002e9768(puVar9,0x400,&LAB_00103e48);
          puVar9 = puVar9 + (int)puVar14;
          temp_v3 = 0;
          temp_v14 = *(void **)((int)param_1->field_0x54 + 8);
          while( 1 ) {
            temp_v15 = param_1->field_0x54;
            temp_v8 = FUN_002e9832(&temp_v14,&temp_v15);
            if (temp_v8 == 0) break;
            if (temp_v3) {
              puVar14 = temp_v17 + (int)puVar9 * 2;
              FUN_002e9768(puVar14,0x400,&LAB_00103e1c);
              puVar9 = puVar14 + (int)puVar9;
            }
            temp_v10 = *(void **)((int)temp_v14 + 0x1c);
            puVar14 = temp_v17 + (int)puVar9 * 2;
            FUN_002e9768(puVar14,0x400,&LAB_00103e34,*(unsigned int *)((int)temp_v14 + 0x14),
                         &LAB_00103e04);
            puVar9 = puVar14 + (int)puVar9;
            temp_v3 = 1;
            FUN_002e9802(&temp_v14);
          }
        }
        FUN_002e95c4(param_1,temp_v17);
        param_1->field_0x64 = 1;
        param_1->field_0x66 = 1;
        return;
      }
    }
    if (temp_v2) {
      puVar9 = temp_v17 + (int)puVar14 * 2;
      FUN_002e9768(puVar9,0x400,&LAB_00103e1c);
      puVar14 = puVar9 + (int)puVar14;
    }
    temp_v14 = param_1->field_0x38;
    pvVar15 = (void *)0x0;
    temp_v8 = FUN_002e97e2(&temp_v11,&temp_v14);
    if (temp_v8 == 0) {
      temp_v10 = param_1->field_0x1c;
      temp_v8 = FUN_002e97f2(&temp_v12,&temp_v10);
      if ((temp_v8 != 0) || (temp_v8 = FUN_002e9854(temp_v11 + 0x10,temp_v12 + 0x10), temp_v8 != 0))
      {
        temp_v9 = *(unsigned int *)(temp_v11 + 0x14);
        pvVar11 = *(void **)(temp_v11 + 0x1c);
        FUN_002e9802(&temp_v11);
        if (pvVar11 != (void *)0x0) {
          puVar9 = temp_v17 + (int)puVar14 * 2;
          puVar13 = &LAB_00103e34;
          temp_v10 = pvVar11;
        }
        else {
          puVar9 = temp_v17 + (int)puVar14 * 2;
          puVar13 = &LAB_00103e20;
          temp_v10 = pvVar15;
        }
      }
      else {
        temp_v9 = *(unsigned int *)(temp_v12 + 0x14);
        pvVar15 = *(void **)(temp_v12 + 0x18);
        FUN_002e98a4(&temp_v12);
        puVar9 = temp_v17 + (int)puVar14 * 2;
        puVar13 = &LAB_00103e20;
        temp_v10 = pvVar15;
      }
    }
    else {
      temp_v9 = *(unsigned int *)(temp_v12 + 0x14);
      pvVar15 = *(void **)(temp_v12 + 0x18);
      FUN_002e98a4(&temp_v12);
      puVar9 = temp_v17 + (int)puVar14 * 2;
      puVar13 = &LAB_00103e20;
      temp_v10 = pvVar15;
    }
    FUN_002e9768(puVar9,0x400,puVar13,temp_v9,&LAB_00103e04);
    puVar14 = puVar9 + (int)puVar14;
    temp_v2 = 1;
  } while( 1 );
}
