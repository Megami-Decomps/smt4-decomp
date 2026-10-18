/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00111d0c` (_code @ 0x111d0c, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00111d0c_arg0 fn_00111d0c_arg0;
struct fn_00111d0c_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0xcc];
    undefined4 field_0xd0; /* +0xd0 */
    unsigned char pad_0xd4[0xb4];
    undefined4 field_0x188; /* +0x188 */
    undefined4 field_0x18c; /* +0x18c */
    unsigned char pad_0x190[0x1c];
    int field_0x1ac; /* +0x1ac */
    unsigned char field_0x1b0; /* +0x1b0 */
    unsigned char pad_0x1b1[0xcb];
    undefined4 field_0x27c; /* +0x27c */
};

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
} param_1_stack;

extern unsigned char LAB_00111b05; /* 0x111b05 */
extern unsigned char LAB_00111dbc; /* 0x111dbc */
extern unsigned int DAT_00594a14; /* 0x594a14 */

/* Supplied declaration required: FUN_001139e8. */
/* Supplied declaration required: FUN_002e9acc. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea9dc. */
extern int FUN_002eb5f4(void);
extern int FUN_002ee5c4(unsigned int, int);
extern unsigned int FUN_002fd5d4(unsigned char *, int);


void FUN_00111d0c(fn_00111d0c_arg0 *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char *puVar4;
  int temp_v2;
  unsigned char temp_v3 [8];
  int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6 [104];
  unsigned char temp_v7 [20];
  unsigned char *puVar3;
  
  puVar3 = temp_v3;
  temp_v0 = FUN_002eb5f4();
  if ((temp_v0 != 0) && (temp_v0 = FUN_002eb5f4(), *(int *)(temp_v0 + 0xd0) != 0)) {
    if (param_1->field_0x1b0 != '\0') {
      temp_v2 = param_1->field_0x1ac;
      temp_v0 = FUN_002eb5f4();
      temp_v0 = FUN_002ee5c4(*(unsigned int *)(temp_v0 + 0xd0),temp_v2 + 8);
      if (temp_v0 != -1) {
        puVar4 = (unsigned char *)0x111b95;
        puVar3 = temp_v3;
        temp_v1 = FUN_002ea3c0(puVar3,puVar4,0,&LAB_00111dbc);
        FUN_002ea3d0(param_1,temp_v1);
        return;
      }
    }
    else {
      temp_v1 = FUN_002fd5d4(temp_v6,param_1->field_0x1ac + 8);
      temp_v0 = FUN_002eb5f4();
      temp_v0 = *(int *)(temp_v0 + 0xd0);
      FUN_001139e8(temp_v0,temp_v1);
      FUN_002ea9dc(temp_v6);
      if (temp_v0 == 0) {
        puVar4 = (unsigned char *)0x111b95;
        puVar3 = temp_v3;
        temp_v1 = FUN_002ea3c0(puVar3,puVar4,0,&LAB_00111dbc);
        FUN_002ea3d0(param_1,temp_v1);
        return;
      }
    }
    FUN_002e9acc(&temp_v4,DAT_00594a14);
    param_1->field_0x188 = temp_v4;
    param_1->field_0x18c = temp_v5;
    puVar4 = (unsigned char *)0x111df1;
    puVar3 = temp_v7;
  }
  else {
    puVar4 = &LAB_00111b05;
  }
  temp_v1 = FUN_002ea3c0(puVar3,puVar4,0,&LAB_00111dbc);
  FUN_002ea3d0(param_1,temp_v1);
  return;
}
