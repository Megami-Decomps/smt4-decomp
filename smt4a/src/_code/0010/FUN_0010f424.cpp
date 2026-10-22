#include "classes/Obj558b24.h"
/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010f424` (_code @ 0x10f424, 0xd6 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001137c8(int, unsigned int);
int FUN_002e93c2(int, unsigned int);
int onlineInstanceTableFind(int, unsigned int);
int FUN_002ea3d0(int, unsigned int);
int FUN_002ea704(void);
int FUN_002eb338(int *, unsigned char [8], unsigned int);
int onlineTimeGetNow(unsigned char [8]);
int FUN_002fa434(unsigned char [24], unsigned int);

typedef int romwright_code(...);
/* stack frame of param_1: 5 slot(s), 18 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned short sp58; /* 0x58: local_58 */
} param_1_stack;

extern unsigned char LAB_0010f1e9; /* 0x10f1e9 */
extern unsigned char LAB_0010f2b1; /* 0x10f2b1 */
extern unsigned char LAB_0010f500; /* 0x10f500 */

extern unsigned int FUN_0010a0fc(void);
/* Supplied declaration required: FUN_001137c8. */
extern int FUN_00123808(int);
/* Supplied declaration required: FUN_002e93c2. */
extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: onlineInstanceTableFind. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea704. */
/* Supplied declaration required: FUN_002eb338. */
/* Supplied declaration required: onlineTimeGetNow. */
extern int FUN_002eb5f4(void);
extern unsigned int FUN_002f8744(int);
/* Supplied declaration required: FUN_002fa434. */


void FUN_0010f424(int param_1)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int *piVar4;
  unsigned char temp_v3 [24];
  unsigned short temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9 [8];
  unsigned char temp_v10 [16];
  unsigned char temp_v11 [20];
  
  temp_v0 = FUN_002eb5f4();
  if ((temp_v0 != 0) && (temp_v0 = FUN_002ea704(), temp_v0 != 0)) {
    temp_v0 = onlineInstanceTableGetCurrent();
    onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x68));
    if (temp_v0 != 0) {
      temp_v0 = FUN_002eb5f4();
      temp_v0 = *(int *)(temp_v0 + 0xd0);
      piVar4 = *(int **)(temp_v0 + 8);
      if (piVar4 != (int *)0x0) {
        temp_v1 = FUN_002ea704();
        FUN_002fa434(temp_v3,temp_v1);
        temp_v2 = param_1 + 0xf0;
        FUN_002e93c2(temp_v2,((unsigned int)temp_v4 + temp_v5) & 0xffff);
        temp_v6 = param_1 + 0xd8;
        (**(romwright_code **)(*piVar4 + 0x14))(piVar4,temp_v6,temp_v2);
        temp_v2 = FUN_00123808(temp_v2);
        if (temp_v2 == 0) {
          temp_v1 = FUN_002f8744(temp_v6);
          FUN_001137c8(temp_v0,temp_v1);
        }
        temp_v1 = FUN_002ea3c0(temp_v10,&LAB_0010f2b1,0,&LAB_0010f500);
        FUN_002ea3d0(param_1,temp_v1);
        FUN_002ea704();
        temp_v1 = FUN_0010a0fc();
        onlineTimeGetNow(temp_v9);
        FUN_002eb338(&temp_v7,temp_v9,temp_v1);
        *(unsigned int *)(param_1 + 0xd0) = temp_v7;
        *(unsigned int *)(param_1 + 0xd4) = temp_v8;
        (((Obj558b24 *)(temp_v3))->Obj558b24::~Obj558b24(), (int)(temp_v3));
        return;
      }
    }
  }
  temp_v1 = FUN_002ea3c0(temp_v11,&LAB_0010f1e9,0,&LAB_0010f500);
  FUN_002ea3d0(param_1,temp_v1);
  return;
}

} /* extern "C" */
