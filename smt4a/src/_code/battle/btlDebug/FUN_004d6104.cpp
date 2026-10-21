/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d6104` (_code @ 0x4d6104, 0x1924 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "battle/btlMain.h"

extern "C" {

int FUN_00340edc(...);
int FUN_004d2628(...);
int FUN_004d352c(...);
int FUN_004d3c94(...);

int asdListBoxCreateDefaultFlags(...);
int jobSetText(...);
int asdListBoxSetByteValue(...);
int asdListBoxAddItems(void);
int asdListBoxSetToggleItem(...);
int asdListBoxGetFloatValuePtr(...);
int FUN_003ed238(...);
int FUN_004d1470(...);
int FUN_004d1af8(...);
int FUN_004d2124(...);
int FUN_004d229c(...);
int FUN_004d290c(...);
int FUN_004d3360(...);
int FUN_004d37d4(...);
int FUN_004d3950(...);
int FUN_004d3df0(...);
int FUN_004d463c(...);
int FUN_004d4ba4(...);
int FUN_004d4f54(...);
int FUN_004d5290(...);
int FUN_004d542c(...);
int FUN_004d5578(...);
int FUN_004d5a70(...);
int FUN_004d5be4(...);
int FUN_004d5fc0(...);

int jobStop(...);
int asdListBoxGetIntValuePtr(...);
int asdListBoxSetIntItem(...);
int listBoxItemHasOwner(...);
int FUN_003592dc(...);
unsigned int asdListBoxGetSelectedItemId(unsigned int);
int dataTable22GetCount(void);
int dataTable3Type0Count(void);
void btlDebugNormalizeMarkerFlags(void*, BtlMainStateA*);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern signed char DAT_005715f8; /* 0x5715f8 */
extern unsigned int DAT_005715fc; /* 0x5715fc */
extern unsigned int DAT_005716a0; /* 0x5716a0 */
extern unsigned int DAT_005716a4; /* 0x5716a4 */
extern unsigned int DAT_005716a8; /* 0x5716a8 */
extern unsigned int DAT_005716ac; /* 0x5716ac */
extern unsigned int DAT_005716b0; /* 0x5716b0 */
extern unsigned int DAT_005716b4; /* 0x5716b4 */
extern unsigned int DAT_005716c8; /* 0x5716c8 */
extern unsigned int DAT_005716cc; /* 0x5716cc */
extern unsigned int DAT_00571710; /* 0x571710 */
extern unsigned int DAT_00571714; /* 0x571714 */
extern unsigned int DAT_00571720; /* 0x571720 */
extern unsigned int DAT_00571724; /* 0x571724 */
extern unsigned int DAT_00571740; /* 0x571740 */
extern unsigned int DAT_00571744; /* 0x571744 */
extern unsigned int DAT_00571748; /* 0x571748 */
extern unsigned int DAT_0057174c; /* 0x57174c */
extern unsigned int DAT_00571750; /* 0x571750 */
extern unsigned int DAT_00571754; /* 0x571754 */
extern unsigned int DAT_00571760; /* 0x571760 */
extern unsigned int DAT_00571764; /* 0x571764 */
extern unsigned int DAT_00571770; /* 0x571770 */
extern unsigned int DAT_00571774; /* 0x571774 */
extern unsigned int DAT_00573970; /* 0x573970 */
extern unsigned int DAT_00573974; /* 0x573974 */
extern unsigned int DAT_00573b80; /* 0x573b80 */
extern unsigned char DAT_00573bd8; /* 0x573bd8 */
extern unsigned char DAT_00573bd9; /* 0x573bd9 */
extern unsigned char DAT_00573bda; /* 0x573bda */
extern unsigned char DAT_00573bdb; /* 0x573bdb */
extern unsigned int DAT_00573bdc; /* 0x573bdc */
extern unsigned int DAT_00573be0; /* 0x573be0 */
extern unsigned int DAT_00573c00; /* 0x573c00 */
extern unsigned short DAT_0057a664; /* 0x57a664 */
extern unsigned short DAT_0057a666; /* 0x57a666 */
extern unsigned short DAT_0057a668; /* 0x57a668 */
extern unsigned short DAT_0057a66a; /* 0x57a66a */
extern unsigned short DAT_0057a66c; /* 0x57a66c */
extern unsigned short DAT_0057a66e; /* 0x57a66e */
extern unsigned short DAT_0057a670; /* 0x57a670 */
extern unsigned short DAT_0057a672; /* 0x57a672 */
extern unsigned short DAT_0057a674; /* 0x57a674 */
extern unsigned short DAT_0057a676; /* 0x57a676 */
extern unsigned short DAT_0057a678; /* 0x57a678 */
extern unsigned short DAT_0057a67a; /* 0x57a67a */
extern unsigned char g_battleEffectSettings; /* 0x57aa00 */
extern unsigned char DAT_0057aa01; /* 0x57aa01 */
extern unsigned char DAT_0057aa02; /* 0x57aa02 */
extern unsigned char DAT_0057aa03; /* 0x57aa03 */
extern signed char DAT_0057aa04; /* 0x57aa04 */
extern unsigned int DAT_0057aa0c; /* 0x57aa0c */
extern unsigned int DAT_0057aa14; /* 0x57aa14 */
extern unsigned int DAT_0057aa18; /* 0x57aa18 */
extern unsigned int DAT_0057aa1c; /* 0x57aa1c */
extern unsigned int DAT_0057aa20; /* 0x57aa20 */
extern unsigned int DAT_0057aa24; /* 0x57aa24 */
extern unsigned int DAT_0057aa28; /* 0x57aa28 */
extern unsigned int DAT_0057aa2c; /* 0x57aa2c */

/* Supplied declaration required: jobStop. */
extern int jobIsValid(unsigned int);
extern int padButtonIsPressed(unsigned int);
/* Supplied declaration required: asdListBoxCreateDefaultFlags. */
/* Supplied declaration required: jobSetText. */
/* Supplied declaration required: asdListBoxGetIntValuePtr. */
/* Supplied declaration required: asdListBoxSetIntItem. */
/* Supplied declaration required: asdListBoxSetByteValue. */
/* Supplied declaration required: asdListBoxAddItems. */
/* Supplied declaration required: listBoxItemHasOwner. */
/* Supplied declaration required: asdListBoxSetToggleItem. */
/* Supplied declaration required: asdListBoxGetFloatValuePtr. */
/* Supplied declaration required: FUN_00340edc. */
/* Supplied declaration required: FUN_003592dc. */
/* Supplied declaration required: asdListBoxGetSelectedItemId. */
/* Supplied declaration required: FUN_003ed238. */
/* Supplied declaration required: dataTable22GetCount. */
/* Supplied declaration required: dataTable3Type0Count. */
/* Supplied declaration required: btlDebugNormalizeMarkerFlags. */
/* Supplied declaration required: FUN_004d1470. */
/* Supplied declaration required: FUN_004d1af8. */
/* Supplied declaration required: FUN_004d2124. */
/* Supplied declaration required: FUN_004d229c. */
/* Supplied declaration required: FUN_004d2628. */
/* Supplied declaration required: FUN_004d290c. */
/* Supplied declaration required: FUN_004d3360. */
/* Supplied declaration required: FUN_004d352c. */
/* Supplied declaration required: FUN_004d37d4. */
/* Supplied declaration required: FUN_004d3950. */
/* Supplied declaration required: FUN_004d3c94. */
/* Supplied declaration required: FUN_004d3df0. */
/* Supplied declaration required: FUN_004d463c. */
/* Supplied declaration required: FUN_004d4ba4. */
/* Supplied declaration required: FUN_004d4f54. */
/* Supplied declaration required: FUN_004d5290. */
/* Supplied declaration required: FUN_004d542c. */
/* Supplied declaration required: FUN_004d5578. */
/* Supplied declaration required: FUN_004d5a70. */
/* Supplied declaration required: FUN_004d5be4. */
/* Supplied declaration required: FUN_004d5fc0. */


/* WARNING: Type propagation algorithm not settling */

unsigned int FUN_004d6104(unsigned int *param_1,int param_2)

{
/* irregular: 39 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  int *piVar4;
  int temp_v2;
  unsigned int *puVar6;
  unsigned char *puVar7;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  
  temp_v6 = 0;
  temp_v5 = 0;
  switch(*param_1) {
  case 0:
    if (param_1[1] == 0) {
      temp_v6 = 1;
    }
    else {
      temp_v6 = 2;
    }
    break;
  case 1:
    temp_v6 = asdListBoxGetSelectedItemId(param_1[4]);
    switch(temp_v6) {
    case 0:
      puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(param_1[4]);
      temp_v6 = *puVar3;
      if (DAT_005715f8 != '\0') {
        dataTable3Type0Count();
        asdListBoxSetIntItem(param_1[4],0,temp_v6,0,(int)puVar3 - 1,0);
        *(unsigned int *)(param_2 + 0xec) = 0xffffffff;
        *(unsigned int *)(param_2 + 0xf0) = temp_v6;
        DAT_005715fc = temp_v6;
      }
      else {
        dataTable22GetCount();
        asdListBoxSetIntItem(param_1[4],0,temp_v6,0,(int)puVar3 - 1,0);
        *(unsigned int *)(param_2 + 0xf0) = 0xffffffff;
        *(unsigned int *)(param_2 + 0xec) = temp_v6;
        DAT_005715fc = temp_v6;
      }
      break;
    case 1:
      DAT_005715f8 = listBoxItemHasOwner(param_1[4],temp_v6);
      break;
    case 2:
      puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(param_1[4]);
      temp_v6 = *puVar3;
      puVar3 = &DAT_00573970;
      *puVar3 = temp_v6;
      break;
    case 3:
      puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(param_1[4]);
      temp_v6 = *puVar3;
      puVar3 = &DAT_00573b80;
      *puVar3 = temp_v6;
      break;
    case 4:
      temp_v5 = listBoxItemHasOwner(param_1[4],temp_v6);
      if (temp_v5 != 0) {
        temp_v3 = DAT_005716a4 | *(unsigned int *)(param_2 + 0x45ac);
        *(unsigned int *)(param_2 + 0x45a8) = *(unsigned int *)(param_2 + 0x45a8) | DAT_005716a0;
        *(unsigned int *)(param_2 + 0x45ac) = temp_v3;
      }
      else {
        temp_v3 = ~DAT_005716a0;
        *(unsigned int *)(param_2 + 0x45ac) = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_005716a4;
        *(unsigned int *)(param_2 + 0x45a8) = *(unsigned int *)(param_2 + 0x45a8) & temp_v3;
      }
      break;
    case 5:
      temp_v5 = listBoxItemHasOwner(param_1[4],temp_v6);
      if (temp_v5 != 0) {
        temp_v3 = *(unsigned int *)(param_2 + 0x45a8) | DAT_005716a8;
        temp_v4 = DAT_005716ac | *(unsigned int *)(param_2 + 0x45ac);
        *(unsigned int *)(param_2 + 0x45a8) = temp_v3;
        *(unsigned int *)(param_2 + 0x45ac) = temp_v4;
        break;
      }
      temp_v3 = ~DAT_005716a8;
      *(unsigned int *)(param_2 + 0x45ac) = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_005716ac;
      *(unsigned int *)(param_2 + 0x45a8) = *(unsigned int *)(param_2 + 0x45a8) & temp_v3;
      break;
    case 6:
      temp_v5 = listBoxItemHasOwner(param_1[4],temp_v6);
      if (temp_v5 == 0) {
        temp_v3 = *(unsigned int *)(param_2 + 0x45a8) & ~DAT_005716b0;
        temp_v4 = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_005716b4;
        *(unsigned int *)(param_2 + 0x45a8) = temp_v3;
        *(unsigned int *)(param_2 + 0x45ac) = temp_v4;
        break;
      }
      temp_v3 = DAT_005716b0 | *(unsigned int *)(param_2 + 0x45a8);
      *(unsigned int *)(param_2 + 0x45ac) = DAT_005716b4 | *(unsigned int *)(param_2 + 0x45ac);
      *(unsigned int *)(param_2 + 0x45a8) = temp_v3;
      break;
    case 7:
      puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(param_1[4]);
      *(unsigned int *)(param_2 + 0x178) = *puVar3;
      break;
    case 8:
      puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(param_1[4]);
      *(unsigned int *)(param_2 + 0x17c) = *puVar3;
      break;
    case 9:
      puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(param_1[4]);
      *(char *)(param_2 + 0x188) = (char)*puVar3;
      break;
    case 10:
      puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(param_1[4]);
      *(unsigned int *)(param_2 + 0xac) = *puVar3;
      break;
    case 0xb:
      temp_v5 = listBoxItemHasOwner(param_1[4],temp_v6);
      if (temp_v5 != 0) {
        temp_v3 = DAT_00571710 | *(unsigned int *)(param_2 + 0x45a8);
        temp_v4 = *(unsigned int *)(param_2 + 0x45ac) | DAT_00571714;
      }
      else {
        temp_v3 = *(unsigned int *)(param_2 + 0x45a8) & ~DAT_00571710;
        temp_v4 = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_00571714;
      }
      *(unsigned int *)(param_2 + 0x45a8) = temp_v3;
      *(unsigned int *)(param_2 + 0x45ac) = temp_v4;
      break;
    case 0xc:
      temp_v5 = listBoxItemHasOwner(param_1[4],temp_v6);
      if (temp_v5 == 0) {
        temp_v4 = *(unsigned int *)(param_2 + 0x45a8) & ~DAT_00571750;
        temp_v3 = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_00571754;
        *(unsigned int *)(param_2 + 0x45a8) = temp_v4;
        *(unsigned int *)(param_2 + 0x45ac) = temp_v3;
        break;
      }
      temp_v3 = *(unsigned int *)(param_2 + 0x45a8) | DAT_00571750;
      temp_v4 = *(unsigned int *)(param_2 + 0x45ac) | DAT_00571754;
      *(unsigned int *)(param_2 + 0x45a8) = temp_v3;
      *(unsigned int *)(param_2 + 0x45ac) = temp_v4;
      break;
    case 0xd:
      temp_v5 = listBoxItemHasOwner(param_1[4],temp_v6);
      if (temp_v5 == 0) {
        temp_v4 = *(unsigned int *)(param_2 + 0x45a8) & ~DAT_00571760;
        temp_v3 = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_00571764;
        *(unsigned int *)(param_2 + 0x45a8) = temp_v4;
        *(unsigned int *)(param_2 + 0x45ac) = temp_v3;
        break;
      }
      temp_v3 = *(unsigned int *)(param_2 + 0x45a8) | DAT_00571760;
      temp_v4 = DAT_00571764 | *(unsigned int *)(param_2 + 0x45ac);
      *(unsigned int *)(param_2 + 0x45a8) = temp_v3;
      *(unsigned int *)(param_2 + 0x45ac) = temp_v4;
      break;
    case 0xe:
      temp_v5 = listBoxItemHasOwner(param_1[4],temp_v6);
      puVar6 = (unsigned int *)(param_2 + 0x45a8);
      if (temp_v5 != 0) {
        temp_v3 = DAT_005716c8 | *puVar6;
        temp_v4 = *(unsigned int *)(param_2 + 0x45ac) | DAT_005716cc;
      }
      else {
        temp_v3 = *puVar6 & ~DAT_005716c8;
        temp_v4 = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_005716cc;
      }
      *puVar6 = temp_v3;
      *(unsigned int *)(param_2 + 0x45ac) = temp_v4;
      break;
    case 0xf:
      temp_v5 = listBoxItemHasOwner(param_1[4],temp_v6);
      if (temp_v5 == 0) {
        temp_v4 = *(unsigned int *)(param_2 + 0x45a8) & ~DAT_00571720;
        temp_v3 = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_00571724;
        *(unsigned int *)(param_2 + 0x45a8) = temp_v4;
        *(unsigned int *)(param_2 + 0x45ac) = temp_v3;
        break;
      }
      temp_v4 = *(unsigned int *)(param_2 + 0x45a8) | DAT_00571720;
      temp_v3 = *(unsigned int *)(param_2 + 0x45ac) | DAT_00571724;
      *(unsigned int *)(param_2 + 0x45a8) = temp_v4;
      *(unsigned int *)(param_2 + 0x45ac) = temp_v3;
    }
    temp_v5 = padButtonIsPressed(0);
    if (temp_v5 != 0) {
      btlDebugNormalizeMarkerFlags(param_1, reinterpret_cast<BtlMainStateA*>(param_2));
      temp_v6 = 0x20;
    }
    else {
      temp_v5 = padButtonIsPressed(1);
      if (temp_v5 == 0) {
        return 0;
      }
      temp_v6 = 0x20;
      *(unsigned int *)(param_2 + 0x8c) = 0x1e;
    }
    break;
  case 2:
    temp_v6 = asdListBoxGetSelectedItemId(param_1[4]);
    asdListBoxGetIntValuePtr(param_1[4],temp_v6);
    switch(temp_v6) {
    case 0:
      temp_v5 = padButtonIsPressed(0);
      if (temp_v5 != 0) {
        temp_v5 = jobIsValid(param_1[4]);
        if (temp_v5 != 0) {
          FUN_003592dc(param_1[4]);
          jobStop(param_1[4],0);
        }
        *param_1 = 9;
      }
      break;
    case 1:
      temp_v5 = padButtonIsPressed(0);
      if (temp_v5 != 0) {
        temp_v5 = jobIsValid(param_1[4]);
        if (temp_v5 != 0) {
          FUN_003592dc(param_1[4]);
          jobStop(param_1[4],0);
        }
        param_1[2] = 1;
        *param_1 = 3;
      }
      break;
    case 2:
      temp_v5 = padButtonIsPressed(0);
      if (temp_v5 != 0) {
        temp_v5 = jobIsValid(param_1[4]);
        if (temp_v5 != 0) {
          FUN_003592dc(param_1[4]);
          jobStop(param_1[4],0);
        }
        temp_v6 = 7;
        *param_1 = temp_v6;
      }
      break;
    case 3:
      temp_v5 = padButtonIsPressed(0);
      if (temp_v5 != 0) {
        temp_v5 = jobIsValid(param_1[4]);
        if (temp_v5 != 0) {
          FUN_003592dc(param_1[4]);
          jobStop(param_1[4],0);
        }
        temp_v6 = 0xb;
        *param_1 = temp_v6;
      }
      break;
    case 4:
      temp_v5 = padButtonIsPressed(0);
      if (temp_v5 != 0) {
        temp_v5 = jobIsValid(param_1[4]);
        if (temp_v5 != 0) {
          FUN_003592dc(param_1[4]);
          jobStop(param_1[4],0);
        }
        temp_v6 = 0xd;
        *param_1 = temp_v6;
      }
      break;
    case 5:
      temp_v5 = padButtonIsPressed(0);
      if (temp_v5 != 0) {
        temp_v5 = jobIsValid(param_1[4]);
        if (temp_v5 != 0) {
          FUN_003592dc(param_1[4]);
          jobStop(param_1[4],0);
        }
        temp_v6 = 0xf;
        *param_1 = temp_v6;
      }
      break;
    case 6:
      temp_v5 = padButtonIsPressed(0);
      if (temp_v5 != 0) {
        temp_v5 = jobIsValid(param_1[4]);
        if (temp_v5 != 0) {
          FUN_003592dc(param_1[4]);
          jobStop(param_1[4],0);
        }
        temp_v6 = 0x11;
        *param_1 = temp_v6;
      }
      break;
    case 7:
      temp_v5 = padButtonIsPressed(0);
      if (temp_v5 != 0) {
        temp_v5 = jobIsValid(param_1[4]);
        if (temp_v5 != 0) {
          FUN_003592dc(param_1[4]);
          jobStop(param_1[4],0);
        }
        temp_v6 = 0x13;
        *param_1 = temp_v6;
      }
      break;
    case 8:
      temp_v5 = padButtonIsPressed(0);
      if (temp_v5 != 0) {
        temp_v5 = jobIsValid(param_1[4]);
        if (temp_v5 != 0) {
          FUN_003592dc(param_1[4]);
          jobStop(param_1[4],0);
        }
        temp_v6 = 0x15;
        *param_1 = temp_v6;
      }
      break;
    case 9:
      temp_v5 = padButtonIsPressed(0);
      if (temp_v5 != 0) {
        temp_v5 = jobIsValid(param_1[4]);
        if (temp_v5 != 0) {
          FUN_003592dc(param_1[4]);
          jobStop(param_1[4],0);
        }
        temp_v6 = 0x17;
        *param_1 = temp_v6;
      }
      break;
    case 10:
      temp_v5 = padButtonIsPressed(0);
      if (temp_v5 != 0) {
        temp_v5 = jobIsValid(param_1[4]);
        if (temp_v5 != 0) {
          FUN_003592dc(param_1[4]);
          jobStop(param_1[4],0);
        }
        temp_v6 = 0x19;
        *param_1 = temp_v6;
      }
      break;
    case 0xb:
      temp_v5 = padButtonIsPressed(0);
      if (temp_v5 != 0) {
        temp_v5 = jobIsValid(param_1[4]);
        if (temp_v5 != 0) {
          FUN_003592dc(param_1[4]);
          jobStop(param_1[4],0);
        }
        temp_v6 = 0x1b;
        *param_1 = temp_v6;
      }
      break;
    case 0xc:
      temp_v5 = padButtonIsPressed(0);
      if (temp_v5 != 0) {
        temp_v5 = jobIsValid(param_1[4]);
        if (temp_v5 != 0) {
          FUN_003592dc(param_1[4]);
          jobStop(param_1[4],0);
        }
        temp_v6 = 0x1d;
        *param_1 = temp_v6;
      }
      break;
    case 0xd:
      temp_v5 = padButtonIsPressed(0);
      if (temp_v5 != 0) {
        temp_v6 = 0x20;
        *param_1 = temp_v6;
      }
    }
    temp_v5 = padButtonIsPressed(1);
    if (temp_v5 == 0) {
      return 0;
    }
    temp_v6 = 0x20;
    break;
  case 3:
    if (param_1[2] == 1) {
      temp_v5 = jobIsValid(param_1[4]);
      if (temp_v5 != 0) {
        FUN_003592dc(param_1[4]);
        jobStop(param_1[4],0);
      }
      temp_v6 = *(unsigned int *)(param_2 + 0x80);
      asdListBoxCreateDefaultFlags(temp_v6,0x75,0);
      param_1[4] = temp_v6;
      asdListBoxAddItems();
      asdListBoxSetByteValue(param_1[4],1);
      jobSetText(param_1[4],"btl Camera Menu");
    }
    temp_v6 = 4;
    break;
  case 4:
    temp_v1 = asdListBoxGetSelectedItemId(param_1[4]);
    if (param_1[2] == 1) {
      param_1[3] = temp_v1;
      temp_v6 = 5;
    }
    temp_v5 = padButtonIsPressed(0);
    if (temp_v5 != 0) {
      temp_v5 = jobIsValid(param_1[4]);
      if (temp_v5 != 0) {
        FUN_003592dc(param_1[4]);
        jobStop(param_1[4],0);
      }
      *param_1 = temp_v6;
      return 0;
    }
    temp_v5 = padButtonIsPressed(1);
    if (temp_v5 == 0) {
      return 0;
    }
    temp_v5 = jobIsValid(param_1[4]);
    if (temp_v5 != 0) {
      FUN_003592dc(param_1[4]);
      jobStop(param_1[4],0);
    }
    temp_v6 = 0x1f;
    break;
  case 5:
    temp_v5 = param_1[3];
    if (temp_v5 != 0) {
      if (temp_v5 != 1) {
        if (temp_v5 != 2) {
          return 0;
        }
        FUN_004d5a70(param_1);
      }
      else {
        FUN_004d5578(param_1);
      }
      temp_v6 = 6;
    }
    else {
      FUN_004d5290(param_1);
      temp_v6 = 6;
    }
    break;
  case 6:
    temp_v6 = asdListBoxGetSelectedItemId(param_1[4]);
    temp_v5 = param_1[3];
    if (temp_v5 != 0) {
      if (temp_v5 != 1) {
        if (temp_v5 == 2) {
          FUN_004d5fc0(param_1,param_2,temp_v6);
        }
      }
      else {
        FUN_004d5be4(param_1,param_2,temp_v6);
      }
    }
    else {
      FUN_004d542c(param_1,param_2,temp_v6);
    }
    temp_v5 = padButtonIsPressed(0);
    if (temp_v5 == 0) {
      temp_v5 = padButtonIsPressed(1);
      if (temp_v5 == 0) {
        return 0;
      }
      temp_v5 = jobIsValid(param_1[4]);
      if (temp_v5 != 0) {
        FUN_003592dc(param_1[4]);
        jobStop(param_1[4],0);
      }
      temp_v6 = 3;
      break;
    }
    temp_v6 = 0x20;
    break;
  case 7:
    FUN_004d229c(param_1);
    temp_v6 = 8;
    break;
  case 8:
    temp_v6 = asdListBoxGetSelectedItemId(param_1[4]);
    switch(temp_v6) {
    case 0:
      puVar3 = (unsigned int *)asdListBoxGetFloatValuePtr(param_1[4],temp_v6);
      DAT_00573974 = *puVar3;
      FUN_003ed238(param_2,0x400);
      break;
    case 1:
      temp_v5 = listBoxItemHasOwner(param_1[4],temp_v6);
      if (temp_v5 != 0) {
        temp_v3 = DAT_00571774 | *(unsigned int *)(param_2 + 0x45ac);
        *(unsigned int *)(param_2 + 0x45a8) = DAT_00571770 | *(unsigned int *)(param_2 + 0x45a8);
        *(unsigned int *)(param_2 + 0x45ac) = temp_v3;
      }
      else {
        temp_v3 = ~DAT_00571770;
        *(unsigned int *)(param_2 + 0x45ac) = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_00571774;
        *(unsigned int *)(param_2 + 0x45a8) = temp_v3 & *(unsigned int *)(param_2 + 0x45a8);
      }
      break;
    case 2:
      puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(param_1[4],2);
      temp_v6 = *puVar3;
      puVar3 = &DAT_0057aa0c;
      *puVar3 = temp_v6;
      break;
    case 3:
      piVar4 = (int *)asdListBoxGetIntValuePtr(param_1[4],3);
      DAT_0057aa1c = *piVar4 * 0x1000000 + (DAT_0057aa1c & 0xff0000) + (DAT_0057aa1c & 0xff00) +
                     0xff;
      do {
        temp_v2 = *(int *)(param_2 + 0x1ed4) + temp_v5 * 0x1d0;
        if ((*(unsigned int *)(temp_v2 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v2 + 0x50) & 2) != 0) {
          *(unsigned int *)(temp_v2 + 0x6c) = DAT_0057aa1c;
          temp_v3 = DAT_0057aa1c;
          *(unsigned int *)(temp_v2 + 0x70) = DAT_0057aa1c;
          *(unsigned int *)(temp_v2 + 0x74) = temp_v3;
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 0x6d);
      break;
    case 4:
      piVar4 = (int *)asdListBoxGetIntValuePtr(param_1[4],4);
      DAT_0057aa1c = (DAT_0057aa1c & 0xff000000) + *piVar4 * 0x10000 + (DAT_0057aa1c & 0xff00) +
                     0xff;
      do {
        temp_v2 = *(int *)(param_2 + 0x1ed4) + temp_v5 * 0x1d0;
        if ((*(unsigned int *)(temp_v2 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v2 + 0x50) & 2) != 0) {
          *(unsigned int *)(temp_v2 + 0x6c) = DAT_0057aa1c;
          temp_v3 = DAT_0057aa1c;
          *(unsigned int *)(temp_v2 + 0x70) = DAT_0057aa1c;
          *(unsigned int *)(temp_v2 + 0x74) = temp_v3;
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 0x6d);
      break;
    case 5:
      piVar4 = (int *)asdListBoxGetIntValuePtr(param_1[4],5);
      DAT_0057aa1c = (DAT_0057aa1c & 0xff000000) + (DAT_0057aa1c & 0xff0000) + *piVar4 * 0x100 +
                     0xff;
      do {
        temp_v2 = *(int *)(param_2 + 0x1ed4) + temp_v5 * 0x1d0;
        if ((*(unsigned int *)(temp_v2 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v2 + 0x50) & 2) != 0) {
          *(unsigned int *)(temp_v2 + 0x6c) = DAT_0057aa1c;
          temp_v3 = DAT_0057aa1c;
          *(unsigned int *)(temp_v2 + 0x70) = DAT_0057aa1c;
          *(unsigned int *)(temp_v2 + 0x74) = temp_v3;
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 0x6d);
      break;
    case 6:
      puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(param_1[4],6);
      temp_v0 = (unsigned char)*puVar3;
      puVar7 = &g_battleEffectSettings;
      *puVar7 = temp_v0;
      break;
    case 7:
      puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(param_1[4],7);
      temp_v0 = (unsigned char)*puVar3;
      puVar7 = &DAT_0057aa01;
      *puVar7 = temp_v0;
      break;
    case 8:
      puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(param_1[4],8);
      temp_v0 = (unsigned char)*puVar3;
      puVar7 = &DAT_0057aa02;
      *puVar7 = temp_v0;
      break;
    case 9:
      puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(param_1[4],9);
      temp_v0 = (unsigned char)*puVar3;
      puVar7 = &DAT_0057aa03;
      *puVar7 = temp_v0;
      break;
    case 10:
      puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(param_1[4],10);
      temp_v6 = *puVar3;
      puVar3 = &DAT_0057aa14;
      *puVar3 = temp_v6;
      break;
    case 0xb:
      puVar3 = (unsigned int *)asdListBoxGetFloatValuePtr(param_1[4],0xb);
      DAT_0057aa18 = *puVar3;
      break;
    case 0xc:
      puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(param_1[4],0xc);
      DAT_0057a664 = (unsigned short)*puVar3;
      break;
    case 0xd:
      puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(param_1[4],0xd);
      DAT_0057a668 = (unsigned short)*puVar3;
      break;
    case 0xe:
      puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(param_1[4],0xe);
      DAT_0057a666 = (unsigned short)*puVar3;
      break;
    case 0xf:
      puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(param_1[4],0xf);
      DAT_0057a66a = (unsigned short)*puVar3;
      break;
    case 0x10:
      puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(param_1[4],0x10);
      DAT_0057a66c = (unsigned short)*puVar3;
      break;
    case 0x11:
      puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(param_1[4],0x11);
      DAT_0057a670 = (unsigned short)*puVar3;
      break;
    case 0x12:
      puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(param_1[4],0x12);
      DAT_0057a66e = (unsigned short)*puVar3;
      break;
    case 0x13:
      puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(param_1[4],0x13);
      DAT_0057a672 = (unsigned short)*puVar3;
      break;
    case 0x14:
      puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(param_1[4],0x14);
      DAT_0057a674 = (unsigned short)*puVar3;
      break;
    case 0x15:
      puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(param_1[4],0x15);
      DAT_0057a678 = (unsigned short)*puVar3;
      break;
    case 0x16:
      puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(param_1[4],0x16);
      DAT_0057a676 = (unsigned short)*puVar3;
      break;
    case 0x17:
      puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(param_1[4],0x17);
      DAT_0057a67a = (unsigned short)*puVar3;
    }
    temp_v5 = padButtonIsPressed(0);
    if (temp_v5 == 0) {
      return 0;
    }
    temp_v6 = 0x20;
    break;
  case 9:
    FUN_004d1af8(param_1);
    temp_v6 = 10;
    break;
  case 10:
    FUN_004d290c(param_1);
    temp_v5 = padButtonIsPressed(0);
    if (temp_v5 == 0) {
      return 0;
    }
    temp_v6 = 0x20;
    break;
  case 0xb:
    temp_v5 = jobIsValid(param_1[4]);
    if (temp_v5 != 0) {
      FUN_003592dc(param_1[4]);
      jobStop(param_1[4],0);
    }
    temp_v6 = *(unsigned int *)(param_2 + 0x80);
    asdListBoxCreateDefaultFlags(temp_v6,0x75,0);
    param_1[4] = temp_v6;
    asdListBoxAddItems();
    asdListBoxSetByteValue(param_1[4],1);
    jobSetText(param_1[4],"btl Param Menu");
    asdListBoxSetIntItem(param_1[4],0,0xffffffff,0xffffffff,0x6c,0);
    param_1[7] = 0xffffffff;
    temp_v6 = 0xc;
    break;
  case 0xc:
    FUN_004d3df0(param_1);
    temp_v5 = padButtonIsPressed(0);
    if (temp_v5 == 0) {
      return 0;
    }
    temp_v6 = 0x20;
    break;
  case 0xd:
    temp_v5 = jobIsValid(param_1[4]);
    if (temp_v5 != 0) {
      FUN_003592dc(param_1[4]);
      jobStop(param_1[4],0);
    }
    temp_v6 = *(unsigned int *)(param_2 + 0x80);
    asdListBoxCreateDefaultFlags(temp_v6,0x75,0);
    param_1[4] = temp_v6;
    asdListBoxAddItems();
    asdListBoxSetByteValue(param_1[4],1);
    jobSetText(param_1[4],"btl Bad Menu");
    asdListBoxSetIntItem(param_1[4],0,0xffffffff,0xffffffff,0x6c,0);
    *(unsigned char *)(param_1 + 5) = 0;
    *(unsigned char *)((int)param_1 + 0x15) = 0;
    *(unsigned char *)((int)param_1 + 0x16) = 0;
    param_1[7] = 0xffffffff;
    temp_v6 = 0xe;
    param_1[6] = 0;
    break;
  case 0xe:
    FUN_004d1470(param_1);
    temp_v5 = padButtonIsPressed(0);
    if (temp_v5 == 0) {
      return 0;
    }
    temp_v6 = 0x20;
    break;
  case 0xf:
    FUN_004d3950(param_1);
    temp_v6 = 0x10;
    break;
  case 0x10:
    FUN_004d463c(param_1);
    temp_v5 = padButtonIsPressed(0);
    if (temp_v5 == 0) {
      return 0;
    }
    temp_v6 = 0x20;
    break;
  case 0x11:
    FUN_004d2124(param_1);
    temp_v6 = 0x12;
    break;
  case 0x12:
    FUN_004d3360(param_1);
    temp_v5 = padButtonIsPressed(0);
    if (temp_v5 == 0) {
      return 0;
    }
    temp_v6 = 0x20;
    break;
  case 0x13:
    FUN_004d37d4(param_1);
    temp_v6 = 0x14;
    break;
  case 0x14:
    temp_v6 = asdListBoxGetSelectedItemId(param_1[4]);
    switch(temp_v6) {
    case 0:
      puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(param_1[4],0);
      temp_v0 = (unsigned char)*puVar3;
      puVar7 = &DAT_00573bd8;
      *puVar7 = temp_v0;
      break;
    case 1:
      puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(param_1[4],1);
      temp_v0 = (unsigned char)*puVar3;
      puVar7 = &DAT_00573bd9;
      *puVar7 = temp_v0;
      break;
    case 2:
      puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(param_1[4],2);
      temp_v0 = (unsigned char)*puVar3;
      puVar7 = &DAT_00573bda;
      *puVar7 = temp_v0;
      break;
    case 3:
      puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(param_1[4],3);
      temp_v0 = (unsigned char)*puVar3;
      puVar7 = &DAT_00573bdb;
      *puVar7 = temp_v0;
      break;
    case 4:
      puVar3 = (unsigned int *)asdListBoxGetIntValuePtr(param_1[4],4);
      DAT_00573bdc = *puVar3;
      break;
    case 5:
      puVar3 = (unsigned int *)asdListBoxGetFloatValuePtr(param_1[4],5);
      temp_v6 = *puVar3;
      puVar3 = &DAT_00573be0;
      *puVar3 = temp_v6;
      break;
    case 6:
      puVar3 = (unsigned int *)asdListBoxGetFloatValuePtr(param_1[4],6);
      temp_v6 = *puVar3;
      puVar3 = &DAT_00573c00;
      *puVar3 = temp_v6;
    default:
    }
    temp_v5 = padButtonIsPressed(0);
    if (temp_v5 == 0) {
      return 0;
    }
    temp_v6 = 0x20;
    break;
  case 0x15:
    FUN_004d4ba4(param_1);
    temp_v6 = 0x16;
    break;
  case 0x16:
    FUN_004d4f54(param_1);
    temp_v5 = padButtonIsPressed(0);
    if (temp_v5 == 0) {
      return 0;
    }
    temp_v6 = 0x20;
    break;
  case 0x17:
    temp_v5 = jobIsValid(param_1[4]);
    if (temp_v5 != 0) {
      FUN_003592dc(param_1[4]);
      jobStop(param_1[4],0);
    }
    temp_v6 = *(unsigned int *)(param_2 + 0x80);
    asdListBoxCreateDefaultFlags(temp_v6,0x75,0);
    param_1[4] = temp_v6;
    asdListBoxAddItems();
    asdListBoxSetByteValue(param_1[4],1);
    jobSetText(param_1[4],"btl Result Menu");
    asdListBoxSetToggleItem(param_1[4],0,
                 (*(unsigned int *)(param_2 + 0x45a8) & DAT_00571740) != 0 ||
                 (*(unsigned int *)(param_2 + 0x45ac) & DAT_00571744) != 0);
    asdListBoxSetToggleItem(param_1[4],1,
                 (*(unsigned int *)(param_2 + 0x45ac) & DAT_0057174c) != 0 ||
                 (*(unsigned int *)(param_2 + 0x45a8) & DAT_00571748) != 0);
    temp_v6 = 0x18;
    break;
  case 0x18:
    temp_v5 = asdListBoxGetSelectedItemId(param_1[4]);
    if (temp_v5 != 0) {
      if (temp_v5 == 1) {
        temp_v5 = listBoxItemHasOwner(param_1[4]);
        if (temp_v5 != 0) {
          temp_v3 = DAT_00571748 | *(unsigned int *)(param_2 + 0x45a8);
          *(unsigned int *)(param_2 + 0x45ac) = DAT_0057174c | *(unsigned int *)(param_2 + 0x45ac);
          *(unsigned int *)(param_2 + 0x45a8) = temp_v3;
        }
        else {
          temp_v3 = *(unsigned int *)(param_2 + 0x45a8) & ~DAT_00571748;
          temp_v4 = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_0057174c;
          *(unsigned int *)(param_2 + 0x45a8) = temp_v3;
          *(unsigned int *)(param_2 + 0x45ac) = temp_v4;
        }
      }
    }
    else {
      temp_v5 = listBoxItemHasOwner(param_1[4]);
      if (temp_v5 != 0) {
        temp_v3 = DAT_00571744 | *(unsigned int *)(param_2 + 0x45ac);
        *(unsigned int *)(param_2 + 0x45a8) = *(unsigned int *)(param_2 + 0x45a8) | DAT_00571740;
        *(unsigned int *)(param_2 + 0x45ac) = temp_v3;
      }
      else {
        temp_v3 = *(unsigned int *)(param_2 + 0x45a8) & ~DAT_00571740;
        temp_v4 = *(unsigned int *)(param_2 + 0x45ac) & ~DAT_00571744;
        *(unsigned int *)(param_2 + 0x45a8) = temp_v3;
        *(unsigned int *)(param_2 + 0x45ac) = temp_v4;
      }
    }
    temp_v5 = padButtonIsPressed(0);
    if (temp_v5 == 0) {
      return 0;
    }
    temp_v6 = 0x20;
    break;
  case 0x19:
    temp_v5 = jobIsValid(param_1[4]);
    if (temp_v5 != 0) {
      FUN_003592dc(param_1[4]);
      jobStop(param_1[4],0);
    }
    temp_v6 = *(unsigned int *)(param_2 + 0x80);
    asdListBoxCreateDefaultFlags(temp_v6,0x75,0);
    param_1[4] = temp_v6;
    asdListBoxAddItems();
    asdListBoxSetByteValue(param_1[4],1);
    jobSetText(param_1[4],"btl Sake Menu");
    FUN_00340edc(param_1[4],0,0,10);
    FUN_00340edc(param_1[4],1,0);
    FUN_00340edc(param_1[4],2,0,1);
    FUN_00340edc(param_1[4],3,0xffffffff,0);
    asdListBoxSetToggleItem(param_1[4],4,(int)DAT_0057aa04);
    temp_v6 = 0x1a;
    break;
  case 0x1a:
    temp_v6 = asdListBoxGetSelectedItemId(param_1[4]);
    switch(temp_v6) {
    case 0:
      puVar3 = (unsigned int *)asdListBoxGetFloatValuePtr(param_1[4]);
      temp_v6 = *puVar3;
      puVar3 = &DAT_0057aa20;
      *puVar3 = temp_v6;
      break;
    case 1:
      puVar3 = (unsigned int *)asdListBoxGetFloatValuePtr(param_1[4]);
      temp_v6 = *puVar3;
      puVar3 = &DAT_0057aa24;
      *puVar3 = temp_v6;
      break;
    case 2:
      puVar3 = (unsigned int *)asdListBoxGetFloatValuePtr(param_1[4]);
      temp_v6 = *puVar3;
      puVar3 = &DAT_0057aa28;
      *puVar3 = temp_v6;
      break;
    case 3:
      puVar3 = (unsigned int *)asdListBoxGetFloatValuePtr(param_1[4]);
      temp_v6 = *puVar3;
      puVar3 = &DAT_0057aa2c;
      *puVar3 = temp_v6;
      break;
    case 4:
      DAT_0057aa04 = listBoxItemHasOwner(param_1[4],temp_v6);
    default:
    }
LAB_004d729c:
    temp_v5 = padButtonIsPressed(0);
    if (temp_v5 == 0) {
      return 0;
    }
    temp_v6 = 0x20;
    break;
  case 0x1b:
    FUN_004d352c(param_1);
    temp_v6 = 0x1c;
    break;
  case 0x1c:
    FUN_004d3c94(param_1);
    temp_v5 = padButtonIsPressed(0);
    if (temp_v5 == 0) {
      return 0;
    }
    temp_v6 = 0x20;
    break;
  case 0x1d:
    temp_v5 = jobIsValid(param_1[4]);
    if (temp_v5 != 0) {
      FUN_003592dc(param_1[4]);
      jobStop(param_1[4],0);
    }
    temp_v6 = *(unsigned int *)(param_2 + 0x80);
    asdListBoxCreateDefaultFlags(temp_v6,0x75,0);
    param_1[4] = temp_v6;
    asdListBoxAddItems();
    asdListBoxSetByteValue(param_1[4],1);
    jobSetText(param_1[4],"btl Face Menu");
    asdListBoxSetIntItem(param_1[4],0,0,0,3,0);
    temp_v6 = 0x1e;
    param_1[7] = 0;
    break;
  case 0x1e:
    FUN_004d2628(param_1);
    temp_v5 = padButtonIsPressed(0);
    if (temp_v5 == 0) {
      return 0;
    }
    temp_v6 = 0x20;
    break;
  case 0x1f:
    temp_v5 = jobIsValid(param_1[4]);
    if (temp_v5 != 0) {
      FUN_003592dc(param_1[4]);
      jobStop(param_1[4],0);
    }
    temp_v6 = *(unsigned int *)(param_2 + 0x80);
    asdListBoxCreateDefaultFlags(temp_v6,0x75,0);
    param_1[4] = temp_v6;
    asdListBoxAddItems();
    asdListBoxSetByteValue(param_1[4],1);
    jobSetText(param_1[4],"btl Debug Menu");
    *param_1 = 0;
    return 0;
  case 0x20:
    return 0xffffffff;
  default:
    return 0;
  }
  *param_1 = temp_v6;
  return 0;
}

} /* extern "C" */
