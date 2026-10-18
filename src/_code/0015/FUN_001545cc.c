/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001545cc` (_code @ 0x1545cc, 0x7c0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char DAT_004ea168; /* 0x4ea168 */

/* Unsupported intrinsic, declaration required: while (LOAD). */
/* Supplied declaration required: FUN_001575c0. */
/* Supplied declaration required: FUN_001575cc. */
/* Supplied declaration required: FUN_00157640. */
/* Supplied declaration required: FUN_00157710. */
/* Supplied declaration required: FUN_001577e0. */
/* Supplied declaration required: FUN_00157844. */
/* Supplied declaration required: FUN_001578a8. */
/* Supplied declaration required: FUN_00157948. */
/* Supplied declaration required: FUN_001579c0. */
/* Supplied declaration required: FUN_001579cc. */
/* Supplied declaration required: FUN_001579d8. */
/* Supplied declaration required: FUN_00157a24. */
/* Supplied declaration required: FUN_00157f44. */
/* Supplied declaration required: FUN_00157f80. */
/* Supplied declaration required: FUN_001580ec. */
/* Supplied declaration required: FUN_00158128. */
/* Supplied declaration required: FUN_00158164. */
/* Supplied declaration required: FUN_00158294. */
/* Supplied declaration required: FUN_00158350. */
/* Supplied declaration required: FUN_00158368. */
/* Supplied declaration required: FUN_001583ec. */
extern int FUN_00158404(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00158418. */
/* Supplied declaration required: FUN_00158430. */
/* Supplied declaration required: FUN_00158448. */
/* Supplied declaration required: FUN_001584d0. */
/* Supplied declaration required: FUN_001584dc. */
/* Supplied declaration required: FUN_001584f4. */
/* Supplied declaration required: FUN_0015850c. */
/* Supplied declaration required: FUN_00158524. */
/* Supplied declaration required: FUN_00158538. */
/* Supplied declaration required: FUN_001585d4. */
/* Supplied declaration required: FUN_00158658. */
/* Supplied declaration required: FUN_00158670. */
/* Supplied declaration required: FUN_00158700. */
/* Supplied declaration required: FUN_00158784. */
/* Supplied declaration required: FUN_00158790. */
/* Supplied declaration required: FUN_001587d4. */
/* Supplied declaration required: FUN_00158894. */
/* Supplied declaration required: FUN_0015891c. */
/* Supplied declaration required: FUN_0015beb4. */
/* Supplied declaration required: FUN_002a23fc. */
/* Supplied declaration required: FUN_002a2404. */
extern unsigned int FUN_002a2414(void);
extern unsigned int FUN_002bb270(void);
extern unsigned int FUN_002bb360(void);


void FUN_001545cc(int *param_1)

{
/* irregular: 43 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  romwright_code *pcVar3;
  unsigned int temp_v2;
  
  do {
    if (param_1 == (int *)0x0) {
      return;
    }
    switch(*(unsigned char *)(param_1 + 1)) {
    case 2:
      *(unsigned char *)param_1[4] = 1;
      break;
    case 3:
      (**(romwright_code **)(*(int *)param_1[4] + 8))();
      *(unsigned char *)param_1[5] = 1;
      break;
    case 4:
      pcVar3 = *(romwright_code **)(*(int *)param_1[4] + 0xc);
      (*pcVar3)();
      break;
    case 5:
      pcVar3 = *(romwright_code **)(*(int *)param_1[4] + 0x10);
      (*pcVar3)();
      break;
    case 6:
      if (*(char *)(param_1 + 5) != '\0') {
        *(unsigned int *)(param_1[4] + 0x14) = 0;
      }
      (**(romwright_code **)(*(int *)param_1[4] + 0x14))();
      break;
    case 7:
      (**(romwright_code **)(*(int *)param_1[4] + 0x18))((int *)param_1[4],(int)*(char *)(param_1 + 5));
      break;
    case 8:
      *(int *)(param_1[4] + 0x14) = param_1[5];
      *(int *)(param_1[4] + 0x18) = param_1[6];
      *(int *)(param_1[4] + 0x1c) = param_1[7];
      *(int *)(param_1[4] + 0x20) = param_1[8];
      *(int *)(param_1[4] + 0x24) = param_1[9];
      FUN_001579c0(param_1[4],param_1[10]);
      temp_v2 = 0;
      *(int *)(param_1[4] + 0x30) = param_1[0xc];
      do {
        FUN_001579cc(param_1[4],temp_v2 & 0xff);
        temp_v2 = temp_v2 + 1;
      } while ((int)temp_v2 < 2);
      break;
    case 9:
      *(unsigned char *)(param_1[4] + 0x34) = *(unsigned char *)(param_1 + 5);
      break;
    case 10:
      *(unsigned char *)(param_1[4] + 0x35) = *(unsigned char *)((int)param_1 + 0x15);
      break;
    case 0xb:
      *(unsigned char *)(param_1[4] + 0x2e) = *(unsigned char *)(param_1 + 5);
      break;
    case 0xc:
      *(unsigned char *)(param_1[4] + 0x10) = 0;
      break;
    case 0xd:
      FUN_001587d4(param_1[4],param_1[5],param_1[6],param_1[7]);
      break;
    case 0xe:
      FUN_00158894(param_1[4],param_1[5],param_1 + 6,param_1 + 10,param_1 + 0xe,param_1[0xf]);
      break;
    case 0xf:
      FUN_00158790(param_1[4],param_1[5] & 0xff,param_1[6]);
      break;
    case 0x10:
      *(int *)(param_1[4] + 100) = param_1[5];
      break;
    case 0x11:
      *(char *)(param_1[4] + 0x75) = (char)param_1[5];
      break;
    case 0x12:
      *(unsigned char *)(param_1[4] + 0x5c) = *(unsigned char *)(param_1 + 5);
      break;
    case 0x13:
      FUN_00158784(param_1[4],param_1[5],param_1[6]);
      break;
    case 0x14:
      FUN_001584d0(param_1[4],param_1[6],(int)(short)param_1[7]);
      break;
    case 0x15:
      FUN_00158524(param_1[6],(int)(short)param_1[7]);
      break;
    case 0x16:
      temp_v0 = FUN_00158404(param_1[4],param_1[5]);
      if (temp_v0 != 0) {
        FUN_001575c0(temp_v0,param_1[6],(int)(short)param_1[7]);
      }
      break;
    case 0x17:
      FUN_00158368(param_1[4],param_1[5],param_1[6] & 0xff);
      break;
    case 0x18:
      FUN_00158448(param_1[4],param_1[5],(int)*(char *)(param_1 + 6),param_1[7]);
      break;
    case 0x19:
      FUN_00158418(param_1[4],param_1[5]);
      break;
    case 0x1a:
      FUN_001583ec(param_1[4],param_1[5]);
      break;
    case 0x1b:
      FUN_00158350(param_1[4],param_1[5]);
      break;
    case 0x1c:
      FUN_00158658(param_1[4],param_1[5]);
      break;
    case 0x1d:
      FUN_00158430(param_1[4],param_1[5]);
      break;
    case 0x1e:
      FUN_0015850c(param_1[4],param_1[5]);
      break;
    case 0x1f:
      FUN_001584dc(param_1[4],param_1[5]);
      break;
    case 0x20:
      FUN_001584f4(param_1[4],param_1[5]);
      break;
    case 0x21:
      FUN_00158670(param_1[4],param_1[5],param_1[6]);
      break;
    case 0x22:
      FUN_00158538(param_1[4],param_1[5],param_1[6]);
      break;
    case 0x23:
      FUN_001585d4(param_1[4],param_1[5],(int)*(char *)(param_1 + 6));
      break;
    case 0x24:
      FUN_00158700(param_1[4],param_1[5],*(unsigned char *)(param_1 + 6));
      break;
    case 0x25:
      FUN_00157948(param_1[4],param_1[5],param_1[6],param_1[7],param_1[8] & 0xff,param_1[9]);
      break;
    case 0x26:
      *(char *)(param_1[4] + 0x5e) = (char)param_1[5];
      break;
    case 0x27:
      *(unsigned char *)(param_1[4] + 0x5d) = *(unsigned char *)(param_1 + 5);
      break;
    case 0x28:
      FUN_00158164(param_1[4],param_1[5],param_1[6],*(unsigned short *)(param_1 + 7),
                   *(unsigned char *)((int)param_1 + 0x1e),(int)*(char *)((int)param_1 + 0x1f),
                   param_1[8],param_1[9]);
      break;
    case 0x29:
      FUN_00158294(param_1[4],param_1[5],param_1[6] & 0xff,param_1[7]);
      break;
    case 0x2b:
      FUN_00157a24(param_1[4],(int)*(char *)(param_1 + 5),param_1 + 6,param_1 + 0x18,
                   *(unsigned short *)(param_1 + 0x20));
      break;
    case 0x2c:
      FUN_00157f80(param_1[4],(int)*(char *)(param_1 + 5),param_1[6],param_1[8],param_1[7],
                   param_1[0x11],param_1 + 9,param_1[0x12],(int)*(char *)(param_1 + 0x13));
      break;
    case 0x2d:
      FUN_001580ec(param_1[4],param_1[5]);
      break;
    case 0x2e:
      FUN_00157f44(param_1[4],param_1[5]);
      break;
    case 0x2f:
      FUN_00158128(param_1[4],param_1[5]);
      break;
    case 0x30:
      temp_v1 = FUN_002a2414();
      FUN_0015891c(temp_v1,param_1[4],param_1[5]);
      break;
    case 0x31:
      temp_v1 = FUN_002a2414();
      FUN_002a2404(temp_v1,param_1[4]);
      break;
    case 0x32:
      temp_v1 = FUN_002a2414();
      FUN_002a23fc(temp_v1,param_1[4]);
      break;
    case 0x33:
      FUN_001578a8(&DAT_004ea168,*(unsigned char *)(param_1 + 4),param_1[5]);
      break;
    case 0x34:
      FUN_001577e0(&DAT_004ea168,*(unsigned char *)(param_1 + 4),param_1[5]);
      break;
    case 0x35:
      FUN_00157844(&DAT_004ea168,*(unsigned char *)(param_1 + 4),param_1[5]);
      break;
    case 0x36:
      FUN_00157640(&DAT_004ea168,*(unsigned char *)(param_1 + 4),param_1[5],param_1 + 6);
      break;
    case 0x37:
      FUN_00157710(&DAT_004ea168,*(unsigned char *)(param_1 + 4),param_1[5],param_1 + 6);
      break;
    case 0x38:
      FUN_001575cc(&DAT_004ea168,*(unsigned char *)(param_1 + 4),param_1[6]);
      break;
    case 0x39:
      temp_v1 = FUN_002bb270();
      FUN_001579d8(temp_v1,param_1[4]);
      break;
    case 0x3a:
      if (param_1[4] == *(int *)param_1[5]) {
        temp_v1 = FUN_002bb360();
        FUN_0015beb4(temp_v1,param_1[6],1);
      }
      break;
    case 0x3b:
      if (param_1[4] == *(int *)param_1[5]) {
        temp_v1 = FUN_002bb360();
        FUN_0015beb4(temp_v1,param_1[6],1);
      }
    }
    param_1 = (int *)*param_1;
  } while( 1 );
}
