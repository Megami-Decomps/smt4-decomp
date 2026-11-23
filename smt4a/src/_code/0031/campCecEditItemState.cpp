/* NON_MATCHING: every instruction, register and the frame are retail's; one block is placed differently
 * (72 raw / 48 shape, all of it the moved block and the offsets it shifts). Retail lays the cases out as
 * 1, 6, 3, 2, 4, then the code after the switch (the help panel's slide and the return), then 5 and 7; this
 * build puts that code right after case 1's tail, which cases 2, 5 and 7 share. The cases are in retail's
 * order here; no other order of them gives its layout. */
#include "shard/Shard0032.h"
#include "shard/W6_W6Match5_EntryCollection.h"
#include "code/Code0031_Smt4a.h"
#include "code/Code003c_Smt4a.h"
#include "quest_center/qcMain.h"
#include "camp/PartyPanel/PartyPanel.h"
#include "gamedata/GameDataAccess_VariantE.h"
#include "ui/UiControl.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTableEntry.h"

extern "C" {

u32 buttonHelpIsActionActive(u32 action);
void sysPlaySe(u32 id);
u32 sysPlayVoice(u32 id); // declcheck: local (declared in the large map's header)
void rt_aeabi_memclr(void *destination, u32 size);
void linkHolderApplyFlag(u32 handle, s32 flag);
void FUN_002c39dc(u32 first, u32 second, u32 third);
void FUN_003c1094(s32 flag);
void FUN_00284ee4(s32 start);
u32 FUN_0039a2d8(s32 *output, s32 start, s32 end, s32 duration, s32 elapsed, s32 easeOut);

enum {
    CEC_EDIT_SPRITE_HELP_BUTTON = 0x97,
    CEC_EDIT_HELP_HIDDEN_X = 330,
    CEC_EDIT_SE_DENIED = 0x92,
    CEC_EDIT_SE_OPEN_LIST = 0x9e
};

/* The edit screen's item mode (handler 1): the help button toggles the help panel; otherwise the chosen item
 * (edit->editItem) opens its choice list, or reports that the item is still locked by its game flag. */
s32 campCecEditItemState(StateAtF4 *edit)
{
    s32 result = 0;
    TextureTableEntryIV *button = asdTMTexTableEntryAt(CEC_EDIT_SPRITE_FILE_A, CEC_EDIT_SPRITE_HELP_BUTTON);
    if (uiPointerHitsRect(button->x, button->y, button->placement->width, button->placement->height, 0)) {
        edit->touchFrames++;
    } else {
        uiPointerHitsRect(button->x, button->y, button->placement->width, button->placement->height, 3);
        edit->touchFrames = 0;
    }

    if (padButtonRepeat(10) || buttonHelpIsActionActive(4)) {
        if (edit->helpShown != 0) {
            edit->helpShown = 0;
        } else {
            edit->helpShown = 1;
        }
        edit->slides[0].x = CEC_EDIT_HELP_HIDDEN_X;
        edit->slides[0].frame = 0;
        sysPlayVoice(0x100020e);
    } else {
        switch (edit->editItem) {
        case 1:
            FUN_00319aec(0);
            edit->messageBase = 300;
            messageMainRequestBanner();
            rt_aeabi_memclr(&edit->cursor, sizeof(edit->cursor));
            edit->cursor.x = 30;
            edit->listActive = 0;
            edit->listRow = 0;
            edit->listTop = 0;
            sysPlaySe(gameFlagIsSet(0x49b) == 0 ? CEC_EDIT_SE_DENIED : CEC_EDIT_SE_OPEN_LIST);
            edit->table.state = -1;
            edit->table.nextState = gameFlagIsSet(0x49b) ? 0x16 : 0x15;
            result = 3;
            edit->phase = 2;
            break;
        case 6:
            FUN_00319aec(0);
            edit->unk154 = 0;
            edit->slides[0].frame = 0;
            edit->slides[0].done = 0;
            edit->slides[1].frame = 0;
            edit->slides[1].done = 0;
            linkHolderApplyFlag(edit->unk04, 0);
            FUN_002c39dc(0x10, 0, 0xffffffff);
            FUN_003c1094(0);
            FUN_00215bbc();
            FUN_00284ee4(1);
            sysPlaySe(gameFlagIsSet(0x4a0) == 0 ? CEC_EDIT_SE_DENIED : 0xe4);
            edit->table.state = -1;
            edit->phase = 5;
            edit->followingPhase = 2;
            if (edit->activeMemberCount == 0) {
                edit->table.nextState = 6;
            } else {
                edit->table.nextState = 1;
            }
            result = 3;
            break;
        case 3:
            FUN_00319aec(0);
            edit->unk154 = 0;
            linkHolderApplyFlag(edit->unk04, 0);
            messageSetMode(1);
            sysPlaySe(gameFlagIsSet(0x49d) == 0 ? CEC_EDIT_SE_DENIED : 0x97);
            edit->table.nextState = 0xe;
            edit->table.state = -1;
            result = 3;
            edit->phase = 5;
            edit->followingPhase = 2;
            break;
        case 2:
            FUN_00319aec(0);
            rt_aeabi_memclr(&edit->cursor, sizeof(edit->cursor));
            edit->cursor.x = 30;
            edit->listActive = 0;
            edit->listRow = 0;
            edit->listTop = 0;
            sysPlaySe(gameFlagIsSet(0x49c) == 0 ? CEC_EDIT_SE_DENIED : CEC_EDIT_SE_OPEN_LIST);
            edit->table.state = -1;
            edit->table.nextState = gameFlagIsSet(0x49c) ? 0xc : 0xb;
            result = 3;
            edit->phase = 2;
            break;
        case 4:
            edit->profile = *(const CecProfile *)edit->unk08;
            edit->table.state = -1;
            edit->table.nextState = gameFlagIsSet(0x49e) ? 0x10 : 0xf;
            edit->phase = 2;
            if (!gameFlagIsSet(0x49e)) {
                sysPlaySe(CEC_EDIT_SE_DENIED);
            }
            result = 3;
            break;
        case 5:
            FUN_00319aec(0);
            edit->messageBase = 400;
            rt_aeabi_memclr(&edit->cursor, sizeof(edit->cursor));
            edit->cursor.x = 30;
            edit->listActive = 0;
            sysPlaySe(gameFlagIsSet(0x49f) == 0 ? CEC_EDIT_SE_DENIED : CEC_EDIT_SE_OPEN_LIST);
            edit->table.state = -1;
            edit->table.nextState = gameFlagIsSet(0x49f) ? 0x13 : 0x12;
            result = 3;
            edit->phase = 2;
            break;
        case 7:
            FUN_00319aec(0);
            rt_aeabi_memclr(&edit->cursor, sizeof(edit->cursor));
            edit->cursor.x = 30;
            edit->listActive = 0;
            sysPlaySe(gameFlagIsSet(0x4a1) == 0 ? CEC_EDIT_SE_DENIED : CEC_EDIT_SE_OPEN_LIST);
            edit->table.state = -1;
            edit->table.nextState = gameFlagIsSet(0x4a1) ? 9 : 8;
            result = 3;
            edit->phase = 2;
            break;
        }
    }

    if (edit->helpShown != 0) {
        if (FUN_0039a2d8(&edit->slides[0].x, CEC_EDIT_HELP_HIDDEN_X, 0, 3, edit->slides[0].frame, 1)) {
            edit->slides[0].done = 1;
        }
        edit->slides[0].frame++;
    }
    return result;
}

} /* extern "C" */
