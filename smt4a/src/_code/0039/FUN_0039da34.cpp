#include "battle/BattleMemberList.h"

struct MemberRecord {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ s32 unk3c;
};

extern "C" MemberRecord *dataTable8FindRecord(u32 id);

/* Script command: removes the battle members whose record field differs from the second argument, when the first argument is set. */
extern "C" u32 FUN_0039da34(void)
{
    s32 enabled = scrGetArg(0);
    s32 value = scrGetArg(1);
    BattleMemberList *battle = btlGetMainState();
    if (enabled != 0) {
        for (std::vector<u16>::iterator member = battle->members.begin(); member != battle->members.end();) {
            MemberRecord *record = dataTable8FindRecord(*member);
            if (record->unk3c != value) {
                member = battle->members.erase(member);
            } else {
                ++member;
            }
        }
    }
    return 1;
}
