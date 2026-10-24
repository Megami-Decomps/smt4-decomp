/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00397580` (_code @ 0x397580, 0x510 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrRunOpcodesStub(unsigned int);
int FUN_00232848(void);
int nameFormSetCharacter(...);
int FUN_002328b4(void);
int FUN_00233404(void);
int flaggedEntryGetValueB(...);
int messageOwnerSetState(int, int);
int flaggedEntrySetValueB(int, int);
int flaggedEntryGetValueA(int);
int FUN_0029efd8(int, int);
int eventQueueAddUniqueIfValid(int);
int timerStart(int, int, int);
int FUN_002bf818(int);
int FUN_003983dc(...);
int FUN_00398fa8(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: scrRunOpcodesStub. */
/* Supplied declaration required: FUN_00232848. */
/* Supplied declaration required: nameFormSetCharacter. */
/* Supplied declaration required: FUN_002328b4. */
/* Supplied declaration required: FUN_00233404. */
/* Supplied declaration required: flaggedEntryGetValueB. */
extern int inputIsQuestConfirmPressed(void);
extern int inputIsQuestMenuPressed(void);
extern int FUN_0027ee9c(void);
/* Supplied declaration required: messageOwnerSetState. */
/* Supplied declaration required: flaggedEntrySetValueB. */
/* Supplied declaration required: flaggedEntryGetValueA. */
/* Supplied declaration required: FUN_0029efd8. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
/* Supplied declaration required: timerStart. */
/* Supplied declaration required: FUN_002bf818. */
/* Supplied declaration required: FUN_003983dc. */
/* Supplied declaration required: FUN_00398fa8. */


void FUN_00397580(int param_1)

{
/* irregular: 1 goto(s); irregular input(s): in_r12; 15 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  char temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  int in_r12;
  
  scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x654));
  FUN_002bf818(param_1 + 0x67c);
  temp_v7 = param_1;
  FUN_00398fa8();
  *(int *)(param_1 + 0x948) = temp_v7;
  if (temp_v7 == 1 || temp_v7 == 2) {
    return;
  }
  temp_v6 = inputIsQuestConfirmPressed();
  if (temp_v6 != 0) {
    temp_v7 = 0;
    while( 1 ) {
      temp_v3 = (char)temp_v7;
      if (((-1 < temp_v3) &&
          (temp_v6 = param_1 + temp_v3 * 2,
          (unsigned short)((unsigned short)*(unsigned char *)(temp_v6 + 0xb0) * 0x100 + (unsigned short)*(unsigned char *)(temp_v6 + 0xb1)) !=
          -0x7ec0)) &&
         ((temp_v3 < 0 ||
          (temp_v6 = param_1 + temp_v3 * 2,
          (unsigned short)((unsigned short)*(unsigned char *)(temp_v6 + 0xb0) * 0x100 + (unsigned short)*(unsigned char *)(temp_v6 + 0xb1)) != 0))
         )) break;
      temp_v7 = temp_v7 + 1;
      if (temp_v7 >= 8) {
        return;
      }
    }
    temp_v7 = 8;
    do {
      temp_v3 = (char)temp_v7;
      if ((((temp_v3 < 0) ||
           (temp_v6 = param_1 + temp_v3 * 2,
           (unsigned short)((unsigned short)*(unsigned char *)(temp_v6 + 0xb0) * 0x100 + (unsigned short)*(unsigned char *)(temp_v6 + 0xb1)) != 0)
           ) && (-1 < temp_v3)) &&
         (temp_v6 = param_1 + temp_v3 * 2,
         (unsigned short)((unsigned short)*(unsigned char *)(temp_v6 + 0xb0) * 0x100 + (unsigned short)*(unsigned char *)(temp_v6 + 0xb1)) !=
         -0x7ec0)) break;
      temp_v7 = temp_v7 - 1;
      temp_v6 = param_1 + temp_v3 * 2;
      *(unsigned char *)(temp_v6 + 0xb0) = 0;
      *(unsigned char *)(temp_v6 + 0xb1) = 0;
    } while (0 < temp_v7);
    *(unsigned char *)(param_1 + 8) = 1;
    messageOwnerSetState(param_1,4);
    FUN_002328b4();
    return;
  }
  temp_v6 = param_1 + 0x5e4;
  if ((temp_v7 != 6) && (temp_v8 = FUN_0027ee9c(), temp_v8 == 0)) {
    temp_v7 = inputIsQuestMenuPressed();
    if (temp_v7 != 0) {
      if (*(char *)(param_1 + 0x29) != '\0') {
        *(unsigned char *)(param_1 + 0x21) = 2;
        messageOwnerSetState(param_1,10);
        timerStart(param_1 + 0x708,1,0);
        return;
      }
      temp_v7 = 0;
      while ((-1 < (char)temp_v7 &&
             (temp_v6 = param_1 + (char)temp_v7 * 2, temp_v2 = *(unsigned char *)(temp_v6 + 0xb1),
             in_r12 = (int)(char)temp_v2,
             (unsigned short)((unsigned short)*(unsigned char *)(temp_v6 + 0xb0) * 0x100 + (unsigned short)temp_v2) == 0))) {
        temp_v7 = temp_v7 + 1;
        if (temp_v7 >= 8) {
          messageOwnerSetState(param_1,5);
          return;
        }
      }
      nameFormSetCharacter(param_1,(int)*(char *)(param_1 + 0x22),0);
      temp_v7 = 0;
      if ('\0' < *(char *)(param_1 + 0x22)) {
        *(char *)(param_1 + 0x22) = *(char *)(param_1 + 0x22) - '\x01';
      }
      do {
        temp_v6 = 0;
        temp_v8 = 7;
        do {
          temp_v9 = param_1 + temp_v6 * 2;
          temp_v3 = *(char *)(temp_v9 + 0xb0);
          if (temp_v3 == '\0') {
            in_r12 = (int)*(char *)(temp_v9 + 0xb1);
          }
          if (temp_v3 == '\0' && in_r12 == 0) {
            temp_v0 = *(unsigned char *)(temp_v9 + 0xb2);
            temp_v1 = *(unsigned char *)(temp_v9 + 0xb3);
            *(char *)(temp_v9 + 0xb2) = temp_v3;
            *(char *)(temp_v9 + 0xb3) = (char)in_r12;
            *(unsigned char *)(temp_v9 + 0xb0) = temp_v0;
            *(unsigned char *)(temp_v9 + 0xb1) = temp_v1;
          }
          temp_v8 = temp_v8 - 1;
          temp_v6 = temp_v6 + 1;
        } while (temp_v8 != 0);
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < 7);
      FUN_00232848();
      return;
    }
    if (*(char *)(param_1 + 0x648) == '\0') {
      FUN_0029efd8(param_1 + 0x580,1);
      temp_v10 = flaggedEntryGetValueB(param_1 + 0x580);
      *(unsigned int *)(param_1 + 0x10) = temp_v10;
      temp_v7 = flaggedEntryGetValueA(param_1 + 0x580);
      *(int *)(param_1 + 0x14) = temp_v7;
      if (temp_v7 != 6) {
        return;
      }
      *(unsigned char *)(param_1 + 0x648) = 1;
      flaggedEntrySetValueB(temp_v6,*(int *)(param_1 + 0x10) / 5);
      return;
    }
    temp_v7 = temp_v6;
    FUN_0029efd8(temp_v6,0);
    FUN_0029efd8(param_1 + 0x580,0);
    temp_v8 = flaggedEntryGetValueA(param_1 + 0x580);
    if (temp_v8 != 6) {
      *(unsigned char *)(param_1 + 0x648) = 0;
      temp_v7 = flaggedEntryGetValueB(temp_v6);
      flaggedEntrySetValueB(param_1 + 0x580,temp_v7 * 5 + 2);
    }
    else if (temp_v7 == 0) {
      temp_v10 = flaggedEntryGetValueB(param_1 + 0x580);
      *(unsigned int *)(param_1 + 0x10) = temp_v10;
      temp_v10 = flaggedEntryGetValueA(param_1 + 0x580);
      *(unsigned int *)(param_1 + 0x14) = temp_v10;
      return;
    }
    eventQueueAddUniqueIfValid(0x100016c);
    temp_v10 = flaggedEntryGetValueB(param_1 + 0x580);
    *(unsigned int *)(param_1 + 0x10) = temp_v10;
    temp_v10 = flaggedEntryGetValueA(param_1 + 0x580);
    *(unsigned int *)(param_1 + 0x14) = temp_v10;
    return;
  }
  if (*(char *)(param_1 + 0x648) != '\0') {
    temp_v8 = flaggedEntryGetValueB(temp_v6);
    if (temp_v8 != 1) {
      temp_v8 = flaggedEntryGetValueB(temp_v6);
      if (temp_v8 != 2) goto LAB_00397744;
      if (*(char *)(param_1 + 0x22) < '\a') {
        *(char *)(param_1 + 0x22) = *(char *)(param_1 + 0x22) + '\x01';
        temp_v8 = *(int *)(param_1 + 0x948);
        if (temp_v8 == 0) {
          FUN_00233404();
        }
      }
    }
    else if ('\0' < *(char *)(param_1 + 0x22)) {
      *(char *)(param_1 + 0x22) = *(char *)(param_1 + 0x22) - '\x01';
      temp_v8 = *(int *)(param_1 + 0x948);
      if (temp_v8 == 0) {
        FUN_00233404();
      }
    }
    temp_v5 = 1;
  }
  else {
LAB_00397744:
    temp_v5 = 0;
  }
  if ((*(char *)(param_1 + 0x648) == '\0') || (temp_v6 = flaggedEntryGetValueB(temp_v6), temp_v6 != 0)) {
    temp_v4 = 0;
  }
  else {
    nameFormSetCharacter(param_1,(int)*(char *)(param_1 + 0x22),0xffff8140);
    FUN_003983dc(param_1);
    if (*(char *)(param_1 + 0x22) < '\a') {
      *(char *)(param_1 + 0x22) = *(char *)(param_1 + 0x22) + '\x01';
    }
    FUN_002328b4();
    temp_v4 = 1;
  }
  if (!temp_v4 && !temp_v5) {
    if (*(short *)(
                  "艠艡艢艣艤芁节芃芄芅艏艐艑艒艓艥艦艧艨艩芆芇芈芉芊艔艕艖艗艘艪艫艬艭艮芋芌芍芎芏腉膗膔膓腏良艰艱色艳芐芑芒芓芔膕膖腩腪腻艴艵艶艷艸芕芖芗芘芙腼膁膃膄腈艹腀腀腀腀芚腀腀腀腀腞腃腄腆腇芠芢芤芦芨苂苢苤苦苭腉腈腠膏膐膑膒膓膕腇腩腪膃膄腫腬腭腮腯腰腱腲腳腴腵腶腷腸腹腺腞腟腑腐腢腻腼腾膀膁膖腅腁腂腄腣腤腥腦腧腨膋膍腕腔腓腒腗腖腘腙膧膔致至臉臈腌腍腎腽膙膚膠膡膞膟膤膥膢膣膛膜臵臶膉膊膘腡膦膨膪膩膫腆膎臍臝臎膸膹螔臣膇膿膾膼膽膺膻臧螓膈臦莟莠莡莢莣莤莥莦莧莨莩莪莫莬莭莮莯莰莱莲莳莴莵莶莿菀菁菂菃菄菅菆菇菈菉菊菋菌菍菎菏菐菑菒菓菔菕菖葀葁葂葃葄葅葆葇葈葉葊葋葌葍葎葏葐葑葒葓葔葕葖著葘葙葚葜葞葟葠葝葛葰葱葲葳葴葵葶葷葸葹葺葻葼葽葾蒀蒁蒂蒃蒄蒅蒆蒇蒈蒉蒊蒋蒍蒏蒐蒑蒎蒌蝔蝕蝖蝗蝘蝙蝚蝛蝜蝝懲敏既暑梅海渚漢煮爫蝀蝁蝂蝃蝄蝅蝆蝇蝈蝉臷膝腉腈腠膏膐膑膒膓膕腇腩腪膃膄腫腬腭腮腯腰腱腲腳腴腵腶腷腸腹腺腞腟腑腐腢腻腼腾膀膁膖腅腁腂腄腣腤腥腦腧腨膋膍腕腔腓腒腗腖腘腙膧膔致至臉臈腌腍腎腽膙膚膠膡膞膟膤膥膢膣膛膜臵臶膉膊膘腡膦膨膪膩膫腆膎臍臝臎膸膹膛臣膇膿膾膼膽膺膻臧膛膈臦莟莠莡莢莣莤莥莦莧莨莩莪莫莬莭莮莯莰莱莲莳莴莵莶莿菀菁菂菃菄菅菆菇菈菉菊菋菌菍菎菏菐菑菒菓菔菕菖葀葁葂葃葄葅葆葇葈葉葊葋葌葍葎葏葐葑葒葓葔葕葖著葘葙葚葜葞葟葠葝葛葰葱葲葳葴葵葶葷葸葹葺葻葼葽葾蒀蒁蒂蒃蒄蒅蒆蒇蒈蒉蒊蒋蒍蒏蒐蒑蒎蒌艐艑艒艓艔艕艖艗艘艏艐艑艒艓艔艕艖艗艘艏艐艑艒艓艔艕艖艗艘艏臷膝艐艑艒艓艔艕艖艗艘艏腀腀腀腀裪鏱蹏蹬賜顚躵钪诣轜腚镓郧障裫鏳蹑\xe3e6賞鞤躽蹊诨轅覭銛讞骴蝀蝁蝂蝃蝄蝅蝆蝇蝈蝉腀腀腀腀蝔蝕蝖蝗蝘蝙蝚蝛蝜蝝腀腀腀腀懲敏既暑梅海渚漢煮爫腀腀腀腀艐艑艒艓艔艕艖艗艘艏腀腀腀腀裪鏱蹏蹬賜顚躵钪诣轜腚镓郧障裫鏳蹑\xe3e6賞鞤躽蹊诨轅覭銛讞骴艐艑艒艓艔艕艖艗艘艏腀腀腀腀艐艑艒艓艔艕艖艗艘艏腀腀腀腀艐艑艒艓艔艕艖艗艘艏腀腀腀腀ŀ"
                  + *(int *)(param_1 + 0x10) * 2 + *(int *)(param_1 + 0x14) * 0x1e) != -0x7ec0) {
      nameFormSetCharacter(param_1,(int)*(char *)(param_1 + 0x22));
      FUN_003983dc(param_1);
      if (*(char *)(param_1 + 0x22) < '\a') {
        *(char *)(param_1 + 0x22) = *(char *)(param_1 + 0x22) + '\x01';
      }
      FUN_002328b4();
    }
    else {
      *(unsigned char *)(param_1 + 0x944) = 1;
      FUN_00232848();
    }
  }
  if (temp_v7 != 6) {
    return;
  }
  *(unsigned short *)(param_1 + 0x942) = 3;
  return;
}

} /* extern "C" */
