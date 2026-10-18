/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010eb10` (_code @ 0x10eb10, 0x132 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char LAB_0010ec48; /* 0x10ec48 */
extern unsigned char LAB_0010ec7c; /* 0x10ec7c */
extern unsigned char LAB_0010ec80; /* 0x10ec80 */
extern unsigned char LAB_0010eca0; /* 0x10eca0 */
extern unsigned char DAT_0055918c; /* 0x55918c */
extern unsigned char DAT_00559890; /* 0x559890 */
extern unsigned char DAT_0055b08c; /* 0x55b08c */
extern signed char DAT_0059496c; /* 0x59496c */
extern unsigned int DAT_00594a28; /* 0x594a28 */

/* Supplied declaration required: FUN_0010a3a0. */
/* Supplied declaration required: FUN_0010e4c0. */
extern int FUN_001156fc(int);
/* Supplied declaration required: FUN_00120f86. */
extern int FUN_001210b0(int);
/* Supplied declaration required: FUN_001212a0. */
extern int FUN_00121328(int);
extern int FUN_002e760a(unsigned int);
extern unsigned int FUN_002ea714(void);
extern unsigned int FUN_002eb56c(void);
/* Supplied declaration required: FUN_002ecef0. */
extern int FUN_002f1858(int, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002f3024. */
/* Supplied declaration required: FUN_002f8d9c. */
extern int FUN_002f9e5c(unsigned int *);
/* Supplied declaration required: FUN_002f9e68. */
extern int FUN_002f9ef0(int);


int FUN_0010eb10(unsigned int *param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  
  FUN_0010a3a0();
  *param_1 = (unsigned int)&DAT_0055918c;
  *(unsigned char *)(param_1 + 0x52) = 0;
  temp_v0 = FUN_002f9e5c(param_1 + 0x59);
  FUN_002f9e68(temp_v0,2);
  temp_v0 = FUN_001156fc(temp_v0 + 0xc);
  temp_v0 = FUN_002f9ef0(temp_v0 + 0x5c);
  temp_v0 = FUN_002f3024(temp_v0 + 8,&LAB_0010ec48);
  *(unsigned int *)(temp_v0 + 0x28) = 0;
  *(unsigned int *)(temp_v0 + 0x2c) = 0;
  *(unsigned int *)(temp_v0 + 0x30) = 0;
  *(unsigned int *)(temp_v0 + 0x34) = 0;
  *(unsigned char **)(temp_v0 + 0x24) = &DAT_0055b08c;
  temp_v0 = FUN_002f1858(temp_v0 + 0x3c,&LAB_0010ec80,1000,&LAB_0010ec7c);
  temp_v0 = FUN_00121328(temp_v0 + 0x74);
  temp_v0 = FUN_001210b0(temp_v0 + 0x10);
  *(unsigned int *)(temp_v0 + 0x38) = 0;
  *(unsigned int *)(temp_v0 + 0x34) = 0;
  temp_v3 = temp_v0 - 0x294;
  *(unsigned char *)(temp_v0 + 0x54) = 0;
  FUN_002ecef0();
  if (DAT_0059496c != '\0') {
    temp_v1 = FUN_002e760a(0x24);
    puVar4 = (unsigned int *)0x0;
    if (temp_v1 != 0) {
      temp_v2 = FUN_002ea714();
      puVar4 = (unsigned int *)FUN_002f3024(temp_v1,&LAB_0010eca0);
      *puVar4 = (unsigned int)&DAT_00559890;
      puVar4[8] = temp_v2;
    }
  }
  else {
    temp_v1 = FUN_002e760a(0x20);
    puVar4 = (unsigned int *)0x0;
    if (temp_v1 != 0) {
      puVar4 = (unsigned int *)FUN_002f3024(temp_v1,&LAB_0010eca0);
    }
  }
  *(unsigned int **)(temp_v0 - 0xa0) = puVar4;
  *(unsigned int *)(*(int *)(temp_v0 - 0xa0) + 0x18) = DAT_00594a28;
  *(unsigned char *)(temp_v0 - 0xcc) = 0;
  *(unsigned int *)(temp_v0 - 0x148) = 0;
  *(unsigned int *)(temp_v0 - 0x144) = 0;
  *(unsigned int *)(temp_v0 - 0x140) = 0;
  temp_v2 = FUN_002eb56c();
  *(unsigned int *)(temp_v0 - 0x14) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x3c) = 0;
  FUN_001212a0(temp_v0 - 0x10,temp_v3);
  FUN_00120f86(temp_v0,temp_v3);
  FUN_002f8d9c(temp_v3);
  FUN_0010e4c0(temp_v3);
  return temp_v3;
}
