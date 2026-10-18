/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00483d34` (_code @ 0x483d34, 0x354 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: FUN_001641b4. */
/* Supplied declaration required: FUN_00224880. */
/* Supplied declaration required: FUN_00228b04. */
/* Supplied declaration required: FUN_0031d18c. */
/* Supplied declaration required: FUN_0031d1a0. */
/* Supplied declaration required: FUN_0031d1b4. */
extern int FUN_0048408c(int, int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00484be0. */
/* Supplied declaration required: FUN_00485060. */
/* Supplied declaration required: FUN_004853fc. */
extern int FUN_00485b14(int);
/* Supplied declaration required: FUN_004d0434. */
/* Supplied declaration required: FUN_004d044c. */
extern int FUN_004d0524(void);
extern int FUN_004d0554(void);
extern int FUN_004d0584(void);


void FUN_00483d34(int param_1)

{
/* irregular: irregular input(s): in_r12; 12 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  char temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int in_r12;
  
  FUN_00224880(*(unsigned int *)(param_1 + 0x26c));
  FUN_00163aa4(param_1 + 0x294);
  temp_v5 = FUN_00485b14(param_1);
  *(int *)(param_1 + 0x568) = temp_v5;
  if ((temp_v5 == 1 || temp_v5 == 2) || (temp_v6 = FUN_004d0524(), temp_v6 != 0)) {
    return;
  }
  if ((temp_v5 == 6) || (temp_v6 = FUN_004d0584(), temp_v6 != 0)) {
    temp_v4 = *(char *)(param_1 + 0x20);
    if (*(char *)(param_1 + 0x28) != '\0') {
      temp_v4 = temp_v4 + '\x04';
    }
    temp_v6 = FUN_0048408c(param_1,(int)temp_v4,*(unsigned int *)(param_1 + 0x10),
                         *(unsigned int *)(param_1 + 0x14));
    if ((*(char *)(param_1 + 0x260) == '\0') || (temp_v7 = FUN_0031d18c(param_1 + 0x1fc), temp_v7 != 0))
    {
      temp_v3 = 0;
    }
    else {
      FUN_00485060(param_1,(int)*(char *)(param_1 + 0x22),0xffff8140);
      FUN_00484be0(param_1);
      if (*(char *)(param_1 + 0x22) < '\a') {
        *(char *)(param_1 + 0x22) = *(char *)(param_1 + 0x22) + '\x01';
      }
      FUN_004d044c();
      temp_v3 = 1;
    }
    if (!temp_v3 && temp_v6 == 0) {
      if (*(short *)(
                    "艠艡艢艣艤芁节芃芄芅艏艐艑艒艓艥艦艧艨艩芆芇芈芉芊艔艕艖艗艘艪艫艬艭艮芋芌芍芎芏腉膗膔膓腏良艰艱色艳芐芑芒芓芔膕膖腩腪腻艴艵艶艷艸芕芖芗芘芙腼膁膃膄腈艹腀腀腀腀芚腀腀腀腀腞腃腄腆腇腉腈腠膏膑膒膓膕腇腩腪膃膄腫腬腭腮腯腰腱腲腳腴腵腶腷腸腹腺腞腟腑腐腢腻腼腾膀膁膖腅腁腂腄腣腤腥腦腧腨膋膍腕腔腓腒腗腖腘腙膧膔致至臉臈腌腍腎腽膙膚膠膡膞膟膤膥膢膣膛膜臵臶膉膊膘膦膨膪膩膫腆膎臍臝臎蝔蝕蝖蝗蝘蝙蝚蝛蝜蝝蝀蝁蝂蝃蝄蝅蝆蝇蝈蝉臷膝腉腈腠膏膑膒膓膕腇腩腪膃膄腫腬腭腮腯腰腱腲腳腴腵腶腷腸腹腺腞腟腑腐腢腻腼腾膀膁膖腅腁腂腄腣腤腥腦腧腨膋膍腕腔腓腒腗腖腘腙膧膔致至臉臈腌腍腎腽膙膚膠膡膞膟膤膥膢膣膛膜臵臶膉膊膘膦膨膪膩膫腆膎臍臝臎艐艑艒艓艔艕艖艗艘艏艐艑艒艓艔艕艖艗艘艏臷膝艐艑艒艓艔艕艖艗艘艏腀腀腀腀蝀蝁蝂蝃蝄蝅蝆蝇蝈蝉腀腀腀腀蝔蝕蝖蝗蝘蝙蝚蝛蝜蝝腀腀腀腀艐艑艒艓艔艕艖艗艘艏腀腀腀腀艐艑艒艓艔艕艖艗艘艏腀腀腀腀艐艑艒艓艔艕艖艗艘艏腀腀腀腀ŀ"
                    + *(int *)(param_1 + 0x10) * 2 + *(int *)(param_1 + 0x14) * 0x1e) != -0x7ec0) {
        FUN_00485060(param_1,(int)*(char *)(param_1 + 0x22));
        FUN_00484be0(param_1);
        if (*(char *)(param_1 + 0x22) < '\a') {
          *(char *)(param_1 + 0x22) = *(char *)(param_1 + 0x22) + '\x01';
        }
        FUN_004d044c();
      }
      else {
        *(unsigned char *)(param_1 + 0x562) = 1;
        FUN_004d0434();
      }
    }
    if (temp_v5 != 6) {
      return;
    }
    *(unsigned short *)(param_1 + 0x560) = 3;
    return;
  }
  temp_v5 = FUN_004d0554();
  if (temp_v5 != 0) {
    temp_v5 = 0;
    while ((-1 < (char)temp_v5 &&
           (temp_v6 = param_1 + (char)temp_v5 * 2, temp_v2 = *(unsigned char *)(temp_v6 + 0xb1),
           in_r12 = (int)(char)temp_v2,
           (unsigned short)((unsigned short)*(unsigned char *)(temp_v6 + 0xb0) * 0x100 + (unsigned short)temp_v2) == 0))) {
      temp_v5 = temp_v5 + 1;
      if (temp_v5 >= 8) {
        FUN_004853fc(param_1,5);
        return;
      }
    }
    FUN_00485060(param_1,(int)*(char *)(param_1 + 0x22),0);
    temp_v5 = 0;
    if ('\0' < *(char *)(param_1 + 0x22)) {
      *(char *)(param_1 + 0x22) = *(char *)(param_1 + 0x22) - '\x01';
    }
    do {
      temp_v6 = 0;
      temp_v7 = 7;
      do {
        temp_v8 = param_1 + temp_v6 * 2;
        temp_v4 = *(char *)(temp_v8 + 0xb0);
        if (temp_v4 == '\0') {
          in_r12 = (int)*(char *)(temp_v8 + 0xb1);
        }
        if (temp_v4 == '\0' && in_r12 == 0) {
          temp_v0 = *(unsigned char *)(temp_v8 + 0xb2);
          temp_v1 = *(unsigned char *)(temp_v8 + 0xb3);
          *(char *)(temp_v8 + 0xb2) = temp_v4;
          *(char *)(temp_v8 + 0xb3) = (char)in_r12;
          *(unsigned char *)(temp_v8 + 0xb0) = temp_v0;
          *(unsigned char *)(temp_v8 + 0xb1) = temp_v1;
        }
        temp_v7 = temp_v7 - 1;
        temp_v6 = temp_v6 + 1;
      } while (temp_v7 != 0);
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 7);
    FUN_004d0434();
    return;
  }
  if (*(char *)(param_1 + 0x260) == '\0') {
    FUN_00228b04(param_1 + 0x198,1);
    temp_v9 = FUN_0031d18c(param_1 + 0x198);
    *(unsigned int *)(param_1 + 0x10) = temp_v9;
    temp_v5 = FUN_0031d1a0(param_1 + 0x198);
    *(int *)(param_1 + 0x14) = temp_v5;
    if (temp_v5 != 6) {
      return;
    }
    *(unsigned char *)(param_1 + 0x260) = 1;
    FUN_0031d1b4(param_1 + 0x1fc,*(int *)(param_1 + 0x10) / 5);
    return;
  }
  temp_v5 = param_1 + 0x1fc;
  FUN_00228b04(temp_v5,0);
  FUN_00228b04(param_1 + 0x198,0);
  temp_v6 = FUN_0031d1a0(param_1 + 0x198);
  if (temp_v6 != 6) {
    *(unsigned char *)(param_1 + 0x260) = 0;
    temp_v5 = FUN_0031d18c(param_1 + 0x1fc);
    temp_v5 = temp_v5 * 5;
    if (temp_v5 >= 0xf) {
      temp_v5 = 0xe;
    }
    FUN_0031d1b4(param_1 + 0x198,temp_v5);
  }
  else if (temp_v5 == 0) {
    temp_v9 = FUN_0031d18c(param_1 + 0x198);
    *(unsigned int *)(param_1 + 0x10) = temp_v9;
    temp_v9 = FUN_0031d1a0(param_1 + 0x198);
    *(unsigned int *)(param_1 + 0x14) = temp_v9;
    return;
  }
  FUN_001641b4(0x100020d);
  temp_v9 = FUN_0031d18c(param_1 + 0x198);
  *(unsigned int *)(param_1 + 0x10) = temp_v9;
  temp_v9 = FUN_0031d1a0(param_1 + 0x198);
  *(unsigned int *)(param_1 + 0x14) = temp_v9;
  return;
}
