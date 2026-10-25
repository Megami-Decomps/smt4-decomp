#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"
#include "gamedata/Table04Record.h"

/* A battle member's record (dataTable8FindRecord). */
struct MemberRecord {
    /* 0x00 */ u8 unk00[0x32];
    /* 0x32 */ u16 linkId;   /* key into the second table */
    /* 0x34 */ u8 unk34[6];
    /* 0x3A */ u8 flags;     /* 0x80: set for members of the second group */
};

/* The second table's entry (dataTable04FindById). */
struct MemberLink {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 unk28 : 5;
    /* 0x28 */ u32 kind : 4;
    /* 0x28 */ u32 unk28High : 23;
};

extern "C" {
MemberRecord *dataTable8FindRecord(u32 id);
}

/* Script command: when the first argument is set, removes the battle members that fit the mode in
 * the second argument (0 and 1 select by the second table's kind, or by the record's flag where a
 * member has no entry there). */
extern "C" u32 scrBattleRemoveMembersByKind(void)
{
    s32 enabled = scrGetArg(0);
    s32 mode = scrGetArg(1);
    BtlMainStateExtA *battle = btlGetMainStateExt();
    if (enabled != 0) {
        for (std::vector<u16>::iterator member = battle->members.begin(); member != battle->members.end();) {
            MemberRecord *record = dataTable8FindRecord(*member);
            MemberLink *link = (MemberLink *)dataTable04FindById(record->linkId);
            bool remove = false;
            if (link != NULL) {
                if (mode == 0) {
                    if (link->kind == 0) {
                        remove = true;
                    }
                } else if (mode == 1) {
                    if (link->kind == 1 || link->kind == 6) {
                        remove = true;
                    }
                }
            } else {
                if (mode == 0) {
                    if ((record->flags & 0x80) == 0) {
                        remove = true;
                    }
                } else if (mode == 1) {
                    if (record->flags & 0x80) {
                        remove = true;
                    }
                }
            }
            if (remove) {
                member = battle->members.erase(member);
            } else {
                ++member;
            }
        }
    }
    return 1;
}
