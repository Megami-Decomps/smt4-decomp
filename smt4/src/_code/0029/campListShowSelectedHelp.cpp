/* NON_MATCHING: 12 lines: each case reads the page and row as campUpdateCategoryHighlightColors does, which gives retail's ldrh offsets; for the three grids past 0x400 (grids[9..11]) retail keeps the grid address in r5 and the page in r6, the build the other way round. */
#include "camp/CampState.h"
#include <stddef.h>
#include "code/Code0029_VariantB.h"

extern "C" {
u32 resourceRunOperationIfUnblocked(const GridNavigation *grid);
void buttonHelpShowSkillDetails(u32 id);
void buttonHelpShowEntryDescription(u32 id);
u32 table8Type5GetValue(void);
void buttonHelpSetText(s32 mode, u32 color);

/* Shows the help for the highlighted entry of the camp list identified by `list`. */
void campListShowSelectedHelp(u32 list)
{
    CampState *camp = g_camp;
    switch (list) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8:
        break;
    case 9: {
        s32 page = resourceRunOperationIfUnblocked(&camp->grids[3]);
        s32 row = listCursorGetRowIfUnblocked(&camp->grids[3]);
        buttonHelpShowSkillDetails(camp->skills[page + row].skill);
        break;
    }
    case 10: {
        s32 page = resourceRunOperationIfUnblocked(&camp->grids[4]);
        s32 row = listCursorGetRowIfUnblocked(&camp->grids[4]);
        if (camp->gridIds4[page + row] != 0) {
            buttonHelpShowSkillDetails(table8Type5GetValue());
        } else {
            buttonHelpSetText(0, 0x323232FF);
        }
        break;
    }
    case 11: {
        s32 page = resourceRunOperationIfUnblocked(&camp->grids[0]);
        s32 row = listCursorGetRowIfUnblocked(&camp->grids[0]);
        buttonHelpShowEntryDescription(camp->gridIds0[page + row]);
        break;
    }
    case 12: {
        s32 page = resourceRunOperationIfUnblocked(&camp->grids[1]);
        s32 row = listCursorGetRowIfUnblocked(&camp->grids[1]);
        buttonHelpShowEntryDescription(camp->gridIds1[page + row]);
        break;
    }
    case 13: {
        s32 page = resourceRunOperationIfUnblocked(&camp->grids[2]);
        s32 row = listCursorGetRowIfUnblocked(&camp->grids[2]);
        buttonHelpShowEntryDescription(camp->gridIds2[page + row]);
        break;
    }
    case 17: {
        s32 page = resourceRunOperationIfUnblocked(&camp->grids[5]);
        s32 row = listCursorGetRowIfUnblocked(&camp->grids[5]);
        buttonHelpShowEntryDescription(camp->meleeIds[page + row]);
        break;
    }
    case 18: {
        s32 page = resourceRunOperationIfUnblocked(&camp->grids[6]);
        s32 row = listCursorGetRowIfUnblocked(&camp->grids[6]);
        buttonHelpShowEntryDescription(camp->rangedIds[page + row]);
        break;
    }
    case 19: {
        s32 page = resourceRunOperationIfUnblocked(&camp->grids[7]);
        s32 row = listCursorGetRowIfUnblocked(&camp->grids[7]);
        buttonHelpShowEntryDescription(camp->ammunitionIds[page + row]);
        break;
    }
    case 20: {
        s32 page = resourceRunOperationIfUnblocked(&camp->grids[8]);
        s32 row = listCursorGetRowIfUnblocked(&camp->grids[8]);
        buttonHelpShowEntryDescription(camp->headIds[page + row]);
        break;
    }
    case 21: {
        s32 page = resourceRunOperationIfUnblocked(&camp->grids[9]);
        s32 row = listCursorGetRowIfUnblocked(&camp->grids[9]);
        buttonHelpShowEntryDescription(camp->bodyIds[page + row]);
        break;
    }
    case 22: {
        s32 page = resourceRunOperationIfUnblocked(&camp->grids[10]);
        s32 row = listCursorGetRowIfUnblocked(&camp->grids[10]);
        buttonHelpShowEntryDescription(camp->legsIds[page + row]);
        break;
    }
    case 23: {
        s32 page = resourceRunOperationIfUnblocked(&camp->grids[11]);
        s32 row = listCursorGetRowIfUnblocked(&camp->grids[11]);
        buttonHelpShowEntryDescription(camp->accessoryIds[page + row]);
        break;
    }
    }
}

} /* extern "C" */
